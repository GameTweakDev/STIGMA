#pragma once
#include <intrin.h>
#include "lazy_importer.hpp"
#include <string.h>

struct il2cppClass
{
	void* m_pImage;
	void* m_pGC;
	const char* m_pName;
	const char* m_pNamespace;
	void* m_pValue;
	void* m_pArgs;
	il2cppClass* m_pElementClass;
	il2cppClass* m_pCastClass;
	il2cppClass* m_pDeclareClass;
	il2cppClass* m_pParentClass;
	void* m_pGenericClass;
	void* m_pTypeDefinition;
	void* m_pInteropData;
	void* m_pFields;
	void* m_pEvents;
	void* m_pProperties;
	void** m_pMethods;
	il2cppClass** m_pNestedTypes;
	il2cppClass** m_ImplementedInterfaces;
	void* m_pInterfaceOffsets;
	void* m_pStaticFields;
	void* m_pRGCTX;
};

struct il2cppObject
{
	il2cppClass* m_pClass = nullptr;
	void* m_pMonitor = nullptr;
};

struct il2cppArrayBounds
{
	uintptr_t m_uLength;
	int m_iLowerBound;
};

template<typename T>
struct il2cppArray : il2cppObject
{
	il2cppArrayBounds* m_pBounds = nullptr;
	uintptr_t m_uMaxLength = 0;
	T* m_pValues = nullptr;

	uintptr_t GetData()
	{
		return reinterpret_cast<uintptr_t>(&m_pValues);
	}

	T& operator[](unsigned int m_uIndex)
	{
		return *reinterpret_cast<T*>(GetData() + sizeof(T) * m_uIndex);
	}

	T& At(unsigned int m_uIndex)
	{
		return operator[](m_uIndex);
	}

	void Insert(T* m_pArray, uintptr_t m_uSize, uintptr_t m_uIndex = 0)
	{
		if ((m_uSize + m_uIndex) >= m_uMaxLength)
		{
			if (m_uIndex >= m_uMaxLength)
				return;

			m_uSize = m_uMaxLength - m_uIndex;
		}

		for (uintptr_t u = 0; m_uSize > u; ++u)
			operator[](u + m_uIndex) = m_pArray[u];
	}

	void Fill(T m_tValue)
	{
		for (uintptr_t u = 0; m_uMaxLength > u; ++u)
			operator[](u) = m_tValue;
	}

	void RemoveAt(unsigned int m_uIndex)
	{
		if (m_uIndex >= m_uMaxLength)
			return;

		if (m_uMaxLength > (m_uIndex + 1))
		{
			for (unsigned int u = m_uIndex; (static_cast<unsigned int>(m_uMaxLength) - m_uIndex) > u; ++u)
				operator[](u) = operator[](u + 1);
		}

		--m_uMaxLength;
	}

	void RemoveRange(unsigned int m_uIndex, unsigned int m_uCount)
	{
		if (m_uCount == 0)
			m_uCount = 1;

		unsigned int m_uTotal = m_uIndex + m_uCount;
		if (m_uTotal >= m_uMaxLength)
			return;

		if (m_uMaxLength > (m_uTotal + 1))
		{
			for (unsigned int u = m_uIndex; (static_cast<unsigned int>(m_uMaxLength) - m_uTotal) >= u; ++u)
				operator[](u) = operator[](u + m_uCount);
		}

		m_uMaxLength -= m_uCount;
	}
};

namespace il2cpp {
	namespace methods {
		using il2cpp_domain_get = uintptr_t(*)();

		static auto domain_get = LI_FN_DEF(il2cpp_domain_get);

		using il2cpp_class_get_methods = uintptr_t(*)(uintptr_t, uintptr_t*);

		static auto class_get_methods = LI_FN_DEF(il2cpp_class_get_methods);

		using il2cpp_method_get_param_count = int (*)(uintptr_t);

		static auto method_get_param_count = LI_FN_DEF(il2cpp_method_get_param_count);

		using il2cpp_assembly_get_image = uintptr_t(*)(uintptr_t);

		static auto assembly_get_image = LI_FN_DEF(il2cpp_assembly_get_image);

		using il2cpp_domain_get_assemblies = uintptr_t * (*)(void* domain, uintptr_t* size);

		static auto domain_get_assemblies = LI_FN_DEF(il2cpp_domain_get_assemblies);

		using il2cpp_object_new = uintptr_t(*)(uintptr_t);

		static auto object_new = LI_FN_DEF(il2cpp_object_new);

		using il2cpp_class_from_name = uintptr_t(*)(uintptr_t, const char*, const char*);

		static auto class_from_name = LI_FN_DEF(il2cpp_class_from_name);

		using il2cpp_class_get_method_from_name = uintptr_t(*)(uintptr_t, const char*, int);

		static auto class_get_method_from_name = LI_FN_DEF(il2cpp_class_get_method_from_name);

		using il2cpp_class_get_field_from_name = uintptr_t(*)(uintptr_t, const char*);

		static auto class_get_field_from_name = LI_FN_DEF(il2cpp_class_get_field_from_name);

		using il2cpp_method_get_name = const char* (*)(uintptr_t);

		static auto method_get_name = LI_FN_DEF(il2cpp_method_get_name);

		using il2cpp_resolve_icall = uintptr_t(*)(const char*);

		static auto resolve_icall = LI_FN_DEF(il2cpp_resolve_icall);

		using il2cpp_field_static_get_value = uintptr_t(*)(uintptr_t, uintptr_t*);

		static auto field_static_get_value = LI_FN_DEF(il2cpp_field_static_get_value);

		using il2cpp_class_get_fields = uintptr_t(*)(uintptr_t, uintptr_t*);

		static auto class_get_fields = LI_FN_DEF(il2cpp_class_get_fields);

		using il2cpp_field_get_offset = uintptr_t(*)(uintptr_t);

		static auto field_get_offset = LI_FN_DEF(il2cpp_field_get_offset);

		using il2cpp_runtime_class_init = uintptr_t(*)(uintptr_t);

		static auto runtime_class_init = LI_FN_DEF(il2cpp_runtime_class_init);

		using il2cpp_string_new_wrapper = uintptr_t(*)(const char*);
		static auto new_string = LI_FN_DEF(il2cpp_string_new_wrapper);

		using il2cpp_type_get_object = uintptr_t(*)(uintptr_t);
		static auto type_get_object = LI_FN_DEF(il2cpp_type_get_object);

		using il2cpp_class_get_type = uintptr_t(*)(uintptr_t);
		static auto class_get_type = LI_FN_DEF(il2cpp_class_get_type);

		using il2cpp_array_new = il2cppArray<unsigned char>* (*)(uintptr_t, int);
		static auto array_new = LI_FN_DEF(il2cpp_array_new);

		using il2cpp_array_addr_with_size = char* (*)(uintptr_t, int, uintptr_t);
		static auto array_addr_with_size = LI_FN_DEF(il2cpp_array_addr_with_size);
	}

	static uintptr_t init_class(const char* name, const char* name_space = "")
	{
		uintptr_t assemblyCount = 0;
		uintptr_t* assemblyArray = methods::domain_get_assemblies((void*)methods::domain_get(), &assemblyCount);

		for (int i = 0; i < assemblyCount; i++)
		{
			if (uintptr_t assemblyClass = methods::class_from_name(methods::assembly_get_image(assemblyArray[i]), name_space, name))
			{
				return assemblyClass;
			}
		}

		return 0;
	}

	static uintptr_t type_object(const char* name, const char* name_space)
	{
		uintptr_t assemblyClass = init_class(name, name_space);

		return methods::type_get_object(methods::class_get_type(assemblyClass));
	}

	static uintptr_t method(const char* kl, const char* name, const char* name_space = "", int argument_number = -1, int skips = 0)
	{
		uintptr_t assemblyClass = init_class(kl, name_space);

		if (skips == 0)
		{
			return methods::class_get_method_from_name(assemblyClass, name, argument_number);
		}
		else
		{
			int methodCount = 0;
			uintptr_t methodIterator = 0;

			while (methods::class_get_methods(assemblyClass, &methodIterator))
			{
				methodCount += 1;
			}

			int skipped = 0;
			methodIterator = 0;

			while (auto currentMethod = methods::class_get_methods(assemblyClass, &methodIterator))
			{
				char* st = (char*)*reinterpret_cast<uint64_t*>((uint64_t)currentMethod + 0x18);

				if (strcmp(st, (char*)name))
				{
					if (argument_number > -1)
					{
						int method_count = methods::method_get_param_count(currentMethod);

						if (method_count >= 0 && method_count != argument_number)
							continue;
					}

					if (skipped < skips)
					{
						skipped += 1;
						continue;
					}

					return currentMethod;
				}
			}
		}

		return 0;
	}

	static uintptr_t offset(const char* kl, const char* name, const char* name_space = "", bool get_offset = true)
	{
		// For singleton instances, cache the field pointer but not the value
		if (!get_offset && strcmp(name, "instance") == 0)
		{
			static std::unordered_map<std::string, uintptr_t> field_cache;
			std::string field_key = std::string(kl) + "|" + std::string(name_space) + "|instance_field";

			uintptr_t field_ptr = 0;
			auto it = field_cache.find(field_key);
			if (it != field_cache.end())
			{
				field_ptr = it->second;
			}
			else
			{
				// Cache the field pointer (this doesn't change)
				uintptr_t assemblyClass = init_class(kl, name_space);
				field_ptr = methods::class_get_field_from_name(assemblyClass, name);
				field_cache[field_key] = field_ptr;
			}

			// Always read the current value (this changes)
			uintptr_t result = 0;
			methods::field_static_get_value(field_ptr, &result);
			return result;
		}

		// Cache field offsets normally
		static std::unordered_map<std::string, uintptr_t> offset_cache;
		std::string cache_key = std::string(kl) + "|" + std::string(name) + "|" + std::string(name_space) + "|" + (get_offset ? "1" : "0");

		auto it = offset_cache.find(cache_key);
		if (it != offset_cache.end())
		{
			return it->second;
		}

		// Calculate and cache
		uintptr_t assemblyClass = init_class(kl, name_space);
		uintptr_t result = 0;
		if (get_offset)
		{
			result = methods::field_get_offset(methods::class_get_field_from_name(assemblyClass, name));
		}
		else
		{
			methods::field_static_get_value(methods::class_get_field_from_name(assemblyClass, name), &result);
		}

		offset_cache[cache_key] = result;
		return result;
	}
}