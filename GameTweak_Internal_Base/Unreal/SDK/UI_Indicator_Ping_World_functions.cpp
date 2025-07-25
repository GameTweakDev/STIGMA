#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: UI_Indicator_Ping_World

#include "Basic.hpp"

#include "UI_Indicator_Ping_World_classes.hpp"
#include "UI_Indicator_Ping_World_parameters.hpp"


namespace SDK
{

// Function UI_Indicator_Ping_World.UI_Indicator_Ping_World_C.ExecuteUbergraph_UI_Indicator_Ping_World
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Indicator_Ping_World_C::ExecuteUbergraph_UI_Indicator_Ping_World(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Indicator_Ping_World_C", "ExecuteUbergraph_UI_Indicator_Ping_World");

	Params::UI_Indicator_Ping_World_C_ExecuteUbergraph_UI_Indicator_Ping_World Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Indicator_Ping_World.UI_Indicator_Ping_World_C.OnInitIndicator
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UUI_Indicator_Ping_World_C::OnInitIndicator()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Indicator_Ping_World_C", "OnInitIndicator");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Indicator_Ping_World.UI_Indicator_Ping_World_C.OnUpdateLocation
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    _is_clipped                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   _angle                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Indicator_Ping_World_C::OnUpdateLocation(bool _is_clipped, float _angle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Indicator_Ping_World_C", "OnUpdateLocation");

	Params::UI_Indicator_Ping_World_C_OnUpdateLocation Parms{};

	Parms._is_clipped = _is_clipped;
	Parms._angle = _angle;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Indicator_Ping_World.UI_Indicator_Ping_World_C.OnUpdateUI
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_Indicator_Ping_World_C::OnUpdateUI()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Indicator_Ping_World_C", "OnUpdateUI");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Indicator_Ping_World.UI_Indicator_Ping_World_C.UpdateUI
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UUI_Indicator_Ping_World_C::UpdateUI()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Indicator_Ping_World_C", "UpdateUI");

	UObject::ProcessEvent(Func, nullptr);
}

}

