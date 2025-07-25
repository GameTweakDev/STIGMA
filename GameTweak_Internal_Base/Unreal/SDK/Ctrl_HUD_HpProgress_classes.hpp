#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: Ctrl_HUD_HpProgress

#include "Basic.hpp"

#include "Stigma_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Ctrl_HUD_HpProgress.Ctrl_HUD_HpProgress_C
// 0x0010 (0x0568 - 0x0558)
class UCtrl_HUD_HpProgress_C final : public UHUD_HpProgress
{
public:
	class UCanvasPanel*                           HUD_HpGaugePanel;                                  // 0x0558(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 M_ArmorOutline;                                    // 0x0560(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Ctrl_HUD_HpProgress_C">();
	}
	static class UCtrl_HUD_HpProgress_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCtrl_HUD_HpProgress_C>();
	}
};
static_assert(alignof(UCtrl_HUD_HpProgress_C) == 0x000008, "Wrong alignment on UCtrl_HUD_HpProgress_C");
static_assert(sizeof(UCtrl_HUD_HpProgress_C) == 0x000568, "Wrong size on UCtrl_HUD_HpProgress_C");
static_assert(offsetof(UCtrl_HUD_HpProgress_C, HUD_HpGaugePanel) == 0x000558, "Member 'UCtrl_HUD_HpProgress_C::HUD_HpGaugePanel' has a wrong offset!");
static_assert(offsetof(UCtrl_HUD_HpProgress_C, M_ArmorOutline) == 0x000560, "Member 'UCtrl_HUD_HpProgress_C::M_ArmorOutline' has a wrong offset!");

}

