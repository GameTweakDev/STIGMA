#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: Glock45_Common

#include "Basic.hpp"

#include "GunBase_BP_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Glock45_Common.Glock45_Common_C
// 0x0000 (0x1E00 - 0x1E00)
class AGlock45_Common_C final : public AGunBase_BP_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Glock45_Common_C">();
	}
	static class AGlock45_Common_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGlock45_Common_C>();
	}
};
static_assert(alignof(AGlock45_Common_C) == 0x000010, "Wrong alignment on AGlock45_Common_C");
static_assert(sizeof(AGlock45_Common_C) == 0x001E00, "Wrong size on AGlock45_Common_C");

}

