#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: UI_TDM_SubScoreSlot

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Stigma_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_TDM_SubScoreSlot.UI_TDM_SubScoreSlot_C
// 0x0020 (0x06B0 - 0x0690)
class UUI_TDM_SubScoreSlot_C final : public UUI_TDM_SubScoreSlot
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0690(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       UI_OnSelected;                                     // 0x0698(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Image;                                             // 0x06A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UI_TDM_SubScoreSlot(int32 EntryPoint);
	void SetTeamBrush(const struct FSlateBrush& _brush);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_TDM_SubScoreSlot_C">();
	}
	static class UUI_TDM_SubScoreSlot_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_TDM_SubScoreSlot_C>();
	}
};
static_assert(alignof(UUI_TDM_SubScoreSlot_C) == 0x000010, "Wrong alignment on UUI_TDM_SubScoreSlot_C");
static_assert(sizeof(UUI_TDM_SubScoreSlot_C) == 0x0006B0, "Wrong size on UUI_TDM_SubScoreSlot_C");
static_assert(offsetof(UUI_TDM_SubScoreSlot_C, UberGraphFrame) == 0x000690, "Member 'UUI_TDM_SubScoreSlot_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_TDM_SubScoreSlot_C, UI_OnSelected) == 0x000698, "Member 'UUI_TDM_SubScoreSlot_C::UI_OnSelected' has a wrong offset!");
static_assert(offsetof(UUI_TDM_SubScoreSlot_C, Image) == 0x0006A0, "Member 'UUI_TDM_SubScoreSlot_C::Image' has a wrong offset!");

}

