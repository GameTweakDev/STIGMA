#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: Ctrl_BoxItem_BattleStore

#include "Basic.hpp"

#include "BPGLib_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Ctrl_BoxItem_BattleStore.Ctrl_BoxItem_BattleStore_C
// 0x0020 (0x0510 - 0x04F0)
class UCtrl_BoxItem_BattleStore_C final : public UPreviewableWidget
{
public:
	class UImage*                                 Image_79;                                          // 0x04F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_98;                                          // 0x04F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                             SLOT_Contanier;                                    // 0x0500(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Txt_Title;                                         // 0x0508(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetTitle(const class FText& _Title);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Ctrl_BoxItem_BattleStore_C">();
	}
	static class UCtrl_BoxItem_BattleStore_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCtrl_BoxItem_BattleStore_C>();
	}
};
static_assert(alignof(UCtrl_BoxItem_BattleStore_C) == 0x000008, "Wrong alignment on UCtrl_BoxItem_BattleStore_C");
static_assert(sizeof(UCtrl_BoxItem_BattleStore_C) == 0x000510, "Wrong size on UCtrl_BoxItem_BattleStore_C");
static_assert(offsetof(UCtrl_BoxItem_BattleStore_C, Image_79) == 0x0004F0, "Member 'UCtrl_BoxItem_BattleStore_C::Image_79' has a wrong offset!");
static_assert(offsetof(UCtrl_BoxItem_BattleStore_C, Image_98) == 0x0004F8, "Member 'UCtrl_BoxItem_BattleStore_C::Image_98' has a wrong offset!");
static_assert(offsetof(UCtrl_BoxItem_BattleStore_C, SLOT_Contanier) == 0x000500, "Member 'UCtrl_BoxItem_BattleStore_C::SLOT_Contanier' has a wrong offset!");
static_assert(offsetof(UCtrl_BoxItem_BattleStore_C, Txt_Title) == 0x000508, "Member 'UCtrl_BoxItem_BattleStore_C::Txt_Title' has a wrong offset!");

}

