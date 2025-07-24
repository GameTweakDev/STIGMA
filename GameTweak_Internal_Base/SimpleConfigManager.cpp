//#include <filesystem>
//#include "SimpleConfigManager.h"
//#include "Settings.h"
//#include <fstream>
//#include <algorithm>
//
//// Define the global settings instance
//settings g_settings;
//
//SimpleConfigManager::SimpleConfigManager()
//    : config_directory("configs/"), current_config("")
//{
//    EnsureConfigDirectory();
//}
//
//void SimpleConfigManager::EnsureConfigDirectory()
//{
//    if (!std::filesystem::exists(config_directory))
//    {
//        std::filesystem::create_directories(config_directory);
//    }
//}
//
//std::string SimpleConfigManager::SanitizeFilename(const std::string& filename)
//{
//    std::string sanitized = filename;
//    std::string invalid_chars = "<>:\"/\\|?*";
//
//    for (char c : invalid_chars)
//    {
//        sanitized.erase(std::remove(sanitized.begin(), sanitized.end(), c), sanitized.end());
//    }
//
//    return sanitized;
//}
//
//bool SimpleConfigManager::DeleteConfig(const std::string& name)
//{
//    if (name.empty() || name == "default")
//        return false; // Protect default config
//
//    std::string filepath = config_directory + SanitizeFilename(name) + ".cfg";
//
//    try
//    {
//        return std::filesystem::remove(filepath);
//    }
//    catch (const std::exception&)
//    {
//        return false;
//    }
//}
//
//std::vector<std::string> SimpleConfigManager::GetConfigList()
//{
//    std::vector<std::string> configs;
//
//    if (!std::filesystem::exists(config_directory))
//        return configs;
//
//    try
//    {
//        for (const auto& entry : std::filesystem::directory_iterator(config_directory))
//        {
//            if (entry.is_regular_file() && entry.path().extension() == ".cfg")
//            {
//                configs.push_back(entry.path().stem().string());
//            }
//        }
//
//        // Sort alphabetically
//        std::sort(configs.begin(), configs.end());
//    }
//    catch (const std::exception&)
//    {
//        // Return empty vector if directory iteration fails
//    }
//
//    return configs;
//}
//
//bool SimpleConfigManager::ConfigExists(const std::string& name)
//{
//    if (name.empty())
//        return false;
//
//    std::string filepath = config_directory + SanitizeFilename(name) + ".cfg";
//    return std::filesystem::exists(filepath);
//}
//
//std::string SimpleConfigManager::GetCurrentConfig() const
//{
//    return current_config;
//}
//
//void SimpleConfigManager::EnsureDefaultConfig()
//{
//    if (!ConfigExists("default"))
//    {
//        SaveConfig("default", g_settings);
//    }
//}
//
//void SimpleConfigManager::SetConfigDirectory(const std::string& directory)
//{
//    config_directory = directory;
//    if (!config_directory.empty() && config_directory.back() != '/' && config_directory.back() != '\\')
//    {
//        config_directory += "/";
//    }
//    EnsureConfigDirectory();
//}