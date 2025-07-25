#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: Ctrl_CompetitionEntryRow

#include "Basic.hpp"

#include "Ctrl_CompetitionEntryRow_classes.hpp"
#include "Ctrl_CompetitionEntryRow_parameters.hpp"


namespace SDK
{

// Function Ctrl_CompetitionEntryRow.Ctrl_CompetitionEntryRow_C.UpdateUI
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UCtrl_CompetitionEntryRow_C::UpdateUI()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Ctrl_CompetitionEntryRow_C", "UpdateUI");

	Params::Ctrl_CompetitionEntryRow_C_UpdateUI Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function Ctrl_CompetitionEntryRow.Ctrl_CompetitionEntryRow_C.OnSynchronizeProperties
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UCtrl_CompetitionEntryRow_C::OnSynchronizeProperties()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Ctrl_CompetitionEntryRow_C", "OnSynchronizeProperties");

	Params::Ctrl_CompetitionEntryRow_C_OnSynchronizeProperties Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function Ctrl_CompetitionEntryRow.Ctrl_CompetitionEntryRow_C.IsTopRanking
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   _Rank                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Is_top_rank                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCtrl_CompetitionEntryRow_C::IsTopRanking(int32 _Rank, bool* Is_top_rank)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Ctrl_CompetitionEntryRow_C", "IsTopRanking");

	Params::Ctrl_CompetitionEntryRow_C_IsTopRanking Parms{};

	Parms._Rank = _Rank;

	UObject::ProcessEvent(Func, &Parms);

	if (Is_top_rank != nullptr)
		*Is_top_rank = Parms.Is_top_rank;
}


// Function Ctrl_CompetitionEntryRow.Ctrl_CompetitionEntryRow_C.Get_ProfileCard_ToolTipWidget
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UCtrl_CompetitionEntryRow_C::Get_ProfileCard_ToolTipWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Ctrl_CompetitionEntryRow_C", "Get_ProfileCard_ToolTipWidget");

	Params::Ctrl_CompetitionEntryRow_C_Get_ProfileCard_ToolTipWidget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function Ctrl_CompetitionEntryRow.Ctrl_CompetitionEntryRow_C.ExecuteUbergraph_Ctrl_CompetitionEntryRow
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCtrl_CompetitionEntryRow_C::ExecuteUbergraph_Ctrl_CompetitionEntryRow(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Ctrl_CompetitionEntryRow_C", "ExecuteUbergraph_Ctrl_CompetitionEntryRow");

	Params::Ctrl_CompetitionEntryRow_C_ExecuteUbergraph_Ctrl_CompetitionEntryRow Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Ctrl_CompetitionEntryRow.Ctrl_CompetitionEntryRow_C.BndEvt__Ctrl_CompetitionEntryRow_RemainDateTimer_K2Node_ComponentBoundEvent_0_DM_OnEventTimeEnded_Void__DelegateSignature
// (BlueprintEvent)

void UCtrl_CompetitionEntryRow_C::BndEvt__Ctrl_CompetitionEntryRow_RemainDateTimer_K2Node_ComponentBoundEvent_0_DM_OnEventTimeEnded_Void__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Ctrl_CompetitionEntryRow_C", "BndEvt__Ctrl_CompetitionEntryRow_RemainDateTimer_K2Node_ComponentBoundEvent_0_DM_OnEventTimeEnded_Void__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}

}

