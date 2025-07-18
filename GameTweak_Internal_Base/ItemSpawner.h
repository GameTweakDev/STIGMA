#ifndef ItemSpawner_H
#define ItemSpawner_H

#include "Settings.h"
#include <vector>

class ItemSpawner
{
private:
    
public:
    static void SpawnActorFromClass(SDK::UClass* ClassToSpawn)
    {
        if (!ClassToSpawn)
            return;

        // Validate world
        SDK::UWorld* World = SDK::UWorld::GetWorld();
        if (!World || !SDK::UKismetSystemLibrary::IsValid(World))
            return;

        // Validate GameInstance
        SDK::UGameInstance* GameInstance = SDK::UGameplayStatics::GetGameInstance(World);
        if (!GameInstance || !SDK::UKismetSystemLibrary::IsValid(GameInstance))
            return;

        // Validate ULocalPlayer
        if (GameInstance->LocalPlayers.Num() == 0)
            return;
            
        SDK::ULocalPlayer* LocalPlayer = GameInstance->LocalPlayers[0];
        if (!LocalPlayer || !SDK::UKismetSystemLibrary::IsValid(LocalPlayer))
            return;

        // Validate PlayerController
        SDK::APlayerController* PlayerController = SDK::UGameplayStatics::GetPlayerController(World, 0);
        if (!PlayerController || !SDK::UKismetSystemLibrary::IsValid(PlayerController))
            return;

        // Validate Local Pawn
        SDK::APawn* LocalPawn = SDK::UGameplayStatics::GetPlayerPawn(World, 0);
        if (!LocalPawn || !SDK::UKismetSystemLibrary::IsValid(LocalPawn))
            return;

        // Get spawn location and rotation
        SDK::FVector SpawnLocation = LocalPawn->K2_GetActorLocation();
        SpawnLocation.Z += 75.0f;
        SDK::FRotator SpawnRotation = LocalPawn->K2_GetActorRotation();

        // Convert rotator to quaternion using available functions
        // Convert degrees to radians first
        float PitchRad = SDK::UKismetMathLibrary::DegreesToRadians(SpawnRotation.Pitch);
        float YawRad = SDK::UKismetMathLibrary::DegreesToRadians(SpawnRotation.Yaw);
        float RollRad = SDK::UKismetMathLibrary::DegreesToRadians(SpawnRotation.Roll);

        // Use available Sin/Cos functions for quaternion conversion
        float SP = SDK::UKismetMathLibrary::Sin(PitchRad * 0.5f);
        float CP = SDK::UKismetMathLibrary::Cos(PitchRad * 0.5f);
        float SY = SDK::UKismetMathLibrary::Sin(YawRad * 0.5f);
        float CY = SDK::UKismetMathLibrary::Cos(YawRad * 0.5f);
        float SR = SDK::UKismetMathLibrary::Sin(RollRad * 0.5f);
        float CR = SDK::UKismetMathLibrary::Cos(RollRad * 0.5f);

        SDK::FQuat SpawnQuat;
        SpawnQuat.X = CR * SP * SY - SR * CP * CY;
        SpawnQuat.Y = -CR * SP * CY - SR * CP * SY;
        SpawnQuat.Z = CR * CP * SY - SR * SP * CY;
        SpawnQuat.W = CR * CP * CY + SR * SP * SY;

        SDK::FTransform SpawnTransform{};
        SpawnTransform.Translation = SpawnLocation;
        SpawnTransform.Rotation = SpawnQuat;
        SpawnTransform.Scale3D = SDK::FVector(1.0f, 1.0f, 1.0f);

        // Use your original deferred spawning method but with better safety
        SDK::AActor* SpawnedActor = SDK::UGameplayStatics::BeginDeferredActorSpawnFromClass(
            World,
            ClassToSpawn,
            SpawnTransform,
            SDK::ESpawnActorCollisionHandlingMethod::AlwaysSpawn,
            LocalPawn,// Set owner during spawn
            SDK::ESpawnActorScaleMethod::SelectDefaultAtRuntime
            
        );

        if (SpawnedActor && SDK::UKismetSystemLibrary::IsValid(SpawnedActor))
        {
            // Set additional properties before finishing spawn if needed
            // (This is where you'd set any properties that need to be set before FinishSpawningActor)
            
            // Finish spawning the actor
            SpawnedActor = SDK::UGameplayStatics::FinishSpawningActor(SpawnedActor, SpawnTransform,SDK::ESpawnActorScaleMethod::MultiplyWithRoot);
        }

        if (SpawnedActor && SDK::UKismetSystemLibrary::IsValid(SpawnedActor))
        {
            // Set proper ownership to prevent GC issues
            SpawnedActor->SetOwner(LocalPawn);
            
            // Set the actor to be destroyed when the level changes
            SpawnedActor->SetLifeSpan(0.0f); // 0 means no auto-destroy, we'll handle it manually

            // Handle specific actor types
       /*     if (SpawnedActor->IsA(SDK::AZomboyInteractableActor::StaticClass()))
            {
                SDK::AZomboyInteractableActor* InteractableActor = static_cast<SDK::AZomboyInteractableActor*>(SpawnedActor);
                if (InteractableActor)
                {
                    InteractableActor->SetPhysicsEnabled(true, true, SDK::ECollisionEnabled::QueryAndPhysics);
                }
            }*/

            // Success feedback
            Beep(400, 100);
        }
    }

    static SDK::UClass* FindClassByName(std::string Name, bool bIsFullName = false, std::string NonFullName = "")
    {
        // Add null check for safety
        if (Name.empty())
            return nullptr;

        /* Could be external function, not really unique to this StaticClass function */
        auto SetClassIndex = [](SDK::UClass* Class, UC::int32& Index, UC::uint64& ClassName) -> SDK::UClass*
        {
            if (Class && SDK::UKismetSystemLibrary::IsValid(Class))
            {
                Index = SDK::BasicFilesImpleUtils::GetObjectIndex(Class);
                ClassName = SDK::BasicFilesImpleUtils::GetObjFNameAsUInt64(Class);
            }
            return Class;
        };

        UC::int32 ClassIdx = 0x0;
        UC::uint64 ClassName = 0x0;

        /* Use the full name to find an object */
        if (bIsFullName)
        {
            if (ClassIdx == 0x0) [[unlikely]]
                return SetClassIndex(SDK::BasicFilesImpleUtils::FindClassByFullName(Name), ClassIdx, ClassName);

            SDK::UClass* ClassObj = static_cast<SDK::UClass*>(SDK::BasicFilesImpleUtils::GetObjectByIndex(ClassIdx));

            /* Validate the cached object is still valid */
            if (!ClassObj || !SDK::UKismetSystemLibrary::IsValid(ClassObj) || 
                SDK::BasicFilesImpleUtils::GetObjFNameAsUInt64(ClassObj) != ClassName)
            {
                ClassIdx = 0x0; // Reset cache
                return SetClassIndex(SDK::BasicFilesImpleUtils::FindClassByFullName(Name), ClassIdx, ClassName);
            }

            return ClassObj;
        }
        else /* Default, use just the name to find an object */
        {
            if (ClassIdx == 0x0) [[unlikely]]
                return SetClassIndex(SDK::BasicFilesImpleUtils::FindClassByName(Name), ClassIdx, ClassName);

            SDK::UClass* ClassObj = static_cast<SDK::UClass*>(SDK::BasicFilesImpleUtils::GetObjectByIndex(ClassIdx));

            /* Validate the cached object is still valid */
            if (!ClassObj || !SDK::UKismetSystemLibrary::IsValid(ClassObj) || 
                SDK::BasicFilesImpleUtils::GetObjFNameAsUInt64(ClassObj) != ClassName)
            {
                ClassIdx = 0x0; // Reset cache
                return SetClassIndex(SDK::BasicFilesImpleUtils::FindClassByName(Name), ClassIdx, ClassName);
            }

            return ClassObj;
        }
    }
};

#endif // ItemSpawner_H