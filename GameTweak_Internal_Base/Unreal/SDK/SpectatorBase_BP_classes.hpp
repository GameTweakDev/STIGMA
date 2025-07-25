#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: SpectatorBase_BP

#include "Basic.hpp"

#include "Stigma_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass SpectatorBase_BP.SpectatorBase_BP_C
// 0x0010 (0x0358 - 0x0348)
class ASpectatorBase_BP_C final : public ASpectatorBase
{
public:
	class UCameraComponent*                       Camera1;                                           // 0x0348(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpringArmComponent*                    SpringArm;                                         // 0x0350(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SpectatorBase_BP_C">();
	}
	static class ASpectatorBase_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ASpectatorBase_BP_C>();
	}
};
static_assert(alignof(ASpectatorBase_BP_C) == 0x000008, "Wrong alignment on ASpectatorBase_BP_C");
static_assert(sizeof(ASpectatorBase_BP_C) == 0x000358, "Wrong size on ASpectatorBase_BP_C");
static_assert(offsetof(ASpectatorBase_BP_C, Camera1) == 0x000348, "Member 'ASpectatorBase_BP_C::Camera1' has a wrong offset!");
static_assert(offsetof(ASpectatorBase_BP_C, SpringArm) == 0x000350, "Member 'ASpectatorBase_BP_C::SpringArm' has a wrong offset!");

}

