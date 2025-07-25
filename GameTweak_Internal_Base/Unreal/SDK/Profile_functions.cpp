#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: Profile

#include "Basic.hpp"

#include "Profile_classes.hpp"
#include "Profile_parameters.hpp"


namespace SDK
{

// Function Profile.Profile_C.ExecuteUbergraph_Profile
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProfile_C::ExecuteUbergraph_Profile(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Profile_C", "ExecuteUbergraph_Profile");

	Params::Profile_C_ExecuteUbergraph_Profile Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Profile.Profile_C.Get Tab
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                             Tab                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProfile_C::Get_Tab(class FName* Tab)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Profile_C", "Get Tab");

	Params::Profile_C_Get_Tab Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Tab != nullptr)
		*Tab = Parms.Tab;
}


// Function Profile.Profile_C.GetItemID
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FItemID                          Item_id                                                (Parm, OutParm, HasGetValueTypeHash)

void UProfile_C::GetItemID(struct FItemID* Item_id)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Profile_C", "GetItemID");

	Params::Profile_C_GetItemID Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Item_id != nullptr)
		*Item_id = std::move(Parms.Item_id);
}


// Function Profile.Profile_C.PlayDetailer
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPreviewableWidget*               _target_widget                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UProfile_C::PlayDetailer(class UPreviewableWidget* _target_widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Profile_C", "PlayDetailer");

	Params::Profile_C_PlayDetailer Parms{};

	Parms._target_widget = _target_widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Profile.Profile_C.Wait
// (BlueprintCallable, BlueprintEvent)

void UProfile_C::Wait()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Profile_C", "Wait");

	UObject::ProcessEvent(Func, nullptr);
}

}

