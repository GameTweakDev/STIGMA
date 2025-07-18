// =============================================================================
// GameTweakValidator.cpp - Windows CryptoAPI version (no OpenSSL)
// =============================================================================
#include "GameTweakValidator.hpp"

GameTweakValidator::GameTweakValidator()
{
    hwid = generateHwid();
}

GameTweakValidator::~GameTweakValidator()
{
    // No cleanup needed for Windows CryptoAPI
}

std::string GameTweakValidator::hashString(const std::string& input)
{
    HCRYPTPROV hCryptProv = 0;
    HCRYPTHASH hHash = 0;
    DWORD dwHashLen = 0;
    DWORD dwHashLenSize = sizeof(DWORD);
    std::string result;

    if (CryptAcquireContext(&hCryptProv, NULL, NULL, PROV_RSA_FULL, CRYPT_VERIFYCONTEXT))
    {
        if (CryptCreateHash(hCryptProv, CALG_SHA1, 0, 0, &hHash))
        {
            if (CryptHashData(hHash, (BYTE*)input.c_str(), input.length(), 0))
            {
                if (CryptGetHashParam(hHash, HP_HASHSIZE, (BYTE*)&dwHashLen, &dwHashLenSize, 0))
                {
                    std::vector<BYTE> hashData(dwHashLen);
                    if (CryptGetHashParam(hHash, HP_HASHVAL, hashData.data(), &dwHashLen, 0))
                    {
                        std::stringstream ss;
                        for (DWORD i = 0; i < dwHashLen; i++)
                        {
                            ss << std::hex << std::setw(2) << std::setfill('0') << (int)hashData[i];
                        }
                        result = ss.str();
                    }
                }
            }
            CryptDestroyHash(hHash);
        }
        CryptReleaseContext(hCryptProv, 0);
    }

    if (result.empty())
    {
        std::hash<std::string> hasher;
        size_t hashValue = hasher(input);
        std::stringstream ss;
        ss << std::hex << hashValue;
        result = ss.str();
    }

    return result;
}

std::string GameTweakValidator::getProcessorId()
{
    HKEY hKey;
    char processorId[256] = { 0 };
    DWORD bufferSize = sizeof(processorId);

    if (RegOpenKeyExA(HKEY_LOCAL_MACHINE,
        "HARDWARE\\DESCRIPTION\\System\\CentralProcessor\\0",
        0, KEY_READ, &hKey) == ERROR_SUCCESS)
    {
        RegQueryValueExA(hKey, "Identifier", NULL, NULL, (LPBYTE)processorId, &bufferSize);
        RegCloseKey(hKey);
        return std::string(processorId);
    }

    return "UNKNOWN_PROCESSOR";
}

std::string GameTweakValidator::getMotherboardSerial()
{
    HKEY hKey;
    char serial[256] = { 0 };
    DWORD bufferSize = sizeof(serial);

    if (RegOpenKeyExA(HKEY_LOCAL_MACHINE,
        "HARDWARE\\DESCRIPTION\\System\\BIOS",
        0, KEY_READ, &hKey) == ERROR_SUCCESS)
    {
        if (RegQueryValueExA(hKey, "SystemProductName", NULL, NULL, (LPBYTE)serial, &bufferSize) != ERROR_SUCCESS)
        {
            bufferSize = sizeof(serial);
            RegQueryValueExA(hKey, "BaseBoardProduct", NULL, NULL, (LPBYTE)serial, &bufferSize);
        }
        RegCloseKey(hKey);
        return std::string(serial);
    }

    return "UNKNOWN_MOTHERBOARD";
}

std::string GameTweakValidator::getBiosSerial()
{
    HKEY hKey;
    char biosSerial[256] = { 0 };
    DWORD bufferSize = sizeof(biosSerial);

    if (RegOpenKeyExA(HKEY_LOCAL_MACHINE,
        "HARDWARE\\DESCRIPTION\\System\\BIOS",
        0, KEY_READ, &hKey) == ERROR_SUCCESS)
    {
        if (RegQueryValueExA(hKey, "BIOSVersion", NULL, NULL, (LPBYTE)biosSerial, &bufferSize) != ERROR_SUCCESS)
        {
            bufferSize = sizeof(biosSerial);
            RegQueryValueExA(hKey, "SystemBiosVersion", NULL, NULL, (LPBYTE)biosSerial, &bufferSize);
        }
        RegCloseKey(hKey);
        return std::string(biosSerial);
    }

    return "UNKNOWN_BIOS";
}

std::string GameTweakValidator::generateHwid()
{
    std::string cpuId = getProcessorId();
    std::string moboSerial = getMotherboardSerial();
    std::string biosSerial = getBiosSerial();
    std::string combinedInfo = cpuId + moboSerial + biosSerial;
    return hashString(combinedInfo);
}

std::string GameTweakValidator::getTimestamp()
{
    auto now = std::chrono::system_clock::now();
    auto timestamp = std::chrono::duration_cast<std::chrono::seconds>(now.time_since_epoch()).count();
    return std::to_string(timestamp);
}

std::vector<uint8_t> GameTweakValidator::base64DecodeWindows(const std::string& encoded)
{
    // Custom base64 decode to match OpenSSL exactly
    const std::string chars = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
    std::vector<uint8_t> decoded;
    std::vector<int> T(256, -1);

    // Build decode table
    for (int i = 0; i < 64; i++) T[chars[i]] = i;

    int val = 0, valb = -8;
    for (unsigned char c : encoded)
    {
        if (T[c] == -1) break;
        val = (val << 6) + T[c];
        valb += 6;
        if (valb >= 0)
        {
            decoded.push_back(char((val >> valb) & 0xFF));
            valb -= 8;
        }
    }
    return decoded;
}

std::string GameTweakValidator::base64EncodeWindows(const std::vector<uint8_t>& data)
{
    // Custom base64 encode to match OpenSSL exactly
    const std::string chars = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
    std::string encoded;
    int val = 0, valb = -6;

    for (unsigned char c : data)
    {
        val = (val << 8) + c;
        valb += 8;
        while (valb >= 0)
        {
            encoded.push_back(chars[(val >> valb) & 0x3F]);
            valb -= 6;
        }
    }

    if (valb > -6) encoded.push_back(chars[((val << 8) >> (valb + 8)) & 0x3F]);
    while (encoded.size() % 4) encoded.push_back('=');

    return encoded;
}

bool GameTweakValidator::generateRandomBytes(uint8_t* buffer, size_t size)
{
    BCRYPT_ALG_HANDLE hAlgorithm = nullptr;
    NTSTATUS status = BCryptOpenAlgorithmProvider(
        &hAlgorithm,
        BCRYPT_RNG_ALGORITHM,
        nullptr,
        0);

    if (!BCRYPT_SUCCESS(status))
    {
        return false;
    }

    status = BCryptGenRandom(
        hAlgorithm,
        buffer,
        static_cast<ULONG>(size),
        0);

    BCryptCloseAlgorithmProvider(hAlgorithm, 0);
    return BCRYPT_SUCCESS(status);
}

std::vector<uint8_t> GameTweakValidator::base64Decode(const std::string& encoded)
{
    return base64DecodeWindows(encoded);
}

std::string GameTweakValidator::base64Encode(const std::vector<uint8_t>& data)
{
    return base64EncodeWindows(data);
}

std::string GameTweakValidator::encrypt(const std::string& plaintext)
{
    if (plaintext.empty())
    {
        throw std::runtime_error("Plaintext cannot be empty");
    }

    std::vector<uint8_t> key = base64Decode(encryptionKey);
    if (key.size() != 32)
    {
        throw std::runtime_error("Invalid encryption key size: " + std::to_string(key.size()));
    }

    // Generate random IV
    std::vector<uint8_t> iv(16);
    if (!generateRandomBytes(iv.data(), 16))
    {
        throw std::runtime_error("Failed to generate IV");
    }

    // Open algorithm provider
    BCRYPT_ALG_HANDLE hAlgorithm = nullptr;
    NTSTATUS status = BCryptOpenAlgorithmProvider(
        &hAlgorithm,
        BCRYPT_AES_ALGORITHM,
        nullptr,
        0);

    if (!BCRYPT_SUCCESS(status))
    {
        throw std::runtime_error("Failed to open AES algorithm provider");
    }

    // Set chaining mode to CBC
    status = BCryptSetProperty(
        hAlgorithm,
        BCRYPT_CHAINING_MODE,
        (PUCHAR)BCRYPT_CHAIN_MODE_CBC,
        sizeof(BCRYPT_CHAIN_MODE_CBC),
        0);

    if (!BCRYPT_SUCCESS(status))
    {
        BCryptCloseAlgorithmProvider(hAlgorithm, 0);
        throw std::runtime_error("Failed to set CBC mode");
    }

    // Generate key handle
    BCRYPT_KEY_HANDLE hKey = nullptr;
    status = BCryptGenerateSymmetricKey(
        hAlgorithm,
        &hKey,
        nullptr,
        0,
        key.data(),
        key.size(),
        0);

    if (!BCRYPT_SUCCESS(status))
    {
        BCryptCloseAlgorithmProvider(hAlgorithm, 0);
        throw std::runtime_error("Failed to generate symmetric key");
    }

    // Create a copy of IV for BCrypt (it might modify it)
    std::vector<uint8_t> ivCopy = iv;

    // Get required buffer size for encryption
    DWORD cbResult = 0;
    status = BCryptEncrypt(
        hKey,
        (PUCHAR)plaintext.c_str(),
        static_cast<ULONG>(plaintext.length()),
        nullptr,
        ivCopy.data(),
        static_cast<ULONG>(ivCopy.size()),
        nullptr,
        0,
        &cbResult,
        BCRYPT_BLOCK_PADDING);

    if (!BCRYPT_SUCCESS(status))
    {
        BCryptDestroyKey(hKey);
        BCryptCloseAlgorithmProvider(hAlgorithm, 0);
        throw std::runtime_error("Failed to get encryption buffer size");
    }

    // Reset IV copy
    ivCopy = iv;

    // Perform encryption
    std::vector<uint8_t> ciphertext(cbResult);
    status = BCryptEncrypt(
        hKey,
        (PUCHAR)plaintext.c_str(),
        static_cast<ULONG>(plaintext.length()),
        nullptr,
        ivCopy.data(),
        static_cast<ULONG>(ivCopy.size()),
        ciphertext.data(),
        static_cast<ULONG>(ciphertext.size()),
        &cbResult,
        BCRYPT_BLOCK_PADDING);

    BCryptDestroyKey(hKey);
    BCryptCloseAlgorithmProvider(hAlgorithm, 0);

    if (!BCRYPT_SUCCESS(status))
    {
        throw std::runtime_error("Failed to encrypt data");
    }

    ciphertext.resize(cbResult);

    // Combine IV + encrypted data (using original IV, not the potentially modified copy)
    std::vector<uint8_t> encrypted;
    encrypted.reserve(iv.size() + ciphertext.size());
    encrypted.insert(encrypted.end(), iv.begin(), iv.end());
    encrypted.insert(encrypted.end(), ciphertext.begin(), ciphertext.end());

    return base64Encode(encrypted);
}

std::string GameTweakValidator::decrypt(const std::string& ciphertext)
{
    if (ciphertext.empty())
    {
        throw std::runtime_error("Ciphertext cannot be empty");
    }

    std::vector<uint8_t> ciphertextBytes = base64Decode(ciphertext);
    if (ciphertextBytes.size() < 16)
    {
        throw std::runtime_error("Ciphertext too small: " + std::to_string(ciphertextBytes.size()));
    }

    std::vector<uint8_t> key = base64Decode(encryptionKey);
    std::vector<uint8_t> iv(ciphertextBytes.begin(), ciphertextBytes.begin() + 16);
    std::vector<uint8_t> encryptedData(ciphertextBytes.begin() + 16, ciphertextBytes.end());

    // Open algorithm provider
    BCRYPT_ALG_HANDLE hAlgorithm = nullptr;
    NTSTATUS status = BCryptOpenAlgorithmProvider(
        &hAlgorithm,
        BCRYPT_AES_ALGORITHM,
        nullptr,
        0);

    if (!BCRYPT_SUCCESS(status))
    {
        throw std::runtime_error("Failed to open AES algorithm provider");
    }

    // Set chaining mode to CBC
    status = BCryptSetProperty(
        hAlgorithm,
        BCRYPT_CHAINING_MODE,
        (PUCHAR)BCRYPT_CHAIN_MODE_CBC,
        sizeof(BCRYPT_CHAIN_MODE_CBC),
        0);

    if (!BCRYPT_SUCCESS(status))
    {
        BCryptCloseAlgorithmProvider(hAlgorithm, 0);
        throw std::runtime_error("Failed to set CBC mode");
    }

    // Generate key handle
    BCRYPT_KEY_HANDLE hKey = nullptr;
    status = BCryptGenerateSymmetricKey(
        hAlgorithm,
        &hKey,
        nullptr,
        0,
        key.data(),
        key.size(),
        0);

    if (!BCRYPT_SUCCESS(status))
    {
        BCryptCloseAlgorithmProvider(hAlgorithm, 0);
        throw std::runtime_error("Failed to generate symmetric key");
    }

    // Get required buffer size for decryption
    DWORD cbResult = 0;
    status = BCryptDecrypt(
        hKey,
        encryptedData.data(),
        static_cast<ULONG>(encryptedData.size()),
        nullptr,
        iv.data(),
        static_cast<ULONG>(iv.size()),
        nullptr,
        0,
        &cbResult,
        BCRYPT_BLOCK_PADDING);

    if (!BCRYPT_SUCCESS(status))
    {
        BCryptDestroyKey(hKey);
        BCryptCloseAlgorithmProvider(hAlgorithm, 0);
        throw std::runtime_error("Failed to get decryption buffer size");
    }

    // Perform decryption
    std::vector<uint8_t> decrypted(cbResult);
    status = BCryptDecrypt(
        hKey,
        encryptedData.data(),
        static_cast<ULONG>(encryptedData.size()),
        nullptr,
        iv.data(),
        static_cast<ULONG>(iv.size()),
        decrypted.data(),
        static_cast<ULONG>(decrypted.size()),
        &cbResult,
        BCRYPT_BLOCK_PADDING);

    BCryptDestroyKey(hKey);
    BCryptCloseAlgorithmProvider(hAlgorithm, 0);

    if (!BCRYPT_SUCCESS(status))
    {
        throw std::runtime_error("Failed to decrypt data - possibly wrong key or corrupted data");
    }

    decrypted.resize(cbResult);
    return std::string(decrypted.begin(), decrypted.end());
}

std::wstring GameTweakValidator::stringToWString(const std::string& str)
{
    if (str.empty()) return std::wstring();
    int size_needed = MultiByteToWideChar(CP_UTF8, 0, &str[0], (int)str.size(), NULL, 0);
    std::wstring wstrTo(size_needed, 0);
    MultiByteToWideChar(CP_UTF8, 0, &str[0], (int)str.size(), &wstrTo[0], size_needed);
    return wstrTo;
}

std::string GameTweakValidator::wStringToString(const std::wstring& wstr)
{
    if (wstr.empty()) return std::string();
    int size_needed = WideCharToMultiByte(CP_UTF8, 0, &wstr[0], (int)wstr.size(), NULL, 0, NULL, NULL);
    std::string strTo(size_needed, 0);
    WideCharToMultiByte(CP_UTF8, 0, &wstr[0], (int)wstr.size(), &strTo[0], size_needed, NULL, NULL);
    return strTo;
}

std::string GameTweakValidator::httpGet(const std::string& url)
{
    // Parse URL
    std::string hostname, path;
    size_t hostnameStart = url.find("://") + 3;
    size_t pathStart = url.find('/', hostnameStart);

    hostname = url.substr(hostnameStart, pathStart - hostnameStart);
    path = url.substr(pathStart);

    // Initialize WinHTTP
    HINTERNET hSession = WinHttpOpen(L"GameTweak Validator/1.0",
        WINHTTP_ACCESS_TYPE_DEFAULT_PROXY, WINHTTP_NO_PROXY_NAME, WINHTTP_NO_PROXY_BYPASS, 0);

    if (!hSession) throw std::runtime_error("WinHttpOpen failed");

    std::wstring wHostname = stringToWString(hostname);
    HINTERNET hConnect = WinHttpConnect(hSession, wHostname.c_str(), INTERNET_DEFAULT_HTTPS_PORT, 0);

    if (!hConnect)
    {
        WinHttpCloseHandle(hSession);
        throw std::runtime_error("WinHttpConnect failed");
    }

    std::wstring wPath = stringToWString(path);
    HINTERNET hRequest = WinHttpOpenRequest(hConnect, L"GET", wPath.c_str(),
        NULL, WINHTTP_NO_REFERER, WINHTTP_DEFAULT_ACCEPT_TYPES, WINHTTP_FLAG_SECURE);

    if (!hRequest)
    {
        WinHttpCloseHandle(hConnect);
        WinHttpCloseHandle(hSession);
        throw std::runtime_error("WinHttpOpenRequest failed");
    }

    // Disable SSL certificate checking for development
    DWORD dwSSLFlags = SECURITY_FLAG_IGNORE_UNKNOWN_CA |
        SECURITY_FLAG_IGNORE_CERT_WRONG_USAGE |
        SECURITY_FLAG_IGNORE_CERT_CN_INVALID |
        SECURITY_FLAG_IGNORE_CERT_DATE_INVALID;

    WinHttpSetOption(hRequest, WINHTTP_OPTION_SECURITY_FLAGS, &dwSSLFlags, sizeof(dwSSLFlags));

    // Set headers
    std::wstring headers = L"Content-Type: application/json\r\n";
    headers += L"X-Sec-Id-Head: " + stringToWString(hwid) + L"\r\n";
    if (!accessToken.empty())
    {
        headers += L"Authorization: Bearer " + stringToWString(accessToken) + L"\r\n";
    }

    // Send request
    if (!WinHttpSendRequest(hRequest, headers.c_str(), (DWORD)headers.length(), NULL, 0, 0, 0))
    {
        WinHttpCloseHandle(hRequest);
        WinHttpCloseHandle(hConnect);
        WinHttpCloseHandle(hSession);
        throw std::runtime_error("WinHttpSendRequest failed");
    }

    if (!WinHttpReceiveResponse(hRequest, NULL))
    {
        WinHttpCloseHandle(hRequest);
        WinHttpCloseHandle(hConnect);
        WinHttpCloseHandle(hSession);
        throw std::runtime_error("WinHttpReceiveResponse failed");
    }

    // Check status code
    DWORD dwStatusCode = 0;
    DWORD dwSize = sizeof(dwStatusCode);
    WinHttpQueryHeaders(hRequest, WINHTTP_QUERY_STATUS_CODE | WINHTTP_QUERY_FLAG_NUMBER,
        WINHTTP_HEADER_NAME_BY_INDEX, &dwStatusCode, &dwSize, WINHTTP_NO_HEADER_INDEX);

    // Read response
    std::string response;
    DWORD dwDownloaded = 0;
    do
    {
        dwSize = 0;
        if (!WinHttpQueryDataAvailable(hRequest, &dwSize)) break;
        if (dwSize == 0) break;

        std::vector<char> buffer(dwSize);
        if (!WinHttpReadData(hRequest, buffer.data(), dwSize, &dwDownloaded)) break;
        response.append(buffer.data(), dwDownloaded);
    } while (dwSize > 0);

    WinHttpCloseHandle(hRequest);
    WinHttpCloseHandle(hConnect);
    WinHttpCloseHandle(hSession);

    if (dwStatusCode != 200)
    {
        throw std::runtime_error("HTTP request failed with status: " + std::to_string(dwStatusCode));
    }

    return response;
}

std::string GameTweakValidator::createEncryptedRequest(const std::string& jsonData)
{
    std::string encryptedData = encrypt(jsonData);
    return "{\"Data\":\"" + encryptedData + "\",\"Timestamp\":\"" + getTimestamp() + "\"}";
}

std::string GameTweakValidator::parseEncryptedResponse(const std::string& response)
{
    // Simple JSON parsing for the data field
    size_t dataStart = response.find("\"data\":\"");
    if (dataStart == std::string::npos)
    {
        dataStart = response.find("\"Data\":\"");
        if (dataStart == std::string::npos)
        {
            throw std::runtime_error("No data field found in response");
        }
        dataStart += 8; // "Data":"
    }
    else
    {
        dataStart += 8; // "data":"
    }

    size_t dataEnd = response.find("\"", dataStart);
    if (dataEnd == std::string::npos)
    {
        throw std::runtime_error("Invalid JSON format");
    }

    std::string encryptedData = response.substr(dataStart, dataEnd - dataStart);
    return decrypt(encryptedData);
}

bool GameTweakValidator::validateToken()
{
    if (!isLoggedIn())
    {
        return false;
    }

    try
    {
        std::string response = httpGet(baseUrl + "/api/v1/eba61a81-6dad-4cd3-a667-0305ec473886/5aaa76a3-23e2-42b2-b6a9-c81720592170");
        std::string decryptedResponse = parseEncryptedResponse(response);
        return true; // If we get here, the token is valid
    }
    catch (const std::exception&)
    {
        accessToken.clear(); // Clear invalid token
        return false;
    }
}