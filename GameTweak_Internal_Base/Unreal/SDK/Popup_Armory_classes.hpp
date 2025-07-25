#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: Popup_Armory

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BPGLib_classes.hpp"
#include "Stigma_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Popup_Armory.Popup_Armory_C
// 0x0040 (0x05B0 - 0x0570)
class UPopup_Armory_C final : public UPopupBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0570(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                btn_close;                                         // 0x0578(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPanel_Armory_C*                        Panel_Armory;                                      // 0x0580(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnEquipItem;                                       // 0x0588(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnClose_0;                                         // 0x0598(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class AMatchServicedPlayerState*              BoundPS;                                           // 0x05A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__Popup_Armory_BTN_Close_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Popup_Armory_Panel_Armory_K2Node_ComponentBoundEvent_0_OnEquipItem__DelegateSignature(ECharaType _chara_type, const struct FItemID& _item_id, int32 _idx_slot);
	void ConfigArmory(class AMatchServicedPlayerState* _ps, EItemCategory _start_category, const TDelegate<void(ECharaType _chara_type, const struct FItemID& _item_id, int32 _idx_slot)>& _on_equip_item, const TDelegate<void()>& _on_close);
	void Destruct();
	void ExecuteUbergraph_Popup_Armory(int32 EntryPoint);
	void OnClose_0__DelegateSignature();
	void OnEquipItem__DelegateSignature(ECharaType _chara_type, const struct FItemID& _item_id, int32 _idx_slot);
	bool OnHidePopup();
	void OnPlayerStateChanged(EChangedPlayerState _reason, class AMatchServicedPlayerState* _ps);
	void Update(const struct FCharacterInfo& _chara_info);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Popup_Armory_C">();
	}
	static class UPopup_Armory_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPopup_Armory_C>();
	}
};
static_assert(alignof(UPopup_Armory_C) == 0x000008, "Wrong alignment on UPopup_Armory_C");
static_assert(sizeof(UPopup_Armory_C) == 0x0005B0, "Wrong size on UPopup_Armory_C");
static_assert(offsetof(UPopup_Armory_C, UberGraphFrame) == 0x000570, "Member 'UPopup_Armory_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPopup_Armory_C, btn_close) == 0x000578, "Member 'UPopup_Armory_C::btn_close' has a wrong offset!");
static_assert(offsetof(UPopup_Armory_C, Panel_Armory) == 0x000580, "Member 'UPopup_Armory_C::Panel_Armory' has a wrong offset!");
static_assert(offsetof(UPopup_Armory_C, OnEquipItem) == 0x000588, "Member 'UPopup_Armory_C::OnEquipItem' has a wrong offset!");
static_assert(offsetof(UPopup_Armory_C, OnClose_0) == 0x000598, "Member 'UPopup_Armory_C::OnClose_0' has a wrong offset!");
static_assert(offsetof(UPopup_Armory_C, BoundPS) == 0x0005A8, "Member 'UPopup_Armory_C::BoundPS' has a wrong offset!");

}

