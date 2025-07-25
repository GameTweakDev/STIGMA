#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: Nano

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Nano.Nano_C
// 0x0028 (0x02C0 - 0x0298)
class ANano_C final : public AActor
{
public:
	class USkeletalMeshComponent*                 Nano_Cot_Ori_SET;                                  // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 BrenTen_Common;                                    // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 Nano_Fac_Ori_Set;                                  // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 Nano_Bdy_Ori_Set;                                  // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Nano_C">();
	}
	static class ANano_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ANano_C>();
	}
};
static_assert(alignof(ANano_C) == 0x000008, "Wrong alignment on ANano_C");
static_assert(sizeof(ANano_C) == 0x0002C0, "Wrong size on ANano_C");
static_assert(offsetof(ANano_C, Nano_Cot_Ori_SET) == 0x000298, "Member 'ANano_C::Nano_Cot_Ori_SET' has a wrong offset!");
static_assert(offsetof(ANano_C, BrenTen_Common) == 0x0002A0, "Member 'ANano_C::BrenTen_Common' has a wrong offset!");
static_assert(offsetof(ANano_C, Nano_Fac_Ori_Set) == 0x0002A8, "Member 'ANano_C::Nano_Fac_Ori_Set' has a wrong offset!");
static_assert(offsetof(ANano_C, Nano_Bdy_Ori_Set) == 0x0002B0, "Member 'ANano_C::Nano_Bdy_Ori_Set' has a wrong offset!");
static_assert(offsetof(ANano_C, DefaultSceneRoot) == 0x0002B8, "Member 'ANano_C::DefaultSceneRoot' has a wrong offset!");

}

