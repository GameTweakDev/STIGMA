#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: VS_GameMode_BP

#include "Basic.hpp"

#include "Stigma_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass VS_GameMode_BP.VS_GameMode_BP_C
// 0x0008 (0x0808 - 0x0800)
class AVS_GameMode_BP_C final : public AVS_GameMode
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0800(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"VS_GameMode_BP_C">();
	}
	static class AVS_GameMode_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AVS_GameMode_BP_C>();
	}
};
static_assert(alignof(AVS_GameMode_BP_C) == 0x000008, "Wrong alignment on AVS_GameMode_BP_C");
static_assert(sizeof(AVS_GameMode_BP_C) == 0x000808, "Wrong size on AVS_GameMode_BP_C");
static_assert(offsetof(AVS_GameMode_BP_C, DefaultSceneRoot) == 0x000800, "Member 'AVS_GameMode_BP_C::DefaultSceneRoot' has a wrong offset!");

}

