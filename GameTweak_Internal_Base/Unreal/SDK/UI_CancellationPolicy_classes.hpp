#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: UI_CancellationPolicy

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Stigma_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_CancellationPolicy.UI_CancellationPolicy_C
// 0x0010 (0x0508 - 0x04F8)
class UUI_CancellationPolicy_C final : public UUI_CancellationPolicy
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x04F8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCtrl_CommonButtonBase_C*               Btn_Policy;                                        // 0x0500(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void BndEvt__Ctrl_CancellationPolicy_Button_K2Node_ComponentBoundEvent_0_DM_OnSelectEnd__DelegateSignature(class UAnimatableWidget* _widget, bool _select);
	void ExecuteUbergraph_UI_CancellationPolicy(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_CancellationPolicy_C">();
	}
	static class UUI_CancellationPolicy_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_CancellationPolicy_C>();
	}
};
static_assert(alignof(UUI_CancellationPolicy_C) == 0x000008, "Wrong alignment on UUI_CancellationPolicy_C");
static_assert(sizeof(UUI_CancellationPolicy_C) == 0x000508, "Wrong size on UUI_CancellationPolicy_C");
static_assert(offsetof(UUI_CancellationPolicy_C, UberGraphFrame) == 0x0004F8, "Member 'UUI_CancellationPolicy_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_CancellationPolicy_C, Btn_Policy) == 0x000500, "Member 'UUI_CancellationPolicy_C::Btn_Policy' has a wrong offset!");

}

