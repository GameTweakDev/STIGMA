#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: ChaosSolverEngine

#include "Basic.hpp"

#include "ChaosSolverEngine_classes.hpp"
#include "ChaosSolverEngine_parameters.hpp"


namespace SDK
{

// Function ChaosSolverEngine.ChaosSolverEngineBlueprintLibrary.ConvertPhysicsCollisionToHitResult
// (Final, RequiredAPI, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FChaosPhysicsCollisionInfo       PhysicsCollision                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FHitResult                       ReturnValue                                            (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

struct FHitResult UChaosSolverEngineBlueprintLibrary::ConvertPhysicsCollisionToHitResult(const struct FChaosPhysicsCollisionInfo& PhysicsCollision)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ChaosSolverEngineBlueprintLibrary", "ConvertPhysicsCollisionToHitResult");

	Params::ChaosSolverEngineBlueprintLibrary_ConvertPhysicsCollisionToHitResult Parms{};

	Parms.PhysicsCollision = std::move(PhysicsCollision);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function ChaosSolverEngine.ChaosSolverActor.SetAsCurrentWorldSolver
// (Final, RequiredAPI, Native, Public, BlueprintCallable)

void AChaosSolverActor::SetAsCurrentWorldSolver()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChaosSolverActor", "SetAsCurrentWorldSolver");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function ChaosSolverEngine.ChaosSolverActor.SetSolverActive
// (RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// bool                                    bActive                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AChaosSolverActor::SetSolverActive(bool bActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChaosSolverActor", "SetSolverActive");

	Params::ChaosSolverActor_SetSolverActive Parms{};

	Parms.bActive = bActive;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}

