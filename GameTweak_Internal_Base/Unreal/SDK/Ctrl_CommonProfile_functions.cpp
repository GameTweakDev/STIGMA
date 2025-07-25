#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: Ctrl_CommonProfile

#include "Basic.hpp"

#include "Ctrl_CommonProfile_classes.hpp"
#include "Ctrl_CommonProfile_parameters.hpp"


namespace SDK
{

// Function Ctrl_CommonProfile.Ctrl_CommonProfile_C.BndEvt__Ctrl_Tab_BTN_Body_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UCtrl_CommonProfile_C::BndEvt__Ctrl_Tab_BTN_Body_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Ctrl_CommonProfile_C", "BndEvt__Ctrl_Tab_BTN_Body_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Ctrl_CommonProfile.Ctrl_CommonProfile_C.BndEvt__Ctrl_Tab_BTN_Body_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UCtrl_CommonProfile_C::BndEvt__Ctrl_Tab_BTN_Body_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Ctrl_CommonProfile_C", "BndEvt__Ctrl_Tab_BTN_Body_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Ctrl_CommonProfile.Ctrl_CommonProfile_C.BndEvt__Ctrl_Tab_BTN_Body_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UCtrl_CommonProfile_C::BndEvt__Ctrl_Tab_BTN_Body_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Ctrl_CommonProfile_C", "BndEvt__Ctrl_Tab_BTN_Body_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Ctrl_CommonProfile.Ctrl_CommonProfile_C.BndEvt__Ctrl_Tab_BTN_Body_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UCtrl_CommonProfile_C::BndEvt__Ctrl_Tab_BTN_Body_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Ctrl_CommonProfile_C", "BndEvt__Ctrl_Tab_BTN_Body_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Ctrl_CommonProfile.Ctrl_CommonProfile_C.BndEvt__Ctrl_Tab_RadioButton_120_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UCtrl_CommonProfile_C::BndEvt__Ctrl_Tab_RadioButton_120_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Ctrl_CommonProfile_C", "BndEvt__Ctrl_Tab_RadioButton_120_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Ctrl_CommonProfile.Ctrl_CommonProfile_C.ExecuteUbergraph_Ctrl_CommonProfile
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCtrl_CommonProfile_C::ExecuteUbergraph_Ctrl_CommonProfile(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Ctrl_CommonProfile_C", "ExecuteUbergraph_Ctrl_CommonProfile");

	Params::Ctrl_CommonProfile_C_ExecuteUbergraph_Ctrl_CommonProfile Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Ctrl_CommonProfile.Ctrl_CommonProfile_C.OnSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UCtrl_CommonProfile_C::OnSelected__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Ctrl_CommonProfile_C", "OnSelected__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Ctrl_CommonProfile.Ctrl_CommonProfile_C.OnSynchronizeProperties
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UCtrl_CommonProfile_C::OnSynchronizeProperties()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Ctrl_CommonProfile_C", "OnSynchronizeProperties");

	Params::Ctrl_CommonProfile_C_OnSynchronizeProperties Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function Ctrl_CommonProfile.Ctrl_CommonProfile_C.SetSelect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    _is                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCtrl_CommonProfile_C::SetSelect(bool _is)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Ctrl_CommonProfile_C", "SetSelect");

	Params::Ctrl_CommonProfile_C_SetSelect Parms{};

	Parms._is = _is;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Ctrl_CommonProfile.Ctrl_CommonProfile_C.UpdateSelected
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UCtrl_CommonProfile_C::UpdateSelected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Ctrl_CommonProfile_C", "UpdateSelected");

	UObject::ProcessEvent(Func, nullptr);
}

}

