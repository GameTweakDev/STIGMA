#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: MasterPage

#include "Basic.hpp"

#include "MasterPage_classes.hpp"
#include "MasterPage_parameters.hpp"


namespace SDK
{

// Function MasterPage.MasterPage_C.ExecuteUbergraph_MasterPage
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMasterPage_C::ExecuteUbergraph_MasterPage(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MasterPage_C", "ExecuteUbergraph_MasterPage");

	Params::MasterPage_C_ExecuteUbergraph_MasterPage Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MasterPage.MasterPage_C.GetIntParam
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   Val                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMasterPage_C::GetIntParam(int32* Val)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MasterPage_C", "GetIntParam");

	Params::MasterPage_C_GetIntParam Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Val != nullptr)
		*Val = Parms.Val;
}


// Function MasterPage.MasterPage_C.GetStringParam
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                           Val                                                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UMasterPage_C::GetStringParam(class FString* Val)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MasterPage_C", "GetStringParam");

	Params::MasterPage_C_GetStringParam Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Val != nullptr)
		*Val = std::move(Parms.Val);
}


// Function MasterPage.MasterPage_C.PlayDetailer
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPreviewableWidget*               _target_widget                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UMasterPage_C::PlayDetailer(class UPreviewableWidget* _target_widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MasterPage_C", "PlayDetailer");

	Params::MasterPage_C_PlayDetailer Parms{};

	Parms._target_widget = _target_widget;

	UObject::ProcessEvent(Func, &Parms);
}

}

