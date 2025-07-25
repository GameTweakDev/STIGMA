#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: UI_Result_UserLevel

#include "Basic.hpp"

#include "UI_Result_UserLevel_classes.hpp"
#include "UI_Result_UserLevel_parameters.hpp"


namespace SDK
{

// Function UI_Result_UserLevel.UI_Result_UserLevel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Result_UserLevel_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Result_UserLevel_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Result_UserLevel.UI_Result_UserLevel_C.ExecuteUbergraph_UI_Result_UserLevel
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Result_UserLevel_C::ExecuteUbergraph_UI_Result_UserLevel(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Result_UserLevel_C", "ExecuteUbergraph_UI_Result_UserLevel");

	Params::UI_Result_UserLevel_C_ExecuteUbergraph_UI_Result_UserLevel Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Result_UserLevel.UI_Result_UserLevel_C.SetTier
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ETier                                   _tier                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Result_UserLevel_C::SetTier(ETier _tier)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Result_UserLevel_C", "SetTier");

	Params::UI_Result_UserLevel_C_SetTier Parms{};

	Parms._tier = _tier;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Result_UserLevel.UI_Result_UserLevel_C.UpdateActiveFunc
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_Result_UserLevel_C::UpdateActiveFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Result_UserLevel_C", "UpdateActiveFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Result_UserLevel.UI_Result_UserLevel_C.UpdateAll
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_Result_UserLevel_C::UpdateAll()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Result_UserLevel_C", "UpdateAll");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Result_UserLevel.UI_Result_UserLevel_C.UpdateLevelEXP
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_Result_UserLevel_C::UpdateLevelEXP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Result_UserLevel_C", "UpdateLevelEXP");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Result_UserLevel.UI_Result_UserLevel_C.UpdateTier
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_Result_UserLevel_C::UpdateTier()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Result_UserLevel_C", "UpdateTier");

	UObject::ProcessEvent(Func, nullptr);
}

}

