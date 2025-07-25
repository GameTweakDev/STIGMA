#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: UI_Comp_KeepConnect

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Stigma_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_Comp_KeepConnect.UI_Comp_KeepConnect_C
// 0x0060 (0x0570 - 0x0510)
class UUI_Comp_KeepConnect_C final : public UUI_EventKeepConnect
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0510(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       UI_OnShow;                                         // 0x0518(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                                Border_NextRemain;                                 // 0x0520(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Txt_NextRemainTime;                                // 0x0528(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Event_RewardItem_C*                 UI_Event_RewardItem_15;                            // 0x0530(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Event_RewardItem_C*                 UI_Event_RewardItem_30;                            // 0x0538(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Event_RewardItem_C*                 UI_Event_RewardItem_45;                            // 0x0540(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Event_RewardItem_C*                 UI_Event_RewardItem_60;                            // 0x0548(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Event_RewardItem_C*                 UI_Event_RewardItem_90;                            // 0x0550(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Event_RewardItem_C*                 UI_Event_RewardItem_120;                           // 0x0558(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnRewardStateUpdated;                              // 0x0560(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void Construct();
	void ExecuteUbergraph_UI_Comp_KeepConnect(int32 EntryPoint);
	void OnRewardStateUpdated__DelegateSignature();
	void OnRewardWidgetCanReward();
	void OnShowNextRemainMinutes(bool _show, int32 _minutes);
	void ShowNextRemainMinutes(bool _show, int32 _minutes);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_Comp_KeepConnect_C">();
	}
	static class UUI_Comp_KeepConnect_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_Comp_KeepConnect_C>();
	}
};
static_assert(alignof(UUI_Comp_KeepConnect_C) == 0x000008, "Wrong alignment on UUI_Comp_KeepConnect_C");
static_assert(sizeof(UUI_Comp_KeepConnect_C) == 0x000570, "Wrong size on UUI_Comp_KeepConnect_C");
static_assert(offsetof(UUI_Comp_KeepConnect_C, UberGraphFrame) == 0x000510, "Member 'UUI_Comp_KeepConnect_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_Comp_KeepConnect_C, UI_OnShow) == 0x000518, "Member 'UUI_Comp_KeepConnect_C::UI_OnShow' has a wrong offset!");
static_assert(offsetof(UUI_Comp_KeepConnect_C, Border_NextRemain) == 0x000520, "Member 'UUI_Comp_KeepConnect_C::Border_NextRemain' has a wrong offset!");
static_assert(offsetof(UUI_Comp_KeepConnect_C, Txt_NextRemainTime) == 0x000528, "Member 'UUI_Comp_KeepConnect_C::Txt_NextRemainTime' has a wrong offset!");
static_assert(offsetof(UUI_Comp_KeepConnect_C, UI_Event_RewardItem_15) == 0x000530, "Member 'UUI_Comp_KeepConnect_C::UI_Event_RewardItem_15' has a wrong offset!");
static_assert(offsetof(UUI_Comp_KeepConnect_C, UI_Event_RewardItem_30) == 0x000538, "Member 'UUI_Comp_KeepConnect_C::UI_Event_RewardItem_30' has a wrong offset!");
static_assert(offsetof(UUI_Comp_KeepConnect_C, UI_Event_RewardItem_45) == 0x000540, "Member 'UUI_Comp_KeepConnect_C::UI_Event_RewardItem_45' has a wrong offset!");
static_assert(offsetof(UUI_Comp_KeepConnect_C, UI_Event_RewardItem_60) == 0x000548, "Member 'UUI_Comp_KeepConnect_C::UI_Event_RewardItem_60' has a wrong offset!");
static_assert(offsetof(UUI_Comp_KeepConnect_C, UI_Event_RewardItem_90) == 0x000550, "Member 'UUI_Comp_KeepConnect_C::UI_Event_RewardItem_90' has a wrong offset!");
static_assert(offsetof(UUI_Comp_KeepConnect_C, UI_Event_RewardItem_120) == 0x000558, "Member 'UUI_Comp_KeepConnect_C::UI_Event_RewardItem_120' has a wrong offset!");
static_assert(offsetof(UUI_Comp_KeepConnect_C, OnRewardStateUpdated) == 0x000560, "Member 'UUI_Comp_KeepConnect_C::OnRewardStateUpdated' has a wrong offset!");

}

