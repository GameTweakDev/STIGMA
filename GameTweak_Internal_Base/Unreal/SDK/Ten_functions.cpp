#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: Ten

#include "Basic.hpp"

#include "Ten_classes.hpp"


namespace SDK
{

// Function Ten.Ten_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ATen_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Ten_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

