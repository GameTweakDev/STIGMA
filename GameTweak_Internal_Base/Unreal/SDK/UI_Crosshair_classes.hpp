#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: UI_Crosshair

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "BPGLib_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_Crosshair.UI_Crosshair_C
// 0x0030 (0x0520 - 0x04F0)
class UUI_Crosshair_C final : public UPreviewableWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x04F0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Crosshair_Image;                                   // 0x04F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               MaterialInstance;                                  // 0x0500(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              WidgetCenterPos;                                   // 0x0508(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CrossHairThickness;                                // 0x0518(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Construct();
	void ExecuteUbergraph_UI_Crosshair(int32 EntryPoint);
	bool OnSynchronizeProperties();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void UpdateMaterialParameter();
	void ValidateMaterialInstance();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_Crosshair_C">();
	}
	static class UUI_Crosshair_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_Crosshair_C>();
	}
};
static_assert(alignof(UUI_Crosshair_C) == 0x000008, "Wrong alignment on UUI_Crosshair_C");
static_assert(sizeof(UUI_Crosshair_C) == 0x000520, "Wrong size on UUI_Crosshair_C");
static_assert(offsetof(UUI_Crosshair_C, UberGraphFrame) == 0x0004F0, "Member 'UUI_Crosshair_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_Crosshair_C, Crosshair_Image) == 0x0004F8, "Member 'UUI_Crosshair_C::Crosshair_Image' has a wrong offset!");
static_assert(offsetof(UUI_Crosshair_C, MaterialInstance) == 0x000500, "Member 'UUI_Crosshair_C::MaterialInstance' has a wrong offset!");
static_assert(offsetof(UUI_Crosshair_C, WidgetCenterPos) == 0x000508, "Member 'UUI_Crosshair_C::WidgetCenterPos' has a wrong offset!");
static_assert(offsetof(UUI_Crosshair_C, CrossHairThickness) == 0x000518, "Member 'UUI_Crosshair_C::CrossHairThickness' has a wrong offset!");

}

