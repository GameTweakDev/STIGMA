#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: Nano_BP

#include "Basic.hpp"

#include "CharaBase_BP_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Nano_BP.Nano_BP_C
// 0x0000 (0x3690 - 0x3690)
class ANano_BP_C final : public ACharaBase_BP_C
{
public:
	void OnBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Nano_BP_C">();
	}
	static class ANano_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ANano_BP_C>();
	}
};
static_assert(alignof(ANano_BP_C) == 0x000010, "Wrong alignment on ANano_BP_C");
static_assert(sizeof(ANano_BP_C) == 0x003690, "Wrong size on ANano_BP_C");

}

