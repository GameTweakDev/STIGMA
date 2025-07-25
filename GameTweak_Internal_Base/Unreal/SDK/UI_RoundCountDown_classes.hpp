#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: UI_RoundCountDown

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Stigma_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_RoundCountDown.UI_RoundCountDown_C
// 0x0050 (0x0550 - 0x0500)
class UUI_RoundCountDown_C final : public UUI_RoundCountDown
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0500(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       UI_OnSpotlight;                                    // 0x0508(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       UI_OnShow;                                         // 0x0510(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Image;                                             // 0x0518(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_119;                                         // 0x0520(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IMG_Bg;                                            // 0x0528(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IMG_Bg_1;                                          // 0x0530(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IMG_Bg_2;                                          // 0x0538(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Glow;                                          // 0x0540(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TXT_Count;                                         // 0x0548(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UI_RoundCountDown(int32 EntryPoint);
	void SetCount(int32 _count);
	void Txt_Count_Event(class UTextBlock* Param_TXT_Count);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_RoundCountDown_C">();
	}
	static class UUI_RoundCountDown_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_RoundCountDown_C>();
	}
};
static_assert(alignof(UUI_RoundCountDown_C) == 0x000008, "Wrong alignment on UUI_RoundCountDown_C");
static_assert(sizeof(UUI_RoundCountDown_C) == 0x000550, "Wrong size on UUI_RoundCountDown_C");
static_assert(offsetof(UUI_RoundCountDown_C, UberGraphFrame) == 0x000500, "Member 'UUI_RoundCountDown_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_RoundCountDown_C, UI_OnSpotlight) == 0x000508, "Member 'UUI_RoundCountDown_C::UI_OnSpotlight' has a wrong offset!");
static_assert(offsetof(UUI_RoundCountDown_C, UI_OnShow) == 0x000510, "Member 'UUI_RoundCountDown_C::UI_OnShow' has a wrong offset!");
static_assert(offsetof(UUI_RoundCountDown_C, Image) == 0x000518, "Member 'UUI_RoundCountDown_C::Image' has a wrong offset!");
static_assert(offsetof(UUI_RoundCountDown_C, Image_119) == 0x000520, "Member 'UUI_RoundCountDown_C::Image_119' has a wrong offset!");
static_assert(offsetof(UUI_RoundCountDown_C, IMG_Bg) == 0x000528, "Member 'UUI_RoundCountDown_C::IMG_Bg' has a wrong offset!");
static_assert(offsetof(UUI_RoundCountDown_C, IMG_Bg_1) == 0x000530, "Member 'UUI_RoundCountDown_C::IMG_Bg_1' has a wrong offset!");
static_assert(offsetof(UUI_RoundCountDown_C, IMG_Bg_2) == 0x000538, "Member 'UUI_RoundCountDown_C::IMG_Bg_2' has a wrong offset!");
static_assert(offsetof(UUI_RoundCountDown_C, Img_Glow) == 0x000540, "Member 'UUI_RoundCountDown_C::Img_Glow' has a wrong offset!");
static_assert(offsetof(UUI_RoundCountDown_C, TXT_Count) == 0x000548, "Member 'UUI_RoundCountDown_C::TXT_Count' has a wrong offset!");

}

