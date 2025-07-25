#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: Challenge_RankPopup

#include "Basic.hpp"

#include "Challenge_RankPopup_classes.hpp"
#include "Challenge_RankPopup_parameters.hpp"


namespace SDK
{

// Function Challenge_RankPopup.Challenge_RankPopup_C.Add Rankers
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FACK_ChallengeRead>       Rankers                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    _is_top3                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChallenge_RankPopup_C::Add_Rankers(TArray<struct FACK_ChallengeRead>& Rankers, bool _is_top3)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Challenge_RankPopup_C", "Add Rankers");

	Params::Challenge_RankPopup_C_Add_Rankers Parms{};

	Parms.Rankers = std::move(Rankers);
	Parms._is_top3 = _is_top3;

	UObject::ProcessEvent(Func, &Parms);

	Rankers = std::move(Parms.Rankers);
}


// Function Challenge_RankPopup.Challenge_RankPopup_C.CheckCanClose
// (Public, BlueprintCallable, BlueprintEvent)

void UChallenge_RankPopup_C::CheckCanClose()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Challenge_RankPopup_C", "CheckCanClose");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Challenge_RankPopup.Challenge_RankPopup_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UChallenge_RankPopup_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Challenge_RankPopup_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Challenge_RankPopup.Challenge_RankPopup_C.DelayClose
// (BlueprintCallable, BlueprintEvent)

void UChallenge_RankPopup_C::DelayClose()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Challenge_RankPopup_C", "DelayClose");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Challenge_RankPopup.Challenge_RankPopup_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UChallenge_RankPopup_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Challenge_RankPopup_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Challenge_RankPopup.Challenge_RankPopup_C.ExecuteUbergraph_Challenge_RankPopup
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChallenge_RankPopup_C::ExecuteUbergraph_Challenge_RankPopup(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Challenge_RankPopup_C", "ExecuteUbergraph_Challenge_RankPopup");

	Params::Challenge_RankPopup_C_ExecuteUbergraph_Challenge_RankPopup Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Challenge_RankPopup.Challenge_RankPopup_C.UpdateRanks
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FACK_ChallengeRead>       Top3                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FACK_ChallengeRead>       Rankers                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UChallenge_RankPopup_C::UpdateRanks(TArray<struct FACK_ChallengeRead>& Top3, TArray<struct FACK_ChallengeRead>& Rankers)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Challenge_RankPopup_C", "UpdateRanks");

	Params::Challenge_RankPopup_C_UpdateRanks Parms{};

	Parms.Top3 = std::move(Top3);
	Parms.Rankers = std::move(Rankers);

	UObject::ProcessEvent(Func, &Parms);

	Top3 = std::move(Parms.Top3);
	Rankers = std::move(Parms.Rankers);
}

}

