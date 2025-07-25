#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: AvfMediaFactory

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class AvfMediaFactory.AvfMediaSettings
// 0x0008 (0x0030 - 0x0028)
class UAvfMediaSettings final : public UObject
{
public:
	bool                                          NativeAudioOut;                                    // 0x0028(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_327A[0x7];                                     // 0x0029(0x0007)(Fixing Struct Size After Last Property [ Dumper-69 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AvfMediaSettings">();
	}
	static class UAvfMediaSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAvfMediaSettings>();
	}
};
static_assert(alignof(UAvfMediaSettings) == 0x000008, "Wrong alignment on UAvfMediaSettings");
static_assert(sizeof(UAvfMediaSettings) == 0x000030, "Wrong size on UAvfMediaSettings");
static_assert(offsetof(UAvfMediaSettings, NativeAudioOut) == 0x000028, "Member 'UAvfMediaSettings::NativeAudioOut' has a wrong offset!");

}

