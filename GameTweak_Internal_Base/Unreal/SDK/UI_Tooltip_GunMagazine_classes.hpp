#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: UI_Tooltip_GunMagazine

#include "Basic.hpp"

#include "UI_Tooltip_GunPartsBase_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_Tooltip_GunMagazine.UI_Tooltip_GunMagazine_C
// 0x0030 (0x08F0 - 0x08C0)
class UUI_Tooltip_GunMagazine_C final : public UUI_Tooltip_GunPartsBase_C
{
public:
	int32                                         Magazine_Capacity;                                 // 0x08C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3FA8[0x4];                                     // 0x08C4(0x0004)(Fixing Size After Last Property [ Dumper-69 ])
	TSoftObjectPtr<class UTexture2D>              UI_Icon_MagazineCapacity;                          // 0x08C8(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void InitWidget(const struct FItemID& _item_id);
	void OnShowTooltip();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_Tooltip_GunMagazine_C">();
	}
	static class UUI_Tooltip_GunMagazine_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_Tooltip_GunMagazine_C>();
	}
};
static_assert(alignof(UUI_Tooltip_GunMagazine_C) == 0x000008, "Wrong alignment on UUI_Tooltip_GunMagazine_C");
static_assert(sizeof(UUI_Tooltip_GunMagazine_C) == 0x0008F0, "Wrong size on UUI_Tooltip_GunMagazine_C");
static_assert(offsetof(UUI_Tooltip_GunMagazine_C, Magazine_Capacity) == 0x0008C0, "Member 'UUI_Tooltip_GunMagazine_C::Magazine_Capacity' has a wrong offset!");
static_assert(offsetof(UUI_Tooltip_GunMagazine_C, UI_Icon_MagazineCapacity) == 0x0008C8, "Member 'UUI_Tooltip_GunMagazine_C::UI_Icon_MagazineCapacity' has a wrong offset!");

}

