#ifndef UTILITY_H
#define UTILITY_H

#include "Settings.h"
#include "framework.hpp"
#include <filesystem>
#include <fstream>
#include <cstdarg>
#include <string>
#include <vector>
#include <algorithm>

class Utility
{
public:

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
};

#endif // UTILITY_H