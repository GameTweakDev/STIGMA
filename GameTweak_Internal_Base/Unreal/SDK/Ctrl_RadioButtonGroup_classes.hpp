#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: Ctrl_RadioButtonGroup

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"
#include "RadioButtonDefine_structs.hpp"
#include "Stigma_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Ctrl_RadioButtonGroup.Ctrl_RadioButtonGroup_C
// 0x0088 (0x05A0 - 0x0518)
class UCtrl_RadioButtonGroup_C final : public UCtrl_RadioButtonGroupBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0518(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                         Container;                                         // 0x0520(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 TitleLine;                                         // 0x0528(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Txt_Title;                                         // 0x0530(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<struct FRadioButtonDefine>             ButtonDefines;                                     // 0x0538(0x0010)(Edit, BlueprintVisible)
	struct FMargin                                ButtonMargin;                                      // 0x0548(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	class FText                                   Title;                                             // 0x0558(0x0018)(Edit, BlueprintVisible)
	FMulticastInlineDelegateProperty_             OnClicked;                                         // 0x0570(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	EHorizontalAlignment                          ButtonHorizontalAlign;                             // 0x0580(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EVerticalAlignment                            ButtonVerticalAlign;                               // 0x0581(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_411C[0x2];                                     // 0x0582(0x0002)(Fixing Size After Last Property [ Dumper-69 ])
	class FName                                   SelectedID;                                        // 0x0584(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_411D[0x4];                                     // 0x058C(0x0004)(Fixing Size After Last Property [ Dumper-69 ])
	FMulticastInlineDelegateProperty_             OnSelectedChanged;                                 // 0x0590(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void UpdateTitle();
	void UpdateButtons();
	void ShowButtonFromID(class FName ID);
	void SelectOnlyMatchedIDEx(class FName _id_selected, bool _invoke_callback);
	void SelectOnlyMatchedID(class FName _id_selected);
	bool OnSynchronizeProperties();
	void OnSelectedChanged__DelegateSignature(class FName& _prev_id, class FName& _cur_id);
	void OnClicked__DelegateSignature(class FName _id);
	void OnClickButton(class FName _id);
	void HideButtonFromIndex(int32 Param_Index);
	void HideAllButton();
	class FName GetSelectedID();
	void ExecuteUbergraph_Ctrl_RadioButtonGroup(int32 EntryPoint);
	void DoSelectOnlyMatchedID(class FName _id_selected, bool Invoke_callback);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Ctrl_RadioButtonGroup_C">();
	}
	static class UCtrl_RadioButtonGroup_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCtrl_RadioButtonGroup_C>();
	}
};
static_assert(alignof(UCtrl_RadioButtonGroup_C) == 0x000008, "Wrong alignment on UCtrl_RadioButtonGroup_C");
static_assert(sizeof(UCtrl_RadioButtonGroup_C) == 0x0005A0, "Wrong size on UCtrl_RadioButtonGroup_C");
static_assert(offsetof(UCtrl_RadioButtonGroup_C, UberGraphFrame) == 0x000518, "Member 'UCtrl_RadioButtonGroup_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCtrl_RadioButtonGroup_C, Container) == 0x000520, "Member 'UCtrl_RadioButtonGroup_C::Container' has a wrong offset!");
static_assert(offsetof(UCtrl_RadioButtonGroup_C, TitleLine) == 0x000528, "Member 'UCtrl_RadioButtonGroup_C::TitleLine' has a wrong offset!");
static_assert(offsetof(UCtrl_RadioButtonGroup_C, Txt_Title) == 0x000530, "Member 'UCtrl_RadioButtonGroup_C::Txt_Title' has a wrong offset!");
static_assert(offsetof(UCtrl_RadioButtonGroup_C, ButtonDefines) == 0x000538, "Member 'UCtrl_RadioButtonGroup_C::ButtonDefines' has a wrong offset!");
static_assert(offsetof(UCtrl_RadioButtonGroup_C, ButtonMargin) == 0x000548, "Member 'UCtrl_RadioButtonGroup_C::ButtonMargin' has a wrong offset!");
static_assert(offsetof(UCtrl_RadioButtonGroup_C, Title) == 0x000558, "Member 'UCtrl_RadioButtonGroup_C::Title' has a wrong offset!");
static_assert(offsetof(UCtrl_RadioButtonGroup_C, OnClicked) == 0x000570, "Member 'UCtrl_RadioButtonGroup_C::OnClicked' has a wrong offset!");
static_assert(offsetof(UCtrl_RadioButtonGroup_C, ButtonHorizontalAlign) == 0x000580, "Member 'UCtrl_RadioButtonGroup_C::ButtonHorizontalAlign' has a wrong offset!");
static_assert(offsetof(UCtrl_RadioButtonGroup_C, ButtonVerticalAlign) == 0x000581, "Member 'UCtrl_RadioButtonGroup_C::ButtonVerticalAlign' has a wrong offset!");
static_assert(offsetof(UCtrl_RadioButtonGroup_C, SelectedID) == 0x000584, "Member 'UCtrl_RadioButtonGroup_C::SelectedID' has a wrong offset!");
static_assert(offsetof(UCtrl_RadioButtonGroup_C, OnSelectedChanged) == 0x000590, "Member 'UCtrl_RadioButtonGroup_C::OnSelectedChanged' has a wrong offset!");

}

