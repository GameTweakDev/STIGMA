#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: UI_DamageIndicator_BP

#include "Basic.hpp"

#include "UI_DamageIndicator_BP_classes.hpp"
#include "UI_DamageIndicator_BP_parameters.hpp"


namespace SDK
{

// Function UI_DamageIndicator_BP.UI_DamageIndicator_BP_C.ExecuteUbergraph_UI_DamageIndicator_BP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_DamageIndicator_BP_C::ExecuteUbergraph_UI_DamageIndicator_BP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_DamageIndicator_BP_C", "ExecuteUbergraph_UI_DamageIndicator_BP");

	Params::UI_DamageIndicator_BP_C_ExecuteUbergraph_UI_DamageIndicator_BP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_DamageIndicator_BP.UI_DamageIndicator_BP_C.OnTick
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  _delta                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_DamageIndicator_BP_C::OnTick(double _delta)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_DamageIndicator_BP_C", "OnTick");

	Params::UI_DamageIndicator_BP_C_OnTick Parms{};

	Parms._delta = _delta;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_DamageIndicator_BP.UI_DamageIndicator_BP_C.SetHitCount
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   _count                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDamagedData                     _damaged_data                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UUI_DamageIndicator_BP_C::SetHitCount(int32 _count, const struct FDamagedData& _damaged_data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_DamageIndicator_BP_C", "SetHitCount");

	Params::UI_DamageIndicator_BP_C_SetHitCount Parms{};

	Parms._count = _count;
	Parms._damaged_data = std::move(_damaged_data);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function UI_DamageIndicator_BP.UI_DamageIndicator_BP_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_DamageIndicator_BP_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_DamageIndicator_BP_C", "Tick");

	Params::UI_DamageIndicator_BP_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

