#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: VS_GameState_BP

#include "Basic.hpp"

#include "Stigma_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass VS_GameState_BP.VS_GameState_BP_C
// 0x0008 (0x09A0 - 0x0998)
class AVS_GameState_BP_C final : public AVS_GameState
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0998(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"VS_GameState_BP_C">();
	}
	static class AVS_GameState_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AVS_GameState_BP_C>();
	}
};
static_assert(alignof(AVS_GameState_BP_C) == 0x000008, "Wrong alignment on AVS_GameState_BP_C");
static_assert(sizeof(AVS_GameState_BP_C) == 0x0009A0, "Wrong size on AVS_GameState_BP_C");
static_assert(offsetof(AVS_GameState_BP_C, DefaultSceneRoot) == 0x000998, "Member 'AVS_GameState_BP_C::DefaultSceneRoot' has a wrong offset!");

}

