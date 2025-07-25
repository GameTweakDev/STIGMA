#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: AIDeco_FindRandomPatrol

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AIModule_structs.hpp"
#include "AIModule_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass AIDeco_FindRandomPatrol.AIDeco_FindRandomPatrol_C
// 0x0058 (0x0100 - 0x00A8)
class UAIDeco_FindRandomPatrol_C final : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                 PatrolLocationKey;                                 // 0x00B0(0x0028)(Edit, BlueprintVisible)
	struct FBlackboardKeySelector                 PatrolRadiusKey;                                   // 0x00D8(0x0028)(Edit, BlueprintVisible)

public:
	void ExecuteUbergraph_AIDeco_FindRandomPatrol(int32 EntryPoint);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AIDeco_FindRandomPatrol_C">();
	}
	static class UAIDeco_FindRandomPatrol_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAIDeco_FindRandomPatrol_C>();
	}
};
static_assert(alignof(UAIDeco_FindRandomPatrol_C) == 0x000008, "Wrong alignment on UAIDeco_FindRandomPatrol_C");
static_assert(sizeof(UAIDeco_FindRandomPatrol_C) == 0x000100, "Wrong size on UAIDeco_FindRandomPatrol_C");
static_assert(offsetof(UAIDeco_FindRandomPatrol_C, UberGraphFrame) == 0x0000A8, "Member 'UAIDeco_FindRandomPatrol_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAIDeco_FindRandomPatrol_C, PatrolLocationKey) == 0x0000B0, "Member 'UAIDeco_FindRandomPatrol_C::PatrolLocationKey' has a wrong offset!");
static_assert(offsetof(UAIDeco_FindRandomPatrol_C, PatrolRadiusKey) == 0x0000D8, "Member 'UAIDeco_FindRandomPatrol_C::PatrolRadiusKey' has a wrong offset!");

}

