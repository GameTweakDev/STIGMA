#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: WIDGET_GameModeButton

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Stigma_structs.hpp"
#include "BPGLib_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WIDGET_GameModeButton.WIDGET_GameModeButton_C
// 0x00B8 (0x05A8 - 0x04F0)
class UWIDGET_GameModeButton_C final : public UPreviewableWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x04F0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       UI_OnShow;                                         // 0x04F8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       UI_OnSelected;                                     // 0x0500(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCheckBox*                              CHK_QuickSelected;                                 // 0x0508(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCtrl_CommonButtonBase_C*               Ctrl_CommonButtonBase;                             // 0x0510(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCtrl_Status_C*                         Ctrl_Status;                                       // 0x0518(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Dimmed;                                        // 0x0520(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Mode_Bg;                                       // 0x0528(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IMG_Title;                                         // 0x0530(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 M_Selected_1;                                      // 0x0538(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Panel_Locked;                                      // 0x0540(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TXT_Name;                                          // 0x0548(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_TutorialMissionGuide_C*             UI_TutorialMissionGuide;                           // 0x0550(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	EGameMode                                     GameMode;                                          // 0x0558(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          _IsSelected;                                       // 0x0559(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_164F[0x6];                                     // 0x055A(0x0006)(Fixing Size After Last Property [ Dumper-69 ])
	FMulticastInlineDelegateProperty_             OnClick;                                           // 0x0560(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          _IsBanned;                                         // 0x0570(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          _IsNotUnlocked;                                    // 0x0571(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1650[0x6];                                     // 0x0572(0x0006)(Fixing Size After Last Property [ Dumper-69 ])
	class FText                                   _BanMsg;                                           // 0x0578(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   _LockMsg;                                          // 0x0590(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void UpdateSelection();
	void UpdateLock();
	void UpdateGameMode();
	void SetBan(bool _is_lock, const class FText& _msg);
	bool OnSynchronizeProperties();
	void OnPushButton();
	void OnClick__DelegateSignature(EGameMode _game_mode);
	void ExecuteUbergraph_WIDGET_GameModeButton(int32 EntryPoint);
	void BndEvt__WIDGET_GameModeButton_Ctrl_CommonButtonBase_K2Node_ComponentBoundEvent_3_DM_OnSelectStart__DelegateSignature(class UAnimatableWidget* _widget, bool _select);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WIDGET_GameModeButton_C">();
	}
	static class UWIDGET_GameModeButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWIDGET_GameModeButton_C>();
	}
};
static_assert(alignof(UWIDGET_GameModeButton_C) == 0x000008, "Wrong alignment on UWIDGET_GameModeButton_C");
static_assert(sizeof(UWIDGET_GameModeButton_C) == 0x0005A8, "Wrong size on UWIDGET_GameModeButton_C");
static_assert(offsetof(UWIDGET_GameModeButton_C, UberGraphFrame) == 0x0004F0, "Member 'UWIDGET_GameModeButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWIDGET_GameModeButton_C, UI_OnShow) == 0x0004F8, "Member 'UWIDGET_GameModeButton_C::UI_OnShow' has a wrong offset!");
static_assert(offsetof(UWIDGET_GameModeButton_C, UI_OnSelected) == 0x000500, "Member 'UWIDGET_GameModeButton_C::UI_OnSelected' has a wrong offset!");
static_assert(offsetof(UWIDGET_GameModeButton_C, CHK_QuickSelected) == 0x000508, "Member 'UWIDGET_GameModeButton_C::CHK_QuickSelected' has a wrong offset!");
static_assert(offsetof(UWIDGET_GameModeButton_C, Ctrl_CommonButtonBase) == 0x000510, "Member 'UWIDGET_GameModeButton_C::Ctrl_CommonButtonBase' has a wrong offset!");
static_assert(offsetof(UWIDGET_GameModeButton_C, Ctrl_Status) == 0x000518, "Member 'UWIDGET_GameModeButton_C::Ctrl_Status' has a wrong offset!");
static_assert(offsetof(UWIDGET_GameModeButton_C, Img_Dimmed) == 0x000520, "Member 'UWIDGET_GameModeButton_C::Img_Dimmed' has a wrong offset!");
static_assert(offsetof(UWIDGET_GameModeButton_C, Img_Mode_Bg) == 0x000528, "Member 'UWIDGET_GameModeButton_C::Img_Mode_Bg' has a wrong offset!");
static_assert(offsetof(UWIDGET_GameModeButton_C, IMG_Title) == 0x000530, "Member 'UWIDGET_GameModeButton_C::IMG_Title' has a wrong offset!");
static_assert(offsetof(UWIDGET_GameModeButton_C, M_Selected_1) == 0x000538, "Member 'UWIDGET_GameModeButton_C::M_Selected_1' has a wrong offset!");
static_assert(offsetof(UWIDGET_GameModeButton_C, Panel_Locked) == 0x000540, "Member 'UWIDGET_GameModeButton_C::Panel_Locked' has a wrong offset!");
static_assert(offsetof(UWIDGET_GameModeButton_C, TXT_Name) == 0x000548, "Member 'UWIDGET_GameModeButton_C::TXT_Name' has a wrong offset!");
static_assert(offsetof(UWIDGET_GameModeButton_C, UI_TutorialMissionGuide) == 0x000550, "Member 'UWIDGET_GameModeButton_C::UI_TutorialMissionGuide' has a wrong offset!");
static_assert(offsetof(UWIDGET_GameModeButton_C, GameMode) == 0x000558, "Member 'UWIDGET_GameModeButton_C::GameMode' has a wrong offset!");
static_assert(offsetof(UWIDGET_GameModeButton_C, _IsSelected) == 0x000559, "Member 'UWIDGET_GameModeButton_C::_IsSelected' has a wrong offset!");
static_assert(offsetof(UWIDGET_GameModeButton_C, OnClick) == 0x000560, "Member 'UWIDGET_GameModeButton_C::OnClick' has a wrong offset!");
static_assert(offsetof(UWIDGET_GameModeButton_C, _IsBanned) == 0x000570, "Member 'UWIDGET_GameModeButton_C::_IsBanned' has a wrong offset!");
static_assert(offsetof(UWIDGET_GameModeButton_C, _IsNotUnlocked) == 0x000571, "Member 'UWIDGET_GameModeButton_C::_IsNotUnlocked' has a wrong offset!");
static_assert(offsetof(UWIDGET_GameModeButton_C, _BanMsg) == 0x000578, "Member 'UWIDGET_GameModeButton_C::_BanMsg' has a wrong offset!");
static_assert(offsetof(UWIDGET_GameModeButton_C, _LockMsg) == 0x000590, "Member 'UWIDGET_GameModeButton_C::_LockMsg' has a wrong offset!");

}

