#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: UI_Tooltip_Booster

#include "Basic.hpp"

#include "UI_Tooltip_ItemID_Default_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_Tooltip_Booster.UI_Tooltip_Booster_C
// 0x0010 (0x0778 - 0x0768)
class UUI_Tooltip_Booster_C final : public UUI_Tooltip_ItemID_Default_C
{
public:
	class UTextBlock*                             TXT_Cooltime;                                      // 0x0768(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Txt_Effects;                                       // 0x0770(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void GetEffectText(struct FItemID& _item_id, class FText* _effect_text);
	void OnShowTooltip();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_Tooltip_Booster_C">();
	}
	static class UUI_Tooltip_Booster_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_Tooltip_Booster_C>();
	}
};
static_assert(alignof(UUI_Tooltip_Booster_C) == 0x000008, "Wrong alignment on UUI_Tooltip_Booster_C");
static_assert(sizeof(UUI_Tooltip_Booster_C) == 0x000778, "Wrong size on UUI_Tooltip_Booster_C");
static_assert(offsetof(UUI_Tooltip_Booster_C, TXT_Cooltime) == 0x000768, "Member 'UUI_Tooltip_Booster_C::TXT_Cooltime' has a wrong offset!");
static_assert(offsetof(UUI_Tooltip_Booster_C, Txt_Effects) == 0x000770, "Member 'UUI_Tooltip_Booster_C::Txt_Effects' has a wrong offset!");

}

