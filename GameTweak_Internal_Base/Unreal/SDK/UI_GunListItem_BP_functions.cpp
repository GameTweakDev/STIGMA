#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: UI_GunListItem_BP

#include "Basic.hpp"

#include "UI_GunListItem_BP_classes.hpp"
#include "UI_GunListItem_BP_parameters.hpp"


namespace SDK
{

// Function UI_GunListItem_BP.UI_GunListItem_BP_C.GetBrush_IMG_Bg
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FSlateBrush UUI_GunListItem_BP_C::GetBrush_IMG_Bg()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GunListItem_BP_C", "GetBrush_IMG_Bg");

	Params::UI_GunListItem_BP_C_GetBrush_IMG_Bg Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function UI_GunListItem_BP.UI_GunListItem_BP_C.GetFontColor_IsOwned
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FSlateColor UUI_GunListItem_BP_C::GetFontColor_IsOwned()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GunListItem_BP_C", "GetFontColor_IsOwned");

	Params::UI_GunListItem_BP_C_GetFontColor_IsOwned Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function UI_GunListItem_BP.UI_GunListItem_BP_C.GetVisibility_Img_RedDot
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UUI_GunListItem_BP_C::GetVisibility_Img_RedDot()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GunListItem_BP_C", "GetVisibility_Img_RedDot");

	Params::UI_GunListItem_BP_C_GetVisibility_Img_RedDot Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function UI_GunListItem_BP.UI_GunListItem_BP_C.GetVisibility_IsOwned
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UUI_GunListItem_BP_C::GetVisibility_IsOwned()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GunListItem_BP_C", "GetVisibility_IsOwned");

	Params::UI_GunListItem_BP_C_GetVisibility_IsOwned Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

