#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: Ctrl_HUD_PlayerBlankArea

#include "Basic.hpp"

#include "Ctrl_HUD_PlayerBlankArea_classes.hpp"
#include "Ctrl_HUD_PlayerBlankArea_parameters.hpp"


namespace SDK
{

// Function Ctrl_HUD_PlayerBlankArea.Ctrl_HUD_PlayerBlankArea_C.ExecuteUbergraph_Ctrl_HUD_PlayerBlankArea
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCtrl_HUD_PlayerBlankArea_C::ExecuteUbergraph_Ctrl_HUD_PlayerBlankArea(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Ctrl_HUD_PlayerBlankArea_C", "ExecuteUbergraph_Ctrl_HUD_PlayerBlankArea");

	Params::Ctrl_HUD_PlayerBlankArea_C_ExecuteUbergraph_Ctrl_HUD_PlayerBlankArea Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Ctrl_HUD_PlayerBlankArea.Ctrl_HUD_PlayerBlankArea_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCtrl_HUD_PlayerBlankArea_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Ctrl_HUD_PlayerBlankArea_C", "Tick");

	Params::Ctrl_HUD_PlayerBlankArea_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

