#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: Btn_PassMissionWeekTab

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function Btn_PassMissionWeekTab.Btn_PassMissionWeekTab_C.BndEvt__Btn_PassMissionWeekTab_Button_K2Node_ComponentBoundEvent_0_DM_OnSelectEnd__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct Btn_PassMissionWeekTab_C_BndEvt__Btn_PassMissionWeekTab_Button_K2Node_ComponentBoundEvent_0_DM_OnSelectEnd__DelegateSignature final
{
public:
	class UAnimatableWidget*                      _widget;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          _select;                                           // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Btn_PassMissionWeekTab_C_BndEvt__Btn_PassMissionWeekTab_Button_K2Node_ComponentBoundEvent_0_DM_OnSelectEnd__DelegateSignature) == 0x000008, "Wrong alignment on Btn_PassMissionWeekTab_C_BndEvt__Btn_PassMissionWeekTab_Button_K2Node_ComponentBoundEvent_0_DM_OnSelectEnd__DelegateSignature");
static_assert(sizeof(Btn_PassMissionWeekTab_C_BndEvt__Btn_PassMissionWeekTab_Button_K2Node_ComponentBoundEvent_0_DM_OnSelectEnd__DelegateSignature) == 0x000010, "Wrong size on Btn_PassMissionWeekTab_C_BndEvt__Btn_PassMissionWeekTab_Button_K2Node_ComponentBoundEvent_0_DM_OnSelectEnd__DelegateSignature");
static_assert(offsetof(Btn_PassMissionWeekTab_C_BndEvt__Btn_PassMissionWeekTab_Button_K2Node_ComponentBoundEvent_0_DM_OnSelectEnd__DelegateSignature, _widget) == 0x000000, "Member 'Btn_PassMissionWeekTab_C_BndEvt__Btn_PassMissionWeekTab_Button_K2Node_ComponentBoundEvent_0_DM_OnSelectEnd__DelegateSignature::_widget' has a wrong offset!");
static_assert(offsetof(Btn_PassMissionWeekTab_C_BndEvt__Btn_PassMissionWeekTab_Button_K2Node_ComponentBoundEvent_0_DM_OnSelectEnd__DelegateSignature, _select) == 0x000008, "Member 'Btn_PassMissionWeekTab_C_BndEvt__Btn_PassMissionWeekTab_Button_K2Node_ComponentBoundEvent_0_DM_OnSelectEnd__DelegateSignature::_select' has a wrong offset!");

// Function Btn_PassMissionWeekTab.Btn_PassMissionWeekTab_C.ExecuteUbergraph_Btn_PassMissionWeekTab
// 0x0110 (0x0110 - 0x0000)
struct Btn_PassMissionWeekTab_C_ExecuteUbergraph_Btn_PassMissionWeekTab final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event__selected;                            // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event__locked;                              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_359F[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-69 ])
	class UAnimatableWidget*                      K2Node_ComponentBoundEvent__widget;                // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent__select;                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_35A0[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-69 ])
	class FText                                   K2Node_Event__text;                                // 0x0018(0x0018)(ConstParm)
	int32                                         K2Node_Event__current_count;                       // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event__target_count;                        // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue;              // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue_1;            // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0048(0x0050)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0098(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00E8(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00F8(0x0018)()
};
static_assert(alignof(Btn_PassMissionWeekTab_C_ExecuteUbergraph_Btn_PassMissionWeekTab) == 0x000008, "Wrong alignment on Btn_PassMissionWeekTab_C_ExecuteUbergraph_Btn_PassMissionWeekTab");
static_assert(sizeof(Btn_PassMissionWeekTab_C_ExecuteUbergraph_Btn_PassMissionWeekTab) == 0x000110, "Wrong size on Btn_PassMissionWeekTab_C_ExecuteUbergraph_Btn_PassMissionWeekTab");
static_assert(offsetof(Btn_PassMissionWeekTab_C_ExecuteUbergraph_Btn_PassMissionWeekTab, EntryPoint) == 0x000000, "Member 'Btn_PassMissionWeekTab_C_ExecuteUbergraph_Btn_PassMissionWeekTab::EntryPoint' has a wrong offset!");
static_assert(offsetof(Btn_PassMissionWeekTab_C_ExecuteUbergraph_Btn_PassMissionWeekTab, K2Node_Event__selected) == 0x000004, "Member 'Btn_PassMissionWeekTab_C_ExecuteUbergraph_Btn_PassMissionWeekTab::K2Node_Event__selected' has a wrong offset!");
static_assert(offsetof(Btn_PassMissionWeekTab_C_ExecuteUbergraph_Btn_PassMissionWeekTab, K2Node_Event__locked) == 0x000005, "Member 'Btn_PassMissionWeekTab_C_ExecuteUbergraph_Btn_PassMissionWeekTab::K2Node_Event__locked' has a wrong offset!");
static_assert(offsetof(Btn_PassMissionWeekTab_C_ExecuteUbergraph_Btn_PassMissionWeekTab, K2Node_ComponentBoundEvent__widget) == 0x000008, "Member 'Btn_PassMissionWeekTab_C_ExecuteUbergraph_Btn_PassMissionWeekTab::K2Node_ComponentBoundEvent__widget' has a wrong offset!");
static_assert(offsetof(Btn_PassMissionWeekTab_C_ExecuteUbergraph_Btn_PassMissionWeekTab, K2Node_ComponentBoundEvent__select) == 0x000010, "Member 'Btn_PassMissionWeekTab_C_ExecuteUbergraph_Btn_PassMissionWeekTab::K2Node_ComponentBoundEvent__select' has a wrong offset!");
static_assert(offsetof(Btn_PassMissionWeekTab_C_ExecuteUbergraph_Btn_PassMissionWeekTab, K2Node_Event__text) == 0x000018, "Member 'Btn_PassMissionWeekTab_C_ExecuteUbergraph_Btn_PassMissionWeekTab::K2Node_Event__text' has a wrong offset!");
static_assert(offsetof(Btn_PassMissionWeekTab_C_ExecuteUbergraph_Btn_PassMissionWeekTab, K2Node_Event__current_count) == 0x000030, "Member 'Btn_PassMissionWeekTab_C_ExecuteUbergraph_Btn_PassMissionWeekTab::K2Node_Event__current_count' has a wrong offset!");
static_assert(offsetof(Btn_PassMissionWeekTab_C_ExecuteUbergraph_Btn_PassMissionWeekTab, K2Node_Event__target_count) == 0x000034, "Member 'Btn_PassMissionWeekTab_C_ExecuteUbergraph_Btn_PassMissionWeekTab::K2Node_Event__target_count' has a wrong offset!");
static_assert(offsetof(Btn_PassMissionWeekTab_C_ExecuteUbergraph_Btn_PassMissionWeekTab, CallFunc_Conv_IntToInt64_ReturnValue) == 0x000038, "Member 'Btn_PassMissionWeekTab_C_ExecuteUbergraph_Btn_PassMissionWeekTab::CallFunc_Conv_IntToInt64_ReturnValue' has a wrong offset!");
static_assert(offsetof(Btn_PassMissionWeekTab_C_ExecuteUbergraph_Btn_PassMissionWeekTab, CallFunc_Conv_IntToInt64_ReturnValue_1) == 0x000040, "Member 'Btn_PassMissionWeekTab_C_ExecuteUbergraph_Btn_PassMissionWeekTab::CallFunc_Conv_IntToInt64_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Btn_PassMissionWeekTab_C_ExecuteUbergraph_Btn_PassMissionWeekTab, K2Node_MakeStruct_FormatArgumentData) == 0x000048, "Member 'Btn_PassMissionWeekTab_C_ExecuteUbergraph_Btn_PassMissionWeekTab::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(Btn_PassMissionWeekTab_C_ExecuteUbergraph_Btn_PassMissionWeekTab, K2Node_MakeStruct_FormatArgumentData_1) == 0x000098, "Member 'Btn_PassMissionWeekTab_C_ExecuteUbergraph_Btn_PassMissionWeekTab::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(Btn_PassMissionWeekTab_C_ExecuteUbergraph_Btn_PassMissionWeekTab, K2Node_MakeArray_Array) == 0x0000E8, "Member 'Btn_PassMissionWeekTab_C_ExecuteUbergraph_Btn_PassMissionWeekTab::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(Btn_PassMissionWeekTab_C_ExecuteUbergraph_Btn_PassMissionWeekTab, CallFunc_Format_ReturnValue) == 0x0000F8, "Member 'Btn_PassMissionWeekTab_C_ExecuteUbergraph_Btn_PassMissionWeekTab::CallFunc_Format_ReturnValue' has a wrong offset!");

// Function Btn_PassMissionWeekTab.Btn_PassMissionWeekTab_C.OnSynchronizeProperties
// 0x0002 (0x0002 - 0x0000)
struct Btn_PassMissionWeekTab_C_OnSynchronizeProperties final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Btn_PassMissionWeekTab_C_OnSynchronizeProperties) == 0x000001, "Wrong alignment on Btn_PassMissionWeekTab_C_OnSynchronizeProperties");
static_assert(sizeof(Btn_PassMissionWeekTab_C_OnSynchronizeProperties) == 0x000002, "Wrong size on Btn_PassMissionWeekTab_C_OnSynchronizeProperties");
static_assert(offsetof(Btn_PassMissionWeekTab_C_OnSynchronizeProperties, ReturnValue) == 0x000000, "Member 'Btn_PassMissionWeekTab_C_OnSynchronizeProperties::ReturnValue' has a wrong offset!");
static_assert(offsetof(Btn_PassMissionWeekTab_C_OnSynchronizeProperties, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'Btn_PassMissionWeekTab_C_OnSynchronizeProperties::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function Btn_PassMissionWeekTab.Btn_PassMissionWeekTab_C.SetLocked
// 0x0001 (0x0001 - 0x0000)
struct Btn_PassMissionWeekTab_C_SetLocked final
{
public:
	bool                                          _locked;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Btn_PassMissionWeekTab_C_SetLocked) == 0x000001, "Wrong alignment on Btn_PassMissionWeekTab_C_SetLocked");
static_assert(sizeof(Btn_PassMissionWeekTab_C_SetLocked) == 0x000001, "Wrong size on Btn_PassMissionWeekTab_C_SetLocked");
static_assert(offsetof(Btn_PassMissionWeekTab_C_SetLocked, _locked) == 0x000000, "Member 'Btn_PassMissionWeekTab_C_SetLocked::_locked' has a wrong offset!");

// Function Btn_PassMissionWeekTab.Btn_PassMissionWeekTab_C.SetProgress
// 0x0008 (0x0008 - 0x0000)
struct Btn_PassMissionWeekTab_C_SetProgress final
{
public:
	int32                                         _current_count;                                    // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         _target_count;                                     // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Btn_PassMissionWeekTab_C_SetProgress) == 0x000004, "Wrong alignment on Btn_PassMissionWeekTab_C_SetProgress");
static_assert(sizeof(Btn_PassMissionWeekTab_C_SetProgress) == 0x000008, "Wrong size on Btn_PassMissionWeekTab_C_SetProgress");
static_assert(offsetof(Btn_PassMissionWeekTab_C_SetProgress, _current_count) == 0x000000, "Member 'Btn_PassMissionWeekTab_C_SetProgress::_current_count' has a wrong offset!");
static_assert(offsetof(Btn_PassMissionWeekTab_C_SetProgress, _target_count) == 0x000004, "Member 'Btn_PassMissionWeekTab_C_SetProgress::_target_count' has a wrong offset!");

// Function Btn_PassMissionWeekTab.Btn_PassMissionWeekTab_C.SetSelected
// 0x0001 (0x0001 - 0x0000)
struct Btn_PassMissionWeekTab_C_SetSelected final
{
public:
	bool                                          _selected;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Btn_PassMissionWeekTab_C_SetSelected) == 0x000001, "Wrong alignment on Btn_PassMissionWeekTab_C_SetSelected");
static_assert(sizeof(Btn_PassMissionWeekTab_C_SetSelected) == 0x000001, "Wrong size on Btn_PassMissionWeekTab_C_SetSelected");
static_assert(offsetof(Btn_PassMissionWeekTab_C_SetSelected, _selected) == 0x000000, "Member 'Btn_PassMissionWeekTab_C_SetSelected::_selected' has a wrong offset!");

// Function Btn_PassMissionWeekTab.Btn_PassMissionWeekTab_C.SetTitle
// 0x0018 (0x0018 - 0x0000)
struct Btn_PassMissionWeekTab_C_SetTitle final
{
public:
	class FText                                   _text;                                             // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(Btn_PassMissionWeekTab_C_SetTitle) == 0x000008, "Wrong alignment on Btn_PassMissionWeekTab_C_SetTitle");
static_assert(sizeof(Btn_PassMissionWeekTab_C_SetTitle) == 0x000018, "Wrong size on Btn_PassMissionWeekTab_C_SetTitle");
static_assert(offsetof(Btn_PassMissionWeekTab_C_SetTitle, _text) == 0x000000, "Member 'Btn_PassMissionWeekTab_C_SetTitle::_text' has a wrong offset!");

}

