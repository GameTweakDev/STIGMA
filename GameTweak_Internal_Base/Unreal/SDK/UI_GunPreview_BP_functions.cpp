#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: UI_GunPreview_BP

#include "Basic.hpp"

#include "UI_GunPreview_BP_classes.hpp"
#include "UI_GunPreview_BP_parameters.hpp"


namespace SDK
{

// Function UI_GunPreview_BP.UI_GunPreview_BP_C.SetGunPreviewer
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGunObject*                       _gun_obj                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UUI_GunPreview_BP_C::SetGunPreviewer(class UGunObject* _gun_obj)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GunPreview_BP_C", "SetGunPreviewer");

	Params::UI_GunPreview_BP_C_SetGunPreviewer Parms{};

	Parms._gun_obj = _gun_obj;

	UObject::ProcessEvent(Func, &Parms);
}

}

