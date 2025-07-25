#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: WIDGET_EffectRow

#include "Basic.hpp"

#include "WIDGET_EffectRow_classes.hpp"
#include "WIDGET_EffectRow_parameters.hpp"


namespace SDK
{

// Function WIDGET_EffectRow.WIDGET_EffectRow_C.OnSynchronizeProperties
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UWIDGET_EffectRow_C::OnSynchronizeProperties()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WIDGET_EffectRow_C", "OnSynchronizeProperties");

	Params::WIDGET_EffectRow_C_OnSynchronizeProperties Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WIDGET_EffectRow.WIDGET_EffectRow_C.Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWIDGET_EffectRow_C::Update()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WIDGET_EffectRow_C", "Update");

	UObject::ProcessEvent(Func, nullptr);
}

}

