#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: Ctrl_SkinSlot

#include "Basic.hpp"

#include "Ctrl_SkinSlot_classes.hpp"
#include "Ctrl_SkinSlot_parameters.hpp"


namespace SDK
{

// Function Ctrl_SkinSlot.Ctrl_SkinSlot_C.BndEvt__Ctrl_SkinSlot_Btn_Body_K2Node_ComponentBoundEvent_0_DM_OnSelectEnd__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UAnimatableWidget*                _widget                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                                    _select                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCtrl_SkinSlot_C::BndEvt__Ctrl_SkinSlot_Btn_Body_K2Node_ComponentBoundEvent_0_DM_OnSelectEnd__DelegateSignature(class UAnimatableWidget* _widget, bool _select)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Ctrl_SkinSlot_C", "BndEvt__Ctrl_SkinSlot_Btn_Body_K2Node_ComponentBoundEvent_0_DM_OnSelectEnd__DelegateSignature");

	Params::Ctrl_SkinSlot_C_BndEvt__Ctrl_SkinSlot_Btn_Body_K2Node_ComponentBoundEvent_0_DM_OnSelectEnd__DelegateSignature Parms{};

	Parms._widget = _widget;
	Parms._select = _select;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Ctrl_SkinSlot.Ctrl_SkinSlot_C.CreateTooltip
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemID                          _item_id                                               (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UUI_Tooltip*                      _out_tooltip                                           (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UCtrl_SkinSlot_C::CreateTooltip(const struct FItemID& _item_id, class UUI_Tooltip** _out_tooltip)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Ctrl_SkinSlot_C", "CreateTooltip");

	Params::Ctrl_SkinSlot_C_CreateTooltip Parms{};

	Parms._item_id = std::move(_item_id);

	UObject::ProcessEvent(Func, &Parms);

	if (_out_tooltip != nullptr)
		*_out_tooltip = Parms._out_tooltip;
}


// Function Ctrl_SkinSlot.Ctrl_SkinSlot_C.ExecuteUbergraph_Ctrl_SkinSlot
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCtrl_SkinSlot_C::ExecuteUbergraph_Ctrl_SkinSlot(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Ctrl_SkinSlot_C", "ExecuteUbergraph_Ctrl_SkinSlot");

	Params::Ctrl_SkinSlot_C_ExecuteUbergraph_Ctrl_SkinSlot Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Ctrl_SkinSlot.Ctrl_SkinSlot_C.GetTooltipWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UCtrl_SkinSlot_C::GetTooltipWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Ctrl_SkinSlot_C", "GetTooltipWidget");

	Params::Ctrl_SkinSlot_C_GetTooltipWidget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

