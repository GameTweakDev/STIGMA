#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: UI_Indicator_Revive

#include "Basic.hpp"

#include "UI_Indicator_Revive_classes.hpp"
#include "UI_Indicator_Revive_parameters.hpp"


namespace SDK
{

// Function UI_Indicator_Revive.UI_Indicator_Revive_C.ExecuteUbergraph_UI_Indicator_Revive
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Indicator_Revive_C::ExecuteUbergraph_UI_Indicator_Revive(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Indicator_Revive_C", "ExecuteUbergraph_UI_Indicator_Revive");

	Params::UI_Indicator_Revive_C_ExecuteUbergraph_UI_Indicator_Revive Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Indicator_Revive.UI_Indicator_Revive_C.OnUpdateLocation
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    _is_clipped                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   _angle                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Indicator_Revive_C::OnUpdateLocation(bool _is_clipped, float _angle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Indicator_Revive_C", "OnUpdateLocation");

	Params::UI_Indicator_Revive_C_OnUpdateLocation Parms{};

	Parms._is_clipped = _is_clipped;
	Parms._angle = _angle;

	UObject::ProcessEvent(Func, &Parms);
}

}

