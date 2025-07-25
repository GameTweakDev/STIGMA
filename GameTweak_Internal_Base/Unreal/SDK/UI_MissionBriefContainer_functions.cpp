#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: UI_MissionBriefContainer

#include "Basic.hpp"

#include "UI_MissionBriefContainer_classes.hpp"
#include "UI_MissionBriefContainer_parameters.hpp"


namespace SDK
{

// Function UI_MissionBriefContainer.UI_MissionBriefContainer_C.SetLocked
// (Event, Protected, BlueprintEvent)
// Parameters:
// EMissionType                            _mission_type                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   _limited_level                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MissionBriefContainer_C::SetLocked(EMissionType _mission_type, int32 _limited_level)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_MissionBriefContainer_C", "SetLocked");

	Params::UI_MissionBriefContainer_C_SetLocked Parms{};

	Parms._mission_type = _mission_type;
	Parms._limited_level = _limited_level;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_MissionBriefContainer.UI_MissionBriefContainer_C.ExecuteUbergraph_UI_MissionBriefContainer
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MissionBriefContainer_C::ExecuteUbergraph_UI_MissionBriefContainer(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_MissionBriefContainer_C", "ExecuteUbergraph_UI_MissionBriefContainer");

	Params::UI_MissionBriefContainer_C_ExecuteUbergraph_UI_MissionBriefContainer Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

