#ifndef CHEAT_H
#define CHEAT_H

#include "Settings.h"
#include "ZeroGUI.h"
#include "framework.hpp"
#include <iostream>
#include <fstream>
#include <filesystem>
#include <cstdarg>
#include <string>
#include <vector>
#include <algorithm>
#include "minhook/include/MinHook.h"
#include "Unreal/SDK/Engine_parameters.hpp"
#include "bones.h"
#include "ESP.h"
#include "GameHooks.h"

class Cheat
{
private:
    // Hook ProcessEvent function
    static void HookProcessEvent()
    {
        Utility::AppendToLogFile("HookProcessEvent Starting...\n");
        Utility::AppendToLogFile("ProcessEvent: %llx\n", (SDK::InSDKUtils::GetImageBase() + SDK::Offsets::ProcessEvent));

        Utility::ProcessEventOG = SDK::InSDKUtils::GetImageBase() + SDK::Offsets::ProcessEvent;

        //Hook ProcessEvent
        MH_Initialize();
        MH_CreateHook((LPVOID*)(SDK::InSDKUtils::GetImageBase() + SDK::Offsets::ProcessEvent), &GameHooks::ProcessEventHook, (LPVOID*)&Utility::ProcessEventOG);
        MH_EnableHook((LPVOID*)(SDK::InSDKUtils::GetImageBase() + SDK::Offsets::ProcessEvent));
        Utility::AppendToLogFile("ProcessEvent Hooked: %llx\n", &GameHooks::ProcessEventHook);
    }

    static void HookPostRender()
    {
        Utility::AppendToLogFile("HookPostRender Starting...\n");
        // Get required objects
        SDK::UWorld* World = SDK::UWorld::GetWorld();
        if (!World)
        {
            Utility::AppendToLogFile("Failed to get World\n");
            return;
        }
        SDK::UGameInstance* OwningGameInstance = World->OwningGameInstance;
        if (!OwningGameInstance)
        {
            Utility::AppendToLogFile("Failed to get OwningGameInstance\n");
            return;
        }
        SDK::ULocalPlayer* LocalPlayer = OwningGameInstance->LocalPlayers[0];
        if (!LocalPlayer)
        {
            Utility::AppendToLogFile("Failed to get LocalPlayer\n");
            return;
        }
        SDK::UGameViewportClient* ViewPortClient = LocalPlayer->ViewportClient;
        if (!ViewPortClient)
        {
            Utility::AppendToLogFile("Failed to get ViewPortClient\n");
            return;
        }
        // Get PostRender address
        uintptr_t* VTable = reinterpret_cast<uintptr_t*>(*(uintptr_t*)ViewPortClient);
        uintptr_t PostRenderAddress = VTable[0x71]; // UE4 games PostRender offset
        Utility::AppendToLogFile("Found objects - World: %llx, Instance: %llx, Player: %llx, Viewport: %llx\n",
            World, OwningGameInstance, LocalPlayer, ViewPortClient);
        Utility::AppendToLogFile("Found VTable: %llx, PostRender: %llx\n", VTable, PostRenderAddress);

        // Set up hook
        MH_Initialize();
        MH_CreateHook((LPVOID*)(PostRenderAddress), &ESP::PostRenderHook, (LPVOID*)&Utility::PostRenderOG);
        MH_EnableHook((LPVOID*)(PostRenderAddress));

        Utility::AppendToLogFile("Successfully hooked PostRender at %llx\n", (uintptr_t)&ESP::PostRenderHook);
    }

public:
    // Initialize all hooks
    static void InitializeHooks()
    {
        static bool hooksInitialized = false;
        if (!hooksInitialized)
        {
            HookProcessEvent();
            HookPostRender();
            hooksInitialized = true;
        }
    }    
};

// Implementation of DumpBones function that was declared in bones.h
void Bones::DumpBones(SDK::USkeletalMeshComponent* Mesh)
{
    if (!Mesh)
        return;

    for (int Index = 0; Index < Mesh->GetNumBones(); ++Index)
    {
        SDK::FName BoneName = Mesh->GetBoneName(Index);
        Utility::AppendToLogFile("%d : %s\n", Index, BoneName.ToString().c_str());
    }
}

#endif // CHEAT_H