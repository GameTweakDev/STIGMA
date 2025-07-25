#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: Charm_Post_AnimBP

#include "Basic.hpp"

#include "Charm_Post_AnimBP_classes.hpp"
#include "Charm_Post_AnimBP_parameters.hpp"


namespace SDK
{

// Function Charm_Post_AnimBP.Charm_Post_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        InPose                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        Param_AnimGraph                                        (Parm, OutParm, NoDestructor)

void UCharm_Post_AnimBP_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* Param_AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Charm_Post_AnimBP_C", "AnimGraph");

	Params::Charm_Post_AnimBP_C_AnimGraph Parms{};

	Parms.InPose = std::move(InPose);

	UObject::ProcessEvent(Func, &Parms);

	if (Param_AnimGraph != nullptr)
		*Param_AnimGraph = std::move(Parms.Param_AnimGraph);
}


// Function Charm_Post_AnimBP.Charm_Post_AnimBP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTimeX                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharm_Post_AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Charm_Post_AnimBP_C", "BlueprintUpdateAnimation");

	Params::Charm_Post_AnimBP_C_BlueprintUpdateAnimation Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Charm_Post_AnimBP.Charm_Post_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Charm_Post_AnimBP_AnimGraphNode_KawaiiPhysics_7576E7CB4E69037A7E7BEFADB97DEEF2
// (BlueprintEvent)

void UCharm_Post_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Charm_Post_AnimBP_AnimGraphNode_KawaiiPhysics_7576E7CB4E69037A7E7BEFADB97DEEF2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Charm_Post_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Charm_Post_AnimBP_AnimGraphNode_KawaiiPhysics_7576E7CB4E69037A7E7BEFADB97DEEF2");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Charm_Post_AnimBP.Charm_Post_AnimBP_C.ExecuteUbergraph_Charm_Post_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharm_Post_AnimBP_C::ExecuteUbergraph_Charm_Post_AnimBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Charm_Post_AnimBP_C", "ExecuteUbergraph_Charm_Post_AnimBP");

	Params::Charm_Post_AnimBP_C_ExecuteUbergraph_Charm_Post_AnimBP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Charm_Post_AnimBP.Charm_Post_AnimBP_C.SetGravity
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                          NewParam                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharm_Post_AnimBP_C::SetGravity(struct FVector* NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Charm_Post_AnimBP_C", "SetGravity");

	Params::Charm_Post_AnimBP_C_SetGravity Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = std::move(Parms.NewParam);
}

}

