#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: PAGE_MasterPick

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Stigma_structs.hpp"
#include "Stigma_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass PAGE_MasterPick.PAGE_MasterPick_C
// 0x0058 (0x0568 - 0x0510)
class UPAGE_MasterPick_C final : public UUI_LobbyPage
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0510(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCtrl_CommonButton_Intensity_C*         BTN_Confirm;                                       // 0x0518(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCtrl_CommonButton_Intensity_C*         BTN_Select;                                        // 0x0520(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Main;                                              // 0x0528(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPanel_Characters_C*                    Panel_Characters;                                  // 0x0530(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPANEL_Master_ActiveSkill_C*            PANEL_Master_ActiveSkill;                          // 0x0538(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWIDGET_PickedMaster_C*                 WIDGET_PickedMaster_Disruptor;                     // 0x0540(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWIDGET_PickedMaster_C*                 WIDGET_PickedMaster_Infiltrator;                   // 0x0548(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWIDGET_PickedMaster_C*                 WIDGET_PickedMaster_Striker;                       // 0x0550(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWIDGET_PickedMaster_C*                 WIDGET_PickedMaster_Thrower;                       // 0x0558(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	ECharaType                                    Current_Chara;                                     // 0x0560(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void PickMaster(ECharaType _chara_type);
	void OnUpdateUser(EUserEvent _event);
	bool OnOpenPage(EItemCategory _option, ELobbyPage _prev_page);
	void OnChangePickedMaster();
	struct FNetReply OnACK_SetCurrentCharacter(EResultCode _rcode, const struct FApiResult& _ack);
	void Init();
	void GetSlotForFightingStyle(EFightingStyle _style, class UWIDGET_PickedMaster_C** _widget);
	void ExecuteUbergraph_PAGE_MasterPick(int32 EntryPoint);
	void BndEvt__PAGE_MasterPick_WIDGET_PickedMaster_Thrower_K2Node_ComponentBoundEvent_2_OnChanged__DelegateSignature();
	void BndEvt__PAGE_MasterPick_WIDGET_PickedMaster_Striker_K2Node_ComponentBoundEvent_3_OnChanged__DelegateSignature();
	void BndEvt__PAGE_MasterPick_WIDGET_PickedMaster_Infiltrator_K2Node_ComponentBoundEvent_5_OnChanged__DelegateSignature();
	void BndEvt__PAGE_MasterPick_WIDGET_PickedMaster_Disruptor_K2Node_ComponentBoundEvent_4_OnChanged__DelegateSignature();
	void BndEvt__PAGE_MasterPick_Panel_Characters_K2Node_ComponentBoundEvent_0_OnCharacterSelected__DelegateSignature(ECharaType _chara_type);
	void BndEvt__PAGE_MasterPick_BTN_Select_K2Node_ComponentBoundEvent_1_DM_OnSelectEnd__DelegateSignature(class UAnimatableWidget* _widget, bool _select);
	void BndEvt__PAGE_MasterPick_BTN_Confirm_K2Node_ComponentBoundEvent_9_DM_OnSelectEnd__DelegateSignature(class UAnimatableWidget* _widget, bool _select);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PAGE_MasterPick_C">();
	}
	static class UPAGE_MasterPick_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPAGE_MasterPick_C>();
	}
};
static_assert(alignof(UPAGE_MasterPick_C) == 0x000008, "Wrong alignment on UPAGE_MasterPick_C");
static_assert(sizeof(UPAGE_MasterPick_C) == 0x000568, "Wrong size on UPAGE_MasterPick_C");
static_assert(offsetof(UPAGE_MasterPick_C, UberGraphFrame) == 0x000510, "Member 'UPAGE_MasterPick_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPAGE_MasterPick_C, BTN_Confirm) == 0x000518, "Member 'UPAGE_MasterPick_C::BTN_Confirm' has a wrong offset!");
static_assert(offsetof(UPAGE_MasterPick_C, BTN_Select) == 0x000520, "Member 'UPAGE_MasterPick_C::BTN_Select' has a wrong offset!");
static_assert(offsetof(UPAGE_MasterPick_C, Main) == 0x000528, "Member 'UPAGE_MasterPick_C::Main' has a wrong offset!");
static_assert(offsetof(UPAGE_MasterPick_C, Panel_Characters) == 0x000530, "Member 'UPAGE_MasterPick_C::Panel_Characters' has a wrong offset!");
static_assert(offsetof(UPAGE_MasterPick_C, PANEL_Master_ActiveSkill) == 0x000538, "Member 'UPAGE_MasterPick_C::PANEL_Master_ActiveSkill' has a wrong offset!");
static_assert(offsetof(UPAGE_MasterPick_C, WIDGET_PickedMaster_Disruptor) == 0x000540, "Member 'UPAGE_MasterPick_C::WIDGET_PickedMaster_Disruptor' has a wrong offset!");
static_assert(offsetof(UPAGE_MasterPick_C, WIDGET_PickedMaster_Infiltrator) == 0x000548, "Member 'UPAGE_MasterPick_C::WIDGET_PickedMaster_Infiltrator' has a wrong offset!");
static_assert(offsetof(UPAGE_MasterPick_C, WIDGET_PickedMaster_Striker) == 0x000550, "Member 'UPAGE_MasterPick_C::WIDGET_PickedMaster_Striker' has a wrong offset!");
static_assert(offsetof(UPAGE_MasterPick_C, WIDGET_PickedMaster_Thrower) == 0x000558, "Member 'UPAGE_MasterPick_C::WIDGET_PickedMaster_Thrower' has a wrong offset!");
static_assert(offsetof(UPAGE_MasterPick_C, Current_Chara) == 0x000560, "Member 'UPAGE_MasterPick_C::Current_Chara' has a wrong offset!");

}

