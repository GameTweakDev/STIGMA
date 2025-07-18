#ifndef Mods_H
#define Mods_H

#include "Settings.h"
#include "ZeroGUI.h"
#include "framework.hpp"
#include "bones.h"
#include "Utility.h"
#include "Unreal/SDK/Engine_parameters.hpp"

#include <unordered_map>

class Mods
{
private:

    static void ApplyWeaponMods()
    {
       
    }

public:
    static void LocalPlayerMods(GamePlayerClass* LocalPlayer, GamePlayerControllerClass* PlayerController)
    {
       /* if (LocalPlayer->IsA(SDK::ACS_BR_Character_C::StaticClass()))
        {
            auto BR_Pawn = (SDK::ACS_BR_Character_C*)(LocalPlayer);
            BR_Pawn->ServerSetMaxArmor(999999.0f);
            BR_Pawn->ServerAddArmor(999998.0f, SDK::AArmorPlate_C::GetDefaultObj());
        }*/

        //Speed Hack
        if (g_settings.Mods.SpeedHack)
        {
            LocalPlayer->CustomTimeDilation = g_settings.Mods.WalkingMovementSpeed;
            
        }
       

        //Full Bright
        static INT32 Normal_DrawMode = -1; // -1 indicates uninitialized

        SDK::UWorld* World = SDK::UWorld::GetWorld();
        SDK::UGameInstance* GameInstance = World ? SDK::UGameplayStatics::GetGameInstance(World) : nullptr;
        SDK::ULocalPlayer* LocalLocalPlayer = GameInstance && GameInstance->LocalPlayers.Num() > 0 ? GameInstance->LocalPlayers[0] : nullptr;

        if (LocalLocalPlayer && LocalLocalPlayer->ViewportClient)
        {
            uintptr_t ViewportClient = (uintptr_t)LocalLocalPlayer->ViewportClient;
            INT32* DrawModePtr = reinterpret_cast<INT32*>(ViewportClient + 0xB0);

            if (g_settings.Mods.fullbright)
            {
                // Store original value if this is the first time enabling fullbright
                if (Normal_DrawMode == -1)
                {
                    Normal_DrawMode = *DrawModePtr;
                }
                *DrawModePtr = 1; // Set to fullbright mode
            }
            else
            {
                // Restore original draw mode if we have it stored
                if (Normal_DrawMode != -1)
                {
                    *DrawModePtr = Normal_DrawMode;
                }
            }
        }

        static bool WasNoclipping;
        if (g_settings.Mods.NoClip)
        {
            WasNoclipping = true;
            LocalPlayer->SetActorEnableCollision(false);
            LocalPlayer->CharacterMovement->MovementMode = SDK::EMovementMode::MOVE_Flying;

            if (PlayerController->PlayerCameraManager)
            {
                SDK::FRotator CameraRotation = PlayerController->PlayerCameraManager->GetCameraRotation();
                SDK::FVector CameraForwardVector = SDK::UKismetMathLibrary::GetForwardVector(CameraRotation);
                SDK::FVector CameraRightVector = SDK::UKismetMathLibrary::GetRightVector(CameraRotation);
                SDK::FVector WorldUpVector = SDK::FVector(0.0f, 0.0f, 1.0f);

                SDK::FVector MovementDirection = SDK::FVector(0.0f, 0.0f, 0.0f);
                bool anyKeyPressed = false;

                // Forward/Backward (W/S)
                if (GetAsyncKeyState(0x57) & 0x8000) // W
                {
                    MovementDirection = MovementDirection + CameraForwardVector;
                    anyKeyPressed = true;
                }
                if (GetAsyncKeyState(0x53) & 0x8000) // S
                {
                    MovementDirection = MovementDirection - CameraForwardVector;
                    anyKeyPressed = true;
                }

                // Left/Right (A/D)
                if (GetAsyncKeyState(0x41) & 0x8000) // A
                {
                    MovementDirection = MovementDirection - CameraRightVector;
                    anyKeyPressed = true;
                }
                if (GetAsyncKeyState(0x44) & 0x8000) // D
                {
                    MovementDirection = MovementDirection + CameraRightVector;
                    anyKeyPressed = true;
                }

                // Up/Down (1/2)
                if (GetAsyncKeyState(0x31) & 0x8000) // 1
                {
                    MovementDirection = MovementDirection + WorldUpVector;
                    anyKeyPressed = true;
                }
                if (GetAsyncKeyState(0x32) & 0x8000) // 2
                {
                    MovementDirection = MovementDirection - WorldUpVector;
                    anyKeyPressed = true;
                }

                if (anyKeyPressed)
                {
                    // Normalize the movement direction and apply speed
                    MovementDirection = SDK::UKismetMathLibrary::Normal(MovementDirection, 0.0001f);
                    SDK::FVector NewVelocity = MovementDirection * g_settings.Mods.NoClip_speed;

                    // Set velocity directly instead of using AddMovementInput
                    LocalPlayer->CharacterMovement->Velocity = NewVelocity;
                }
                else
                {
                    // Stop movement when no keys are pressed
                    LocalPlayer->CharacterMovement->StopMovementImmediately();
                }
            }
        }
        else
        {
            // When noclip is disabled, restore normal movement
            if (WasNoclipping)
            {
                LocalPlayer->SetActorEnableCollision(true);
                LocalPlayer->CharacterMovement->MovementMode = SDK::EMovementMode::MOVE_Walking;
                WasNoclipping = false;
            }
        }
    }
};

#endif // Mods_H