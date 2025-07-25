#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: LocationServicesBPLibrary

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "Engine_classes.hpp"
#include "LocationServicesBPLibrary_structs.hpp"


namespace SDK
{

// Class LocationServicesBPLibrary.LocationServices
// 0x0000 (0x0028 - 0x0028)
class ULocationServices final : public UBlueprintFunctionLibrary
{
public:
	static bool AreLocationServicesEnabled();
	static struct FLocationServicesData GetLastKnownLocation();
	static class ULocationServicesImpl* GetLocationServicesImpl();
	static bool InitLocationServices(ELocationAccuracy Accuracy, float UpdateFrequency, float MinDistanceFilter);
	static bool IsLocationAccuracyAvailable(ELocationAccuracy Accuracy);
	static bool StartLocationServices();
	static bool StopLocationServices();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LocationServices">();
	}
	static class ULocationServices* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULocationServices>();
	}
};
static_assert(alignof(ULocationServices) == 0x000008, "Wrong alignment on ULocationServices");
static_assert(sizeof(ULocationServices) == 0x000028, "Wrong size on ULocationServices");

// Class LocationServicesBPLibrary.LocationServicesImpl
// 0x0010 (0x0038 - 0x0028)
class ULocationServicesImpl final : public UObject
{
public:
	FMulticastInlineDelegateProperty_             OnLocationChanged;                                 // 0x0028(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LocationServicesImpl">();
	}
	static class ULocationServicesImpl* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULocationServicesImpl>();
	}
};
static_assert(alignof(ULocationServicesImpl) == 0x000008, "Wrong alignment on ULocationServicesImpl");
static_assert(sizeof(ULocationServicesImpl) == 0x000038, "Wrong size on ULocationServicesImpl");
static_assert(offsetof(ULocationServicesImpl, OnLocationChanged) == 0x000028, "Member 'ULocationServicesImpl::OnLocationChanged' has a wrong offset!");

}

