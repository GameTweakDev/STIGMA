#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: GunCustomize

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Stigma_structs.hpp"
#include "Stigma_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GunCustomize.GunCustomize_C
// 0x0010 (0x0060 - 0x0050)
class UGunCustomize_C final : public UGoToWidgetDetailer
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0050(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UUI_WeaponPage*                         Page;                                              // 0x0058(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GunCustomize(int32 EntryPoint);
	void GetCustomCategory(class FName* Category);
	void GetGunPartsSlot(EGunPartsSlot* Slot);
	void GetGunType(EGunType* _gun_type);
	void PlayDetailer(class UPreviewableWidget* _target_widget);
	void Wait();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GunCustomize_C">();
	}
	static class UGunCustomize_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGunCustomize_C>();
	}
};
static_assert(alignof(UGunCustomize_C) == 0x000008, "Wrong alignment on UGunCustomize_C");
static_assert(sizeof(UGunCustomize_C) == 0x000060, "Wrong size on UGunCustomize_C");
static_assert(offsetof(UGunCustomize_C, UberGraphFrame) == 0x000050, "Member 'UGunCustomize_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGunCustomize_C, Page) == 0x000058, "Member 'UGunCustomize_C::Page' has a wrong offset!");

}

