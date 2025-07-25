#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: DummyChara_BP

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass DummyChara_BP.DummyChara_BP_C
// 0x0010 (0x02A8 - 0x0298)
class ADummyChara_BP_C final : public AActor
{
public:
	class USkeletalMeshComponent*                 SkeletalMesh;                                      // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DummyChara_BP_C">();
	}
	static class ADummyChara_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ADummyChara_BP_C>();
	}
};
static_assert(alignof(ADummyChara_BP_C) == 0x000008, "Wrong alignment on ADummyChara_BP_C");
static_assert(sizeof(ADummyChara_BP_C) == 0x0002A8, "Wrong size on ADummyChara_BP_C");
static_assert(offsetof(ADummyChara_BP_C, SkeletalMesh) == 0x000298, "Member 'ADummyChara_BP_C::SkeletalMesh' has a wrong offset!");
static_assert(offsetof(ADummyChara_BP_C, DefaultSceneRoot) == 0x0002A0, "Member 'ADummyChara_BP_C::DefaultSceneRoot' has a wrong offset!");

}

