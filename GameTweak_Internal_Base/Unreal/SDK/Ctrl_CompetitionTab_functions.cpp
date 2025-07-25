#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: Ctrl_CompetitionTab

#include "Basic.hpp"

#include "Ctrl_CompetitionTab_classes.hpp"
#include "Ctrl_CompetitionTab_parameters.hpp"


namespace SDK
{

// Function Ctrl_CompetitionTab.Ctrl_CompetitionTab_C.UpdateTab
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UCtrl_CompetitionTab_C::UpdateTab()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Ctrl_CompetitionTab_C", "UpdateTab");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Ctrl_CompetitionTab.Ctrl_CompetitionTab_C.UpdateSelected
// (Public, BlueprintCallable, BlueprintEvent)

void UCtrl_CompetitionTab_C::UpdateSelected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Ctrl_CompetitionTab_C", "UpdateSelected");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Ctrl_CompetitionTab.Ctrl_CompetitionTab_C.SetSelectedID
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             _id                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCtrl_CompetitionTab_C::SetSelectedID(class FName _id)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Ctrl_CompetitionTab_C", "SetSelectedID");

	Params::Ctrl_CompetitionTab_C_SetSelectedID Parms{};

	Parms._id = _id;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Ctrl_CompetitionTab.Ctrl_CompetitionTab_C.SetRemainTimer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDateTime                        EndAt                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UCtrl_CompetitionTab_C::SetRemainTimer(const struct FDateTime& EndAt)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Ctrl_CompetitionTab_C", "SetRemainTimer");

	Params::Ctrl_CompetitionTab_C_SetRemainTimer Parms{};

	Parms.EndAt = std::move(EndAt);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Ctrl_CompetitionTab.Ctrl_CompetitionTab_C.SetMemberCnt
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   _memberCnt                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCtrl_CompetitionTab_C::SetMemberCnt(int32 _memberCnt)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Ctrl_CompetitionTab_C", "SetMemberCnt");

	Params::Ctrl_CompetitionTab_C_SetMemberCnt Parms{};

	Parms._memberCnt = _memberCnt;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Ctrl_CompetitionTab.Ctrl_CompetitionTab_C.OnTabSelected
// (Public, BlueprintCallable, BlueprintEvent)

void UCtrl_CompetitionTab_C::OnTabSelected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Ctrl_CompetitionTab_C", "OnTabSelected");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Ctrl_CompetitionTab.Ctrl_CompetitionTab_C.OnSynchronizeProperties
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UCtrl_CompetitionTab_C::OnSynchronizeProperties()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Ctrl_CompetitionTab_C", "OnSynchronizeProperties");

	Params::Ctrl_CompetitionTab_C_OnSynchronizeProperties Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function Ctrl_CompetitionTab.Ctrl_CompetitionTab_C.OnSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             _id                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCtrl_CompetitionTab_C::OnSelected__DelegateSignature(class FName _id)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Ctrl_CompetitionTab_C", "OnSelected__DelegateSignature");

	Params::Ctrl_CompetitionTab_C_OnSelected__DelegateSignature Parms{};

	Parms._id = _id;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Ctrl_CompetitionTab.Ctrl_CompetitionTab_C.ExecuteUbergraph_Ctrl_CompetitionTab
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCtrl_CompetitionTab_C::ExecuteUbergraph_Ctrl_CompetitionTab(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Ctrl_CompetitionTab_C", "ExecuteUbergraph_Ctrl_CompetitionTab");

	Params::Ctrl_CompetitionTab_C_ExecuteUbergraph_Ctrl_CompetitionTab Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Ctrl_CompetitionTab.Ctrl_CompetitionTab_C.BndEvt__Ctrl_CustomTab_Button_51_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UCtrl_CompetitionTab_C::BndEvt__Ctrl_CustomTab_Button_51_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Ctrl_CompetitionTab_C", "BndEvt__Ctrl_CustomTab_Button_51_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Ctrl_CompetitionTab.Ctrl_CompetitionTab_C.BndEvt__Ctrl_CustomTab_BTN_Body_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UCtrl_CompetitionTab_C::BndEvt__Ctrl_CustomTab_BTN_Body_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Ctrl_CompetitionTab_C", "BndEvt__Ctrl_CustomTab_BTN_Body_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Ctrl_CompetitionTab.Ctrl_CompetitionTab_C.BndEvt__Ctrl_CustomTab_BTN_Body_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UCtrl_CompetitionTab_C::BndEvt__Ctrl_CustomTab_BTN_Body_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Ctrl_CompetitionTab_C", "BndEvt__Ctrl_CustomTab_BTN_Body_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Ctrl_CompetitionTab.Ctrl_CompetitionTab_C.BndEvt__Ctrl_CompetitionTab_RemainTimer_K2Node_ComponentBoundEvent_3_DM_OnEventTimeEnded_Void__DelegateSignature
// (BlueprintEvent)

void UCtrl_CompetitionTab_C::BndEvt__Ctrl_CompetitionTab_RemainTimer_K2Node_ComponentBoundEvent_3_DM_OnEventTimeEnded_Void__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Ctrl_CompetitionTab_C", "BndEvt__Ctrl_CompetitionTab_RemainTimer_K2Node_ComponentBoundEvent_3_DM_OnEventTimeEnded_Void__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}

}

