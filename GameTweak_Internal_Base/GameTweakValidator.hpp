// =============================================================================
// GameTweakValidator.hpp - Windows CryptoAPI version (no OpenSSL)
// =============================================================================

#pragma once
#include <string>
#include <vector>
#include <windows.h>
#include <winhttp.h>
#include <winreg.h>
#include <wincrypt.h>
#include <bcrypt.h>
#include <sstream>
#include <iomanip>
#include <chrono>
#include <stdexcept>

#ifdef _WIN32
#pragma comment(lib, "bcrypt.lib")
#pragma comment(lib, "crypt32.lib")
#pragma comment(lib, "winhttp.lib")
#pragma comment(lib, "advapi32.lib")
#endif

class GameTweakValidator
{
private:
    std::string hwid;

    std::string encryptionKey = "gUFVE6E5a8PkKWik/dJ+S268Dk9jpawu0LumiOiiOGk=";
    std::string baseUrl = "https://api.gametweak.net";

    // System info methods
    std::string hashString(const std::string& input);
    std::string getProcessorId();
    std::string getMotherboardSerial();
    std::string getBiosSerial();
    std::string generateHwid();
    std::string getTimestamp();

    // Crypto methods - Windows CryptoAPI helpers
    std::vector<uint8_t> base64DecodeWindows(const std::string& encoded);
    std::string base64EncodeWindows(const std::vector<uint8_t>& data);
    bool generateRandomBytes(uint8_t* buffer, size_t size);
    std::vector<uint8_t> base64Decode(const std::string& encoded);
    std::string base64Encode(const std::vector<uint8_t>& data);
    std::string encrypt(const std::string& plaintext);
    std::string decrypt(const std::string& ciphertext);

    // HTTP methods
    std::wstring stringToWString(const std::string& str);
    std::string wStringToString(const std::wstring& wstr);
    std::string httpGet(const std::string& url);

    // JSON helpers
    std::string createEncryptedRequest(const std::string& jsonData);
    std::string parseEncryptedResponse(const std::string& response);

public:
    GameTweakValidator();
    ~GameTweakValidator();
    std::string accessToken;
    std::string getHwid() const
    {
        return hwid;
    }
    void setAccessToken(const std::string& token)
    {
        accessToken = token;
    }
    bool isLoggedIn() const
    {
        return !accessToken.empty();
    }

    // Main validation method
    bool validateToken();
};