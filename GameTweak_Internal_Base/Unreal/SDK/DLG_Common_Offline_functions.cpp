#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: DLG_Common_Offline

#include "Basic.hpp"

#include "DLG_Common_Offline_classes.hpp"
#include "DLG_Common_Offline_parameters.hpp"


namespace SDK
{

// Function DLG_Common_Offline.DLG_Common_Offline_C.BndEvt__DLG_ServiceTime_Ctrl_CommonButton_K2Node_ComponentBoundEvent_2_DM_OnSelectEnd__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UAnimatableWidget*                _widget                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                                    _select                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDLG_Common_Offline_C::BndEvt__DLG_ServiceTime_Ctrl_CommonButton_K2Node_ComponentBoundEvent_2_DM_OnSelectEnd__DelegateSignature(class UAnimatableWidget* _widget, bool _select)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DLG_Common_Offline_C", "BndEvt__DLG_ServiceTime_Ctrl_CommonButton_K2Node_ComponentBoundEvent_2_DM_OnSelectEnd__DelegateSignature");

	Params::DLG_Common_Offline_C_BndEvt__DLG_ServiceTime_Ctrl_CommonButton_K2Node_ComponentBoundEvent_2_DM_OnSelectEnd__DelegateSignature Parms{};

	Parms._widget = _widget;
	Parms._select = _select;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DLG_Common_Offline.DLG_Common_Offline_C.BndEvt__DLG_ServiceTime_LINK_Announcements_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)

void UDLG_Common_Offline_C::BndEvt__DLG_ServiceTime_LINK_Announcements_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DLG_Common_Offline_C", "BndEvt__DLG_ServiceTime_LINK_Announcements_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DLG_Common_Offline.DLG_Common_Offline_C.ExecuteUbergraph_DLG_Common_Offline
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDLG_Common_Offline_C::ExecuteUbergraph_DLG_Common_Offline(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DLG_Common_Offline_C", "ExecuteUbergraph_DLG_Common_Offline");

	Params::DLG_Common_Offline_C_ExecuteUbergraph_DLG_Common_Offline Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

