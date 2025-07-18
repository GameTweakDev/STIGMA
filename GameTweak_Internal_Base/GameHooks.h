#ifndef GAMEHOOKS_H
#define GAMEHOOKS_H

#include "Settings.h"
#include "ZeroGUI.h"
#include "framework.hpp"
#include "bones.h"
#include "Utility.h"
#include "Unreal/SDK/Engine_parameters.hpp"
//#include "Unreal/SDK/Insurgency_parameters.hpp"


/**
 * @class GameHooks
 * @brief Manages game function hooks for implementing cheats and modifications
 *
 * This class handles interception of key game functions to implement:
 * - Silent aimbot (redirects bullet trajectory)
 * - Infinite ammo system
 * - Anti-cheat bypasses
 * - Movement modifications (speed hack, ghost mode)
 *
 * All hooks work by intercepting Unreal Engine's ProcessEvent system
 */
class GameHooks
{
private:
    // ============================================================================
    // FUNCTION CACHE UTILITIES
    // ============================================================================

    /**
     * @brief Thread-safe function caching with automatic initialization
     * @tparam T Class type that contains the function
     * @param className Name of the UE4 class
     * @param functionName Name of the function within the class
     * @param logName Human-readable name for logging
     * @return Cached function pointer or nullptr if not found
     *
     * Uses static initialization to cache function pointers on first access.
     * This eliminates repeated function lookups which are expensive operations.
     */
    template<typename T>
    static SDK::UFunction* GetCachedFunction(const char* className, const char* functionName)
    {
        //Utility::AppendToLogFile("GetCachedFunction: Entry - Class: %s, Function: %s\n", className, functionName);

        // Simple static array instead of std::unordered_map
        struct CacheEntry {
            char key[128];
            SDK::UFunction* function;
        };
        static CacheEntry cache[16] = {}; // Adjust size as needed
        static int cacheCount = 0;

        // Create key
        char key[128];
        snprintf(key, sizeof(key), "%s::%s", className, functionName);

        // Search cache
        for (int i = 0; i < cacheCount; i++) {
            if (strcmp(cache[i].key, key) == 0) {
                //Utility::AppendToLogFile("GetCachedFunction: Cache hit for %s\n", key);
                return cache[i].function;
            }
        }

        //Utility::AppendToLogFile("GetCachedFunction: Cache miss for %s\n", key);

        // Cache miss - look up the function
        SDK::UFunction* function = nullptr;
        auto defaultObj = T::GetDefaultObj();
        if (defaultObj) {
            //Utility::AppendToLogFile("GetCachedFunction: Default object found for %s\n", className);
            function = defaultObj->Class->GetFunction(className, functionName);

            if (function) {
                //Utility::AppendToLogFile("Function cached - Class: %s, Function: %s, Address: %llx, Exec: %llx\n", className, functionName, function, function->ExecFunction);
            }
            else {
                //Utility::AppendToLogFile("Function lookup failed - Class: %s, Function: %s\n", className, functionName);
            }
        }
        else {
            //Utility::AppendToLogFile("Default object failed - Class: %s, Function: %s\n", className, functionName);
        }

        // Add to cache
        if (cacheCount < 16) {
            strcpy(cache[cacheCount].key, key);
            cache[cacheCount].function = function;
            cacheCount++;
            //Utility::AppendToLogFile("GetCachedFunction: Added to cache, count now: %d\n", cacheCount);
        }
        else {
            //Utility::AppendToLogFile("GetCachedFunction: Cache full, cannot add %s\n", key);
        }

        return function;
    }

    /**
     * @brief Validates game world and player objects
     * @param world Reference to world pointer (will be set)
     * @param localPawn Reference to local pawn pointer (will be set)
     * @return true if all objects are valid, false otherwise
     *
     * Centralized validation to reduce code duplication and ensure consistency
     */
    static bool ValidateGameObjects(SDK::UWorld*& world, GamePlayerClass*& localPawn)
    {
        Utility::AppendToLogFile("ValidateGameObjects: Entry\n");

        world = SDK::UWorld::GetWorld();
        if (!world) {
            Utility::AppendToLogFile("ValidateGameObjects: World is null\n");
            return false;
        }

        Utility::AppendToLogFile("ValidateGameObjects: World found, getting player pawn\n");
        localPawn = static_cast<GamePlayerClass*>(SDK::UGameplayStatics::GetPlayerPawn(world, 0));
        if (!localPawn) {
            Utility::AppendToLogFile("ValidateGameObjects: LocalPawn is null\n");
            return false;
        }

        Utility::AppendToLogFile("ValidateGameObjects: All objects valid\n");
        return true;
    }

public:
    // ============================================================================
    // MAIN HOOK FUNCTION
    // ============================================================================

    /**
     * @brief Main ProcessEvent hook that intercepts all UE4 function calls
     * @param Object The UObject calling the function
     * @param Function The UFunction being called
     * @param Parms Parameters being passed to the function
     *
     * This is the core hook that intercepts Unreal Engine's function call system.
     * It allows us to modify game behavior by intercepting specific function calls
     * and either modifying their parameters or blocking them entirely.
     *
     * Hook Priority Order:
     * 1. Silent Aimbot (modifies bullet trajectory)
     * 2. Infinite Ammo (triggers additional shots)
     * 3. Anti-Cheat Bypasses (blocks detection)
     * 4. Movement Hacks (modifies position sync)
     */
    static void ProcessEventHook(SDK::UObject* Object, SDK::UFunction* Function, void* Parms)
    {
        // Early validation - call original if invalid parameters
        if (!Object || !Function || !Function->ExecFunction)
        {
            if (!Object) Utility::AppendToLogFile("ProcessEventHook: Object is null\n");
            if (!Function) Utility::AppendToLogFile("ProcessEventHook: Function is null\n");
            if (Function && !Function->ExecFunction) Utility::AppendToLogFile("ProcessEventHook: ExecFunction is null\n");

            return Utility::GameCall<void>(Utility::ProcessEventOG)(Object, Function, Parms);
        }

#if Private_Build
        // ========================================================================
        // ANTI-CHEAT BYPASSES (Private Build Only)
        // ========================================================================

        /**
         * Anti-Speed Hack Detection Bypass
         *
         * Blocks ClientAdjustPosition calls which the server uses to correct
         * player positions when it detects suspicious movement patterns.
         *
         * By blocking these corrections, we prevent rubber-banding and
         * position resets that would normally counter speed hacks.
         */
        {
            //Utility::AppendToLogFile("ProcessEventHook: Checking ClientAdjustPosition bypass\n");
            auto adjustPositionFunction = GetCachedFunction<SDK::ACharacter>(
                "Character", "ClientAdjustPosition");

            if ((g_settings.Mods.SpeedHack || g_settings.Mods.NoClip || g_settings.Mods.Ghost) && adjustPositionFunction && Function->ExecFunction == adjustPositionFunction->ExecFunction)
            {
                auto adjustParams = static_cast<SDK::Params::Character_ClientAdjustPosition*>(Parms);
                Utility::AppendToLogFile("ClientAdjustPosition blocked - Timestamp: %f\n", adjustParams->Timestamp);

                // Block the position adjustment entirely
                return;
            }
        }
#endif

        // ========================================================================
        // DEFAULT BEHAVIOR
        // ========================================================================

        // If no hooks were triggered, call the original function normally
        //Utility::AppendToLogFile("ProcessEventHook: No hooks triggered, calling original function\n");
        return Utility::GameCall<void>(Utility::ProcessEventOG)(Object, Function, Parms);
    }
};

#endif // GAMEHOOKS_H