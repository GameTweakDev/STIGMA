#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: TUT_Resume

#include "Basic.hpp"

#include "TUT_Resume_classes.hpp"
#include "TUT_Resume_parameters.hpp"


namespace SDK
{

// Function TUT_Resume.TUT_Resume_C.ExecuteUbergraph_TUT_Resume
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTUT_Resume_C::ExecuteUbergraph_TUT_Resume(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TUT_Resume_C", "ExecuteUbergraph_TUT_Resume");

	Params::TUT_Resume_C_ExecuteUbergraph_TUT_Resume Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TUT_Resume.TUT_Resume_C.OnAfterDone_17A80A01479D93887E75CCB05F47BB2F
// (BlueprintCallable, BlueprintEvent)

void UTUT_Resume_C::OnAfterDone_17A80A01479D93887E75CCB05F47BB2F()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TUT_Resume_C", "OnAfterDone_17A80A01479D93887E75CCB05F47BB2F");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TUT_Resume.TUT_Resume_C.OnAfterDone_949F6AFF4CA0AD469938F3B41B2F27FC
// (BlueprintCallable, BlueprintEvent)

void UTUT_Resume_C::OnAfterDone_949F6AFF4CA0AD469938F3B41B2F27FC()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TUT_Resume_C", "OnAfterDone_949F6AFF4CA0AD469938F3B41B2F27FC");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TUT_Resume.TUT_Resume_C.Start
// (Event, Protected, BlueprintEvent)

void UTUT_Resume_C::Start()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TUT_Resume_C", "Start");

	UObject::ProcessEvent(Func, nullptr);
}

}

