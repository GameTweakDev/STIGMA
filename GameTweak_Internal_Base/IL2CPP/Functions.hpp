#pragma once
#include "il2cpp.h"
#include <string>
#include <vector>
#include <cmath>
#include "../Utility.h"

namespace Functions
{
    // =============================================================================
    // FORWARD DECLARATIONS OF STRUCTURES
    // =============================================================================
    struct Vector3;
    struct Quaternion;
    struct ColorRGBA;
    enum class TextAnchor : int;

    // =============================================================================
    // UNITY STRUCTURES (moved before function pointers)
    // =============================================================================
    struct Vector3
    {
        float x, y, z;

        constexpr Vector3() noexcept : x(0), y(0), z(0)
        {
        }
        constexpr Vector3(float x_, float y_, float z_) noexcept : x(x_), y(y_), z(z_)
        {
        }

        constexpr Vector3 operator+(const Vector3& other) const noexcept
        {
            return Vector3(x + other.x, y + other.y, z + other.z);
        }

        constexpr Vector3 operator-(const Vector3& other) const noexcept
        {
            return Vector3(x - other.x, y - other.y, z - other.z);
        }

        constexpr Vector3 operator*(float scalar) const noexcept
        {
            return Vector3(x * scalar, y * scalar, z * scalar);
        }

        float Distance(const Vector3& other) const noexcept
        {
            const float dx = x - other.x;
            const float dy = y - other.y;
            const float dz = z - other.z;
            return std::sqrt(dx * dx + dy * dy + dz * dz);
        }

        static constexpr Vector3 Up() noexcept
        {
            return Vector3(0, 1, 0);
        }
        static constexpr Vector3 Zero() noexcept
        {
            return Vector3(0, 0, 0);
        }
    };

    struct Quaternion
    {
        float x, y, z, w;

        constexpr Quaternion() noexcept : x(0), y(0), z(0), w(1)
        {
        }
        constexpr Quaternion(float x_, float y_, float z_, float w_) noexcept : x(x_), y(y_), z(z_), w(w_)
        {
        }

        static constexpr Quaternion Identity() noexcept
        {
            return Quaternion(0, 0, 0, 1);
        }

        static Quaternion LookRotation(const Vector3& forward, const Vector3& upwards = Vector3::Up()) noexcept;
    };

    struct ColorRGBA
    {
        float R, G, B, A;

        constexpr ColorRGBA() noexcept : R(1), G(1), B(1), A(1)
        {
        }
        constexpr ColorRGBA(float r, float g, float b, float a = 1.0f) noexcept : R(r), G(g), B(b), A(a)
        {
        }
    };

    // TextAnchor enum values
    enum class TextAnchor : int
    {
        UpperLeft = 0,
        UpperCenter = 1,
        UpperRight = 2,
        MiddleLeft = 3,
        MiddleCenter = 4,
        MiddleRight = 5,
        LowerLeft = 6,
        LowerCenter = 7,
        LowerRight = 8
    };

    // =============================================================================
    // FUNCTION POINTERS (dereferenced once during initialization)
    // =============================================================================

    // GameObject function pointers
    static uintptr_t(*addComponent_func)(uintptr_t, uintptr_t) = nullptr;
    static void(*setActive_func)(uintptr_t, bool) = nullptr;
    static void(*internal_create_func)(uintptr_t, uintptr_t) = nullptr;
    static uintptr_t(*getComponentsInternal_func)(uintptr_t, uintptr_t, bool, bool, bool, bool, uintptr_t) = nullptr;
    static uintptr_t(*get_transform_func)(uintptr_t) = nullptr;
    static uintptr_t(*getComponent_func)(uintptr_t, uintptr_t) = nullptr;

    // Transform function pointers
    static Vector3(*get_position_func)(uintptr_t) = nullptr;
    static void(*set_position_func)(uintptr_t, Vector3) = nullptr;
    static Quaternion(*get_rotation_func)(uintptr_t) = nullptr;
    static void(*set_rotation_func)(uintptr_t, Quaternion) = nullptr;
    static Vector3(*get_localScale_func)(uintptr_t) = nullptr;
    static void(*set_localScale_func)(uintptr_t, Vector3) = nullptr;
    static void(*lookAt_func)(uintptr_t, Vector3) = nullptr;
    static void(*rotate_func)(uintptr_t, float, float, float) = nullptr;

    // TextMesh function pointers
    static uintptr_t(*get_text_func)(uintptr_t) = nullptr;
    static void(*set_text_func)(uintptr_t, uintptr_t) = nullptr;
    static int(*get_fontSize_func)(uintptr_t) = nullptr;
    static void(*set_fontSize_func)(uintptr_t, int) = nullptr;
    static TextAnchor(*get_anchor_func)(uintptr_t) = nullptr;
    static void(*set_anchor_func)(uintptr_t, TextAnchor) = nullptr;

    // Camera function pointers
    static uintptr_t(*get_main_camera_func)() = nullptr;
    static uintptr_t(*get_camera_transform_func)(uintptr_t) = nullptr;
    static Vector3(*worldToScreenPoint_func)(uintptr_t, Vector3) = nullptr;

    //Screen
    static int(*get_screen_width_func)() = nullptr;
    static int(*get_screen_height_func)() = nullptr;

    // Object function pointers
    static void(*dontDestroyOnLoad_func)(uintptr_t) = nullptr;
    static void(*destroy_func)(uintptr_t) = nullptr;
    static void(*destroyImmediate_func)(uintptr_t) = nullptr;
    static uintptr_t(*getName_property_func)(uintptr_t) = nullptr;
    static uintptr_t(*getName_static_func)(uintptr_t) = nullptr;

    // Quaternion function pointers
    static Quaternion(*lookRotation_func)(Vector3, Vector3) = nullptr;

    // Component function pointers
    static uintptr_t(*get_gameObject_func)(uintptr_t) = nullptr;

    // Renderer function pointers
    static uintptr_t(*get_material_func)(uintptr_t) = nullptr;

    // Material function pointers
    static void(*set_shader_func)(uintptr_t, uintptr_t) = nullptr;
    static void(*setInt_func)(uintptr_t, uintptr_t, int) = nullptr;
    static void(*setColor_func)(uintptr_t, uintptr_t, ColorRGBA) = nullptr;

    // Shader function pointers
    static uintptr_t(*find_shader_func)(uintptr_t) = nullptr;

    // GUI function pointers
    static void(*box_func)(void*, uintptr_t) = nullptr;
    static bool(*button_func)(void*, uintptr_t) = nullptr;
    static void(*label_func)(void*, uintptr_t) = nullptr;

    // ObscuredString function pointers
    static uintptr_t(*getDecrypted_func)(uintptr_t) = nullptr;

    // ObscuredFloat function pointers
    static float(*obscuredFloat_getDecrypted_func)(uintptr_t) = nullptr;
    static int(*obscuredFloat_encrypt_func)(float, int) = nullptr;
    static float(*obscuredFloat_decrypt_func)(int, int) = nullptr;
    static int(*obscuredFloat_getEncrypted_func)(uintptr_t, int*) = nullptr;
    static void(*obscuredFloat_setEncrypted_func)(uintptr_t, int, int) = nullptr;

    // ObscuredInt function pointers
    static int(*obscuredInt_getDecrypted_func)(uintptr_t) = nullptr;
    static int(*obscuredInt_encrypt_func)(int, int) = nullptr;
    static int(*obscuredInt_decrypt_func)(int, int) = nullptr;
    static int(*obscuredInt_getEncrypted_func)(uintptr_t, int*) = nullptr;
    static void(*obscuredInt_setEncrypted_func)(uintptr_t, int, int) = nullptr;

    // ObscuredBool function pointers
    static bool(*obscuredBool_getDecrypted_func)(uintptr_t) = nullptr;
    static int(*obscuredBool_encrypt_func)(bool, uint8_t) = nullptr;
    static bool(*obscuredBool_decrypt_func)(int, uint8_t) = nullptr;
    static int(*obscuredBool_getEncrypted_func)(uintptr_t, uint8_t*) = nullptr;
    static void(*obscuredBool_setEncrypted_func)(uintptr_t, int, uint8_t) = nullptr;

    // ObscuredVector2 function pointers
    static Vector3(*obscuredVector2_getDecrypted_func)(uintptr_t) = nullptr;
    static uintptr_t(*obscuredVector2_encrypt_func)(Vector3, int) = nullptr;
    static Vector3(*obscuredVector2_decrypt_func)(uintptr_t, int) = nullptr;
    static uintptr_t(*obscuredVector2_getEncrypted_func)(uintptr_t, int*) = nullptr;
    static void(*obscuredVector2_setEncrypted_func)(uintptr_t, uintptr_t, int) = nullptr;

    // ObscuredVector3 function pointers
    static Vector3(*obscuredVector3_getDecrypted_func)(uintptr_t) = nullptr;
    static uintptr_t(*obscuredVector3_encrypt_func)(Vector3, int) = nullptr;
    static Vector3(*obscuredVector3_decrypt_func)(uintptr_t, int) = nullptr;
    static uintptr_t(*obscuredVector3_getEncrypted_func)(uintptr_t, int*) = nullptr;
    static void(*obscuredVector3_setEncrypted_func)(uintptr_t, uintptr_t, int) = nullptr;

    // Cached objects and types
    static uintptr_t renderer_type = 0;
    static uintptr_t hidden_colored_shader = 0;
    static uintptr_t textMesh_type = 0;
    static uintptr_t transform_type = 0;
    static uintptr_t camera_type = 0;

    // =============================================================================
    // UNITY PROPERTY NAMES (static strings for performance)
    // =============================================================================
    namespace PropertyNames
    {
        inline uintptr_t ZTest()
        {
            static constexpr uint64_t _ZTest[] = {
                0x0,
                0x0,
                0x005A005F00000006, // "_ZTest" in UTF-16
                0x0074007300650054,
                0x0
            };
            return reinterpret_cast<uintptr_t>(_ZTest);
        }

        inline uintptr_t Color()
        {
            static constexpr uint64_t _Color[] = {
                0x0,
                0x0,
                0x0043005f00000006, // "_Color" in UTF-16 with length
                0x0072006f006c006f,
                0x0
            };
            return reinterpret_cast<uintptr_t>(_Color);
        }
    }

    // =============================================================================
    // CACHED OBJECTS
    // =============================================================================
    namespace Cache
    {
        inline uintptr_t GetRendererType() noexcept
        {
            return renderer_type;
        }
        inline uintptr_t GetHiddenColoredShader() noexcept
        {
            return hidden_colored_shader;
        }
        inline uintptr_t GetTextMeshType() noexcept
        {
            return textMesh_type;
        }
        inline uintptr_t GetTransformType() noexcept
        {
            return transform_type;
        }
        inline uintptr_t GetCameraType() noexcept
        {
            return camera_type;
        }
    }

    // =============================================================================
    // FORWARD DECLARATIONS
    // =============================================================================
    namespace GameObject
    {
        uintptr_t GetTransform(uintptr_t gameObject) noexcept;
        uintptr_t GetComponentsInternal(uintptr_t gameObject, uintptr_t type, bool useSearchTypeAsArrayReturnType, bool recursive, bool includeInactive, bool reverse, uintptr_t resultList) noexcept;
        std::string GetName(uintptr_t gameObject);
    }

    namespace Transform
    {
        Vector3 GetPosition(uintptr_t transform) noexcept;
    }

    namespace Component
    {
        uintptr_t GetGameObject(uintptr_t component) noexcept;
    }

    namespace Renderer
    {
        uintptr_t GetMaterial(uintptr_t renderer) noexcept;
    }

    namespace Material
    {
        void SetShader(uintptr_t material, uintptr_t shader) noexcept;
        void SetInt(uintptr_t material, uintptr_t propertyName, int value) noexcept;
        void SetColor(uintptr_t material, uintptr_t propertyName, const ColorRGBA& color) noexcept;
    }

    // =============================================================================
    // UTILITY FUNCTIONS
    // =============================================================================
    namespace Utils
    {
        uintptr_t CreateString(const char* str)
        {
            return il2cpp::methods::new_string(str);
        }

        uintptr_t CreateString(const std::string& str)
        {
            return il2cpp::methods::new_string(str.c_str());
        }

        template<typename T>
        constexpr T* SafeCast(uintptr_t address) noexcept
        {
            return address ? reinterpret_cast<T*>(address) : nullptr;
        }

        bool IsValidAddr(uintptr_t addr) noexcept
        {
            // Check for null or too low
            if (addr == 0 || addr < 0x10000) return false;

            // Check for common garbage patterns
            if (addr == 0xCCCCCCCCCCCCCCCC || addr == 0xDDDDDDDDDDDDDDDD ||
                addr == 0xFFFFFFFFFFFFFFFF) return false;

            // More realistic upper bound for 64-bit Windows process memory
            if (addr > 0x00007FFFFFFFFFFF) return false;  // User space limit

            return true;
        }

        static uintptr_t SafeRead(uintptr_t address)
        {
            if (IsValidAddr(address))
            {
                return *reinterpret_cast<uintptr_t*>(address);
            }
            else
            {
                return 0;
            }
        }

        // Validate Unity Object/Component - checks if m_CachedPtr is valid
        bool IsValidUnityObject(uintptr_t object) noexcept
        {
            if (object == 0) return false;

            // Check m_CachedPtr at offset 0x10
            const uintptr_t cachedPtr = SafeRead(object + 0x10);
            if (cachedPtr == 0) return false;

            // Additional sanity checks for the cached pointer
            // Make sure it's in a reasonable memory range
            if (cachedPtr < 0x10000 || cachedPtr > 0x7FFFFFFFFFFF) return false;

            return true;
        }

        // Validate and get singleton instance safely
        template<typename T>
        uintptr_t GetValidSingleton(const char* className) noexcept
        {
            const uintptr_t instance = il2cpp::offset(className, "instance", "", false);
            if (!IsValidUnityObject(instance)) return 0;
            return instance;
        }

        // Validate before reading any Unity object field
        uintptr_t SafeReadUnityField(uintptr_t object, uintptr_t fieldOffset) noexcept
        {
            if (!IsValidUnityObject(object)) return 0;
            return SafeRead(object + fieldOffset);
        }

        // Get position from any GameObject with validation
        Vector3 GetGameObjectPosition(uintptr_t gameObject) noexcept
        {
            if (!IsValidUnityObject(gameObject)) return Vector3::Zero();

            const uintptr_t transform = GameObject::GetTransform(gameObject);
            if (!IsValidUnityObject(transform)) return Vector3::Zero();

            return Transform::GetPosition(transform);
        }

        // Get position from any Component with validation
        Vector3 GetComponentPosition(uintptr_t component) noexcept
        {
            if (!IsValidUnityObject(component)) return Vector3::Zero();

            const uintptr_t gameObject = Component::GetGameObject(component);
            if (!IsValidUnityObject(gameObject)) return Vector3::Zero();

            return GetGameObjectPosition(gameObject);
        }

        // Get all renderers in a GameObject and its children with validation
        std::vector<uintptr_t> GetAllRenderersInChildren(uintptr_t gameObject)
        {
            std::vector<uintptr_t> renderers;
            if (!IsValidUnityObject(gameObject)) return renderers;

            const uintptr_t rendererArray = GameObject::GetComponentsInternal(
                gameObject,
                Cache::GetRendererType(),
                false,  // bool useSearchTypeAsArrayReturnType
                true,   // bool recursive (search children)
                true,   // bool includeInactive
                false,  // bool reverse  
                0       // object resultList (null = return array)
            );

            if (rendererArray != 0)
            {
                const int arraySize = SafeRead(rendererArray + 0x18);
                if (arraySize > 0 && arraySize < 100) // Safety check
                {
                    renderers.reserve(arraySize); // Pre-allocate for performance
                    for (int i = 0; i < arraySize; i++)
                    {
                        const uintptr_t renderer = SafeRead(rendererArray + 0x20 + (i * 0x8));
                        if (IsValidUnityObject(renderer))
                        {
                            renderers.push_back(renderer);
                        }
                    }
                }
            }

            return renderers;
        }

        // Apply material/chams to a GameObject with validation
        bool ApplyMaterial(uintptr_t gameObject, bool enableZTest, const ColorRGBA& color) noexcept
        {
            if (!IsValidUnityObject(gameObject)) return false;

            const auto renderers = GetAllRenderersInChildren(gameObject);
            if (renderers.empty()) return false;

            bool success = false;
            for (const uintptr_t renderer : renderers)
            {
                if (!IsValidUnityObject(renderer)) continue;

                // Get material from renderer
                const uintptr_t material = Renderer::GetMaterial(renderer);
                if (!IsValidUnityObject(material)) continue;

                try
                {
                    // Set the shader to Hidden/Internal-Colored
                    Material::SetShader(material, Cache::GetHiddenColoredShader());

                    // Set ZTest (8 = Always, 4 = LessEqual for normal depth testing)
                    const int zTestValue = enableZTest ? 4 : 8;
                    Material::SetInt(material, PropertyNames::ZTest(), zTestValue);

                    // Set Color
                    Material::SetColor(material, PropertyNames::Color(), color);

                    success = true;
                }
                catch (...)
                {
                    // Continue with other renderers if one fails
                    continue;
                }
            }

            return success;
        }

        // Get the class name with validation
        std::string GetNameClass(uintptr_t object)
        {
            if (!IsValidUnityObject(object)) return "INVALID_OBJECT";

            // object->vtable->class_name
            const uintptr_t vtable = *reinterpret_cast<uintptr_t*>(object);
            if (!vtable) return "NULL_VTABLE";

            const uintptr_t class_name_ptr = *reinterpret_cast<uintptr_t*>(vtable + 0x10);
            if (!class_name_ptr) return "NULL_CLASS_NAME";

            // Read null-terminated string
            std::string className;
            const char* namePtr = reinterpret_cast<const char*>(class_name_ptr);

            // Safety limit to prevent runaway reads
            for (int i = 0; i < 256; i++)
            {
                if (namePtr[i] == 0) break; // Null terminator
                className += namePtr[i];
            }

            return className;
        }

        // Unity Dictionary Helper with validation
        struct UnityDictionary
        {
            uintptr_t dict_ptr;
            uintptr_t entries;
            int count;
            bool valid;

            explicit UnityDictionary(uintptr_t dictionary_address) noexcept
                : dict_ptr(dictionary_address), entries(0), count(0), valid(false)
            {
                if (dict_ptr == 0) return;

                // Validate the dictionary object itself first
                if (!IsValidUnityObject(dict_ptr)) return;

                entries = SafeRead(dict_ptr + 0x0018);
                count = *reinterpret_cast<int*>(dict_ptr + 0x0020);
                valid = (entries != 0 && count > 0 && count < 10000); // Safety check
            }

            bool IsValid() const noexcept
            {
                return valid;
            }
            int GetCount() const noexcept
            {
                return count;
            }

            // Get entry at index - returns key and value pointers
            struct DictEntry
            {
                uintptr_t key_ptr;
                uintptr_t value_ptr;
                bool valid;

                DictEntry() noexcept : key_ptr(0), value_ptr(0), valid(false)
                {
                }
                DictEntry(uintptr_t k, uintptr_t v) noexcept : key_ptr(k), value_ptr(v), valid(k != 0 || v != 0)
                {
                }

                template<typename T>
                T GetKey() const noexcept
                {
                    return *reinterpret_cast<T*>(key_ptr);
                }

                template<typename T>
                T GetValue() const noexcept
                {
                    return *reinterpret_cast<T*>(value_ptr);
                }
            };

            DictEntry GetEntry(int index) const noexcept
            {
                if (!valid || index >= count || index < 0) return DictEntry();

                const uintptr_t entry_start = entries + 0x20 + (index * 0x18);
                const uintptr_t key_ptr = entry_start + 0x08;     // Key offset
                const uintptr_t value_ptr = entry_start + 0x10;   // Value offset

                return DictEntry(key_ptr, value_ptr);
            }

            // Iterator support for range-based loops
            struct Iterator
            {
                const UnityDictionary* dict;
                int index;

                Iterator(const UnityDictionary* d, int i) noexcept : dict(d), index(i)
                {
                }

                DictEntry operator*() const noexcept
                {
                    return dict->GetEntry(index);
                }
                Iterator& operator++() noexcept
                {
                    ++index; return *this;
                }
                bool operator!=(const Iterator& other) const noexcept
                {
                    return index != other.index;
                }
            };

            Iterator begin() const noexcept
            {
                return Iterator(this, 0);
            }
            Iterator end() const noexcept
            {
                return Iterator(this, count);
            }
        };


        std::string UnityStringToStd(uintptr_t unityStringPtr)
        {
            //auto Unity_string = SafeRead(unityStringPtr);
            int string_length = *reinterpret_cast<int*>(unityStringPtr + 0x10);

            if (string_length <= 0 || string_length >= 2560)
            {
                return "INVALID";
            }

            wchar_t* string_chars = reinterpret_cast<wchar_t*>(unityStringPtr + 0x14);
            if (!Functions::Utils::IsValidAddr(reinterpret_cast<uintptr_t>(string_chars)))
            {
                return "INVALID";
            }

            std::string result;
            result.clear();
            result.reserve(string_length);

            for (int i = 0; i < string_length; i++)
            {
                result += static_cast<char>(string_chars[i]);
            }

            return result;
        }
    }

    // =============================================================================
    // GAMEOBJECT FUNCTIONS
    // =============================================================================
    namespace GameObject
    {
        inline uintptr_t AddComponent(uintptr_t gameObject, uintptr_t componentType) noexcept
        {
            return addComponent_func ? addComponent_func(gameObject, componentType) : 0;
        }

        inline void SetActive(uintptr_t gameObject, bool active) noexcept
        {
            if (setActive_func) setActive_func(gameObject, active);
        }

        inline void InternalCreate(uintptr_t gameObject, uintptr_t name) noexcept
        {
            if (internal_create_func) internal_create_func(gameObject, name);
        }

        inline uintptr_t GetComponentsInternal(uintptr_t gameObject, uintptr_t type, bool useSearchTypeAsArrayReturnType, bool recursive, bool includeInactive, bool reverse, uintptr_t resultList) noexcept
        {
            return getComponentsInternal_func ? getComponentsInternal_func(gameObject, type, useSearchTypeAsArrayReturnType, recursive, includeInactive, reverse, resultList) : 0;
        }

        inline uintptr_t Create(const char* name = "")
        {
            const uintptr_t gameObject = il2cpp::methods::object_new(il2cpp::init_class("GameObject", "UnityEngine"));
            if (!gameObject) return 0;
            InternalCreate(gameObject, Utils::CreateString(name));
            return gameObject;
        }

        inline uintptr_t GetTransform(uintptr_t gameObject) noexcept
        {
            return get_transform_func ? get_transform_func(gameObject) : 0;
        }

        inline uintptr_t GetComponent(uintptr_t gameObject, uintptr_t componentType) noexcept
        {
            return getComponent_func ? getComponent_func(gameObject, componentType) : 0;
        }

        inline uintptr_t AddTextMesh(uintptr_t gameObject) noexcept
        {
            return AddComponent(gameObject, textMesh_type);
        }

        // Get the name of a GameObject
        inline std::string GetName(uintptr_t gameObject)
        {
            if (!gameObject) return "NULL_GAMEOBJECT";

            // Try property getter first (get_name)
            if (getName_property_func)
            {
                const uintptr_t nameString = getName_property_func(gameObject);
                if (nameString != 0)
                {
                    // Extract the string data (Unity string format)
                    const int string_length = *reinterpret_cast<int*>(nameString + 0x10);
                    const wchar_t* string_chars = reinterpret_cast<const wchar_t*>(nameString + 0x14);
                    if (string_length > 0 && string_length < 1000)
                    {
                        std::string result;
                        result.reserve(string_length); // Pre-allocate
                        for (int i = 0; i < string_length; i++)
                        {
                            result += static_cast<char>(string_chars[i]);
                        }
                        return result;
                    }
                }
            }

            // Fall back to static method if property fails
            if (getName_static_func)
            {
                const uintptr_t nameString = getName_static_func(gameObject);
                if (nameString != 0)
                {
                    // Extract the string data (Unity string format)
                    const int string_length = *reinterpret_cast<int*>(nameString + 0x10);
                    const wchar_t* string_chars = reinterpret_cast<const wchar_t*>(nameString + 0x14);
                    if (string_length > 0 && string_length < 1000)
                    {
                        std::string result;
                        result.reserve(string_length); // Pre-allocate
                        for (int i = 0; i < string_length; i++)
                        {
                            result += static_cast<char>(string_chars[i]);
                        }
                        return result;
                    }
                }
            }

            return "NAME_UNAVAILABLE";
        }
    }

    // =============================================================================
    // TRANSFORM FUNCTIONS
    // =============================================================================
    namespace Transform
    {
        inline Vector3 GetPosition(uintptr_t transform) noexcept
        {
            return get_position_func ? get_position_func(transform) : Vector3::Zero();
        }

        inline void SetPosition(uintptr_t transform, const Vector3& position) noexcept
        {
            if (set_position_func) set_position_func(transform, position);
        }

        inline Quaternion GetRotation(uintptr_t transform) noexcept
        {
            return get_rotation_func ? get_rotation_func(transform) : Quaternion::Identity();
        }

        inline void SetRotation(uintptr_t transform, const Quaternion& rotation) noexcept
        {
            if (set_rotation_func) set_rotation_func(transform, rotation);
        }

        inline Vector3 GetLocalScale(uintptr_t transform) noexcept
        {
            return get_localScale_func ? get_localScale_func(transform) : Vector3::Zero();
        }

        inline void SetLocalScale(uintptr_t transform, const Vector3& scale) noexcept
        {
            if (set_localScale_func) set_localScale_func(transform, scale);
        }

        inline void LookAt(uintptr_t transform, const Vector3& target) noexcept
        {
            if (lookAt_func) lookAt_func(transform, target);
        }

        inline void Rotate(uintptr_t transform, float xAngle, float yAngle, float zAngle) noexcept
        {
            if (rotate_func) rotate_func(transform, xAngle, yAngle, zAngle);
        }
    }

    // =============================================================================
    // COMPONENT FUNCTIONS
    // =============================================================================
    namespace Component
    {
        inline uintptr_t GetGameObject(uintptr_t component) noexcept
        {
            return get_gameObject_func ? get_gameObject_func(component) : 0;
        }
    }

    // =============================================================================
    // TEXTMESH FUNCTIONS
    // =============================================================================
    namespace TextMesh
    {
        inline uintptr_t GetText(uintptr_t textMesh) noexcept
        {
            return get_text_func ? get_text_func(textMesh) : 0;
        }

        inline void SetText(uintptr_t textMesh, uintptr_t text) noexcept
        {
            if (set_text_func) set_text_func(textMesh, text);
        }

        inline void SetText(uintptr_t textMesh, const char* text)
        {
            SetText(textMesh, Utils::CreateString(text));
        }

        inline int GetFontSize(uintptr_t textMesh) noexcept
        {
            return get_fontSize_func ? get_fontSize_func(textMesh) : 0;
        }

        inline void SetFontSize(uintptr_t textMesh, int fontSize) noexcept
        {
            if (set_fontSize_func) set_fontSize_func(textMesh, fontSize);
        }

        inline TextAnchor GetAnchor(uintptr_t textMesh) noexcept
        {
            return get_anchor_func ? get_anchor_func(textMesh) : TextAnchor::UpperLeft;
        }

        inline void SetAnchor(uintptr_t textMesh, TextAnchor anchor) noexcept
        {
            if (set_anchor_func) set_anchor_func(textMesh, anchor);
        }
    }

    // =============================================================================
    // CAMERA FUNCTIONS
    // =============================================================================
    namespace Camera
    {
        inline uintptr_t GetMain() noexcept
        {
            return get_main_camera_func ? get_main_camera_func() : 0;
        }

        inline uintptr_t GetTransform(uintptr_t camera) noexcept
        {
            return get_camera_transform_func ? get_camera_transform_func(camera) : 0;
        }

        inline Vector3 WorldToScreenPoint(uintptr_t camera, const Vector3& position) noexcept
        {
            return worldToScreenPoint_func ? worldToScreenPoint_func(camera, position) : Vector3::Zero();
        }
    }

    namespace Screen
    {
        inline int GetWidth() noexcept
        {
            return get_screen_width_func ? get_screen_width_func() : 1920;
        }

        inline int GetHeight() noexcept
        {
            return get_screen_height_func ? get_screen_height_func() : 1080;
        }
    }

    // =============================================================================
    // OBJECT FUNCTIONS
    // =============================================================================
    namespace Object
    {
        inline void DontDestroyOnLoad(uintptr_t obj) noexcept
        {
            if (dontDestroyOnLoad_func) dontDestroyOnLoad_func(obj);
        }

        inline void Destroy(uintptr_t obj) noexcept
        {
            if (destroy_func) destroy_func(obj);
        }

        inline void DestroyImmediate(uintptr_t obj) noexcept
        {
            if (destroyImmediate_func) destroyImmediate_func(obj);
        }
    }

    // =============================================================================
    // RENDERER FUNCTIONS
    // =============================================================================
    namespace Renderer
    {
        inline uintptr_t GetMaterial(uintptr_t renderer) noexcept
        {
            return get_material_func ? get_material_func(renderer) : 0;
        }
    }

    // =============================================================================
    // MATERIAL FUNCTIONS
    // =============================================================================
    namespace Material
    {
        inline void SetShader(uintptr_t material, uintptr_t shader) noexcept
        {
            if (set_shader_func) set_shader_func(material, shader);
        }

        inline void SetInt(uintptr_t material, uintptr_t propertyName, int value) noexcept
        {
            if (setInt_func) setInt_func(material, propertyName, value);
        }

        inline void SetInt(uintptr_t material, const char* propertyName, int value)
        {
            SetInt(material, Utils::CreateString(propertyName), value);
        }

        inline void SetColor(uintptr_t material, uintptr_t propertyName, const ColorRGBA& color) noexcept
        {
            if (setColor_func) setColor_func(material, propertyName, color);
        }
    }

    // =============================================================================
    // SHADER FUNCTIONS
    // =============================================================================
    namespace Shader
    {
        inline uintptr_t Find(uintptr_t shaderName) noexcept
        {
            return find_shader_func ? find_shader_func(shaderName) : 0;
        }

        inline uintptr_t Find(const char* shaderName)
        {
            return Find(Utils::CreateString(shaderName));
        }
    }

    // =============================================================================
    // GUI FUNCTIONS
    // =============================================================================
    namespace GUI
    {
        inline void Box(void* rect, uintptr_t text) noexcept
        {
            if (box_func) box_func(rect, text);
        }

        inline void Box(void* rect, const char* text)
        {
            Box(rect, Utils::CreateString(text));
        }

        inline bool Button(void* rect, uintptr_t text) noexcept
        {
            return button_func ? button_func(rect, text) : false;
        }

        inline bool Button(void* rect, const char* text)
        {
            return Button(rect, Utils::CreateString(text));
        }

        inline void Label(void* rect, uintptr_t text) noexcept
        {
            if (label_func) label_func(rect, text);
        }

        inline void Label(void* rect, const char* text)
        {
            Label(rect, Utils::CreateString(text));
        }
    }

    // =============================================================================
    // OBSCURED STRING FUNCTIONS
    // =============================================================================
    namespace ObscuredString
    {
        inline uintptr_t GetDecrypted(uintptr_t obscuredString) noexcept
        {
            return getDecrypted_func ? getDecrypted_func(obscuredString) : 0;
        }
    }

    // =============================================================================
    // OBSCURED FLOAT FUNCTIONS
    // =============================================================================
    namespace ObscuredFloat
    {
        inline float GetDecrypted(uintptr_t obscuredFloat) noexcept
        {
            return obscuredFloat_getDecrypted_func ? obscuredFloat_getDecrypted_func(obscuredFloat) : 0.0f;
        }
        inline int Encrypt(float value, int key) noexcept
        {
            return obscuredFloat_encrypt_func ? obscuredFloat_encrypt_func(value, key) : 0;
        }
        inline float Decrypt(int value, int key) noexcept
        {
            return obscuredFloat_decrypt_func ? obscuredFloat_decrypt_func(value, key) : 0.0f;
        }
        inline int GetEncrypted(uintptr_t obscuredFloat, int* key) noexcept
        {
            return obscuredFloat_getEncrypted_func ? obscuredFloat_getEncrypted_func(obscuredFloat, key) : 0;
        }
        inline void SetEncrypted(uintptr_t obscuredFloat, int encrypted, int key) noexcept
        {
            if (obscuredFloat_setEncrypted_func) obscuredFloat_setEncrypted_func(obscuredFloat, encrypted, key);
        }
        inline float GetValue(uintptr_t address) noexcept
        {
            return GetDecrypted(address);
        }
        inline void SetValue(uintptr_t address, float value) noexcept
        {
            // Get the current key using GetEncrypted
            int currentKey;
            GetEncrypted(address, &currentKey);
            // Encrypt our new value using the existing key
            int encryptedValue = Encrypt(value, currentKey);
            // Set the encrypted value using SetEncrypted
            SetEncrypted(address, encryptedValue, currentKey);
        }
    }

    // =============================================================================
    // OBSCURED INT FUNCTIONS
    // =============================================================================
    namespace ObscuredInt
    {
        inline int GetDecrypted(uintptr_t obscuredInt) noexcept
        {
            return obscuredInt_getDecrypted_func ? obscuredInt_getDecrypted_func(obscuredInt) : 0;
        }

        inline int Encrypt(int value, int key) noexcept
        {
            return obscuredInt_encrypt_func ? obscuredInt_encrypt_func(value, key) : 0;
        }

        inline int Decrypt(int value, int key) noexcept
        {
            return obscuredInt_decrypt_func ? obscuredInt_decrypt_func(value, key) : 0;
        }

        inline int GetEncrypted(uintptr_t obscuredInt, int* key) noexcept
        {
            return obscuredInt_getEncrypted_func ? obscuredInt_getEncrypted_func(obscuredInt, key) : 0;
        }

        inline void SetEncrypted(uintptr_t obscuredInt, int encrypted, int key) noexcept
        {
            if (obscuredInt_setEncrypted_func) obscuredInt_setEncrypted_func(obscuredInt, encrypted, key);
        }

        inline int GetValue(uintptr_t address) noexcept
        {
            return GetDecrypted(address);
        }

        inline void SetValue(uintptr_t address, int value) noexcept
        {
            // Get the current key using GetEncrypted
            int currentKey;
            GetEncrypted(address, &currentKey);
            // Encrypt our new value using the existing key
            int encryptedValue = Encrypt(value, currentKey);
            // Set the encrypted value using SetEncrypted
            SetEncrypted(address, encryptedValue, currentKey);
        }
    }

    // =============================================================================
    // OBSCURED BOOL FUNCTIONS
    // =============================================================================
    namespace ObscuredBool
    {
        inline bool GetDecrypted(uintptr_t obscuredBool) noexcept
        {
            return obscuredBool_getDecrypted_func ? obscuredBool_getDecrypted_func(obscuredBool) : false;
        }

        inline int Encrypt(bool value, uint8_t key) noexcept
        {
            return obscuredBool_encrypt_func ? obscuredBool_encrypt_func(value, key) : 0;
        }

        inline bool Decrypt(int value, uint8_t key) noexcept
        {
            return obscuredBool_decrypt_func ? obscuredBool_decrypt_func(value, key) : false;
        }

        inline int GetEncrypted(uintptr_t obscuredBool, uint8_t* key) noexcept
        {
            return obscuredBool_getEncrypted_func ? obscuredBool_getEncrypted_func(obscuredBool, key) : 0;
        }

        inline void SetEncrypted(uintptr_t obscuredBool, int encrypted, uint8_t key) noexcept
        {
            if (obscuredBool_setEncrypted_func) obscuredBool_setEncrypted_func(obscuredBool, encrypted, key);
        }

        inline bool GetValue(uintptr_t address) noexcept
        {
            return GetDecrypted(address);
        }

        inline void SetValue(uintptr_t address, bool value) noexcept
        {
            // Get the current key using GetEncrypted
            uint8_t currentKey;
            GetEncrypted(address, &currentKey);
            // Encrypt our new value using the existing key
            int encryptedValue = Encrypt(value, currentKey);
            // Set the encrypted value using SetEncrypted
            SetEncrypted(address, encryptedValue, currentKey);
        }
    }

    // =============================================================================
    // OBSCURED VECTOR2 FUNCTIONS
    // =============================================================================
    namespace ObscuredVector2
    {
        inline Vector3 GetDecrypted(uintptr_t obscuredVector2) noexcept
        {
            return obscuredVector2_getDecrypted_func ? obscuredVector2_getDecrypted_func(obscuredVector2) : Vector3::Zero();
        }

        inline uintptr_t Encrypt(const Vector3& value, int key) noexcept
        {
            return obscuredVector2_encrypt_func ? obscuredVector2_encrypt_func(value, key) : 0;
        }

        inline Vector3 Decrypt(uintptr_t value, int key) noexcept
        {
            return obscuredVector2_decrypt_func ? obscuredVector2_decrypt_func(value, key) : Vector3::Zero();
        }

        inline uintptr_t GetEncrypted(uintptr_t obscuredVector2, int* key) noexcept
        {
            return obscuredVector2_getEncrypted_func ? obscuredVector2_getEncrypted_func(obscuredVector2, key) : 0;
        }

        inline void SetEncrypted(uintptr_t obscuredVector2, uintptr_t encrypted, int key) noexcept
        {
            if (obscuredVector2_setEncrypted_func) obscuredVector2_setEncrypted_func(obscuredVector2, encrypted, key);
        }

        inline Vector3 GetValue(uintptr_t address) noexcept
        {
            return GetDecrypted(address);
        }

        inline void SetValue(uintptr_t address, const Vector3& value) noexcept
        {
            // Get the current key using GetEncrypted
            int currentKey;
            GetEncrypted(address, &currentKey);
            // Encrypt our new value using the existing key
            uintptr_t encryptedValue = Encrypt(value, currentKey);
            // Set the encrypted value using SetEncrypted
            SetEncrypted(address, encryptedValue, currentKey);
        }
    }

    // =============================================================================
    // OBSCURED VECTOR3 FUNCTIONS
    // =============================================================================
    namespace ObscuredVector3
    {
        inline Vector3 GetDecrypted(uintptr_t obscuredVector3) noexcept
        {
            return obscuredVector3_getDecrypted_func ? obscuredVector3_getDecrypted_func(obscuredVector3) : Vector3::Zero();
        }

        inline uintptr_t Encrypt(const Vector3& value, int key) noexcept
        {
            return obscuredVector3_encrypt_func ? obscuredVector3_encrypt_func(value, key) : 0;
        }

        inline Vector3 Decrypt(uintptr_t value, int key) noexcept
        {
            return obscuredVector3_decrypt_func ? obscuredVector3_decrypt_func(value, key) : Vector3::Zero();
        }

        inline uintptr_t GetEncrypted(uintptr_t obscuredVector3, int* key) noexcept
        {
            return obscuredVector3_getEncrypted_func ? obscuredVector3_getEncrypted_func(obscuredVector3, key) : 0;
        }

        inline void SetEncrypted(uintptr_t obscuredVector3, uintptr_t encrypted, int key) noexcept
        {
            if (obscuredVector3_setEncrypted_func) obscuredVector3_setEncrypted_func(obscuredVector3, encrypted, key);
        }

        inline Vector3 GetValue(uintptr_t address) noexcept
        {
            return GetDecrypted(address);
        }

        inline void SetValue(uintptr_t address, const Vector3& value) noexcept
        {
            // Get the current key using GetEncrypted
            int currentKey;
            GetEncrypted(address, &currentKey);
            // Encrypt our new value using the existing key
            uintptr_t encryptedValue = Encrypt(value, currentKey);
            // Set the encrypted value using SetEncrypted
            SetEncrypted(address, encryptedValue, currentKey);
        }
    }

    // =============================================================================
    // QUATERNION IMPLEMENTATION
    // =============================================================================
    inline Quaternion Quaternion::LookRotation(const Vector3& forward, const Vector3& upwards) noexcept
    {
        return lookRotation_func ? lookRotation_func(forward, upwards) : Quaternion::Identity();
    }

    // =============================================================================
    // INITIALIZATION FUNCTION
    // =============================================================================
    inline bool INIT_IL2CPP() noexcept
    {
        static bool initialized = false;
        if (initialized) return true;

        Utility::AppendToLogFile("Starting IL2CPP initialization...");

        try
        {
            // GameObject methods
            Utility::AppendToLogFile("Initializing GameObject methods...");
            uintptr_t method_addr = il2cpp::method("GameObject", "AddComponent", "UnityEngine", 1);
            addComponent_func = reinterpret_cast<uintptr_t(*)(uintptr_t, uintptr_t)>(*reinterpret_cast<uintptr_t*>(method_addr));
            Utility::AppendToLogFile("GameObject::AddComponent initialized successfully");

            method_addr = il2cpp::method("GameObject", "SetActive", "UnityEngine", 1);
            setActive_func = reinterpret_cast<void(*)(uintptr_t, bool)>(*reinterpret_cast<uintptr_t*>(method_addr));
            Utility::AppendToLogFile("GameObject::SetActive initialized successfully");

            method_addr = il2cpp::method("GameObject", "Internal_CreateGameObject", "UnityEngine", 2);
            internal_create_func = reinterpret_cast<void(*)(uintptr_t, uintptr_t)>(*reinterpret_cast<uintptr_t*>(method_addr));
            Utility::AppendToLogFile("GameObject::Internal_CreateGameObject initialized successfully");

            method_addr = il2cpp::method("GameObject", "GetComponentsInternal", "UnityEngine", 6);
            getComponentsInternal_func = reinterpret_cast<uintptr_t(*)(uintptr_t, uintptr_t, bool, bool, bool, bool, uintptr_t)>(*reinterpret_cast<uintptr_t*>(method_addr));
            Utility::AppendToLogFile("GameObject::GetComponentsInternal initialized successfully");

            method_addr = il2cpp::method("GameObject", "get_transform", "UnityEngine", 0);
            get_transform_func = reinterpret_cast<uintptr_t(*)(uintptr_t)>(*reinterpret_cast<uintptr_t*>(method_addr));
            Utility::AppendToLogFile("GameObject::get_transform initialized successfully");

            method_addr = il2cpp::method("GameObject", "GetComponent", "UnityEngine", 1);
            getComponent_func = reinterpret_cast<uintptr_t(*)(uintptr_t, uintptr_t)>(*reinterpret_cast<uintptr_t*>(method_addr));
            Utility::AppendToLogFile("GameObject::GetComponent initialized successfully");

            // Quaternion methods
            Utility::AppendToLogFile("Initializing Quaternion methods...");
            method_addr = il2cpp::method("Quaternion", "LookRotation", "UnityEngine", 2);
            lookRotation_func = reinterpret_cast<Quaternion(*)(Vector3, Vector3)>(*reinterpret_cast<uintptr_t*>(method_addr));
            Utility::AppendToLogFile("Quaternion::LookRotation initialized successfully");

            // Transform methods
            Utility::AppendToLogFile("Initializing Transform methods...");
            method_addr = il2cpp::method("Transform", "get_position", "UnityEngine", 0);
            get_position_func = reinterpret_cast<Vector3(*)(uintptr_t)>(*reinterpret_cast<uintptr_t*>(method_addr));
            Utility::AppendToLogFile("Transform::get_position initialized successfully");

            method_addr = il2cpp::method("Transform", "set_position", "UnityEngine", 1);
            set_position_func = reinterpret_cast<void(*)(uintptr_t, Vector3)>(*reinterpret_cast<uintptr_t*>(method_addr));
            Utility::AppendToLogFile("Transform::set_position initialized successfully");

            method_addr = il2cpp::method("Transform", "get_rotation", "UnityEngine", 0);
            get_rotation_func = reinterpret_cast<Quaternion(*)(uintptr_t)>(*reinterpret_cast<uintptr_t*>(method_addr));
            Utility::AppendToLogFile("Transform::get_rotation initialized successfully");

            method_addr = il2cpp::method("Transform", "set_rotation", "UnityEngine", 1);
            set_rotation_func = reinterpret_cast<void(*)(uintptr_t, Quaternion)>(*reinterpret_cast<uintptr_t*>(method_addr));
            Utility::AppendToLogFile("Transform::set_rotation initialized successfully");

            method_addr = il2cpp::method("Transform", "get_localScale", "UnityEngine", 0);
            get_localScale_func = reinterpret_cast<Vector3(*)(uintptr_t)>(*reinterpret_cast<uintptr_t*>(method_addr));
            Utility::AppendToLogFile("Transform::get_localScale initialized successfully");

            method_addr = il2cpp::method("Transform", "set_localScale", "UnityEngine", 1);
            set_localScale_func = reinterpret_cast<void(*)(uintptr_t, Vector3)>(*reinterpret_cast<uintptr_t*>(method_addr));
            Utility::AppendToLogFile("Transform::set_localScale initialized successfully");

            method_addr = il2cpp::method("Transform", "LookAt", "UnityEngine", 1, 0);
            lookAt_func = reinterpret_cast<void(*)(uintptr_t, Vector3)>(*reinterpret_cast<uintptr_t*>(method_addr));
            Utility::AppendToLogFile("Transform::LookAt initialized successfully");

            method_addr = il2cpp::method("Transform", "Rotate", "UnityEngine", 3);
            rotate_func = reinterpret_cast<void(*)(uintptr_t, float, float, float)>(*reinterpret_cast<uintptr_t*>(method_addr));
            Utility::AppendToLogFile("Transform::Rotate initialized successfully");

            // TextMesh methods
            Utility::AppendToLogFile("Initializing TextMesh methods...");
            method_addr = il2cpp::method("TextMesh", "get_text", "UnityEngine", 0);
            get_text_func = reinterpret_cast<uintptr_t(*)(uintptr_t)>(*reinterpret_cast<uintptr_t*>(method_addr));
            Utility::AppendToLogFile("TextMesh::get_text initialized successfully");

            method_addr = il2cpp::method("TextMesh", "set_text", "UnityEngine", 1);
            set_text_func = reinterpret_cast<void(*)(uintptr_t, uintptr_t)>(*reinterpret_cast<uintptr_t*>(method_addr));
            Utility::AppendToLogFile("TextMesh::set_text initialized successfully");

            method_addr = il2cpp::method("TextMesh", "get_fontSize", "UnityEngine", 0);
            get_fontSize_func = reinterpret_cast<int(*)(uintptr_t)>(*reinterpret_cast<uintptr_t*>(method_addr));
            Utility::AppendToLogFile("TextMesh::get_fontSize initialized successfully");

            method_addr = il2cpp::method("TextMesh", "set_fontSize", "UnityEngine", 1);
            set_fontSize_func = reinterpret_cast<void(*)(uintptr_t, int)>(*reinterpret_cast<uintptr_t*>(method_addr));
            Utility::AppendToLogFile("TextMesh::set_fontSize initialized successfully");

            method_addr = il2cpp::method("TextMesh", "get_anchor", "UnityEngine", 0);
            get_anchor_func = reinterpret_cast<TextAnchor(*)(uintptr_t)>(*reinterpret_cast<uintptr_t*>(method_addr));
            Utility::AppendToLogFile("TextMesh::get_anchor initialized successfully");

            method_addr = il2cpp::method("TextMesh", "set_anchor", "UnityEngine", 1);
            set_anchor_func = reinterpret_cast<void(*)(uintptr_t, TextAnchor)>(*reinterpret_cast<uintptr_t*>(method_addr));
            Utility::AppendToLogFile("TextMesh::set_anchor initialized successfully");

            // Camera methods
            Utility::AppendToLogFile("Initializing Camera methods...");
            method_addr = il2cpp::method("Camera", "get_main", "UnityEngine", 0);
            get_main_camera_func = reinterpret_cast<uintptr_t(*)()>(*reinterpret_cast<uintptr_t*>(method_addr));
            Utility::AppendToLogFile("Camera::get_main initialized successfully");

            method_addr = il2cpp::method("Camera", "get_transform", "UnityEngine", 0);
            get_camera_transform_func = reinterpret_cast<uintptr_t(*)(uintptr_t)>(*reinterpret_cast<uintptr_t*>(method_addr));
            Utility::AppendToLogFile("Camera::get_transform initialized successfully");

            method_addr = il2cpp::method("Camera", "WorldToScreenPoint", "UnityEngine", 1);
            worldToScreenPoint_func = reinterpret_cast<Vector3(*)(uintptr_t, Vector3)>(*reinterpret_cast<uintptr_t*>(method_addr));
            Utility::AppendToLogFile("Camera::WorldToScreenPoint initialized successfully");

            //Screen methods
            Utility::AppendToLogFile("Initializing Screen methods...");
            method_addr = il2cpp::method("Screen", "get_width", "UnityEngine", 0);
            get_screen_width_func = reinterpret_cast<int(*)()>(*reinterpret_cast<uintptr_t*>(method_addr));
            Utility::AppendToLogFile("Screen::get_width initialized successfully");

            method_addr = il2cpp::method("Screen", "get_height", "UnityEngine", 0);
            get_screen_height_func = reinterpret_cast<int(*)()>(*reinterpret_cast<uintptr_t*>(method_addr));
            Utility::AppendToLogFile("Screen::get_height initialized successfully");

            // Object methods
            Utility::AppendToLogFile("Initializing Object methods...");
            method_addr = il2cpp::method("Object", "DontDestroyOnLoad", "UnityEngine", 1);
            dontDestroyOnLoad_func = reinterpret_cast<void(*)(uintptr_t)>(*reinterpret_cast<uintptr_t*>(method_addr));
            Utility::AppendToLogFile("Object::DontDestroyOnLoad initialized successfully");

            method_addr = il2cpp::method("Object", "Destroy", "UnityEngine", 1);
            destroy_func = reinterpret_cast<void(*)(uintptr_t)>(*reinterpret_cast<uintptr_t*>(method_addr));
            Utility::AppendToLogFile("Object::Destroy initialized successfully");

            method_addr = il2cpp::method("Object", "DestroyImmediate", "UnityEngine", 1);
            destroyImmediate_func = reinterpret_cast<void(*)(uintptr_t)>(*reinterpret_cast<uintptr_t*>(method_addr));
            Utility::AppendToLogFile("Object::DestroyImmediate initialized successfully");

            // Object name methods
            method_addr = il2cpp::method("Object", "get_name", "UnityEngine", 0);
            getName_property_func = reinterpret_cast<uintptr_t(*)(uintptr_t)>(*reinterpret_cast<uintptr_t*>(method_addr));
            Utility::AppendToLogFile("Object::get_name initialized successfully");

            method_addr = il2cpp::method("Object", "GetName", "UnityEngine", 1);
            getName_static_func = reinterpret_cast<uintptr_t(*)(uintptr_t)>(*reinterpret_cast<uintptr_t*>(method_addr));
            Utility::AppendToLogFile("Object::GetName initialized successfully");

            // Component methods
            Utility::AppendToLogFile("Initializing Component methods...");
            method_addr = il2cpp::method("Component", "get_gameObject", "UnityEngine", 0);
            get_gameObject_func = reinterpret_cast<uintptr_t(*)(uintptr_t)>(*reinterpret_cast<uintptr_t*>(method_addr));
            Utility::AppendToLogFile("Component::get_gameObject initialized successfully");

            // Renderer methods
            Utility::AppendToLogFile("Initializing Renderer methods...");
            method_addr = il2cpp::method("Renderer", "get_material", "UnityEngine", 0);
            get_material_func = reinterpret_cast<uintptr_t(*)(uintptr_t)>(*reinterpret_cast<uintptr_t*>(method_addr));
            Utility::AppendToLogFile("Renderer::get_material initialized successfully");

            // Material methods
            Utility::AppendToLogFile("Initializing Material methods...");
            method_addr = il2cpp::method("Material", "set_shader", "UnityEngine", 1);
            set_shader_func = reinterpret_cast<void(*)(uintptr_t, uintptr_t)>(*reinterpret_cast<uintptr_t*>(method_addr));
            Utility::AppendToLogFile("Material::set_shader initialized successfully");

            method_addr = il2cpp::method("Material", "SetInt", "UnityEngine", 2);
            setInt_func = reinterpret_cast<void(*)(uintptr_t, uintptr_t, int)>(*reinterpret_cast<uintptr_t*>(method_addr));
            Utility::AppendToLogFile("Material::SetInt initialized successfully");

            method_addr = il2cpp::method("Material", "SetColor", "UnityEngine", 2);
            setColor_func = reinterpret_cast<void(*)(uintptr_t, uintptr_t, ColorRGBA)>(*reinterpret_cast<uintptr_t*>(method_addr));
            Utility::AppendToLogFile("Material::SetColor initialized successfully");

            // Shader methods
            Utility::AppendToLogFile("Initializing Shader methods...");
            method_addr = il2cpp::method("Shader", "Find", "UnityEngine", 1);
            find_shader_func = reinterpret_cast<uintptr_t(*)(uintptr_t)>(*reinterpret_cast<uintptr_t*>(method_addr));
            Utility::AppendToLogFile("Shader::Find initialized successfully");

            // GUI methods
            Utility::AppendToLogFile("Initializing GUI methods...");
            method_addr = il2cpp::method("GUI", "Box", "UnityEngine", 2);
            box_func = reinterpret_cast<void(*)(void*, uintptr_t)>(*reinterpret_cast<uintptr_t*>(method_addr));
            Utility::AppendToLogFile("GUI::Box initialized successfully");

            method_addr = il2cpp::method("GUI", "Button", "UnityEngine", 2);
            button_func = reinterpret_cast<bool(*)(void*, uintptr_t)>(*reinterpret_cast<uintptr_t*>(method_addr));
            Utility::AppendToLogFile("GUI::Button initialized successfully");

            method_addr = il2cpp::method("GUI", "Label", "UnityEngine", 2);
            label_func = reinterpret_cast<void(*)(void*, uintptr_t)>(*reinterpret_cast<uintptr_t*>(method_addr));
            Utility::AppendToLogFile("GUI::Label initialized successfully");

            // ObscuredString methods
            Utility::AppendToLogFile("Initializing ObscuredString methods...");
            method_addr = il2cpp::method("ObscuredString", "GetDecrypted", "CodeStage.AntiCheat.ObscuredTypes", 0);
            getDecrypted_func = reinterpret_cast<uintptr_t(*)(uintptr_t)>(*reinterpret_cast<uintptr_t*>(method_addr));
            Utility::AppendToLogFile("ObscuredString::GetDecrypted initialized successfully");

            // ObscuredFloat methods
            Utility::AppendToLogFile("Initializing ObscuredFloat methods...");
            method_addr = il2cpp::method("ObscuredFloat", "GetDecrypted", "CodeStage.AntiCheat.ObscuredTypes", 0);
            obscuredFloat_getDecrypted_func = reinterpret_cast<float(*)(uintptr_t)>(*reinterpret_cast<uintptr_t*>(method_addr));
            Utility::AppendToLogFile("ObscuredFloat::GetDecrypted initialized successfully");

            method_addr = il2cpp::method("ObscuredFloat", "Encrypt", "CodeStage.AntiCheat.ObscuredTypes", 2);
            obscuredFloat_encrypt_func = reinterpret_cast<int(*)(float, int)>(*reinterpret_cast<uintptr_t*>(method_addr));
            Utility::AppendToLogFile("ObscuredFloat::Encrypt initialized successfully");

            method_addr = il2cpp::method("ObscuredFloat", "Decrypt", "CodeStage.AntiCheat.ObscuredTypes", 2);
            obscuredFloat_decrypt_func = reinterpret_cast<float(*)(int, int)>(*reinterpret_cast<uintptr_t*>(method_addr));
            Utility::AppendToLogFile("ObscuredFloat::Decrypt initialized successfully");

            method_addr = il2cpp::method("ObscuredFloat", "GetEncrypted", "CodeStage.AntiCheat.ObscuredTypes", 1);
            obscuredFloat_getEncrypted_func = reinterpret_cast<int(*)(uintptr_t, int*)>(*reinterpret_cast<uintptr_t*>(method_addr));
            Utility::AppendToLogFile("ObscuredFloat::GetEncrypted initialized successfully");

            method_addr = il2cpp::method("ObscuredFloat", "SetEncrypted", "CodeStage.AntiCheat.ObscuredTypes", 2);
            obscuredFloat_setEncrypted_func = reinterpret_cast<void(*)(uintptr_t, int, int)>(*reinterpret_cast<uintptr_t*>(method_addr));
            Utility::AppendToLogFile("ObscuredFloat::SetEncrypted initialized successfully");

            // ObscuredInt methods
            Utility::AppendToLogFile("Initializing ObscuredInt methods...");
            method_addr = il2cpp::method("ObscuredInt", "GetDecrypted", "CodeStage.AntiCheat.ObscuredTypes", 0);
            obscuredInt_getDecrypted_func = reinterpret_cast<int(*)(uintptr_t)>(*reinterpret_cast<uintptr_t*>(method_addr));
            Utility::AppendToLogFile("ObscuredInt::GetDecrypted initialized successfully");

            method_addr = il2cpp::method("ObscuredInt", "Encrypt", "CodeStage.AntiCheat.ObscuredTypes", 2);
            obscuredInt_encrypt_func = reinterpret_cast<int(*)(int, int)>(*reinterpret_cast<uintptr_t*>(method_addr));
            Utility::AppendToLogFile("ObscuredInt::Encrypt initialized successfully");

            method_addr = il2cpp::method("ObscuredInt", "Decrypt", "CodeStage.AntiCheat.ObscuredTypes", 2);
            obscuredInt_decrypt_func = reinterpret_cast<int(*)(int, int)>(*reinterpret_cast<uintptr_t*>(method_addr));
            Utility::AppendToLogFile("ObscuredInt::Decrypt initialized successfully");

            method_addr = il2cpp::method("ObscuredInt", "GetEncrypted", "CodeStage.AntiCheat.ObscuredTypes", 1);
            obscuredInt_getEncrypted_func = reinterpret_cast<int(*)(uintptr_t, int*)>(*reinterpret_cast<uintptr_t*>(method_addr));
            Utility::AppendToLogFile("ObscuredInt::GetEncrypted initialized successfully");

            method_addr = il2cpp::method("ObscuredInt", "SetEncrypted", "CodeStage.AntiCheat.ObscuredTypes", 2);
            obscuredInt_setEncrypted_func = reinterpret_cast<void(*)(uintptr_t, int, int)>(*reinterpret_cast<uintptr_t*>(method_addr));
            Utility::AppendToLogFile("ObscuredInt::SetEncrypted initialized successfully");

            // ObscuredBool methods
            Utility::AppendToLogFile("Initializing ObscuredBool methods...");
            method_addr = il2cpp::method("ObscuredBool", "GetDecrypted", "CodeStage.AntiCheat.ObscuredTypes", 0);
            obscuredBool_getDecrypted_func = reinterpret_cast<bool(*)(uintptr_t)>(*reinterpret_cast<uintptr_t*>(method_addr));
            Utility::AppendToLogFile("ObscuredBool::GetDecrypted initialized successfully");

            method_addr = il2cpp::method("ObscuredBool", "Encrypt", "CodeStage.AntiCheat.ObscuredTypes", 2);
            obscuredBool_encrypt_func = reinterpret_cast<int(*)(bool, uint8_t)>(*reinterpret_cast<uintptr_t*>(method_addr));
            Utility::AppendToLogFile("ObscuredBool::Encrypt initialized successfully");

            method_addr = il2cpp::method("ObscuredBool", "Decrypt", "CodeStage.AntiCheat.ObscuredTypes", 2);
            obscuredBool_decrypt_func = reinterpret_cast<bool(*)(int, uint8_t)>(*reinterpret_cast<uintptr_t*>(method_addr));
            Utility::AppendToLogFile("ObscuredBool::Decrypt initialized successfully");

            method_addr = il2cpp::method("ObscuredBool", "GetEncrypted", "CodeStage.AntiCheat.ObscuredTypes", 1);
            obscuredBool_getEncrypted_func = reinterpret_cast<int(*)(uintptr_t, uint8_t*)>(*reinterpret_cast<uintptr_t*>(method_addr));
            Utility::AppendToLogFile("ObscuredBool::GetEncrypted initialized successfully");

            method_addr = il2cpp::method("ObscuredBool", "SetEncrypted", "CodeStage.AntiCheat.ObscuredTypes", 2);
            obscuredBool_setEncrypted_func = reinterpret_cast<void(*)(uintptr_t, int, uint8_t)>(*reinterpret_cast<uintptr_t*>(method_addr));
            Utility::AppendToLogFile("ObscuredBool::SetEncrypted initialized successfully");

            // ObscuredVector2 methods
            Utility::AppendToLogFile("Initializing ObscuredVector2 methods...");
            method_addr = il2cpp::method("ObscuredVector2", "GetDecrypted", "CodeStage.AntiCheat.ObscuredTypes", 0);
            obscuredVector2_getDecrypted_func = reinterpret_cast<Vector3(*)(uintptr_t)>(*reinterpret_cast<uintptr_t*>(method_addr));
            Utility::AppendToLogFile("ObscuredVector2::GetDecrypted initialized successfully");

            method_addr = il2cpp::method("ObscuredVector2", "Encrypt", "CodeStage.AntiCheat.ObscuredTypes", 2);
            obscuredVector2_encrypt_func = reinterpret_cast<uintptr_t(*)(Vector3, int)>(*reinterpret_cast<uintptr_t*>(method_addr));
            Utility::AppendToLogFile("ObscuredVector2::Encrypt initialized successfully");

            method_addr = il2cpp::method("ObscuredVector2", "Decrypt", "CodeStage.AntiCheat.ObscuredTypes", 2);
            obscuredVector2_decrypt_func = reinterpret_cast<Vector3(*)(uintptr_t, int)>(*reinterpret_cast<uintptr_t*>(method_addr));
            Utility::AppendToLogFile("ObscuredVector2::Decrypt initialized successfully");

            method_addr = il2cpp::method("ObscuredVector2", "GetEncrypted", "CodeStage.AntiCheat.ObscuredTypes", 1);
            obscuredVector2_getEncrypted_func = reinterpret_cast<uintptr_t(*)(uintptr_t, int*)>(*reinterpret_cast<uintptr_t*>(method_addr));
            Utility::AppendToLogFile("ObscuredVector2::GetEncrypted initialized successfully");

            method_addr = il2cpp::method("ObscuredVector2", "SetEncrypted", "CodeStage.AntiCheat.ObscuredTypes", 2);
            obscuredVector2_setEncrypted_func = reinterpret_cast<void(*)(uintptr_t, uintptr_t, int)>(*reinterpret_cast<uintptr_t*>(method_addr));
            Utility::AppendToLogFile("ObscuredVector2::SetEncrypted initialized successfully");

            // ObscuredVector3 methods
            Utility::AppendToLogFile("Initializing ObscuredVector3 methods...");
            method_addr = il2cpp::method("ObscuredVector3", "GetDecrypted", "CodeStage.AntiCheat.ObscuredTypes", 0);
            obscuredVector3_getDecrypted_func = reinterpret_cast<Vector3(*)(uintptr_t)>(*reinterpret_cast<uintptr_t*>(method_addr));
            Utility::AppendToLogFile("ObscuredVector3::GetDecrypted initialized successfully");

            method_addr = il2cpp::method("ObscuredVector3", "Encrypt", "CodeStage.AntiCheat.ObscuredTypes", 2);
            obscuredVector3_encrypt_func = reinterpret_cast<uintptr_t(*)(Vector3, int)>(*reinterpret_cast<uintptr_t*>(method_addr));
            Utility::AppendToLogFile("ObscuredVector3::Encrypt initialized successfully");

            method_addr = il2cpp::method("ObscuredVector3", "Decrypt", "CodeStage.AntiCheat.ObscuredTypes", 2);
            obscuredVector3_decrypt_func = reinterpret_cast<Vector3(*)(uintptr_t, int)>(*reinterpret_cast<uintptr_t*>(method_addr));
            Utility::AppendToLogFile("ObscuredVector3::Decrypt initialized successfully");

            method_addr = il2cpp::method("ObscuredVector3", "GetEncrypted", "CodeStage.AntiCheat.ObscuredTypes", 1);
            obscuredVector3_getEncrypted_func = reinterpret_cast<uintptr_t(*)(uintptr_t, int*)>(*reinterpret_cast<uintptr_t*>(method_addr));
            Utility::AppendToLogFile("ObscuredVector3::GetEncrypted initialized successfully");

            method_addr = il2cpp::method("ObscuredVector3", "SetEncrypted", "CodeStage.AntiCheat.ObscuredTypes", 2);
            obscuredVector3_setEncrypted_func = reinterpret_cast<void(*)(uintptr_t, uintptr_t, int)>(*reinterpret_cast<uintptr_t*>(method_addr));
            Utility::AppendToLogFile("ObscuredVector3::SetEncrypted initialized successfully");

            // Cache common objects and types
            Utility::AppendToLogFile("Initializing cached objects and types...");
            renderer_type = il2cpp::type_object("Renderer", "UnityEngine");
            Utility::AppendToLogFile("Renderer type cached successfully");

            textMesh_type = il2cpp::type_object("TextMesh", "UnityEngine");
            Utility::AppendToLogFile("TextMesh type cached successfully");

            transform_type = il2cpp::type_object("Transform", "UnityEngine");
            Utility::AppendToLogFile("Transform type cached successfully");

            camera_type = il2cpp::type_object("Camera", "UnityEngine");
            Utility::AppendToLogFile("Camera type cached successfully");

            hidden_colored_shader = Shader::Find("Hidden/Internal-Colored");
            Utility::AppendToLogFile("Hidden/Internal-Colored shader cached successfully");

            initialized = true;
            Utility::AppendToLogFile("IL2CPP initialization completed successfully!");
            return true;
        }
        catch (...)
        {
            Utility::AppendToLogFile("IL2CPP initialization failed with exception");
            return false;
        }
    }
}