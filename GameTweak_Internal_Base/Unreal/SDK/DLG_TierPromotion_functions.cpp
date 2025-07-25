#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: DLG_TierPromotion

#include "Basic.hpp"

#include "DLG_TierPromotion_classes.hpp"
#include "DLG_TierPromotion_parameters.hpp"


namespace SDK
{

// Function DLG_TierPromotion.DLG_TierPromotion_C.SetValue
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FBC_TierUpdate                   _packet                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UDLG_TierPromotion_C::SetValue(const struct FBC_TierUpdate& _packet)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DLG_TierPromotion_C", "SetValue");

	Params::DLG_TierPromotion_C_SetValue Parms{};

	Parms._packet = std::move(_packet);

	UObject::ProcessEvent(Func, &Parms);
}


// Function DLG_TierPromotion.DLG_TierPromotion_C.OnEVENT_Select_End
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    _selected                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDLG_TierPromotion_C::OnEVENT_Select_End(bool _selected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DLG_TierPromotion_C", "OnEVENT_Select_End");

	Params::DLG_TierPromotion_C_OnEVENT_Select_End Parms{};

	Parms._selected = _selected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DLG_TierPromotion.DLG_TierPromotion_C.Init
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBC_TierUpdate                   _packet                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UDLG_TierPromotion_C::Init(const struct FBC_TierUpdate& _packet)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DLG_TierPromotion_C", "Init");

	Params::DLG_TierPromotion_C_Init Parms{};

	Parms._packet = std::move(_packet);

	UObject::ProcessEvent(Func, &Parms);
}


// Function DLG_TierPromotion.DLG_TierPromotion_C.ExecuteUbergraph_DLG_TierPromotion
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDLG_TierPromotion_C::ExecuteUbergraph_DLG_TierPromotion(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DLG_TierPromotion_C", "ExecuteUbergraph_DLG_TierPromotion");

	Params::DLG_TierPromotion_C_ExecuteUbergraph_DLG_TierPromotion Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DLG_TierPromotion.DLG_TierPromotion_C.BndEvt__DLG_TierPromotion_Ctrl_close_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature
// (BlueprintEvent)

void UDLG_TierPromotion_C::BndEvt__DLG_TierPromotion_Ctrl_close_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DLG_TierPromotion_C", "BndEvt__DLG_TierPromotion_Ctrl_close_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DLG_TierPromotion.DLG_TierPromotion_C.BndEvt__DLG_TierPromotion_BTN_OK_K2Node_ComponentBoundEvent_0_DM_OnSelectEnd__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UAnimatableWidget*                _widget                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                                    _select                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDLG_TierPromotion_C::BndEvt__DLG_TierPromotion_BTN_OK_K2Node_ComponentBoundEvent_0_DM_OnSelectEnd__DelegateSignature(class UAnimatableWidget* _widget, bool _select)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DLG_TierPromotion_C", "BndEvt__DLG_TierPromotion_BTN_OK_K2Node_ComponentBoundEvent_0_DM_OnSelectEnd__DelegateSignature");

	Params::DLG_TierPromotion_C_BndEvt__DLG_TierPromotion_BTN_OK_K2Node_ComponentBoundEvent_0_DM_OnSelectEnd__DelegateSignature Parms{};

	Parms._widget = _widget;
	Parms._select = _select;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DLG_TierPromotion.DLG_TierPromotion_C.BndEvt__DLG_TierPromotion_Ctrl_close_K2Node_ComponentBoundEvent_2_OnClickClose__DelegateSignature
// (BlueprintEvent)

void UDLG_TierPromotion_C::BndEvt__DLG_TierPromotion_Ctrl_close_K2Node_ComponentBoundEvent_2_OnClickClose__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DLG_TierPromotion_C", "BndEvt__DLG_TierPromotion_Ctrl_close_K2Node_ComponentBoundEvent_2_OnClickClose__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}

}

