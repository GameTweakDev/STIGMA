#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: UI_AnimBP

#include "Basic.hpp"

#include "UI_AnimBP_classes.hpp"
#include "UI_AnimBP_parameters.hpp"


namespace SDK
{

// Function UI_AnimBP.UI_AnimBP_C.On State Entry Loop
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAnimUpdateContext               Context                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FAnimNodeReference               Node                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UUI_AnimBP_C::On_State_Entry_Loop(const struct FAnimUpdateContext& Context, const struct FAnimNodeReference& Node)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_AnimBP_C", "On State Entry Loop");

	Params::UI_AnimBP_C_On_State_Entry_Loop Parms{};

	Parms.Context = std::move(Context);
	Parms.Node = std::move(Node);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_AnimBP.UI_AnimBP_C.On State Entry Idle
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAnimUpdateContext               Context                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FAnimNodeReference               Node                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UUI_AnimBP_C::On_State_Entry_Idle(const struct FAnimUpdateContext& Context, const struct FAnimNodeReference& Node)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_AnimBP_C", "On State Entry Idle");

	Params::UI_AnimBP_C_On_State_Entry_Idle Parms{};

	Parms.Context = std::move(Context);
	Parms.Node = std::move(Node);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_AnimBP.UI_AnimBP_C.ExecuteUbergraph_UI_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_AnimBP_C::ExecuteUbergraph_UI_AnimBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_AnimBP_C", "ExecuteUbergraph_UI_AnimBP");

	Params::UI_AnimBP_C_ExecuteUbergraph_UI_AnimBP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_AnimBP.UI_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_UI_AnimBP_AnimGraphNode_TransitionResult_7FDD6BCE4C4A24EE65D527AE69712800
// (BlueprintEvent)

void UUI_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_UI_AnimBP_AnimGraphNode_TransitionResult_7FDD6BCE4C4A24EE65D527AE69712800()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_UI_AnimBP_AnimGraphNode_TransitionResult_7FDD6BCE4C4A24EE65D527AE69712800");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_AnimBP.UI_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_UI_AnimBP_AnimGraphNode_TransitionResult_4709BEEA493649F17FC87592901A8786
// (BlueprintEvent)

void UUI_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_UI_AnimBP_AnimGraphNode_TransitionResult_4709BEEA493649F17FC87592901A8786()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_UI_AnimBP_AnimGraphNode_TransitionResult_4709BEEA493649F17FC87592901A8786");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_AnimBP.UI_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        Param_AnimGraph                                        (Parm, OutParm, NoDestructor)

void UUI_AnimBP_C::AnimGraph(struct FPoseLink* Param_AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_AnimBP_C", "AnimGraph");

	Params::UI_AnimBP_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_AnimGraph != nullptr)
		*Param_AnimGraph = std::move(Parms.Param_AnimGraph);
}

}

