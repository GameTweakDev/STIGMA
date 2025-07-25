#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: PropertyPath

#include "Basic.hpp"

#include "PropertyPath_structs.hpp"
#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class PropertyPath.PropertyPathTestObject
// 0x0128 (0x0150 - 0x0028)
class UPropertyPathTestObject final : public UObject
{
public:
	bool                                          Bool;                                              // 0x0028(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EPropertyPathTestEnum                         EnumOne;                                           // 0x0029(0x0001)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EPropertyPathTestEnum                         EnumTwo;                                           // 0x002A(0x0001)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EPropertyPathTestEnum                         EnumThree;                                         // 0x002B(0x0001)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EPropertyPathTestEnum                         EnumFour;                                          // 0x002C(0x0001)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_142[0x3];                                      // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-69 ])
	int32                                         Integer;                                           // 0x0030(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_143[0x4];                                      // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-69 ])
	class FString                                 String;                                            // 0x0038(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Float;                                             // 0x0048(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_144[0x4];                                      // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-69 ])
	struct FPropertyPathTestStruct                Struct;                                            // 0x0050(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FPropertyPathTestStruct                StructRef;                                         // 0x00A0(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FPropertyPathTestStruct                StructConstRef;                                    // 0x00F0(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class UPropertyPathTestObject*                InnerObject;                                       // 0x0140(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_145[0x8];                                      // 0x0148(0x0008)(Fixing Struct Size After Last Property [ Dumper-69 ])

public:
	void SetFloat(float InFloat);
	void SetStruct(const struct FPropertyPathTestStruct& InStruct);
	void SetStructConstRef(const struct FPropertyPathTestStruct& InStruct);
	void SetStructRef(const struct FPropertyPathTestStruct& InStruct);

	float GetFloat() const;
	struct FPropertyPathTestStruct GetStruct() const;
	const struct FPropertyPathTestStruct GetStructConstRef() const;
	struct FPropertyPathTestStruct GetStructRef() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PropertyPathTestObject">();
	}
	static class UPropertyPathTestObject* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPropertyPathTestObject>();
	}
};
static_assert(alignof(UPropertyPathTestObject) == 0x000008, "Wrong alignment on UPropertyPathTestObject");
static_assert(sizeof(UPropertyPathTestObject) == 0x000150, "Wrong size on UPropertyPathTestObject");
static_assert(offsetof(UPropertyPathTestObject, Bool) == 0x000028, "Member 'UPropertyPathTestObject::Bool' has a wrong offset!");
static_assert(offsetof(UPropertyPathTestObject, EnumOne) == 0x000029, "Member 'UPropertyPathTestObject::EnumOne' has a wrong offset!");
static_assert(offsetof(UPropertyPathTestObject, EnumTwo) == 0x00002A, "Member 'UPropertyPathTestObject::EnumTwo' has a wrong offset!");
static_assert(offsetof(UPropertyPathTestObject, EnumThree) == 0x00002B, "Member 'UPropertyPathTestObject::EnumThree' has a wrong offset!");
static_assert(offsetof(UPropertyPathTestObject, EnumFour) == 0x00002C, "Member 'UPropertyPathTestObject::EnumFour' has a wrong offset!");
static_assert(offsetof(UPropertyPathTestObject, Integer) == 0x000030, "Member 'UPropertyPathTestObject::Integer' has a wrong offset!");
static_assert(offsetof(UPropertyPathTestObject, String) == 0x000038, "Member 'UPropertyPathTestObject::String' has a wrong offset!");
static_assert(offsetof(UPropertyPathTestObject, Float) == 0x000048, "Member 'UPropertyPathTestObject::Float' has a wrong offset!");
static_assert(offsetof(UPropertyPathTestObject, Struct) == 0x000050, "Member 'UPropertyPathTestObject::Struct' has a wrong offset!");
static_assert(offsetof(UPropertyPathTestObject, StructRef) == 0x0000A0, "Member 'UPropertyPathTestObject::StructRef' has a wrong offset!");
static_assert(offsetof(UPropertyPathTestObject, StructConstRef) == 0x0000F0, "Member 'UPropertyPathTestObject::StructConstRef' has a wrong offset!");
static_assert(offsetof(UPropertyPathTestObject, InnerObject) == 0x000140, "Member 'UPropertyPathTestObject::InnerObject' has a wrong offset!");

}

