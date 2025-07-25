#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: HeadMountedDisplay

#include "Basic.hpp"

#include "HeadMountedDisplay_classes.hpp"
#include "HeadMountedDisplay_parameters.hpp"


namespace SDK
{

// Function HeadMountedDisplay.HandKeypointConversion.Conv_HandKeypointToInt32
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// EHandKeypoint                           Input                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UHandKeypointConversion::Conv_HandKeypointToInt32(EHandKeypoint Input)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("HandKeypointConversion", "Conv_HandKeypointToInt32");

	Params::HandKeypointConversion_Conv_HandKeypointToInt32 Parms{};

	Parms.Input = Input;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function HeadMountedDisplay.MotionControllerComponent.GetHandJointPosition
// (Final, RequiredAPI, Native, Protected, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// int32                                   JointIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bValueFound                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UMotionControllerComponent::GetHandJointPosition(int32 JointIndex, bool* bValueFound)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MotionControllerComponent", "GetHandJointPosition");

	Params::MotionControllerComponent_GetHandJointPosition Parms{};

	Parms.JointIndex = JointIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (bValueFound != nullptr)
		*bValueFound = Parms.bValueFound;

	return Parms.ReturnValue;
}


// Function HeadMountedDisplay.MotionControllerComponent.GetParameterValue
// (Final, RequiredAPI, Native, Protected, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                             InName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bValueFound                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UMotionControllerComponent::GetParameterValue(class FName InName, bool* bValueFound)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MotionControllerComponent", "GetParameterValue");

	Params::MotionControllerComponent_GetParameterValue Parms{};

	Parms.InName = InName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (bValueFound != nullptr)
		*bValueFound = Parms.bValueFound;

	return Parms.ReturnValue;
}


// Function HeadMountedDisplay.MotionControllerComponent.OnMotionControllerUpdated
// (RequiredAPI, Event, Protected, BlueprintEvent)

void UMotionControllerComponent::OnMotionControllerUpdated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MotionControllerComponent", "OnMotionControllerUpdated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HeadMountedDisplay.MotionControllerComponent.SetAssociatedPlayerIndex
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// int32                                   NewPlayer                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMotionControllerComponent::SetAssociatedPlayerIndex(const int32 NewPlayer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MotionControllerComponent", "SetAssociatedPlayerIndex");

	Params::MotionControllerComponent_SetAssociatedPlayerIndex Parms{};

	Parms.NewPlayer = NewPlayer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function HeadMountedDisplay.MotionControllerComponent.SetCustomDisplayMesh
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// class UStaticMesh*                      NewDisplayMesh                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMotionControllerComponent::SetCustomDisplayMesh(class UStaticMesh* NewDisplayMesh)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MotionControllerComponent", "SetCustomDisplayMesh");

	Params::MotionControllerComponent_SetCustomDisplayMesh Parms{};

	Parms.NewDisplayMesh = NewDisplayMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function HeadMountedDisplay.MotionControllerComponent.SetDisplayModelSource
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// class FName                             NewDisplayModelSource                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMotionControllerComponent::SetDisplayModelSource(const class FName NewDisplayModelSource)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MotionControllerComponent", "SetDisplayModelSource");

	Params::MotionControllerComponent_SetDisplayModelSource Parms{};

	Parms.NewDisplayModelSource = NewDisplayModelSource;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function HeadMountedDisplay.MotionControllerComponent.SetShowDeviceModel
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// bool                                    bShowControllerModel                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMotionControllerComponent::SetShowDeviceModel(const bool bShowControllerModel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MotionControllerComponent", "SetShowDeviceModel");

	Params::MotionControllerComponent_SetShowDeviceModel Parms{};

	Parms.bShowControllerModel = bShowControllerModel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function HeadMountedDisplay.MotionControllerComponent.SetTrackingMotionSource
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// class FName                             NewSource                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMotionControllerComponent::SetTrackingMotionSource(const class FName NewSource)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MotionControllerComponent", "SetTrackingMotionSource");

	Params::MotionControllerComponent_SetTrackingMotionSource Parms{};

	Parms.NewSource = NewSource;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function HeadMountedDisplay.MotionControllerComponent.SetTrackingSource
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// EControllerHand                         NewSource                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMotionControllerComponent::SetTrackingSource(const EControllerHand NewSource)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MotionControllerComponent", "SetTrackingSource");

	Params::MotionControllerComponent_SetTrackingSource Parms{};

	Parms.NewSource = NewSource;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function HeadMountedDisplay.MotionControllerComponent.GetAngularVelocity
// (Final, RequiredAPI, Native, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRotator                         OutAngularVelocity                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMotionControllerComponent::GetAngularVelocity(struct FRotator* OutAngularVelocity) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MotionControllerComponent", "GetAngularVelocity");

	Params::MotionControllerComponent_GetAngularVelocity Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutAngularVelocity != nullptr)
		*OutAngularVelocity = std::move(Parms.OutAngularVelocity);

	return Parms.ReturnValue;
}


// Function HeadMountedDisplay.MotionControllerComponent.GetLinearAcceleration
// (Final, RequiredAPI, Native, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                          OutLinearAcceleration                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMotionControllerComponent::GetLinearAcceleration(struct FVector* OutLinearAcceleration) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MotionControllerComponent", "GetLinearAcceleration");

	Params::MotionControllerComponent_GetLinearAcceleration Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutLinearAcceleration != nullptr)
		*OutLinearAcceleration = std::move(Parms.OutLinearAcceleration);

	return Parms.ReturnValue;
}


// Function HeadMountedDisplay.MotionControllerComponent.GetLinearVelocity
// (Final, RequiredAPI, Native, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                          OutLinearVelocity                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMotionControllerComponent::GetLinearVelocity(struct FVector* OutLinearVelocity) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MotionControllerComponent", "GetLinearVelocity");

	Params::MotionControllerComponent_GetLinearVelocity Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutLinearVelocity != nullptr)
		*OutLinearVelocity = std::move(Parms.OutLinearVelocity);

	return Parms.ReturnValue;
}


// Function HeadMountedDisplay.MotionControllerComponent.GetTrackingSource
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EControllerHand                         ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

EControllerHand UMotionControllerComponent::GetTrackingSource() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MotionControllerComponent", "GetTrackingSource");

	Params::MotionControllerComponent_GetTrackingSource Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function HeadMountedDisplay.MotionControllerComponent.IsTracked
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMotionControllerComponent::IsTracked() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MotionControllerComponent", "IsTracked");

	Params::MotionControllerComponent_IsTracked Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}

