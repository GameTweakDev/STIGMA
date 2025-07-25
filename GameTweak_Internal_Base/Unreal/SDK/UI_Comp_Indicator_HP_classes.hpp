#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: UI_Comp_Indicator_HP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Stigma_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_Comp_Indicator_HP.UI_Comp_Indicator_HP_C
// 0x0068 (0x0578 - 0x0510)
class UUI_Comp_Indicator_HP_C final : public UUI_Comp_Indicator_HPBar
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0510(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       UI_OnSpotlight;                                    // 0x0518(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       UI_OnHide;                                         // 0x0520(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       UI_OnShow;                                         // 0x0528(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UProgressBar*                           Armor_ProgressBar;                                 // 0x0530(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           Armor_ProgressBar_Interp;                          // 0x0538(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Baackground;                                       // 0x0540(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HB_HpBar;                                          // 0x0548(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           Hp_ProgressBar;                                    // 0x0550(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           Hp_ProgressBar_Interp;                             // 0x0558(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image;                                             // 0x0560(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Armor;                                         // 0x0568(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TXT_Distance;                                      // 0x0570(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UI_Comp_Indicator_HP(int32 EntryPoint);
	void SetArmor(float _armor_percent);
	void SetArmor_Interp(float _armor_percent);
	void SetArmorTypeIcon(const TSoftObjectPtr<class UTexture2D>& _Icon);
	void SetHP(float _hp_percent);
	void SetHP_Interp(float _hp_percent);
	void UpdateDistance(float _distance);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_Comp_Indicator_HP_C">();
	}
	static class UUI_Comp_Indicator_HP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_Comp_Indicator_HP_C>();
	}
};
static_assert(alignof(UUI_Comp_Indicator_HP_C) == 0x000008, "Wrong alignment on UUI_Comp_Indicator_HP_C");
static_assert(sizeof(UUI_Comp_Indicator_HP_C) == 0x000578, "Wrong size on UUI_Comp_Indicator_HP_C");
static_assert(offsetof(UUI_Comp_Indicator_HP_C, UberGraphFrame) == 0x000510, "Member 'UUI_Comp_Indicator_HP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_Comp_Indicator_HP_C, UI_OnSpotlight) == 0x000518, "Member 'UUI_Comp_Indicator_HP_C::UI_OnSpotlight' has a wrong offset!");
static_assert(offsetof(UUI_Comp_Indicator_HP_C, UI_OnHide) == 0x000520, "Member 'UUI_Comp_Indicator_HP_C::UI_OnHide' has a wrong offset!");
static_assert(offsetof(UUI_Comp_Indicator_HP_C, UI_OnShow) == 0x000528, "Member 'UUI_Comp_Indicator_HP_C::UI_OnShow' has a wrong offset!");
static_assert(offsetof(UUI_Comp_Indicator_HP_C, Armor_ProgressBar) == 0x000530, "Member 'UUI_Comp_Indicator_HP_C::Armor_ProgressBar' has a wrong offset!");
static_assert(offsetof(UUI_Comp_Indicator_HP_C, Armor_ProgressBar_Interp) == 0x000538, "Member 'UUI_Comp_Indicator_HP_C::Armor_ProgressBar_Interp' has a wrong offset!");
static_assert(offsetof(UUI_Comp_Indicator_HP_C, Baackground) == 0x000540, "Member 'UUI_Comp_Indicator_HP_C::Baackground' has a wrong offset!");
static_assert(offsetof(UUI_Comp_Indicator_HP_C, HB_HpBar) == 0x000548, "Member 'UUI_Comp_Indicator_HP_C::HB_HpBar' has a wrong offset!");
static_assert(offsetof(UUI_Comp_Indicator_HP_C, Hp_ProgressBar) == 0x000550, "Member 'UUI_Comp_Indicator_HP_C::Hp_ProgressBar' has a wrong offset!");
static_assert(offsetof(UUI_Comp_Indicator_HP_C, Hp_ProgressBar_Interp) == 0x000558, "Member 'UUI_Comp_Indicator_HP_C::Hp_ProgressBar_Interp' has a wrong offset!");
static_assert(offsetof(UUI_Comp_Indicator_HP_C, Image) == 0x000560, "Member 'UUI_Comp_Indicator_HP_C::Image' has a wrong offset!");
static_assert(offsetof(UUI_Comp_Indicator_HP_C, Img_Armor) == 0x000568, "Member 'UUI_Comp_Indicator_HP_C::Img_Armor' has a wrong offset!");
static_assert(offsetof(UUI_Comp_Indicator_HP_C, TXT_Distance) == 0x000570, "Member 'UUI_Comp_Indicator_HP_C::TXT_Distance' has a wrong offset!");

}

