#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: Parabellum

#include "Basic.hpp"

#include "Parabellum_classes.hpp"


namespace SDK
{

// Function Parabellum.Parabellum_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AParabellum_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Parabellum_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

