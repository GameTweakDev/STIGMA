#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: UI_BattlePassBriefContainer

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Stigma_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_BattlePassBriefContainer.UI_BattlePassBriefContainer_C
// 0x0010 (0x0530 - 0x0520)
class UUI_BattlePassBriefContainer_C final : public UUI_BattlePassBriefContainer
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0520(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       UI_Change_Front;                                   // 0x0528(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__UI_BattlePassBriefContainer_Btn_Swap_K2Node_ComponentBoundEvent_0_DM_OnSelectEnd__DelegateSignature(class UAnimatableWidget* _widget, bool _select);
	void ExecuteUbergraph_UI_BattlePassBriefContainer(int32 EntryPoint);
	void OnAnimationFinished(const class UWidgetAnimation* Animation);
	void SwapAnimation(bool _forward);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_BattlePassBriefContainer_C">();
	}
	static class UUI_BattlePassBriefContainer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_BattlePassBriefContainer_C>();
	}
};
static_assert(alignof(UUI_BattlePassBriefContainer_C) == 0x000008, "Wrong alignment on UUI_BattlePassBriefContainer_C");
static_assert(sizeof(UUI_BattlePassBriefContainer_C) == 0x000530, "Wrong size on UUI_BattlePassBriefContainer_C");
static_assert(offsetof(UUI_BattlePassBriefContainer_C, UberGraphFrame) == 0x000520, "Member 'UUI_BattlePassBriefContainer_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_BattlePassBriefContainer_C, UI_Change_Front) == 0x000528, "Member 'UUI_BattlePassBriefContainer_C::UI_Change_Front' has a wrong offset!");

}

