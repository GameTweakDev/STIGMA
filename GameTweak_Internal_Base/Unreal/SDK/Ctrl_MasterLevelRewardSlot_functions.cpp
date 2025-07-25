#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: Ctrl_MasterLevelRewardSlot

#include "Basic.hpp"

#include "Ctrl_MasterLevelRewardSlot_classes.hpp"
#include "Ctrl_MasterLevelRewardSlot_parameters.hpp"


namespace SDK
{

// Function Ctrl_MasterLevelRewardSlot.Ctrl_MasterLevelRewardSlot_C.ExecuteUbergraph_Ctrl_MasterLevelRewardSlot
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCtrl_MasterLevelRewardSlot_C::ExecuteUbergraph_Ctrl_MasterLevelRewardSlot(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Ctrl_MasterLevelRewardSlot_C", "ExecuteUbergraph_Ctrl_MasterLevelRewardSlot");

	Params::Ctrl_MasterLevelRewardSlot_C_ExecuteUbergraph_Ctrl_MasterLevelRewardSlot Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Ctrl_MasterLevelRewardSlot.Ctrl_MasterLevelRewardSlot_C.SetCheckPoint
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    _checked                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCtrl_MasterLevelRewardSlot_C::SetCheckPoint(bool _checked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Ctrl_MasterLevelRewardSlot_C", "SetCheckPoint");

	Params::Ctrl_MasterLevelRewardSlot_C_SetCheckPoint Parms{};

	Parms._checked = _checked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Ctrl_MasterLevelRewardSlot.Ctrl_MasterLevelRewardSlot_C.SetLevel
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                                   _level                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCtrl_MasterLevelRewardSlot_C::SetLevel(int32 _level)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Ctrl_MasterLevelRewardSlot_C", "SetLevel");

	Params::Ctrl_MasterLevelRewardSlot_C_SetLevel Parms{};

	Parms._level = _level;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Ctrl_MasterLevelRewardSlot.Ctrl_MasterLevelRewardSlot_C.SetMasterImage
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UTexture2D>        _soft_texture                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash)

void UCtrl_MasterLevelRewardSlot_C::SetMasterImage(const TSoftObjectPtr<class UTexture2D>& _soft_texture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Ctrl_MasterLevelRewardSlot_C", "SetMasterImage");

	Params::Ctrl_MasterLevelRewardSlot_C_SetMasterImage Parms{};

	Parms._soft_texture = _soft_texture;

	UObject::ProcessEvent(Func, &Parms);
}

}

