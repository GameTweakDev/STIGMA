#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: UI_GameResult_Total

#include "Basic.hpp"

#include "UI_GameResult_Total_classes.hpp"
#include "UI_GameResult_Total_parameters.hpp"


namespace SDK
{

// Function UI_GameResult_Total.UI_GameResult_Total_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_GameResult_Total_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GameResult_Total_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_GameResult_Total.UI_GameResult_Total_C.ExecuteUbergraph_UI_GameResult_Total
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_GameResult_Total_C::ExecuteUbergraph_UI_GameResult_Total(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GameResult_Total_C", "ExecuteUbergraph_UI_GameResult_Total");

	Params::UI_GameResult_Total_C_ExecuteUbergraph_UI_GameResult_Total Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_GameResult_Total.UI_GameResult_Total_C.ShowMockup
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_GameResult_Total_C::ShowMockup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GameResult_Total_C", "ShowMockup");

	UObject::ProcessEvent(Func, nullptr);
}

}

