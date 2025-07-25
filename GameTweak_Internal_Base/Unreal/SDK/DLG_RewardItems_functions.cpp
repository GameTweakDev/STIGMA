#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: DLG_RewardItems

#include "Basic.hpp"

#include "DLG_RewardItems_classes.hpp"
#include "DLG_RewardItems_parameters.hpp"


namespace SDK
{

// Function DLG_RewardItems.DLG_RewardItems_C.BndEvt__DLG_RewardItems_BTN_OK_K2Node_ComponentBoundEvent_0_DM_OnSelectEnd__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UAnimatableWidget*                _widget                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                                    _select                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDLG_RewardItems_C::BndEvt__DLG_RewardItems_BTN_OK_K2Node_ComponentBoundEvent_0_DM_OnSelectEnd__DelegateSignature(class UAnimatableWidget* _widget, bool _select)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DLG_RewardItems_C", "BndEvt__DLG_RewardItems_BTN_OK_K2Node_ComponentBoundEvent_0_DM_OnSelectEnd__DelegateSignature");

	Params::DLG_RewardItems_C_BndEvt__DLG_RewardItems_BTN_OK_K2Node_ComponentBoundEvent_0_DM_OnSelectEnd__DelegateSignature Parms{};

	Parms._widget = _widget;
	Parms._select = _select;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DLG_RewardItems.DLG_RewardItems_C.BndEvt__DLG_RewardItems_UI_PopUp_ContentBox_K2Node_ComponentBoundEvent_1_OnClickClose__DelegateSignature
// (BlueprintEvent)

void UDLG_RewardItems_C::BndEvt__DLG_RewardItems_UI_PopUp_ContentBox_K2Node_ComponentBoundEvent_1_OnClickClose__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DLG_RewardItems_C", "BndEvt__DLG_RewardItems_UI_PopUp_ContentBox_K2Node_ComponentBoundEvent_1_OnClickClose__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DLG_RewardItems.DLG_RewardItems_C.ExecuteUbergraph_DLG_RewardItems
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDLG_RewardItems_C::ExecuteUbergraph_DLG_RewardItems(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DLG_RewardItems_C", "ExecuteUbergraph_DLG_RewardItems");

	Params::DLG_RewardItems_C_ExecuteUbergraph_DLG_RewardItems Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

