#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: Glock18C_Common

#include "Basic.hpp"

#include "GunBase_BP_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Glock18C_Common.Glock18C_Common_C
// 0x0000 (0x1E00 - 0x1E00)
class AGlock18C_Common_C final : public AGunBase_BP_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Glock18C_Common_C">();
	}
	static class AGlock18C_Common_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGlock18C_Common_C>();
	}
};
static_assert(alignof(AGlock18C_Common_C) == 0x000010, "Wrong alignment on AGlock18C_Common_C");
static_assert(sizeof(AGlock18C_Common_C) == 0x001E00, "Wrong size on AGlock18C_Common_C");

}

