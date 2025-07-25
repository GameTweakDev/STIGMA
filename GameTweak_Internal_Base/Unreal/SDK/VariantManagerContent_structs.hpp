#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: VariantManagerContent

#include "Basic.hpp"


namespace SDK
{

// Enum VariantManagerContent.EPropertyValueCategory
// NumValues: 0x000A
enum class EPropertyValueCategory : uint8
{
	Undefined                                = 0,
	Generic                                  = 1,
	RelativeLocation                         = 2,
	RelativeRotation                         = 4,
	RelativeScale3D                          = 8,
	Visibility                               = 16,
	Material                                 = 32,
	Color                                    = 64,
	Option                                   = 128,
	EPropertyValueCategory_MAX               = 129,
};

// ScriptStruct VariantManagerContent.FunctionCaller
// 0x0008 (0x0008 - 0x0000)
struct FFunctionCaller final
{
public:
	class FName                                   FunctionName;                                      // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FFunctionCaller) == 0x000004, "Wrong alignment on FFunctionCaller");
static_assert(sizeof(FFunctionCaller) == 0x000008, "Wrong size on FFunctionCaller");
static_assert(offsetof(FFunctionCaller, FunctionName) == 0x000000, "Member 'FFunctionCaller::FunctionName' has a wrong offset!");

// ScriptStruct VariantManagerContent.CapturedPropSegment
// 0x0028 (0x0028 - 0x0000)
struct FCapturedPropSegment final
{
public:
	class FString                                 PropertyName;                                      // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         PropertyIndex;                                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_10B[0x4];                                      // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-69 ])
	class FString                                 ComponentName;                                     // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FCapturedPropSegment) == 0x000008, "Wrong alignment on FCapturedPropSegment");
static_assert(sizeof(FCapturedPropSegment) == 0x000028, "Wrong size on FCapturedPropSegment");
static_assert(offsetof(FCapturedPropSegment, PropertyName) == 0x000000, "Member 'FCapturedPropSegment::PropertyName' has a wrong offset!");
static_assert(offsetof(FCapturedPropSegment, PropertyIndex) == 0x000010, "Member 'FCapturedPropSegment::PropertyIndex' has a wrong offset!");
static_assert(offsetof(FCapturedPropSegment, ComponentName) == 0x000018, "Member 'FCapturedPropSegment::ComponentName' has a wrong offset!");

// ScriptStruct VariantManagerContent.VariantDependency
// 0x0058 (0x0058 - 0x0000)
struct FVariantDependency final
{
public:
	TSoftObjectPtr<class UVariantSet>             VariantSet;                                        // 0x0000(0x0028)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UVariant>                Variant;                                           // 0x0028(0x0028)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnabled;                                          // 0x0050(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_10C[0x7];                                      // 0x0051(0x0007)(Fixing Struct Size After Last Property [ Dumper-69 ])
};
static_assert(alignof(FVariantDependency) == 0x000008, "Wrong alignment on FVariantDependency");
static_assert(sizeof(FVariantDependency) == 0x000058, "Wrong size on FVariantDependency");
static_assert(offsetof(FVariantDependency, VariantSet) == 0x000000, "Member 'FVariantDependency::VariantSet' has a wrong offset!");
static_assert(offsetof(FVariantDependency, Variant) == 0x000028, "Member 'FVariantDependency::Variant' has a wrong offset!");
static_assert(offsetof(FVariantDependency, bEnabled) == 0x000050, "Member 'FVariantDependency::bEnabled' has a wrong offset!");

}

