#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: UI_RemainDateTimer

#include "Basic.hpp"

#include "UI_RemainDateTimer_classes.hpp"
#include "UI_RemainDateTimer_parameters.hpp"


namespace SDK
{

// Function UI_RemainDateTimer.UI_RemainDateTimer_C.ExecuteUbergraph_UI_RemainDateTimer
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_RemainDateTimer_C::ExecuteUbergraph_UI_RemainDateTimer(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_RemainDateTimer_C", "ExecuteUbergraph_UI_RemainDateTimer");

	Params::UI_RemainDateTimer_C_ExecuteUbergraph_UI_RemainDateTimer Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_RemainDateTimer.UI_RemainDateTimer_C.OnAlert
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    _alert                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_RemainDateTimer_C::OnAlert(bool _alert)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_RemainDateTimer_C", "OnAlert");

	Params::UI_RemainDateTimer_C_OnAlert Parms{};

	Parms._alert = _alert;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_RemainDateTimer.UI_RemainDateTimer_C.OnSynchronizeProperties
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UUI_RemainDateTimer_C::OnSynchronizeProperties()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_RemainDateTimer_C", "OnSynchronizeProperties");

	Params::UI_RemainDateTimer_C_OnSynchronizeProperties Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function UI_RemainDateTimer.UI_RemainDateTimer_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_RemainDateTimer_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_RemainDateTimer_C", "PreConstruct");

	Params::UI_RemainDateTimer_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

