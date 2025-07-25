#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: UI_GN_ReviveAlly

#include "Basic.hpp"

#include "Stigma_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_GN_ReviveAlly.UI_GN_ReviveAlly_C
// 0x0050 (0x0560 - 0x0510)
class UUI_GN_ReviveAlly_C final : public UUI_GameNotify
{
public:
	class UWidgetAnimation*                       UI_OnShow;                                         // 0x0510(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_Alert;                                 // 0x0518(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_215;                                         // 0x0520(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Line_Bottom;                                   // 0x0528(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Line_Top;                                      // 0x0530(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 T_Revive;                                          // 0x0538(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TXT_Message;                                       // 0x0540(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   TeamText;                                          // 0x0548(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void InitWidget(const class FText& _text, float _duration);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_GN_ReviveAlly_C">();
	}
	static class UUI_GN_ReviveAlly_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_GN_ReviveAlly_C>();
	}
};
static_assert(alignof(UUI_GN_ReviveAlly_C) == 0x000008, "Wrong alignment on UUI_GN_ReviveAlly_C");
static_assert(sizeof(UUI_GN_ReviveAlly_C) == 0x000560, "Wrong size on UUI_GN_ReviveAlly_C");
static_assert(offsetof(UUI_GN_ReviveAlly_C, UI_OnShow) == 0x000510, "Member 'UUI_GN_ReviveAlly_C::UI_OnShow' has a wrong offset!");
static_assert(offsetof(UUI_GN_ReviveAlly_C, CanvasPanel_Alert) == 0x000518, "Member 'UUI_GN_ReviveAlly_C::CanvasPanel_Alert' has a wrong offset!");
static_assert(offsetof(UUI_GN_ReviveAlly_C, Image_215) == 0x000520, "Member 'UUI_GN_ReviveAlly_C::Image_215' has a wrong offset!");
static_assert(offsetof(UUI_GN_ReviveAlly_C, Img_Line_Bottom) == 0x000528, "Member 'UUI_GN_ReviveAlly_C::Img_Line_Bottom' has a wrong offset!");
static_assert(offsetof(UUI_GN_ReviveAlly_C, Img_Line_Top) == 0x000530, "Member 'UUI_GN_ReviveAlly_C::Img_Line_Top' has a wrong offset!");
static_assert(offsetof(UUI_GN_ReviveAlly_C, T_Revive) == 0x000538, "Member 'UUI_GN_ReviveAlly_C::T_Revive' has a wrong offset!");
static_assert(offsetof(UUI_GN_ReviveAlly_C, TXT_Message) == 0x000540, "Member 'UUI_GN_ReviveAlly_C::TXT_Message' has a wrong offset!");
static_assert(offsetof(UUI_GN_ReviveAlly_C, TeamText) == 0x000548, "Member 'UUI_GN_ReviveAlly_C::TeamText' has a wrong offset!");

}

