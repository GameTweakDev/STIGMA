#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: UI_RoundCountDown

#include "Basic.hpp"

#include "UI_RoundCountDown_classes.hpp"
#include "UI_RoundCountDown_parameters.hpp"


namespace SDK
{

// Function UI_RoundCountDown.UI_RoundCountDown_C.ExecuteUbergraph_UI_RoundCountDown
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_RoundCountDown_C::ExecuteUbergraph_UI_RoundCountDown(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_RoundCountDown_C", "ExecuteUbergraph_UI_RoundCountDown");

	Params::UI_RoundCountDown_C_ExecuteUbergraph_UI_RoundCountDown Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_RoundCountDown.UI_RoundCountDown_C.SetCount
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                                   _count                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_RoundCountDown_C::SetCount(int32 _count)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_RoundCountDown_C", "SetCount");

	Params::UI_RoundCountDown_C_SetCount Parms{};

	Parms._count = _count;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_RoundCountDown.UI_RoundCountDown_C.Txt_Count_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextBlock*                       Param_TXT_Count                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UUI_RoundCountDown_C::Txt_Count_Event(class UTextBlock* Param_TXT_Count)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_RoundCountDown_C", "Txt_Count_Event");

	Params::UI_RoundCountDown_C_Txt_Count_Event Parms{};

	Parms.Param_TXT_Count = Param_TXT_Count;

	UObject::ProcessEvent(Func, &Parms);
}

}

