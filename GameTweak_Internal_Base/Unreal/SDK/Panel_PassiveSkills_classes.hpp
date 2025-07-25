#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: Panel_PassiveSkills

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BPGLib_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Panel_PassiveSkills.Panel_PassiveSkills_C
// 0x0068 (0x0548 - 0x04E0)
class UPanel_PassiveSkills_C final : public UAnimatableWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x04E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                Button_110;                                        // 0x04E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCtrl_PassiveSlot_C*                    Ctrl_PassiveSlot;                                  // 0x04F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCtrl_PassiveSlot_C*                    Ctrl_PassiveSlot_1;                                // 0x04F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCtrl_PassiveSlot_C*                    Ctrl_PassiveSlot_2;                                // 0x0500(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCtrl_PassiveSlot_C*                    Ctrl_PassiveSlot_3;                                // 0x0508(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCtrl_PassiveSlot_C*                    Ctrl_PassiveSlot_4;                                // 0x0510(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCtrl_PassiveSlot_C*                    Ctrl_PassiveSlot_5;                                // 0x0518(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCtrl_PassiveSlot_C*                    Ctrl_PassiveSlot_6;                                // 0x0520(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCtrl_PassiveSlot_C*                    Ctrl_PassiveSlot_8;                                // 0x0528(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_97;                                          // 0x0530(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWrapBox*                               SlotContainer;                                     // 0x0538(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_0;                                  // 0x0540(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void BndEvt__Panel_PassiveSkills_Button_110_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void ExecuteUbergraph_Panel_PassiveSkills(int32 EntryPoint);
	void InitWidget();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Panel_PassiveSkills_C">();
	}
	static class UPanel_PassiveSkills_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPanel_PassiveSkills_C>();
	}
};
static_assert(alignof(UPanel_PassiveSkills_C) == 0x000008, "Wrong alignment on UPanel_PassiveSkills_C");
static_assert(sizeof(UPanel_PassiveSkills_C) == 0x000548, "Wrong size on UPanel_PassiveSkills_C");
static_assert(offsetof(UPanel_PassiveSkills_C, UberGraphFrame) == 0x0004E0, "Member 'UPanel_PassiveSkills_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPanel_PassiveSkills_C, Button_110) == 0x0004E8, "Member 'UPanel_PassiveSkills_C::Button_110' has a wrong offset!");
static_assert(offsetof(UPanel_PassiveSkills_C, Ctrl_PassiveSlot) == 0x0004F0, "Member 'UPanel_PassiveSkills_C::Ctrl_PassiveSlot' has a wrong offset!");
static_assert(offsetof(UPanel_PassiveSkills_C, Ctrl_PassiveSlot_1) == 0x0004F8, "Member 'UPanel_PassiveSkills_C::Ctrl_PassiveSlot_1' has a wrong offset!");
static_assert(offsetof(UPanel_PassiveSkills_C, Ctrl_PassiveSlot_2) == 0x000500, "Member 'UPanel_PassiveSkills_C::Ctrl_PassiveSlot_2' has a wrong offset!");
static_assert(offsetof(UPanel_PassiveSkills_C, Ctrl_PassiveSlot_3) == 0x000508, "Member 'UPanel_PassiveSkills_C::Ctrl_PassiveSlot_3' has a wrong offset!");
static_assert(offsetof(UPanel_PassiveSkills_C, Ctrl_PassiveSlot_4) == 0x000510, "Member 'UPanel_PassiveSkills_C::Ctrl_PassiveSlot_4' has a wrong offset!");
static_assert(offsetof(UPanel_PassiveSkills_C, Ctrl_PassiveSlot_5) == 0x000518, "Member 'UPanel_PassiveSkills_C::Ctrl_PassiveSlot_5' has a wrong offset!");
static_assert(offsetof(UPanel_PassiveSkills_C, Ctrl_PassiveSlot_6) == 0x000520, "Member 'UPanel_PassiveSkills_C::Ctrl_PassiveSlot_6' has a wrong offset!");
static_assert(offsetof(UPanel_PassiveSkills_C, Ctrl_PassiveSlot_8) == 0x000528, "Member 'UPanel_PassiveSkills_C::Ctrl_PassiveSlot_8' has a wrong offset!");
static_assert(offsetof(UPanel_PassiveSkills_C, Image_97) == 0x000530, "Member 'UPanel_PassiveSkills_C::Image_97' has a wrong offset!");
static_assert(offsetof(UPanel_PassiveSkills_C, SlotContainer) == 0x000538, "Member 'UPanel_PassiveSkills_C::SlotContainer' has a wrong offset!");
static_assert(offsetof(UPanel_PassiveSkills_C, WidgetSwitcher_0) == 0x000540, "Member 'UPanel_PassiveSkills_C::WidgetSwitcher_0' has a wrong offset!");

}

