#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: Ctrl_BlurPanel

#include "Basic.hpp"

#include "Ctrl_BlurPanel_classes.hpp"
#include "Ctrl_BlurPanel_parameters.hpp"


namespace SDK
{

// Function Ctrl_BlurPanel.Ctrl_BlurPanel_C.OnSynchronizeProperties
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UCtrl_BlurPanel_C::OnSynchronizeProperties()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Ctrl_BlurPanel_C", "OnSynchronizeProperties");

	Params::Ctrl_BlurPanel_C_OnSynchronizeProperties Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function Ctrl_BlurPanel.Ctrl_BlurPanel_C.Update
// (Public, BlueprintCallable, BlueprintEvent)

void UCtrl_BlurPanel_C::Update()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Ctrl_BlurPanel_C", "Update");

	UObject::ProcessEvent(Func, nullptr);
}

}

