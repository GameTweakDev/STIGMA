#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: LobbyGunPreviewer

#include "Basic.hpp"

#include "LobbyGunPreviewer_classes.hpp"
#include "LobbyGunPreviewer_parameters.hpp"


namespace SDK
{

// Function LobbyGunPreviewer.LobbyGunPreviewer_C.SetGunObject
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGunObject*                       Param_GunObject                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ALobbyGunPreviewer_C::SetGunObject(class UGunObject* Param_GunObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LobbyGunPreviewer_C", "SetGunObject");

	Params::LobbyGunPreviewer_C_SetGunObject Parms{};

	Parms.Param_GunObject = Param_GunObject;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LobbyGunPreviewer.LobbyGunPreviewer_C.GetGunActor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AGunBase*                         _gun                                                   (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ALobbyGunPreviewer_C::GetGunActor(class AGunBase** _gun) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LobbyGunPreviewer_C", "GetGunActor");

	Params::LobbyGunPreviewer_C_GetGunActor Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (_gun != nullptr)
		*_gun = Parms._gun;
}

}

