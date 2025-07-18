#ifndef UTILITY_H
#define UTILITY_H

#include "Settings.h"
#include "ZeroGUI.h"
#include "framework.hpp"
#include "bones.h"
#include "Unreal/SDK/Engine_parameters.hpp"
#include <filesystem>
#include <fstream>
#include <cstdarg>
#include <string>
#include <vector>
#include <algorithm>

/**
 * @class Utility
 * @brief Central utility class providing common functions for logging, formatting, and game-specific operations
 *
 * This class contains static utility functions used throughout the cheat system including:
 * - Color creation helpers
 * - String cleaning and formatting
 * - Logging functionality
 * - Console enabling
 * - Function pointer management
 */
class Utility
{
public:
    // ============================================================================
    // STATIC VARIABLES - Hook management
    // ============================================================================

    /// Original PostRender function pointer for hook restoration
    inline static uintptr_t PostRenderOG = 0;

    /// Original ProcessEvent function pointer for hook restoration  
    inline static uintptr_t ProcessEventOG = 0;

    // ============================================================================
    // COLOR UTILITIES
    // ============================================================================

    /**
     * @brief Creates an FLinearColor from a 4-element float array
     * @param color Array containing RGBA values [0.0f - 1.0f]
     * @return SDK::FLinearColor object for rendering
     *
     * Eliminates repetitive FLinearColor constructor calls throughout the codebase
     */
    static SDK::FLinearColor CreateColor(const float color[4])
    {
        return SDK::FLinearColor(color[0], color[1], color[2], color[3]);
    }

    // ============================================================================
    // STRING UTILITIES
    // ============================================================================
    /**
     * @brief Cleans game object names by removing common prefixes, suffixes, and numeric identifiers
     * @param Input Raw object name from the game engine
     * @return Cleaned, human-readable string
     *
     * Removes:
     * - Numeric suffixes (e.g., "_123")
     * - "_C" suffix (Unreal class indicator)
     * - Common prefixes: "WF_", "BR_", "Key_", "ValuableItem_B_", "ValuableItem_"
     *
     * Example: "ValuableItem_B_HardDrive_C_123" -> "HardDrive"
     */
    static std::string CleanName(const std::string& input)
    {
        if (input.empty()) return input;
        std::string Result = input; // Start with the original input string
        // Remove numeric suffix after the last '_'
        size_t pos = Result.find_last_of('_');
        if (pos != std::string::npos && pos + 1 < Result.size()) // Ensure there's something after '_'
        {
            std::string Suffix = Result.substr(pos + 1); // Get the part after '_'
            if (std::all_of(Suffix.begin(), Suffix.end(), ::isdigit)) // Check if all characters in Suffix are digits
            {
                Result = Result.substr(0, pos); // Remove the numeric suffix
            }
        }
        // Remove "_C" at the end of the string if present
        if (Result.size() >= 2 && Result.substr(Result.size() - 2) == "_C")
        {
            Result = Result.substr(0, Result.size() - 2); // Remove "_C"
        }        
        // Remove "WF_" at the start of the string if present
        if (Result.size() >= 3 && Result.substr(0, 3) == "WF_")
        {
            Result = Result.substr(3); // Remove "WF_"
        }
        // Remove "BR_" at the start of the string if present
        if (Result.size() >= 3 && Result.substr(0, 3) == "BR_")
        {
            Result = Result.substr(3); // Remove "BR_"
        }
        // Remove "Key_" at the start of the string if present
        if (Result.size() >= 4 && Result.substr(0, 4) == "Key_")
        {
            Result = Result.substr(4); // Remove "Key_"
        }
        // Remove "ValuableItem_B_" at the start of the string if present
        if (Result.size() >= 14 && Result.substr(0, 14) == "ValuableItem_B_")
        {
            Result = Result.substr(14); // Remove "ValuableItem_B_"
        }
        // Remove "ValuableItem_" at the start of the string if present
        if (Result.size() >= 12 && Result.substr(0, 12) == "ValuableItem_")
        {
            Result = Result.substr(12); // Remove "ValuableItem_"
        }
        return Result; // Return the fully cleaned string
    }

    // ============================================================================
    // LOGGING UTILITIES
    // ============================================================================

    /**
     * @brief Thread-safe logging function with printf-style formatting
     * @param format Printf-style format string
     * @param ... Variable arguments for formatting
     *
     * Features:
     * - Overwrites log file on first execution (clears old logs)
     * - Appends to log file on subsequent calls
     * - Thread-safe with static initialization
     * - Automatic path resolution to executable directory
     */
    static void AppendToLogFile(const char* format, ...)
    {
        // Use constexpr for compile-time optimization
        if(g_settings.DebugLogging)
        {
            // Thread-safe initialization - only runs once
            static bool isFirstExecution = true;

            // Clear log file on first execution
            if (isFirstExecution)
            {
                std::filesystem::path logFilePath = std::filesystem::current_path() / "GameTweak_log.txt";

                // Create/overwrite log file
                if (std::ofstream logFile(logFilePath, std::ios_base::out); logFile.is_open())
                {
                    // File automatically closed by RAII
                }

                isFirstExecution = false;
            }

            // Format the message with bounds checking
            constexpr size_t bufferSize = 1024;
            char buffer[bufferSize];

            va_list args;
            va_start(args, format);

            // Use safer vsnprintf with bounds checking
            int result = vsnprintf(buffer, bufferSize, format, args);
            va_end(args);

            // Ensure null termination even if truncated
            if (result >= bufferSize)
            {
                buffer[bufferSize - 1] = '\0';
            }

            // Append to log file
            std::filesystem::path logFilePath = std::filesystem::current_path() / "GameTweak_log.txt";
            if (std::ofstream logFile(logFilePath, std::ios_base::app); logFile.is_open())
            {
                logFile << buffer << std::endl;
                // File automatically closed by RAII
            }
        }
    }

    /**
     * @brief Safe string formatting with dynamic buffer allocation
     * @param format Printf-style format string
     * @param ... Variable arguments for formatting
     * @return Formatted string
     *
     * Features:
     * - Dynamic buffer resizing for large strings
     * - Memory efficient with initial small buffer
     * - Safe against buffer overflows
     */
    static std::string Format(const char* format, ...)
    {
        constexpr size_t initialBufferSize = 256;
        std::vector<char> buffer(initialBufferSize);

        va_list args;
        va_start(args, format);

        // Try initial buffer size
        int formattedLength = std::vsnprintf(buffer.data(), buffer.size(), format, args);

        // If buffer too small, resize and retry
        if (formattedLength >= static_cast<int>(buffer.size()))
        {
            buffer.resize(formattedLength + 1); // +1 for null terminator
            formattedLength = std::vsnprintf(buffer.data(), buffer.size(), format, args);
        }

        va_end(args);

        // Return efficient string construction (avoid std::max due to Windows macro conflicts)
        return std::string(buffer.data(), formattedLength > 0 ? formattedLength : 0);
    }

    // ============================================================================
    // FUNCTION POINTER UTILITIES
    // ============================================================================

    /**
     * @brief Type-safe function pointer creator for game calls
     * @tparam T Return type of the function
     * @param address Memory address of the function
     * @return Function pointer that can be called with (...) parameters
     *
     * Used for calling original hooked functions and game engine functions
     */
    template <typename T> static inline T(*GameCall(unsigned __int64 address))(...)
    {
        __int64 func_address = address;
        T(*func)(...) = (T(*)(...))func_address;
        return func;
    }

    // ============================================================================
    // GAME-SPECIFIC UTILITIES
    // ============================================================================

    /**
     * @brief Enables the Unreal Engine developer console
     * @return void
     *
     * Features:
     * - Sets console key to F2
     * - Creates console object in game viewport
     * - Links console to local player
     * - Comprehensive null checking for stability
     *
     * This function modifies DefaultObject properties which is generally
     * discouraged but necessary for console key binding in UE4.
     */
    static void EnableConsole()
    {
        // Get engine and world instances
        SDK::UEngine* Engine = SDK::UEngine::GetEngine();
        SDK::UWorld* World = SDK::UWorld::GetWorld();

        // Comprehensive validation chain to prevent crashes
        if (!Engine || !World || !World->OwningGameInstance)
        {
            return;
        }

        // Validate local players array
        if (World->OwningGameInstance->LocalPlayers.Num() <= 0)
        {
            return;
        }

        // Validate player controller
        SDK::ULocalPlayer* localPlayer = World->OwningGameInstance->LocalPlayers[0];
        if (!localPlayer || !localPlayer->PlayerController)
        {
            return;
        }

        // Set console activation key to F2
        // Note: This modifies a DefaultObject, which is generally unsafe
        // but required for console key binding in UE4
        if (SDK::UInputSettings* inputSettings = SDK::UInputSettings::GetDefaultObj())
        {
            inputSettings->ConsoleKeys[0].KeyName =
                SDK::UKismetStringLibrary::Conv_StringToName(L"F2");
        }

        // Create console object
        if (!Engine->GameViewport || !Engine->ConsoleClass)
        {
            return;
        }

        SDK::UObject* consoleObject = SDK::UGameplayStatics::SpawnObject(
            Engine->ConsoleClass, Engine->GameViewport);

        if (!consoleObject)
        {
            return;
        }

        // Assign console to viewport (safe cast as SpawnObject guarantees type)
        auto* console = static_cast<SDK::UConsole*>(consoleObject);
        Engine->GameViewport->ViewportConsole = console;

        // Link console to local player for proper functionality
        console->ConsoleTargetPlayer = localPlayer;
    }
};

#endif // UTILITY_H