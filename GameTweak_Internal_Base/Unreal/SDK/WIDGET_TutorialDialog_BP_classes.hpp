#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: WIDGET_TutorialDialog_BP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Stigma_structs.hpp"
#include "Stigma_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WIDGET_TutorialDialog_BP.WIDGET_TutorialDialog_BP_C
// 0x0060 (0x0638 - 0x05D8)
class UWIDGET_TutorialDialog_BP_C final : public UWIDGET_TutorialDialog
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x05D8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       UI_OnShow;                                         // 0x05E0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCtrl_CommonButton_Intensity_C*         BTN_OK_3;                                          // 0x05E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCtrl_CommonButton_Intensity_C*         BTN_OK_L;                                          // 0x05F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCtrl_CommonButton_Intensity_C*         BTN_OK_R;                                          // 0x05F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCtrl_CommonButton_Intensity_C*         BTN_StopTutorial;                                  // 0x0600(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CV_Message_C;                                      // 0x0608(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CV_Message_L;                                      // 0x0610(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CV_Message_R;                                      // 0x0618(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IMG_BlackScreen;                                   // 0x0620(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IMG_RefImage;                                      // 0x0628(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                         TXT_Message_C;                                     // 0x0630(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	struct FLinearColor BIND_Color_BlackScreen();
	ESlateVisibility BIND_Visibility_Stop();
	void BndEvt__WIDGET_TutorialDialog_BP_BTN_OK_L_K2Node_ComponentBoundEvent_2_DM_OnSelectEnd__DelegateSignature(class UAnimatableWidget* _widget, bool _select);
	void BndEvt__WIDGET_TutorialDialog_BP_BTN_OK_R_K2Node_ComponentBoundEvent_3_DM_OnSelectEnd__DelegateSignature(class UAnimatableWidget* _widget, bool _select);
	void BndEvt__WIDGET_TutorialDialog_BP_BTN_StopTutorial_K2Node_ComponentBoundEvent_1_DM_OnSelectEnd__DelegateSignature(class UAnimatableWidget* _widget, bool _select);
	void ExecuteUbergraph_WIDGET_TutorialDialog_BP(int32 EntryPoint);
	void OnStartShowMessage();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WIDGET_TutorialDialog_BP_C">();
	}
	static class UWIDGET_TutorialDialog_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWIDGET_TutorialDialog_BP_C>();
	}
};
static_assert(alignof(UWIDGET_TutorialDialog_BP_C) == 0x000008, "Wrong alignment on UWIDGET_TutorialDialog_BP_C");
static_assert(sizeof(UWIDGET_TutorialDialog_BP_C) == 0x000638, "Wrong size on UWIDGET_TutorialDialog_BP_C");
static_assert(offsetof(UWIDGET_TutorialDialog_BP_C, UberGraphFrame) == 0x0005D8, "Member 'UWIDGET_TutorialDialog_BP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWIDGET_TutorialDialog_BP_C, UI_OnShow) == 0x0005E0, "Member 'UWIDGET_TutorialDialog_BP_C::UI_OnShow' has a wrong offset!");
static_assert(offsetof(UWIDGET_TutorialDialog_BP_C, BTN_OK_3) == 0x0005E8, "Member 'UWIDGET_TutorialDialog_BP_C::BTN_OK_3' has a wrong offset!");
static_assert(offsetof(UWIDGET_TutorialDialog_BP_C, BTN_OK_L) == 0x0005F0, "Member 'UWIDGET_TutorialDialog_BP_C::BTN_OK_L' has a wrong offset!");
static_assert(offsetof(UWIDGET_TutorialDialog_BP_C, BTN_OK_R) == 0x0005F8, "Member 'UWIDGET_TutorialDialog_BP_C::BTN_OK_R' has a wrong offset!");
static_assert(offsetof(UWIDGET_TutorialDialog_BP_C, BTN_StopTutorial) == 0x000600, "Member 'UWIDGET_TutorialDialog_BP_C::BTN_StopTutorial' has a wrong offset!");
static_assert(offsetof(UWIDGET_TutorialDialog_BP_C, CV_Message_C) == 0x000608, "Member 'UWIDGET_TutorialDialog_BP_C::CV_Message_C' has a wrong offset!");
static_assert(offsetof(UWIDGET_TutorialDialog_BP_C, CV_Message_L) == 0x000610, "Member 'UWIDGET_TutorialDialog_BP_C::CV_Message_L' has a wrong offset!");
static_assert(offsetof(UWIDGET_TutorialDialog_BP_C, CV_Message_R) == 0x000618, "Member 'UWIDGET_TutorialDialog_BP_C::CV_Message_R' has a wrong offset!");
static_assert(offsetof(UWIDGET_TutorialDialog_BP_C, IMG_BlackScreen) == 0x000620, "Member 'UWIDGET_TutorialDialog_BP_C::IMG_BlackScreen' has a wrong offset!");
static_assert(offsetof(UWIDGET_TutorialDialog_BP_C, IMG_RefImage) == 0x000628, "Member 'UWIDGET_TutorialDialog_BP_C::IMG_RefImage' has a wrong offset!");
static_assert(offsetof(UWIDGET_TutorialDialog_BP_C, TXT_Message_C) == 0x000630, "Member 'UWIDGET_TutorialDialog_BP_C::TXT_Message_C' has a wrong offset!");

}

