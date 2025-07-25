#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: InterchangeMessages

#include "Basic.hpp"

#include "InterchangeCore_classes.hpp"


namespace SDK
{

// Class InterchangeMessages.InterchangeResultMeshWarning
// 0x0010 (0x0070 - 0x0060)
class UInterchangeResultMeshWarning : public UInterchangeResultWarning
{
public:
	class FString                                 MeshName;                                          // 0x0060(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"InterchangeResultMeshWarning">();
	}
	static class UInterchangeResultMeshWarning* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInterchangeResultMeshWarning>();
	}
};
static_assert(alignof(UInterchangeResultMeshWarning) == 0x000008, "Wrong alignment on UInterchangeResultMeshWarning");
static_assert(sizeof(UInterchangeResultMeshWarning) == 0x000070, "Wrong size on UInterchangeResultMeshWarning");
static_assert(offsetof(UInterchangeResultMeshWarning, MeshName) == 0x000060, "Member 'UInterchangeResultMeshWarning::MeshName' has a wrong offset!");

// Class InterchangeMessages.InterchangeResultTextureWarning
// 0x0010 (0x0070 - 0x0060)
class UInterchangeResultTextureWarning : public UInterchangeResultWarning
{
public:
	class FString                                 TextureName;                                       // 0x0060(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"InterchangeResultTextureWarning">();
	}
	static class UInterchangeResultTextureWarning* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInterchangeResultTextureWarning>();
	}
};
static_assert(alignof(UInterchangeResultTextureWarning) == 0x000008, "Wrong alignment on UInterchangeResultTextureWarning");
static_assert(sizeof(UInterchangeResultTextureWarning) == 0x000070, "Wrong size on UInterchangeResultTextureWarning");
static_assert(offsetof(UInterchangeResultTextureWarning, TextureName) == 0x000060, "Member 'UInterchangeResultTextureWarning::TextureName' has a wrong offset!");

// Class InterchangeMessages.InterchangeResultMeshError
// 0x0010 (0x0070 - 0x0060)
class UInterchangeResultMeshError : public UInterchangeResultError
{
public:
	class FString                                 MeshName;                                          // 0x0060(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"InterchangeResultMeshError">();
	}
	static class UInterchangeResultMeshError* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInterchangeResultMeshError>();
	}
};
static_assert(alignof(UInterchangeResultMeshError) == 0x000008, "Wrong alignment on UInterchangeResultMeshError");
static_assert(sizeof(UInterchangeResultMeshError) == 0x000070, "Wrong size on UInterchangeResultMeshError");
static_assert(offsetof(UInterchangeResultMeshError, MeshName) == 0x000060, "Member 'UInterchangeResultMeshError::MeshName' has a wrong offset!");

// Class InterchangeMessages.InterchangeResultMeshWarning_Generic
// 0x0018 (0x0088 - 0x0070)
class UInterchangeResultMeshWarning_Generic final : public UInterchangeResultMeshWarning
{
public:
	class FText                                   Text;                                              // 0x0070(0x0018)(NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"InterchangeResultMeshWarning_Generic">();
	}
	static class UInterchangeResultMeshWarning_Generic* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInterchangeResultMeshWarning_Generic>();
	}
};
static_assert(alignof(UInterchangeResultMeshWarning_Generic) == 0x000008, "Wrong alignment on UInterchangeResultMeshWarning_Generic");
static_assert(sizeof(UInterchangeResultMeshWarning_Generic) == 0x000088, "Wrong size on UInterchangeResultMeshWarning_Generic");
static_assert(offsetof(UInterchangeResultMeshWarning_Generic, Text) == 0x000070, "Member 'UInterchangeResultMeshWarning_Generic::Text' has a wrong offset!");

// Class InterchangeMessages.InterchangeResultMeshError_Generic
// 0x0018 (0x0088 - 0x0070)
class UInterchangeResultMeshError_Generic final : public UInterchangeResultMeshError
{
public:
	class FText                                   Text;                                              // 0x0070(0x0018)(NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"InterchangeResultMeshError_Generic">();
	}
	static class UInterchangeResultMeshError_Generic* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInterchangeResultMeshError_Generic>();
	}
};
static_assert(alignof(UInterchangeResultMeshError_Generic) == 0x000008, "Wrong alignment on UInterchangeResultMeshError_Generic");
static_assert(sizeof(UInterchangeResultMeshError_Generic) == 0x000088, "Wrong size on UInterchangeResultMeshError_Generic");
static_assert(offsetof(UInterchangeResultMeshError_Generic, Text) == 0x000070, "Member 'UInterchangeResultMeshError_Generic::Text' has a wrong offset!");

// Class InterchangeMessages.InterchangeResultMeshWarning_TooManyUVs
// 0x0008 (0x0078 - 0x0070)
class UInterchangeResultMeshWarning_TooManyUVs final : public UInterchangeResultMeshWarning
{
public:
	int32                                         ExcessUVs;                                         // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3232[0x4];                                     // 0x0074(0x0004)(Fixing Struct Size After Last Property [ Dumper-69 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"InterchangeResultMeshWarning_TooManyUVs">();
	}
	static class UInterchangeResultMeshWarning_TooManyUVs* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInterchangeResultMeshWarning_TooManyUVs>();
	}
};
static_assert(alignof(UInterchangeResultMeshWarning_TooManyUVs) == 0x000008, "Wrong alignment on UInterchangeResultMeshWarning_TooManyUVs");
static_assert(sizeof(UInterchangeResultMeshWarning_TooManyUVs) == 0x000078, "Wrong size on UInterchangeResultMeshWarning_TooManyUVs");
static_assert(offsetof(UInterchangeResultMeshWarning_TooManyUVs, ExcessUVs) == 0x000070, "Member 'UInterchangeResultMeshWarning_TooManyUVs::ExcessUVs' has a wrong offset!");

// Class InterchangeMessages.InterchangeResultTextureWarning_TextureFileDoNotExist
// 0x0028 (0x0098 - 0x0070)
class UInterchangeResultTextureWarning_TextureFileDoNotExist final : public UInterchangeResultTextureWarning
{
public:
	class FText                                   Text;                                              // 0x0070(0x0018)(NativeAccessSpecifierPublic)
	class FString                                 MaterialName;                                      // 0x0088(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"InterchangeResultTextureWarning_TextureFileDoNotExist">();
	}
	static class UInterchangeResultTextureWarning_TextureFileDoNotExist* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInterchangeResultTextureWarning_TextureFileDoNotExist>();
	}
};
static_assert(alignof(UInterchangeResultTextureWarning_TextureFileDoNotExist) == 0x000008, "Wrong alignment on UInterchangeResultTextureWarning_TextureFileDoNotExist");
static_assert(sizeof(UInterchangeResultTextureWarning_TextureFileDoNotExist) == 0x000098, "Wrong size on UInterchangeResultTextureWarning_TextureFileDoNotExist");
static_assert(offsetof(UInterchangeResultTextureWarning_TextureFileDoNotExist, Text) == 0x000070, "Member 'UInterchangeResultTextureWarning_TextureFileDoNotExist::Text' has a wrong offset!");
static_assert(offsetof(UInterchangeResultTextureWarning_TextureFileDoNotExist, MaterialName) == 0x000088, "Member 'UInterchangeResultTextureWarning_TextureFileDoNotExist::MaterialName' has a wrong offset!");

}

