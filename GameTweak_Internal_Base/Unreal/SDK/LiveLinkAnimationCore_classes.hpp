#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: LiveLinkAnimationCore

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// Class LiveLinkAnimationCore.LiveLinkInstance
// 0x0000 (0x0350 - 0x0350)
class ULiveLinkInstance final : public UAnimInstance
{
public:
	class ULiveLinkRetargetAsset*                 CurrentRetargetAsset;                              // 0x0348(0x0008)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

public:
	void SetRetargetAsset(TSubclassOf<class ULiveLinkRetargetAsset> RetargetAsset);
	void SetSubject(const struct FLiveLinkSubjectName& SubjectName);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LiveLinkInstance">();
	}
	static class ULiveLinkInstance* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULiveLinkInstance>();
	}
};
static_assert(alignof(ULiveLinkInstance) == 0x000010, "Wrong alignment on ULiveLinkInstance");
static_assert(sizeof(ULiveLinkInstance) == 0x000350, "Wrong size on ULiveLinkInstance");
static_assert(offsetof(ULiveLinkInstance, CurrentRetargetAsset) == 0x000348, "Member 'ULiveLinkInstance::CurrentRetargetAsset' has a wrong offset!");

// Class LiveLinkAnimationCore.LiveLinkRetargetAsset
// 0x0000 (0x0028 - 0x0028)
class ULiveLinkRetargetAsset : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LiveLinkRetargetAsset">();
	}
	static class ULiveLinkRetargetAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULiveLinkRetargetAsset>();
	}
};
static_assert(alignof(ULiveLinkRetargetAsset) == 0x000008, "Wrong alignment on ULiveLinkRetargetAsset");
static_assert(sizeof(ULiveLinkRetargetAsset) == 0x000028, "Wrong size on ULiveLinkRetargetAsset");

// Class LiveLinkAnimationCore.LiveLinkRemapAsset
// 0x00A0 (0x00C8 - 0x0028)
class ULiveLinkRemapAsset final : public ULiveLinkRetargetAsset
{
public:
	uint8                                         Pad_26B2[0xA0];                                    // 0x0028(0x00A0)(Fixing Struct Size After Last Property [ Dumper-69 ])

public:
	class FName GetRemappedBoneName(class FName BoneName) const;
	class FName GetRemappedCurveName(class FName CurveName) const;
	void RemapCurveElements(TMap<class FName, float>& CurveItems) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LiveLinkRemapAsset">();
	}
	static class ULiveLinkRemapAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULiveLinkRemapAsset>();
	}
};
static_assert(alignof(ULiveLinkRemapAsset) == 0x000008, "Wrong alignment on ULiveLinkRemapAsset");
static_assert(sizeof(ULiveLinkRemapAsset) == 0x0000C8, "Wrong size on ULiveLinkRemapAsset");

}

