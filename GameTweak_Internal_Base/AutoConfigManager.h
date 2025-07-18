#pragma once

#include <string>
#include <vector>
#include <fstream>
#include <filesystem>
#include <unordered_map>
#include <type_traits>
#include <sstream>
#include <boost/pfr.hpp>

// Forward declaration of your settings struct
struct settings;

class AutoConfigManager
{
private:
    std::string config_directory;
    std::string current_config;
    static constexpr int CONFIG_VERSION = 2;

    void EnsureConfigDirectory();
    std::string SanitizeFilename(const std::string& filename);

    // Enhanced field-based serialization using Boost.PFR
    template<typename T>
    void SerializeStruct(const T& obj, std::ostream& out, const std::string& prefix = "");

    template<typename T>
    void DeserializeStruct(T& obj, const std::unordered_map<std::string, std::string>& fields, const std::string& prefix = "");

    // Type-safe value serialization with type information
    template<typename T>
    void SerializeField(const T& value, std::ostream& out, const std::string& key);

    // Helper functions
    std::unordered_map<std::string, std::string> ReadKeyValuePairs(std::ifstream& file);
    void WriteKeyValue(std::ostream& out, const std::string& key, const std::string& value);

    // Debug helpers
    void WriteDebugLog(const std::string& message);
    void DebugSerialize(const std::string& struct_name, size_t field_count);
    void DebugDeserialize(const std::string& struct_name, const std::unordered_map<std::string, std::string>& fields);

    // Type signature generation for field matching
    template<typename T>
    std::string GetTypeSignature();

    // Field key generation with type info for stability
    template<typename T>
    std::string GenerateFieldKey(size_t index, const T& field_value, const std::string& prefix = "");

public:
    AutoConfigManager();
    ~AutoConfigManager() = default;

    // Completely automatic save/load using Boost.PFR
    template<typename T>
    bool SaveConfig(const std::string& name, const T& settings_data);

    template<typename T>
    bool LoadConfig(const std::string& name, T& settings_data);

    // Config management
    bool DeleteConfig(const std::string& name);
    std::vector<std::string> GetConfigList();
    bool ConfigExists(const std::string& name);
    std::string GetCurrentConfig() const;

    // Utility functions
    template<typename T>
    void EnsureDefaultConfig(const T& default_settings);
    void EnsureDefaultConfig(); // Uses global g_settings
    void SetConfigDirectory(const std::string& directory);
};

// Template implementations

template<typename T>
std::string AutoConfigManager::GetTypeSignature()
{
    if constexpr (std::is_same_v<T, bool>) return "b";
    else if constexpr (std::is_same_v<T, int>) return "i";
    else if constexpr (std::is_same_v<T, float>) return "f";
    else if constexpr (std::is_same_v<T, double>) return "d";
    else if constexpr (std::is_same_v<T, std::string>) return "s";
    else if constexpr (std::is_array_v<T>) {
        using ElementType = std::remove_extent_t<T>;
        if constexpr (std::is_same_v<ElementType, float>) return "af";
        else if constexpr (std::is_same_v<ElementType, int>) return "ai";
        else if constexpr (std::is_same_v<ElementType, double>) return "ad";
        else if constexpr (std::is_same_v<ElementType, bool>) return "ab";
        else return "a";
    }
    else if constexpr (std::is_aggregate_v<T>) return "o";
    else return "u";
}

template<typename T>
std::string AutoConfigManager::GenerateFieldKey(size_t index, const T& field_value, const std::string& prefix)
{
    // Create a stable key based on type signature and index
    std::string type_sig = GetTypeSignature<std::decay_t<T>>();
    return prefix + type_sig + "_" + std::to_string(index);
}

template<typename T>
void AutoConfigManager::SerializeField(const T& value, std::ostream& out, const std::string& key)
{
    std::string serialized_value;

    if constexpr (std::is_same_v<T, bool>) {
        serialized_value = value ? "1" : "0";
    }
    else if constexpr (std::is_arithmetic_v<T>) {
        serialized_value = std::to_string(value);
    }
    else if constexpr (std::is_same_v<T, std::string>) {
        serialized_value = value;
    }
    else if constexpr (std::is_array_v<T>) {
        std::ostringstream oss;
        oss << "[";
        for (size_t i = 0; i < std::extent_v<T>; ++i) {
            if (i > 0) oss << ",";
            using ElementType = std::remove_extent_t<T>;
            if constexpr (std::is_same_v<ElementType, float>) {
                oss << std::to_string(value[i]);
            }
            else if constexpr (std::is_same_v<ElementType, double>) {
                oss << std::to_string(value[i]);
            }
            else if constexpr (std::is_same_v<ElementType, int>) {
                oss << std::to_string(value[i]);
            }
            else if constexpr (std::is_same_v<ElementType, bool>) {
                oss << (value[i] ? "1" : "0");
            }
            else if constexpr (std::is_same_v<ElementType, std::string>) {
                oss << value[i];
            }
            else {
                oss << "0"; // fallback for unknown types
            }
        }
        oss << "]";
        serialized_value = oss.str();
    }
    else {
        // For complex types, mark as nested (will be handled by SerializeStruct)
        serialized_value = "nested";
    }

    WriteDebugLog("SerializeField: " + key + " = " + serialized_value);
    WriteKeyValue(out, key, serialized_value);
}



template<typename T>
void AutoConfigManager::SerializeStruct(const T& obj, std::ostream& out, const std::string& prefix)
{
    if constexpr (std::is_aggregate_v<T> && !std::is_array_v<T>) {
        try {
            constexpr size_t field_count = boost::pfr::tuple_size_v<T>;

            // Debug logging
            WriteDebugLog("SerializeStruct: " + prefix + " with " + std::to_string(field_count) + " fields");

            // Only save field count for root struct (empty prefix)
            if (prefix.empty()) {
                WriteKeyValue(out, "field_count", std::to_string(field_count));
            }

            size_t field_index = 0;

            boost::pfr::for_each_field(obj, [&](const auto& field) {
                using FieldType = std::decay_t<decltype(field)>;

                // Skip const char* pointers and other pointers
                if constexpr (std::is_same_v<FieldType, const char*> || std::is_pointer_v<FieldType>) {
                    WriteDebugLog("Skipping pointer field at index " + std::to_string(field_index));
                    field_index++;
                    return;
                }

                std::string field_key = GenerateFieldKey(field_index, field, prefix);
                WriteDebugLog("Serializing field: " + field_key + " (type: " + GetTypeSignature<FieldType>() + ")");

                if constexpr (std::is_aggregate_v<FieldType> && !std::is_array_v<FieldType> &&
                    !std::is_arithmetic_v<FieldType> && !std::is_same_v<FieldType, std::string>) {
                    // Handle nested structs - add underscore separator
                    WriteDebugLog("Nested struct detected for field " + field_key);
                    SerializeStruct(field, out, field_key + "_");
                }
                else {
                    // Serialize regular fields
                    SerializeField(field, out, field_key);
                }

                field_index++;
                });
        }
        catch (const std::exception& e) {
            WriteDebugLog("Exception in SerializeStruct: " + std::string(e.what()));
        }
        catch (...) {
            WriteDebugLog("Unknown exception in SerializeStruct");
        }
    }
}

template<typename T>
constexpr const T& my_min(const T& a, const T& b) {
    return (b < a) ? b : a;
}

template<typename T>
void AutoConfigManager::DeserializeStruct(T& obj, const std::unordered_map<std::string, std::string>& fields, const std::string& prefix)
{
    if constexpr (std::is_aggregate_v<T> && !std::is_array_v<T>) {
        try {
            constexpr size_t current_field_count = boost::pfr::tuple_size_v<T>;

            WriteDebugLog("DeserializeStruct: " + prefix + " expecting " + std::to_string(current_field_count) + " fields");
            WriteDebugLog("Available fields count: " + std::to_string(fields.size()));

            // Check saved field count only for root struct
            if (prefix.empty()) {
                auto field_count_it = fields.find("field_count");
                if (field_count_it != fields.end()) {
                    WriteDebugLog("Saved field count: " + field_count_it->second);
                }
            }

            size_t field_index = 0;

            boost::pfr::for_each_field(obj, [&](auto& field) {
                using FieldType = std::decay_t<decltype(field)>;

                // Skip const char* pointers
                if constexpr (std::is_same_v<FieldType, const char*>) {
                    WriteDebugLog("Skipping const char* field at index " + std::to_string(field_index));
                    field_index++;
                    return;
                }
                else if constexpr (std::is_pointer_v<FieldType>) {
                    WriteDebugLog("Setting pointer field to nullptr at index " + std::to_string(field_index));
                   // field = nullptr;
                    field_index++;
                    return;
                }

                std::string field_key = GenerateFieldKey(field_index, field, prefix);
                WriteDebugLog("Looking for field: " + field_key + " (type: " + GetTypeSignature<FieldType>() + ")");

                if constexpr (std::is_aggregate_v<FieldType> && !std::is_array_v<FieldType> &&
                    !std::is_arithmetic_v<FieldType> && !std::is_same_v<FieldType, std::string>) {
                    // Handle nested structs
                    WriteDebugLog("Processing nested struct for field " + field_key);
                    DeserializeStruct(field, fields, field_key + "_");
                }
                else if constexpr (std::is_array_v<FieldType>) {
                    // Handle arrays specially since we can't assign to them directly
                    auto it = fields.find(field_key);
                    if (it != fields.end()) {
                        WriteDebugLog("Found array field " + field_key + " = " + it->second);
                        const std::string& str = it->second;
                        if (!str.empty() && str != "nested" && str.length() >= 2 && str.front() == '[' && str.back() == ']') {
                            std::string content = str.substr(1, str.length() - 2);

                            // Handle comma-separated values
                            std::vector<std::string> tokens;
                            std::stringstream ss(content);
                            std::string token;
                            while (std::getline(ss, token, ',')) {
                                // Trim whitespace
                                token.erase(0, token.find_first_not_of(" \t"));
                                token.erase(token.find_last_not_of(" \t") + 1);
                                tokens.push_back(token);
                            }

                            size_t max_elements = my_min(tokens.size(), static_cast<size_t>(std::extent_v<FieldType>));
                            WriteDebugLog("Array has " + std::to_string(tokens.size()) + " elements, will load " + std::to_string(max_elements));

                            for (size_t i = 0; i < max_elements; ++i) {
                                try {
                                    using ElementType = std::remove_extent_t<FieldType>;
                                    if constexpr (std::is_same_v<ElementType, int>) {
                                        field[i] = std::stoi(tokens[i]);
                                        WriteDebugLog("Array[" + std::to_string(i) + "] = " + std::to_string(field[i]) + " (int)");
                                    }
                                    else if constexpr (std::is_same_v<ElementType, float>) {
                                        field[i] = std::stof(tokens[i]);
                                        WriteDebugLog("Array[" + std::to_string(i) + "] = " + std::to_string(field[i]) + " (float)");
                                    }
                                    else if constexpr (std::is_same_v<ElementType, double>) {
                                        field[i] = std::stod(tokens[i]);
                                        WriteDebugLog("Array[" + std::to_string(i) + "] = " + std::to_string(field[i]) + " (double)");
                                    }
                                    else if constexpr (std::is_same_v<ElementType, bool>) {
                                        field[i] = (tokens[i] == "1" || tokens[i] == "true");
                                        WriteDebugLog("Array[" + std::to_string(i) + "] = " + std::to_string(field[i]) + " (bool)");
                                    }
                                    else if constexpr (std::is_same_v<ElementType, std::string>) {
                                        field[i] = tokens[i];
                                        WriteDebugLog("Array[" + std::to_string(i) + "] = " + field[i] + " (string)");
                                    }
                                }
                                catch (const std::exception& e) {
                                    WriteDebugLog("Failed to parse array element " + std::to_string(i) + ": " + tokens[i] + " - " + e.what());
                                }
                            }
                        }
                        else {
                            WriteDebugLog("Array field " + field_key + " has invalid format: " + str);
                        }
                    }
                    else {
                        WriteDebugLog("Array field " + field_key + " not found in config");
                    }
                }
                else {
                    // Deserialize regular fields using explicit type
                    auto it = fields.find(field_key);
                    if (it != fields.end()) {
                        const std::string& str = it->second;
                        WriteDebugLog("Found field " + field_key + " = " + str);
                        if (!str.empty() && str != "nested") {
                            try {
                                if constexpr (std::is_same_v<FieldType, bool>) {
                                    field = (str == "1" || str == "true");
                                    WriteDebugLog("Loaded bool: " + std::to_string(field));
                                }
                                else if constexpr (std::is_same_v<FieldType, int>) {
                                    field = std::stoi(str);
                                    WriteDebugLog("Loaded int: " + std::to_string(field));
                                }
                                else if constexpr (std::is_same_v<FieldType, float>) {
                                    field = std::stof(str);
                                    WriteDebugLog("Loaded float: " + std::to_string(field) + " from string: " + str);
                                    // Special debug for values around 130
                                    if (field > 120.0f && field < 140.0f) {
                                        WriteDebugLog("*** FOUND TARGET FLOAT: " + std::to_string(field) + " ***");
                                    }
                                }
                                else if constexpr (std::is_same_v<FieldType, double>) {
                                    field = std::stod(str);
                                    WriteDebugLog("Loaded double: " + std::to_string(field));
                                }
                                else if constexpr (std::is_same_v<FieldType, std::string>) {
                                    field = str;
                                    WriteDebugLog("Loaded string: " + field);
                                }
                            }
                            catch (const std::exception& e) {
                                WriteDebugLog("Failed to convert field " + field_key + ": " + e.what());
                            }
                        }
                    }
                    else {
                        WriteDebugLog("Field " + field_key + " not found in config - keeping default");
                    }
                }

                field_index++;
                });
        }
        catch (const std::exception& e) {
            WriteDebugLog("Exception in DeserializeStruct: " + std::string(e.what()));
        }
        catch (...) {
            WriteDebugLog("Unknown exception in DeserializeStruct");
        }
    }
}

template<typename T>
bool AutoConfigManager::SaveConfig(const std::string& name, const T& settings_data)
{
    if (name.empty()) return false;

    WriteDebugLog("=== SAVE CONFIG START ===");
    WriteDebugLog("Config name: " + name);
    WriteDebugLog("Type: " + std::string(typeid(T).name()));

    std::string filepath = config_directory + SanitizeFilename(name) + ".cfg";
    std::ofstream file(filepath);
    if (!file.is_open()) {
        WriteDebugLog("ERROR: Could not open file for writing: " + filepath);
        return false;
    }

    try {
        // Write metadata
        WriteKeyValue(file, "CONFIG_VERSION", std::to_string(CONFIG_VERSION));
        WriteKeyValue(file, "TYPE_NAME", typeid(T).name());

        if constexpr (std::is_aggregate_v<T> && !std::is_array_v<T>) {
            WriteKeyValue(file, "STRUCT_FIELD_COUNT", std::to_string(boost::pfr::tuple_size_v<T>));
            WriteDebugLog("Total fields in struct: " + std::to_string(boost::pfr::tuple_size_v<T>));
        }

        file << "\n"; // Blank line for readability

        // Serialize all fields
        SerializeStruct(settings_data, file);

        file.close();
        current_config = name;
        WriteDebugLog("=== SAVE CONFIG SUCCESS ===");
        return true;
    }
    catch (const std::exception& e) {
        WriteDebugLog("ERROR: Exception during save: " + std::string(e.what()));
        return false;
    }
}

template<typename T>
bool AutoConfigManager::LoadConfig(const std::string& name, T& settings_data)
{
    WriteDebugLog("=== LOAD CONFIG START ===");
    WriteDebugLog("Config name: " + name);

    std::string filepath = config_directory + SanitizeFilename(name) + ".cfg";
    if (!std::filesystem::exists(filepath)) {
        WriteDebugLog("ERROR: Config file does not exist: " + filepath);
        return false;
    }

    std::ifstream file(filepath);
    if (!file.is_open()) {
        WriteDebugLog("ERROR: Could not open file for reading: " + filepath);
        return false;
    }

    try {
        // Read all key-value pairs
        auto fields = ReadKeyValuePairs(file);
        WriteDebugLog("Read " + std::to_string(fields.size()) + " key-value pairs from config");

        // Check version compatibility
        int config_version = 1;
        if (fields.find("CONFIG_VERSION") != fields.end()) {
            config_version = std::stoi(fields["CONFIG_VERSION"]);
            WriteDebugLog("Config version: " + std::to_string(config_version));
        }

        // Debug all loaded fields
        DebugDeserialize(typeid(T).name(), fields);

        // Deserialize all fields
        DeserializeStruct(settings_data, fields);

        file.close();
        current_config = name;
        WriteDebugLog("=== LOAD CONFIG SUCCESS ===");
        return true;
    }
    catch (const std::exception& e) {
        WriteDebugLog("ERROR: Exception during load: " + std::string(e.what()));
        return false;
    }
}

template<typename T>
void AutoConfigManager::EnsureDefaultConfig(const T& default_settings)
{
    if (!ConfigExists("default")) {
        SaveConfig("default", default_settings);
    }
}