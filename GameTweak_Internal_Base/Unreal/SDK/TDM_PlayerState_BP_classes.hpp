#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: TDM_PlayerState_BP

#include "Basic.hpp"

#include "Stigma_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass TDM_PlayerState_BP.TDM_PlayerState_BP_C
// 0x0008 (0x0C90 - 0x0C88)
class ATDM_PlayerState_BP_C final : public ATDM_PlayerState
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0C88(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TDM_PlayerState_BP_C">();
	}
	static class ATDM_PlayerState_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ATDM_PlayerState_BP_C>();
	}
};
static_assert(alignof(ATDM_PlayerState_BP_C) == 0x000008, "Wrong alignment on ATDM_PlayerState_BP_C");
static_assert(sizeof(ATDM_PlayerState_BP_C) == 0x000C90, "Wrong size on ATDM_PlayerState_BP_C");
static_assert(offsetof(ATDM_PlayerState_BP_C, DefaultSceneRoot) == 0x000C88, "Member 'ATDM_PlayerState_BP_C::DefaultSceneRoot' has a wrong offset!");

}

