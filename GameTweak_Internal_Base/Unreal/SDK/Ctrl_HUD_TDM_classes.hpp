#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: Ctrl_HUD_TDM

#include "Basic.hpp"

#include "Stigma_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Ctrl_HUD_TDM.Ctrl_HUD_TDM_C
// 0x0010 (0x0520 - 0x0510)
class UCtrl_HUD_TDM_C final : public UUI_HUDMode_TDM
{
public:
	class UCtrl_HUD_Timer_C*                      Ctrl_HUD_Timer;                                    // 0x0510(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCtrl_TrainingRoom_KeyEntry_C*          F1_ControlKey;                                     // 0x0518(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Ctrl_HUD_TDM_C">();
	}
	static class UCtrl_HUD_TDM_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCtrl_HUD_TDM_C>();
	}
};
static_assert(alignof(UCtrl_HUD_TDM_C) == 0x000008, "Wrong alignment on UCtrl_HUD_TDM_C");
static_assert(sizeof(UCtrl_HUD_TDM_C) == 0x000520, "Wrong size on UCtrl_HUD_TDM_C");
static_assert(offsetof(UCtrl_HUD_TDM_C, Ctrl_HUD_Timer) == 0x000510, "Member 'UCtrl_HUD_TDM_C::Ctrl_HUD_Timer' has a wrong offset!");
static_assert(offsetof(UCtrl_HUD_TDM_C, F1_ControlKey) == 0x000518, "Member 'UCtrl_HUD_TDM_C::F1_ControlKey' has a wrong offset!");

}

