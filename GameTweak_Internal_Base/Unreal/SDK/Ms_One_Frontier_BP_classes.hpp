#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: Ms_One_Frontier_BP

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Ms_One_Frontier_BP.Ms_One_Frontier_BP_C
// 0x0020 (0x02B8 - 0x0298)
class AMs_One_Frontier_BP_C final : public AActor
{
public:
	class UStaticMeshComponent*                   Ms_One_Msk_Fac_Ori;                                // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 Ms_One_Fac_Ori_Mesh;                               // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 One_Frontier_Bdy;                                  // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Ms_One_Frontier_BP_C">();
	}
	static class AMs_One_Frontier_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AMs_One_Frontier_BP_C>();
	}
};
static_assert(alignof(AMs_One_Frontier_BP_C) == 0x000008, "Wrong alignment on AMs_One_Frontier_BP_C");
static_assert(sizeof(AMs_One_Frontier_BP_C) == 0x0002B8, "Wrong size on AMs_One_Frontier_BP_C");
static_assert(offsetof(AMs_One_Frontier_BP_C, Ms_One_Msk_Fac_Ori) == 0x000298, "Member 'AMs_One_Frontier_BP_C::Ms_One_Msk_Fac_Ori' has a wrong offset!");
static_assert(offsetof(AMs_One_Frontier_BP_C, Ms_One_Fac_Ori_Mesh) == 0x0002A0, "Member 'AMs_One_Frontier_BP_C::Ms_One_Fac_Ori_Mesh' has a wrong offset!");
static_assert(offsetof(AMs_One_Frontier_BP_C, One_Frontier_Bdy) == 0x0002A8, "Member 'AMs_One_Frontier_BP_C::One_Frontier_Bdy' has a wrong offset!");
static_assert(offsetof(AMs_One_Frontier_BP_C, DefaultSceneRoot) == 0x0002B0, "Member 'AMs_One_Frontier_BP_C::DefaultSceneRoot' has a wrong offset!");

}

