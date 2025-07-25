#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: UI_BoosterSelectMenuItem_BP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Stigma_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_BoosterSelectMenuItem_BP.UI_BoosterSelectMenuItem_BP_C
// 0x0048 (0x0360 - 0x0318)
class UUI_BoosterSelectMenuItem_BP_C final : public UUI_BoosterSelectMenuItem
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0318(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Image_120;                                         // 0x0320(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_162;                                         // 0x0328(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_358;                                         // 0x0330(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IMG_Back;                                          // 0x0338(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IMG_Back_1;                                        // 0x0340(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IMG_Icon_Bg;                                       // 0x0348(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TXT_Name_1;                                        // 0x0350(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VERT_EffectContainer;                              // 0x0358(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UI_BoosterSelectMenuItem_BP(int32 EntryPoint);
	class UWidget* Get_BTN_Select_ToolTipWidget();
	void InitBuffDesc(const struct FConfig_Booster& _booster_def);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_BoosterSelectMenuItem_BP_C">();
	}
	static class UUI_BoosterSelectMenuItem_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_BoosterSelectMenuItem_BP_C>();
	}
};
static_assert(alignof(UUI_BoosterSelectMenuItem_BP_C) == 0x000008, "Wrong alignment on UUI_BoosterSelectMenuItem_BP_C");
static_assert(sizeof(UUI_BoosterSelectMenuItem_BP_C) == 0x000360, "Wrong size on UUI_BoosterSelectMenuItem_BP_C");
static_assert(offsetof(UUI_BoosterSelectMenuItem_BP_C, UberGraphFrame) == 0x000318, "Member 'UUI_BoosterSelectMenuItem_BP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_BoosterSelectMenuItem_BP_C, Image_120) == 0x000320, "Member 'UUI_BoosterSelectMenuItem_BP_C::Image_120' has a wrong offset!");
static_assert(offsetof(UUI_BoosterSelectMenuItem_BP_C, Image_162) == 0x000328, "Member 'UUI_BoosterSelectMenuItem_BP_C::Image_162' has a wrong offset!");
static_assert(offsetof(UUI_BoosterSelectMenuItem_BP_C, Image_358) == 0x000330, "Member 'UUI_BoosterSelectMenuItem_BP_C::Image_358' has a wrong offset!");
static_assert(offsetof(UUI_BoosterSelectMenuItem_BP_C, IMG_Back) == 0x000338, "Member 'UUI_BoosterSelectMenuItem_BP_C::IMG_Back' has a wrong offset!");
static_assert(offsetof(UUI_BoosterSelectMenuItem_BP_C, IMG_Back_1) == 0x000340, "Member 'UUI_BoosterSelectMenuItem_BP_C::IMG_Back_1' has a wrong offset!");
static_assert(offsetof(UUI_BoosterSelectMenuItem_BP_C, IMG_Icon_Bg) == 0x000348, "Member 'UUI_BoosterSelectMenuItem_BP_C::IMG_Icon_Bg' has a wrong offset!");
static_assert(offsetof(UUI_BoosterSelectMenuItem_BP_C, TXT_Name_1) == 0x000350, "Member 'UUI_BoosterSelectMenuItem_BP_C::TXT_Name_1' has a wrong offset!");
static_assert(offsetof(UUI_BoosterSelectMenuItem_BP_C, VERT_EffectContainer) == 0x000358, "Member 'UUI_BoosterSelectMenuItem_BP_C::VERT_EffectContainer' has a wrong offset!");

}

