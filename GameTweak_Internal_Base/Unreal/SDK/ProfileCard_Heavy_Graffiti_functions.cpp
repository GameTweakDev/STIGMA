#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: ProfileCard_Heavy_Graffiti

#include "Basic.hpp"

#include "ProfileCard_Heavy_Graffiti_classes.hpp"
#include "ProfileCard_Heavy_Graffiti_parameters.hpp"


namespace SDK
{

// Function ProfileCard_Heavy_Graffiti.ProfileCard_Heavy_Graffiti_C.ExecuteUbergraph_ProfileCard_Heavy_Graffiti
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProfileCard_Heavy_Graffiti_C::ExecuteUbergraph_ProfileCard_Heavy_Graffiti(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProfileCard_Heavy_Graffiti_C", "ExecuteUbergraph_ProfileCard_Heavy_Graffiti");

	Params::ProfileCard_Heavy_Graffiti_C_ExecuteUbergraph_ProfileCard_Heavy_Graffiti Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

