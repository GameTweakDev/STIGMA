#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: Marker_Annihilation_GoldBox

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Minimap_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Marker_Annihilation_GoldBox.Marker_Annihilation_GoldBox_C
// 0x0018 (0x0540 - 0x0528)
class UMarker_Annihilation_GoldBox_C final : public UMinimapMarker
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0528(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Img_Coin;                                          // 0x0530(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class AGoldBox*                               GoldBox;                                           // 0x0538(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void Construct();
	void DriveColor();
	void DriveVisibility();
	void ExecuteUbergraph_Marker_Annihilation_GoldBox(int32 EntryPoint);
	bool OnBindActor(class AActor* _Actor);
	bool OnTick(const struct FGeometry& MyGeometry, float _delta);

	bool IsRotatingEnabled() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Marker_Annihilation_GoldBox_C">();
	}
	static class UMarker_Annihilation_GoldBox_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMarker_Annihilation_GoldBox_C>();
	}
};
static_assert(alignof(UMarker_Annihilation_GoldBox_C) == 0x000008, "Wrong alignment on UMarker_Annihilation_GoldBox_C");
static_assert(sizeof(UMarker_Annihilation_GoldBox_C) == 0x000540, "Wrong size on UMarker_Annihilation_GoldBox_C");
static_assert(offsetof(UMarker_Annihilation_GoldBox_C, UberGraphFrame) == 0x000528, "Member 'UMarker_Annihilation_GoldBox_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMarker_Annihilation_GoldBox_C, Img_Coin) == 0x000530, "Member 'UMarker_Annihilation_GoldBox_C::Img_Coin' has a wrong offset!");
static_assert(offsetof(UMarker_Annihilation_GoldBox_C, GoldBox) == 0x000538, "Member 'UMarker_Annihilation_GoldBox_C::GoldBox' has a wrong offset!");

}

