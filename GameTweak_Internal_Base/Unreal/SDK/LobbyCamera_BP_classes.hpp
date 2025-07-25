#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: LobbyCamera_BP

#include "Basic.hpp"

#include "BPGLib_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass LobbyCamera_BP.LobbyCamera_BP_C
// 0x0010 (0x0B00 - 0x0AF0)
class ALobbyCamera_BP_C : public AFollowCameraActor
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0AF0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LobbyCamera_BP_C">();
	}
	static class ALobbyCamera_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ALobbyCamera_BP_C>();
	}
};
static_assert(alignof(ALobbyCamera_BP_C) == 0x000010, "Wrong alignment on ALobbyCamera_BP_C");
static_assert(sizeof(ALobbyCamera_BP_C) == 0x000B00, "Wrong size on ALobbyCamera_BP_C");
static_assert(offsetof(ALobbyCamera_BP_C, DefaultSceneRoot) == 0x000AF0, "Member 'ALobbyCamera_BP_C::DefaultSceneRoot' has a wrong offset!");

}

