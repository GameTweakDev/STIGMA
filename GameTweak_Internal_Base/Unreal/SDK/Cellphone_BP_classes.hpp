#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: Cellphone_BP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Stigma_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Cellphone_BP.Cellphone_BP_C
// 0x0020 (0x0800 - 0x07E0)
class ACellphone_BP_C final : public AThrowBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x07E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                        Audio;                                             // 0x07E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 SkeletalMesh;                                      // 0x07F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_Cellphone_BP(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Cellphone_BP_C">();
	}
	static class ACellphone_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ACellphone_BP_C>();
	}
};
static_assert(alignof(ACellphone_BP_C) == 0x000010, "Wrong alignment on ACellphone_BP_C");
static_assert(sizeof(ACellphone_BP_C) == 0x000800, "Wrong size on ACellphone_BP_C");
static_assert(offsetof(ACellphone_BP_C, UberGraphFrame) == 0x0007E0, "Member 'ACellphone_BP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ACellphone_BP_C, Audio) == 0x0007E8, "Member 'ACellphone_BP_C::Audio' has a wrong offset!");
static_assert(offsetof(ACellphone_BP_C, SkeletalMesh) == 0x0007F0, "Member 'ACellphone_BP_C::SkeletalMesh' has a wrong offset!");

}

