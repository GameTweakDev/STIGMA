#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: UI_Option_Audio

#include "Basic.hpp"

#include "UI_Option_Audio_classes.hpp"
#include "UI_Option_Audio_parameters.hpp"


namespace SDK
{

// Function UI_Option_Audio.UI_Option_Audio_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Option_Audio_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Option_Audio_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Option_Audio.UI_Option_Audio_C.ExecuteUbergraph_UI_Option_Audio
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Option_Audio_C::ExecuteUbergraph_UI_Option_Audio(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Option_Audio_C", "ExecuteUbergraph_UI_Option_Audio");

	Params::UI_Option_Audio_C_ExecuteUbergraph_UI_Option_Audio Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Option_Audio.UI_Option_Audio_C.OnSynchronizeProperties
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UUI_Option_Audio_C::OnSynchronizeProperties()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Option_Audio_C", "OnSynchronizeProperties");

	Params::UI_Option_Audio_C_OnSynchronizeProperties Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function UI_Option_Audio.UI_Option_Audio_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Option_Audio_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Option_Audio_C", "Tick");

	Params::UI_Option_Audio_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Option_Audio.UI_Option_Audio_C.Tick Update
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  _delta                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Option_Audio_C::Tick_Update(double _delta)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Option_Audio_C", "Tick Update");

	Params::UI_Option_Audio_C_Tick_Update Parms{};

	Parms._delta = _delta;

	UObject::ProcessEvent(Func, &Parms);
}

}

