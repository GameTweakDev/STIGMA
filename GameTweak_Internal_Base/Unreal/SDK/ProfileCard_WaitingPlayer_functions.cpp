#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: ProfileCard_WaitingPlayer

#include "Basic.hpp"

#include "ProfileCard_WaitingPlayer_classes.hpp"
#include "ProfileCard_WaitingPlayer_parameters.hpp"


namespace SDK
{

// Function ProfileCard_WaitingPlayer.ProfileCard_WaitingPlayer_C.BindPlayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMatchServicedPlayerState*        _player_state                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UProfileCard_WaitingPlayer_C::BindPlayer(class AMatchServicedPlayerState* _player_state)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProfileCard_WaitingPlayer_C", "BindPlayer");

	Params::ProfileCard_WaitingPlayer_C_BindPlayer Parms{};

	Parms._player_state = _player_state;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ProfileCard_WaitingPlayer.ProfileCard_WaitingPlayer_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UProfileCard_WaitingPlayer_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProfileCard_WaitingPlayer_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ProfileCard_WaitingPlayer.ProfileCard_WaitingPlayer_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UProfileCard_WaitingPlayer_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProfileCard_WaitingPlayer_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ProfileCard_WaitingPlayer.ProfileCard_WaitingPlayer_C.ExecuteUbergraph_ProfileCard_WaitingPlayer
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProfileCard_WaitingPlayer_C::ExecuteUbergraph_ProfileCard_WaitingPlayer(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProfileCard_WaitingPlayer_C", "ExecuteUbergraph_ProfileCard_WaitingPlayer");

	Params::ProfileCard_WaitingPlayer_C_ExecuteUbergraph_ProfileCard_WaitingPlayer Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ProfileCard_WaitingPlayer.ProfileCard_WaitingPlayer_C.UpdateAreaProfile
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UProfileCard_WaitingPlayer_C::UpdateAreaProfile()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProfileCard_WaitingPlayer_C", "UpdateAreaProfile");

	UObject::ProcessEvent(Func, nullptr);
}

}

