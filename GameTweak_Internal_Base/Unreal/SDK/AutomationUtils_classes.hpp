#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: AutomationUtils

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// Class AutomationUtils.AutomationUtilsBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UAutomationUtilsBlueprintLibrary final : public UBlueprintFunctionLibrary
{
public:
	static void TakeGameplayAutomationScreenshot(const class FString& ScreenshotName, float MaxGlobalError, float MaxLocalError, const class FString& MapNameOverride);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AutomationUtilsBlueprintLibrary">();
	}
	static class UAutomationUtilsBlueprintLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAutomationUtilsBlueprintLibrary>();
	}
};
static_assert(alignof(UAutomationUtilsBlueprintLibrary) == 0x000008, "Wrong alignment on UAutomationUtilsBlueprintLibrary");
static_assert(sizeof(UAutomationUtilsBlueprintLibrary) == 0x000028, "Wrong size on UAutomationUtilsBlueprintLibrary");

}

