#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: Alexa_Ori_BP

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Alexa_Ori_BP.Alexa_Ori_BP_C
// 0x0010 (0x02A8 - 0x0298)
class AAlexa_Ori_BP_C final : public AActor
{
public:
	class USkeletalMeshComponent*                 Alexa_Original_Head;                               // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 Alexa_Original_Body;                               // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Alexa_Ori_BP_C">();
	}
	static class AAlexa_Ori_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AAlexa_Ori_BP_C>();
	}
};
static_assert(alignof(AAlexa_Ori_BP_C) == 0x000008, "Wrong alignment on AAlexa_Ori_BP_C");
static_assert(sizeof(AAlexa_Ori_BP_C) == 0x0002A8, "Wrong size on AAlexa_Ori_BP_C");
static_assert(offsetof(AAlexa_Ori_BP_C, Alexa_Original_Head) == 0x000298, "Member 'AAlexa_Ori_BP_C::Alexa_Original_Head' has a wrong offset!");
static_assert(offsetof(AAlexa_Ori_BP_C, Alexa_Original_Body) == 0x0002A0, "Member 'AAlexa_Ori_BP_C::Alexa_Original_Body' has a wrong offset!");

}

