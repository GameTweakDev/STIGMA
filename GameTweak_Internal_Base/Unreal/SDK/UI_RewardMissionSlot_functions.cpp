#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: UI_RewardMissionSlot

#include "Basic.hpp"

#include "UI_RewardMissionSlot_classes.hpp"
#include "UI_RewardMissionSlot_parameters.hpp"


namespace SDK
{

// Function UI_RewardMissionSlot.UI_RewardMissionSlot_C.SetTitle
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                             _text                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUI_RewardMissionSlot_C::SetTitle(const class FText& _text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_RewardMissionSlot_C", "SetTitle");

	Params::UI_RewardMissionSlot_C_SetTitle Parms{};

	Parms._text = std::move(_text);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_RewardMissionSlot.UI_RewardMissionSlot_C.SetDesc
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                             _text                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUI_RewardMissionSlot_C::SetDesc(const class FText& _text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_RewardMissionSlot_C", "SetDesc");

	Params::UI_RewardMissionSlot_C_SetDesc Parms{};

	Parms._text = std::move(_text);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_RewardMissionSlot.UI_RewardMissionSlot_C.ExecuteUbergraph_UI_RewardMissionSlot
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_RewardMissionSlot_C::ExecuteUbergraph_UI_RewardMissionSlot(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_RewardMissionSlot_C", "ExecuteUbergraph_UI_RewardMissionSlot");

	Params::UI_RewardMissionSlot_C_ExecuteUbergraph_UI_RewardMissionSlot Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_RewardMissionSlot.UI_RewardMissionSlot_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_RewardMissionSlot_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_RewardMissionSlot_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

