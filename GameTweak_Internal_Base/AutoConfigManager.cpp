#include <filesystem>
#include "AutoConfigManager.h"
#include "Settings.h"
#include <fstream>
#include <algorithm>
#include <sstream>

// Define the global settings instance
settings g_settings;

AutoConfigManager::AutoConfigManager()
    : config_directory("configs/"), current_config("")
{
    EnsureConfigDirectory();
}

void AutoConfigManager::WriteDebugLog(const std::string& message)
{
    try {
        std::string debug_filepath = config_directory + "debug.log";
        std::ofstream debug_file(debug_filepath, std::ios::app);
        if (debug_file.is_open()) {
            debug_file << message << std::endl;
            debug_file.close();
        }
    }
    catch (...) {
        // Ignore debug logging errors
    }
}

void AutoConfigManager::DebugSerialize(const std::string& struct_name, size_t field_count)
{
    WriteDebugLog("=== SERIALIZE START ===");
    WriteDebugLog("Struct: " + struct_name);
    WriteDebugLog("Field count: " + std::to_string(field_count));
}

void AutoConfigManager::DebugDeserialize(const std::string& struct_name, const std::unordered_map<std::string, std::string>& fields)
{
    WriteDebugLog("=== DESERIALIZE START ===");
    WriteDebugLog("Struct: " + struct_name);
    WriteDebugLog("Config fields found: " + std::to_string(fields.size()));
    for (const auto& [key, value] : fields) {
        WriteDebugLog("  " + key + " = " + value);
    }
}

void AutoConfigManager::EnsureConfigDirectory()
{
    if (!std::filesystem::exists(config_directory))
    {
        std::filesystem::create_directories(config_directory);
    }

    // Clear debug log on startup
    try {
        std::string debug_filepath = config_directory + "debug.log";
        std::ofstream debug_file(debug_filepath, std::ios::trunc);
        if (debug_file.is_open()) {
            debug_file << "=== AutoConfigManager Debug Log ===" << std::endl;
            debug_file.close();
        }
    }
    catch (...) {
        // Ignore debug setup errors
    }
}

std::string AutoConfigManager::SanitizeFilename(const std::string& filename)
{
    std::string sanitized = filename;
    std::string invalid_chars = "<>:\"/\\|?*";

    for (char c : invalid_chars)
    {
        sanitized.erase(std::remove(sanitized.begin(), sanitized.end(), c), sanitized.end());
    }

    return sanitized;
}

void AutoConfigManager::WriteKeyValue(std::ostream& out, const std::string& key, const std::string& value)
{
    out << key << "=" << value << "\n";
}

std::unordered_map<std::string, std::string> AutoConfigManager::ReadKeyValuePairs(std::ifstream& file)
{
    std::unordered_map<std::string, std::string> fields;
    std::string line;

    while (std::getline(file, line)) {
        // Skip empty lines and comments
        if (line.empty() || line[0] == '#') continue;

        // Find the first equals sign
        size_t equals_pos = line.find('=');
        if (equals_pos != std::string::npos) {
            std::string key = line.substr(0, equals_pos);
            std::string value = line.substr(equals_pos + 1);

            // Trim whitespace from key and value
            key.erase(0, key.find_first_not_of(" \t"));
            key.erase(key.find_last_not_of(" \t") + 1);
            value.erase(0, value.find_first_not_of(" \t"));
            value.erase(value.find_last_not_of(" \t") + 1);

            fields[key] = value;
        }
    }

    return fields;
}

bool AutoConfigManager::DeleteConfig(const std::string& name)
{
    if (name.empty() || name == "default")
        return false; // Protect default config

    std::string filepath = config_directory + SanitizeFilename(name) + ".cfg";

    try
    {
        return std::filesystem::remove(filepath);
    }
    catch (const std::exception&)
    {
        return false;
    }
}

std::vector<std::string> AutoConfigManager::GetConfigList()
{
    std::vector<std::string> configs;

    if (!std::filesystem::exists(config_directory))
        return configs;

    try
    {
        for (const auto& entry : std::filesystem::directory_iterator(config_directory))
        {
            if (entry.is_regular_file() && entry.path().extension() == ".cfg")
            {
                configs.push_back(entry.path().stem().string());
            }
        }

        // Sort alphabetically
        std::sort(configs.begin(), configs.end());
    }
    catch (const std::exception&)
    {
        // Return empty vector if directory iteration fails
    }

    return configs;
}

bool AutoConfigManager::ConfigExists(const std::string& name)
{
    if (name.empty())
        return false;

    std::string filepath = config_directory + SanitizeFilename(name) + ".cfg";
    return std::filesystem::exists(filepath);
}

std::string AutoConfigManager::GetCurrentConfig() const
{
    return current_config;
}

void AutoConfigManager::EnsureDefaultConfig()
{
    if (!ConfigExists("default"))
    {
        SaveConfig("default", g_settings);
    }
}

void AutoConfigManager::SetConfigDirectory(const std::string& directory)
{
    config_directory = directory;
    if (!config_directory.empty() && config_directory.back() != '/' && config_directory.back() != '\\')
    {
        config_directory += "/";
    }
    EnsureConfigDirectory();
}