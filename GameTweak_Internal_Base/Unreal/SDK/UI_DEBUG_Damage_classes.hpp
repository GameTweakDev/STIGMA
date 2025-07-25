#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: UI_DEBUG_Damage

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Stigma_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_DEBUG_Damage.UI_DEBUG_Damage_C
// 0x0020 (0x0560 - 0x0540)
class UUI_DEBUG_Damage_C final : public UUI_FloatingGuideContainer
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0540(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                             TXT_Damage;                                        // 0x0548(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	double                                        HP_Damage;                                         // 0x0550(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Armor_Damage;                                      // 0x0558(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UI_DEBUG_Damage(int32 EntryPoint);
	class FText GetText_0();
	void OnTick();
	void SetDamage(double _hp_damage, double _armor_damage);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_DEBUG_Damage_C">();
	}
	static class UUI_DEBUG_Damage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_DEBUG_Damage_C>();
	}
};
static_assert(alignof(UUI_DEBUG_Damage_C) == 0x000008, "Wrong alignment on UUI_DEBUG_Damage_C");
static_assert(sizeof(UUI_DEBUG_Damage_C) == 0x000560, "Wrong size on UUI_DEBUG_Damage_C");
static_assert(offsetof(UUI_DEBUG_Damage_C, UberGraphFrame) == 0x000540, "Member 'UUI_DEBUG_Damage_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_DEBUG_Damage_C, TXT_Damage) == 0x000548, "Member 'UUI_DEBUG_Damage_C::TXT_Damage' has a wrong offset!");
static_assert(offsetof(UUI_DEBUG_Damage_C, HP_Damage) == 0x000550, "Member 'UUI_DEBUG_Damage_C::HP_Damage' has a wrong offset!");
static_assert(offsetof(UUI_DEBUG_Damage_C, Armor_Damage) == 0x000558, "Member 'UUI_DEBUG_Damage_C::Armor_Damage' has a wrong offset!");

}

