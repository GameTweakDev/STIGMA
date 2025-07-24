//#pragma once
//
//#include <string>
//#include <vector>
//#include <fstream>
//#include <filesystem>
//
//class SimpleConfigManager
//{
//private:
//    std::string config_directory;
//    std::string current_config;
//
//    void EnsureConfigDirectory();
//    std::string SanitizeFilename(const std::string& filename);
//
//public:
//    SimpleConfigManager();
//    ~SimpleConfigManager() = default;
//
//    // Generic save/load - works with ANY structure
//    template<typename T>
//    bool SaveConfig(const std::string& name, const T& settings_data);
//
//    template<typename T>
//    bool LoadConfig(const std::string& name, T& settings_data);
//
//    // Config management
//    bool DeleteConfig(const std::string& name);
//    std::vector<std::string> GetConfigList();
//    bool ConfigExists(const std::string& name);
//    std::string GetCurrentConfig() const;
//
//    // Utility functions
//    void EnsureDefaultConfig();
//    void SetConfigDirectory(const std::string& directory);
//};
//
//// Template implementations must be in header
//template<typename T>
//bool SimpleConfigManager::SaveConfig(const std::string& name, const T& settings_data)
//{
//    if (name.empty())
//        return false;
//
//    std::string filepath = config_directory + SanitizeFilename(name) + ".cfg";
//    std::ofstream file(filepath, std::ios::binary);
//
//    if (!file.is_open())
//        return false;
//
//    try
//    {
//        // Write the entire structure as binary data
//        file.write(reinterpret_cast<const char*>(&settings_data), sizeof(T));
//        file.close();
//        current_config = name;
//        return true;
//    }
//    catch (const std::exception&)
//    {
//        return false;
//    }
//}
//
//template<typename T>
//bool SimpleConfigManager::LoadConfig(const std::string& name, T& settings_data)
//{
//    std::string filepath = config_directory + SanitizeFilename(name) + ".cfg";
//
//    if (!std::filesystem::exists(filepath))
//        return false;
//
//    std::ifstream file(filepath, std::ios::binary);
//    if (!file.is_open())
//        return false;
//
//    try
//    {
//        // Read the entire structure as binary data
//        file.read(reinterpret_cast<char*>(&settings_data), sizeof(T));
//        file.close();
//        current_config = name;
//        return true;
//    }
//    catch (const std::exception&)
//    {
//        return false;
//    }
//}