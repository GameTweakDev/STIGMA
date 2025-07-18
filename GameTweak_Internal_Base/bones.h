#ifndef BONES_H
#define BONES_H

#include "Settings.h"
#include "ZeroGUI.h"
#include <Windows.h>
#include <Psapi.h>
// Forward declaration instead of include to avoid circular dependency
class Cheat;

// ============================================================================
// BONE MANIPULATION AND MATRIX UTILITIES
// Handles bone position retrieval, signature scanning, and bone visualization
// ============================================================================

class Bones
{
private:
    // Internal matrix structure for bone calculations
    struct Matrix4x4
    {
        float M[4][4];
    };
    // Bone data cache structure
    struct BoneData
    {
        SDK::FName boneName;
        int boneIndex;
        std::string nameStr;
    };

    // Static cache to store bone data per model
   inline static std::map<SDK::USkeletalMeshComponent*, std::vector<BoneData>> boneCache;
    // Static variables for caching function addresses
    inline static uintptr_t GetBoneMatrixF = 0;

    // Signature scanning utilities
    static bool Compare(uint8_t* data, uint8_t* sig, uint64_t size)
    {
        for (auto i = 0ull; i < size; i++)
        {
            if (data[i] != sig[i] && sig[i] != 0x00)
            {
                return false;
            }
        }
        return true;
    }

    static uint8_t* FindSignature(uint8_t* start, uint8_t* end, uint8_t* sig, uint64_t size)
    {
        for (auto it = start; it < end - size; it++)
        {
            if (Compare(it, sig, size))
            {
                return it;
            };
        }
        return nullptr;
    }

  static void* resolveRelative(uint8_t* address, int skipBytes = 1, int instructionSize = 5) {
        if (!address) return nullptr;

        // Read the 4-byte relative offset
        int32_t relativeOffset = *reinterpret_cast<int32_t*>(address + skipBytes);

        // Calculate absolute address: current_address + instruction_size + relative_offset
        uintptr_t result = reinterpret_cast<uintptr_t>(address) + instructionSize + relativeOffset;
        return reinterpret_cast<void*>(result);
    }


    // Internal bone matrix retrieval function
    static SDK::FVector GetBoneMatrix(SDK::USkeletalMeshComponent* ThisMesh, int index)
    {
        // Find the bone matrix function using signature scanning
        if (!GetBoneMatrixF)
        {
            auto main = GetModuleHandleA(nullptr);
            // Signature for GetBoneMatrix function (game-specific)
            // E8 ? ? ? ? 48 8B 8C 24 ? ? ? ? 0F 28 00 0F 29 01 0F 28 48 10 0F 29 49 10 0F 28 40 20 0F 29 41
            static uint8_t getbonematrixSig[] = {
    0xE8, 0x00, 0x00, 0x00, 0x00, 0x48, 0x8B, 0x8C, 0x24, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x28, 0x00,
    0x0F, 0x29, 0x01, 0x0F, 0x28, 0x48, 0x10, 0x0F, 0x29, 0x49, 0x10, 0x0F, 0x28, 0x40, 0x20, 0x0F,
    0x29, 0x41
            };

            MODULEINFO info;
            if (K32GetModuleInformation(GetCurrentProcess(), main, &info, sizeof(MODULEINFO)))
            {
                auto base = static_cast<uint8_t*>(info.lpBaseOfDll);
                GetBoneMatrixF = reinterpret_cast<decltype(GetBoneMatrixF)>(
                    resolveRelative(FindSignature(base, base + info.SizeOfImage - 1, getbonematrixSig, sizeof(getbonematrixSig))
                    ));

                if (!GetBoneMatrixF)
                {
                    // Log failure if needed
                    return SDK::FVector(0.0f, 0.0f, 0.0f);
                }
            }
        }

        // Call the native GetBoneMatrix function
        auto GetBoneMatrixFunc = reinterpret_cast<SDK::FMatrix * (*)(SDK::USkeletalMeshComponent*, Matrix4x4*, int)>(GetBoneMatrixF);
        Matrix4x4 matrix;
        GetBoneMatrixFunc(ThisMesh, &matrix, index);

        // Extract position from transformation matrix
        return SDK::FVector(matrix.M[3][0], matrix.M[3][1], matrix.M[3][2]);
    }



    // Function to populate bone cache for a model
    static void CacheModelBones(SDK::USkeletalMeshComponent* Mesh)
    {
        if (!Mesh || boneCache.find(Mesh) != boneCache.end())
            return; // Already cached or invalid mesh

        std::vector<BoneData> modelBones;
        int numBones = Mesh->GetNumBones();

       // printf("=== CACHING BONES FOR MODEL ===\n");
       // printf("Total Bones: %d\n\n", numBones);

        for (int i = 0; i < numBones; i++)
        {
            SDK::FName boneFName = Mesh->GetBoneName(i);
            std::string boneNameStr = boneFName.ToString();

            if (!boneNameStr.empty())
            {
                BoneData data;
                data.boneName = boneFName;
                data.boneIndex = i;
                data.nameStr = boneNameStr;

                modelBones.push_back(data);

              //  printf("[%d] %s\n", i, boneNameStr.c_str());
            }
        }

        boneCache[Mesh] = modelBones;
    }




public:
    // ========================================================================
    // PUBLIC BONE MANIPULATION FUNCTIONS
    // Main interface for retrieving bone positions and debugging
    // ========================================================================

    static void ClearBoneCache()
    {
        boneCache.clear();
        // printf("Bone cache cleared.\n");
    }

    // Function to clear cache for specific model
    static void ClearModelCache(SDK::USkeletalMeshComponent* Mesh)
    {
        auto iter = boneCache.find(Mesh);
        if (iter != boneCache.end())
        {
            boneCache.erase(iter);
            //  printf("Cache cleared for specific model.\n");
        }
    }

    // Get 3D world position using cached bone data
    static SDK::FVector GetBone3D(SDK::USkeletalMeshComponent* Mesh, const std::string& boneName)
    {
        if (!Mesh || boneName.empty())
            return SDK::FVector(0.0f, 0.0f, 0.0f);

        if (Mesh->GetOwner())
        {
            // Try different methods to force updates

            // Method 1: Set high LOD
            int originalLOD = Mesh->GetForcedLOD();
            Mesh->SetForcedLOD(0); // Force highest LOD

            // Method 2: Force visibility
            bool wasVisible = Mesh->IsVisible();
            if (!wasVisible)
            {
                Mesh->SetVisibility(true,true);
            }

            // Method 3: Force bone transform refresh
            Mesh->bRecentlyRendered = true;

            Mesh->bForceMeshObjectUpdate = true;

            Mesh->bNeverDistanceCull = true;

           // Mesh->bDisplayBones = true;

            Mesh->bNoSkeletonUpdate = false;

            Mesh->bRequiredBonesUpToDate = false;
            // Method 4: Update component
            // Mesh->TickComponent(0.016f, SDK::ELevelTick::LEVELTICK_All, nullptr);
        }

        // Cache bones for this model if not already done
        CacheModelBones(Mesh);

        // Look up bone in cache
        auto meshIter = boneCache.find(Mesh);
        if (meshIter == boneCache.end())
            return SDK::FVector(0.0f, 0.0f, 0.0f);

        // Find bone in vector
        const BoneData* foundBone = nullptr;
        for (const auto& boneData : meshIter->second)
        {
            if (boneData.nameStr == boneName)
            {
                foundBone = &boneData;
                break;
            }
        }

        if (!foundBone)
        {
            //printf("Bone '%s' not found in cache!\n", boneName.c_str());
            return SDK::FVector(0.0f, 0.0f, 0.0f);
        }

       
       // return GetBoneMatrix(Mesh, foundBone->boneIndex);
    
        //// Get reference pose position for the bone
        //SDK::FVector boneRefPose = Mesh->GetRefPosePosition(foundBone->boneIndex);
        //// Transform from bone space to world space using cached FName
        //SDK::FVector worldPosition;
        //SDK::FRotator outRotation;
       
        //Mesh->TransformFromBoneSpace(foundBone->boneName, boneRefPose, SDK::FRotator(0, 0, 0), &worldPosition, &outRotation);

        SDK::FTransform BoneTransform = Mesh->GetBoneTransform(
            foundBone->boneName,
            SDK::ERelativeTransformSpace::RTS_World
        );
        return BoneTransform.Translation;

       // return worldPosition;
    }

    // Alternative method using UE5 bone transforms (commented out - use for UE5 games)
    /*
    static SDK::FVector GetBone3D_UE5(SDK::USkeletalMeshComponent* Mesh, int BoneIndex)
    {
        if (!Mesh || BoneIndex < 0)
            return SDK::FVector(0.0f, 0.0f, 0.0f);

        SDK::FTransform BoneTransform = Mesh->GetBoneTransform(
            Mesh->GetBoneName(BoneIndex),
            SDK::ERelativeTransformSpace::RTS_World
        );
        return BoneTransform.Translation;
    }
    */

    // Debug function to dump all bone names and indices to log
    static void DumpBones(SDK::USkeletalMeshComponent* Mesh);

    // Debug function to render bone indices in 3D space
    static void DrawBones(SDK::USkeletalMeshComponent* Mesh)
    {
        if (!Mesh)
            return;

        for (int Index = 0; Index < Mesh->GetNumBones(); ++Index)
        {
            SDK::FName BoneName = Mesh->GetBoneName(Index);
            SDK::FVector BonePos = GetBone3D(Mesh, BoneName.ToString());

            // Draw bone index number at bone location
            ZeroGUI::TextWorld(BonePos, std::to_string(Index).c_str(), ZeroGUI::Colors::Yellow, 0.6f, true, false);
        }
    }

    // Get bone name by index
    static std::string GetBoneName(SDK::USkeletalMeshComponent* Mesh, int index)
    {
        if (!Mesh || index < 0 || index >= Mesh->GetNumBones())
            return "Invalid";

        SDK::FName BoneName = Mesh->GetBoneName(index);
        return BoneName.ToString();
    }

    // Get total number of bones in mesh
    static int GetBoneCount(SDK::USkeletalMeshComponent* Mesh)
    {
        if (!Mesh)
            return 0;

        return Mesh->GetNumBones();
    }

    // Check if bone index is valid for the given mesh
    static bool IsValidBoneIndex(SDK::USkeletalMeshComponent* Mesh, int index)
    {
        if (!Mesh)
            return false;

        return (index >= 0 && index < Mesh->GetNumBones());
    }

    //// Get distance between two bones
    //static float GetBoneDistance(SDK::USkeletalMeshComponent* Mesh, int bone1, int bone2)
    //{
    //    if (!IsValidBoneIndex(Mesh, bone1) || !IsValidBoneIndex(Mesh, bone2))
    //        return 0.0f;

    //    SDK::FVector pos1 = GetBone3D(Mesh, bone1);
    //    SDK::FVector pos2 = GetBone3D(Mesh, bone2);

    //    // Calculate 3D distance
    //    float dx = pos2.X - pos1.X;
    //    float dy = pos2.Y - pos1.Y;
    //    float dz = pos2.Z - pos1.Z;

    //    return sqrtf(dx * dx + dy * dy + dz * dz);
    //}
};

#endif // BONES_H