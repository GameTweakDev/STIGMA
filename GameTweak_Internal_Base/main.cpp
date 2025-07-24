#include "framework.hpp"
#include "hooks.hpp"
#include "menu.hpp"
#include "Settings.h"
#include "GameTweakValidator.hpp"
#include <string>
#include <sstream>
#include "IL2CPP/Functions.hpp"
#include "Cheat.h"

#if Enable_Auth

// XOR decryption for token
void enc_passed_string(std::string& buf)
{
    const __int64 xor_key = 571487;

    unsigned char k1 = xor_key & 0xff;
    unsigned char k2 = (xor_key >> 8) & 0xff;
    unsigned char k3 = (xor_key >> 16) & 0xff;
    unsigned char k4 = (xor_key >> 24) & 0xff;

    for (size_t i = 0; i < buf.length(); i++)
    {
        buf[i] ^= k1;
        buf[i] ^= k2;
        buf[i] ^= k3;
        buf[i] ^= k4;
    }
}

// Retrieve token from shared memory
std::string GetTokenFromFileMap()
{
    constexpr const char* MAP_NAME = "VvNHu5m0h7GtzW6Zx0CbfbjmF6TxhBw84WSnprzPuYjQQezP81GfywtKWnTReiwE";
    constexpr DWORD MAP_SIZE = 0xFFF;

    HANDLE mapFile = OpenFileMappingA(FILE_MAP_READ, FALSE, MAP_NAME);
    if (!mapFile) return "";

    const char* buffer = static_cast<const char*>(MapViewOfFile(mapFile, FILE_MAP_READ, 0, 0, MAP_SIZE));
    if (!buffer)
    {
        CloseHandle(mapFile);
        return "";
    }

    std::string token(buffer);
    UnmapViewOfFile(buffer);
    CloseHandle(mapFile);

    // Decrypt token
    enc_passed_string(token);
    return token;
}

// Main authorization check - simplified to only check HTTP 200
bool CheckAuthorization()
{
    try
    {
        std::string token = GetTokenFromFileMap();
        if (token.empty())
        {
            return false;
        }

        GameTweakValidator validator;
        validator.setAccessToken(token);

        if (validator.validateToken())
        {
            return true; // HTTP 200 received - authorized
        }
        else
        {
            return false;
        }
    }
    catch (...)
    {
        return false;
    }
}
#endif // Enable_Auth

BOOL APIENTRY DllMain(HMODULE hModule, DWORD reason, LPVOID lpReserved)
{
    DisableThreadLibraryCalls(hModule);

    switch (reason)
    {
        case DLL_PROCESS_ATTACH:
        // double beep pattern
        //Beep(800, 500);   // 800Hz for 0.5 seconds
       // Sleep(200);       // Brief pause
        Beep(200, 100);   // 800Hz for 0.5 seconds

        #if Enable_Auth
        // Check authorization before initializing
        if (!CheckAuthorization())
        {
            return FALSE; // Fail DLL loading if not authorized
        }
        #endif // Enable_Auth

        // Initialize hooks with retry loop
        do
        {
            if (Hooks::Initialize()) break;
            Sleep(100);
        }
        while (true);

        // Hook Game Function
        Cheat::InitializeHooks();

        break;
        
        case DLL_PROCESS_DETACH:
        Menu::Shutdown();
        Hooks::Shutdown();
        break;
    }

    return TRUE;
}