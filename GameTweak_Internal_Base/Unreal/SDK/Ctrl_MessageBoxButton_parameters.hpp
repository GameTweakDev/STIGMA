#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: Ctrl_MessageBoxButton

#include "Basic.hpp"

#include "BPGLib_structs.hpp"


namespace SDK::Params
{

// Function Ctrl_MessageBoxButton.Ctrl_MessageBoxButton_C.BndEvt__Ctrl_MessageBoxButton_Ctrl_CommonButton_Intensity_K2Node_ComponentBoundEvent_3_DM_OnSelectEnd__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct Ctrl_MessageBoxButton_C_BndEvt__Ctrl_MessageBoxButton_Ctrl_CommonButton_Intensity_K2Node_ComponentBoundEvent_3_DM_OnSelectEnd__DelegateSignature final
{
public:
	class UAnimatableWidget*                      _widget;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          _select;                                           // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Ctrl_MessageBoxButton_C_BndEvt__Ctrl_MessageBoxButton_Ctrl_CommonButton_Intensity_K2Node_ComponentBoundEvent_3_DM_OnSelectEnd__DelegateSignature) == 0x000008, "Wrong alignment on Ctrl_MessageBoxButton_C_BndEvt__Ctrl_MessageBoxButton_Ctrl_CommonButton_Intensity_K2Node_ComponentBoundEvent_3_DM_OnSelectEnd__DelegateSignature");
static_assert(sizeof(Ctrl_MessageBoxButton_C_BndEvt__Ctrl_MessageBoxButton_Ctrl_CommonButton_Intensity_K2Node_ComponentBoundEvent_3_DM_OnSelectEnd__DelegateSignature) == 0x000010, "Wrong size on Ctrl_MessageBoxButton_C_BndEvt__Ctrl_MessageBoxButton_Ctrl_CommonButton_Intensity_K2Node_ComponentBoundEvent_3_DM_OnSelectEnd__DelegateSignature");
static_assert(offsetof(Ctrl_MessageBoxButton_C_BndEvt__Ctrl_MessageBoxButton_Ctrl_CommonButton_Intensity_K2Node_ComponentBoundEvent_3_DM_OnSelectEnd__DelegateSignature, _widget) == 0x000000, "Member 'Ctrl_MessageBoxButton_C_BndEvt__Ctrl_MessageBoxButton_Ctrl_CommonButton_Intensity_K2Node_ComponentBoundEvent_3_DM_OnSelectEnd__DelegateSignature::_widget' has a wrong offset!");
static_assert(offsetof(Ctrl_MessageBoxButton_C_BndEvt__Ctrl_MessageBoxButton_Ctrl_CommonButton_Intensity_K2Node_ComponentBoundEvent_3_DM_OnSelectEnd__DelegateSignature, _select) == 0x000008, "Member 'Ctrl_MessageBoxButton_C_BndEvt__Ctrl_MessageBoxButton_Ctrl_CommonButton_Intensity_K2Node_ComponentBoundEvent_3_DM_OnSelectEnd__DelegateSignature::_select' has a wrong offset!");

// Function Ctrl_MessageBoxButton.Ctrl_MessageBoxButton_C.ExecuteUbergraph_Ctrl_MessageBoxButton
// 0x0018 (0x0018 - 0x0000)
struct Ctrl_MessageBoxButton_C_ExecuteUbergraph_Ctrl_MessageBoxButton final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_36FC[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-69 ])
	class UAnimatableWidget*                      K2Node_ComponentBoundEvent__widget;                // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent__select;                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Ctrl_MessageBoxButton_C_ExecuteUbergraph_Ctrl_MessageBoxButton) == 0x000008, "Wrong alignment on Ctrl_MessageBoxButton_C_ExecuteUbergraph_Ctrl_MessageBoxButton");
static_assert(sizeof(Ctrl_MessageBoxButton_C_ExecuteUbergraph_Ctrl_MessageBoxButton) == 0x000018, "Wrong size on Ctrl_MessageBoxButton_C_ExecuteUbergraph_Ctrl_MessageBoxButton");
static_assert(offsetof(Ctrl_MessageBoxButton_C_ExecuteUbergraph_Ctrl_MessageBoxButton, EntryPoint) == 0x000000, "Member 'Ctrl_MessageBoxButton_C_ExecuteUbergraph_Ctrl_MessageBoxButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(Ctrl_MessageBoxButton_C_ExecuteUbergraph_Ctrl_MessageBoxButton, K2Node_ComponentBoundEvent__widget) == 0x000008, "Member 'Ctrl_MessageBoxButton_C_ExecuteUbergraph_Ctrl_MessageBoxButton::K2Node_ComponentBoundEvent__widget' has a wrong offset!");
static_assert(offsetof(Ctrl_MessageBoxButton_C_ExecuteUbergraph_Ctrl_MessageBoxButton, K2Node_ComponentBoundEvent__select) == 0x000010, "Member 'Ctrl_MessageBoxButton_C_ExecuteUbergraph_Ctrl_MessageBoxButton::K2Node_ComponentBoundEvent__select' has a wrong offset!");

// Function Ctrl_MessageBoxButton.Ctrl_MessageBoxButton_C.InitContexts
// 0x0030 (0x0030 - 0x0000)
struct Ctrl_MessageBoxButton_C_InitContexts final
{
public:
	struct FMessageBoxButton                      _setting;                                          // 0x0000(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Ctrl_MessageBoxButton_C_InitContexts) == 0x000008, "Wrong alignment on Ctrl_MessageBoxButton_C_InitContexts");
static_assert(sizeof(Ctrl_MessageBoxButton_C_InitContexts) == 0x000030, "Wrong size on Ctrl_MessageBoxButton_C_InitContexts");
static_assert(offsetof(Ctrl_MessageBoxButton_C_InitContexts, _setting) == 0x000000, "Member 'Ctrl_MessageBoxButton_C_InitContexts::_setting' has a wrong offset!");
static_assert(offsetof(Ctrl_MessageBoxButton_C_InitContexts, K2Node_SwitchEnum_CmpSuccess) == 0x000028, "Member 'Ctrl_MessageBoxButton_C_InitContexts::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function Ctrl_MessageBoxButton.Ctrl_MessageBoxButton_C.OnClick__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct Ctrl_MessageBoxButton_C_OnClick__DelegateSignature final
{
public:
	class FName                                   _id;                                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Ctrl_MessageBoxButton_C_OnClick__DelegateSignature) == 0x000004, "Wrong alignment on Ctrl_MessageBoxButton_C_OnClick__DelegateSignature");
static_assert(sizeof(Ctrl_MessageBoxButton_C_OnClick__DelegateSignature) == 0x000008, "Wrong size on Ctrl_MessageBoxButton_C_OnClick__DelegateSignature");
static_assert(offsetof(Ctrl_MessageBoxButton_C_OnClick__DelegateSignature, _id) == 0x000000, "Member 'Ctrl_MessageBoxButton_C_OnClick__DelegateSignature::_id' has a wrong offset!");

// Function Ctrl_MessageBoxButton.Ctrl_MessageBoxButton_C.OnSynchronizeProperties
// 0x0001 (0x0001 - 0x0000)
struct Ctrl_MessageBoxButton_C_OnSynchronizeProperties final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Ctrl_MessageBoxButton_C_OnSynchronizeProperties) == 0x000001, "Wrong alignment on Ctrl_MessageBoxButton_C_OnSynchronizeProperties");
static_assert(sizeof(Ctrl_MessageBoxButton_C_OnSynchronizeProperties) == 0x000001, "Wrong size on Ctrl_MessageBoxButton_C_OnSynchronizeProperties");
static_assert(offsetof(Ctrl_MessageBoxButton_C_OnSynchronizeProperties, ReturnValue) == 0x000000, "Member 'Ctrl_MessageBoxButton_C_OnSynchronizeProperties::ReturnValue' has a wrong offset!");

// Function Ctrl_MessageBoxButton.Ctrl_MessageBoxButton_C.SetText
// 0x0018 (0x0018 - 0x0000)
struct Ctrl_MessageBoxButton_C_SetText final
{
public:
	class FText                                   _text;                                             // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(Ctrl_MessageBoxButton_C_SetText) == 0x000008, "Wrong alignment on Ctrl_MessageBoxButton_C_SetText");
static_assert(sizeof(Ctrl_MessageBoxButton_C_SetText) == 0x000018, "Wrong size on Ctrl_MessageBoxButton_C_SetText");
static_assert(offsetof(Ctrl_MessageBoxButton_C_SetText, _text) == 0x000000, "Member 'Ctrl_MessageBoxButton_C_SetText::_text' has a wrong offset!");

}

