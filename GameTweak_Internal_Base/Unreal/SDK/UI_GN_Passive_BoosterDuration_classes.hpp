#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: UI_GN_Passive_BoosterDuration

#include "Basic.hpp"

#include "Stigma_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_GN_Passive_BoosterDuration.UI_GN_Passive_BoosterDuration_C
// 0x0028 (0x0538 - 0x0510)
class UUI_GN_Passive_BoosterDuration_C final : public UUI_GameNotify
{
public:
	class UWidgetAnimation*                       UI_OnHide;                                         // 0x0510(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Background_icon;                                   // 0x0518(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_PassiveEffect;                                // 0x0520(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_PassiveEffect_1;                              // 0x0528(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Txt_Value;                                         // 0x0530(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void InitWidget(const class FText& _text, float _duration);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_GN_Passive_BoosterDuration_C">();
	}
	static class UUI_GN_Passive_BoosterDuration_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_GN_Passive_BoosterDuration_C>();
	}
};
static_assert(alignof(UUI_GN_Passive_BoosterDuration_C) == 0x000008, "Wrong alignment on UUI_GN_Passive_BoosterDuration_C");
static_assert(sizeof(UUI_GN_Passive_BoosterDuration_C) == 0x000538, "Wrong size on UUI_GN_Passive_BoosterDuration_C");
static_assert(offsetof(UUI_GN_Passive_BoosterDuration_C, UI_OnHide) == 0x000510, "Member 'UUI_GN_Passive_BoosterDuration_C::UI_OnHide' has a wrong offset!");
static_assert(offsetof(UUI_GN_Passive_BoosterDuration_C, Background_icon) == 0x000518, "Member 'UUI_GN_Passive_BoosterDuration_C::Background_icon' has a wrong offset!");
static_assert(offsetof(UUI_GN_Passive_BoosterDuration_C, Icon_PassiveEffect) == 0x000520, "Member 'UUI_GN_Passive_BoosterDuration_C::Icon_PassiveEffect' has a wrong offset!");
static_assert(offsetof(UUI_GN_Passive_BoosterDuration_C, Icon_PassiveEffect_1) == 0x000528, "Member 'UUI_GN_Passive_BoosterDuration_C::Icon_PassiveEffect_1' has a wrong offset!");
static_assert(offsetof(UUI_GN_Passive_BoosterDuration_C, Txt_Value) == 0x000530, "Member 'UUI_GN_Passive_BoosterDuration_C::Txt_Value' has a wrong offset!");

}

