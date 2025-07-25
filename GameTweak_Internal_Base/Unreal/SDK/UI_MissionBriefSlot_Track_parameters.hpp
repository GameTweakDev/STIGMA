#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: UI_MissionBriefSlot_Track

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Stigma_structs.hpp"


namespace SDK::Params
{

// Function UI_MissionBriefSlot_Track.UI_MissionBriefSlot_Track_C.ShowGoToButton
// 0x0001 (0x0001 - 0x0000)
struct UI_MissionBriefSlot_Track_C_ShowGoToButton final
{
public:
	bool                                          _show;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_MissionBriefSlot_Track_C_ShowGoToButton) == 0x000001, "Wrong alignment on UI_MissionBriefSlot_Track_C_ShowGoToButton");
static_assert(sizeof(UI_MissionBriefSlot_Track_C_ShowGoToButton) == 0x000001, "Wrong size on UI_MissionBriefSlot_Track_C_ShowGoToButton");
static_assert(offsetof(UI_MissionBriefSlot_Track_C_ShowGoToButton, _show) == 0x000000, "Member 'UI_MissionBriefSlot_Track_C_ShowGoToButton::_show' has a wrong offset!");

// Function UI_MissionBriefSlot_Track.UI_MissionBriefSlot_Track_C.SetTitle
// 0x0018 (0x0018 - 0x0000)
struct UI_MissionBriefSlot_Track_C_SetTitle final
{
public:
	class FText                                   _text;                                             // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(UI_MissionBriefSlot_Track_C_SetTitle) == 0x000008, "Wrong alignment on UI_MissionBriefSlot_Track_C_SetTitle");
static_assert(sizeof(UI_MissionBriefSlot_Track_C_SetTitle) == 0x000018, "Wrong size on UI_MissionBriefSlot_Track_C_SetTitle");
static_assert(offsetof(UI_MissionBriefSlot_Track_C_SetTitle, _text) == 0x000000, "Member 'UI_MissionBriefSlot_Track_C_SetTitle::_text' has a wrong offset!");

// Function UI_MissionBriefSlot_Track.UI_MissionBriefSlot_Track_C.SetDesc
// 0x0018 (0x0018 - 0x0000)
struct UI_MissionBriefSlot_Track_C_SetDesc final
{
public:
	class FText                                   _text;                                             // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(UI_MissionBriefSlot_Track_C_SetDesc) == 0x000008, "Wrong alignment on UI_MissionBriefSlot_Track_C_SetDesc");
static_assert(sizeof(UI_MissionBriefSlot_Track_C_SetDesc) == 0x000018, "Wrong size on UI_MissionBriefSlot_Track_C_SetDesc");
static_assert(offsetof(UI_MissionBriefSlot_Track_C_SetDesc, _text) == 0x000000, "Member 'UI_MissionBriefSlot_Track_C_SetDesc::_text' has a wrong offset!");

// Function UI_MissionBriefSlot_Track.UI_MissionBriefSlot_Track_C.SetCanReward
// 0x0001 (0x0001 - 0x0000)
struct UI_MissionBriefSlot_Track_C_SetCanReward final
{
public:
	bool                                          _can_reward;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_MissionBriefSlot_Track_C_SetCanReward) == 0x000001, "Wrong alignment on UI_MissionBriefSlot_Track_C_SetCanReward");
static_assert(sizeof(UI_MissionBriefSlot_Track_C_SetCanReward) == 0x000001, "Wrong size on UI_MissionBriefSlot_Track_C_SetCanReward");
static_assert(offsetof(UI_MissionBriefSlot_Track_C_SetCanReward, _can_reward) == 0x000000, "Member 'UI_MissionBriefSlot_Track_C_SetCanReward::_can_reward' has a wrong offset!");

// Function UI_MissionBriefSlot_Track.UI_MissionBriefSlot_Track_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct UI_MissionBriefSlot_Track_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_MissionBriefSlot_Track_C_PreConstruct) == 0x000001, "Wrong alignment on UI_MissionBriefSlot_Track_C_PreConstruct");
static_assert(sizeof(UI_MissionBriefSlot_Track_C_PreConstruct) == 0x000001, "Wrong size on UI_MissionBriefSlot_Track_C_PreConstruct");
static_assert(offsetof(UI_MissionBriefSlot_Track_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'UI_MissionBriefSlot_Track_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function UI_MissionBriefSlot_Track.UI_MissionBriefSlot_Track_C.ExecuteUbergraph_UI_MissionBriefSlot_Track
// 0x0118 (0x0118 - 0x0000)
struct UI_MissionBriefSlot_Track_C_ExecuteUbergraph_UI_MissionBriefSlot_Track final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3BD5[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-69 ])
	class FText                                   CallFunc_MakeLiteralText_ReturnValue;              // 0x0008(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0020(0x0050)(HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3BD6[0x7];                                     // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-69 ])
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0078(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0088(0x0018)()
	struct FItemID_Mission                        CallFunc_GetMissionID_ReturnValue;                 // 0x00A0(0x0010)(HasGetValueTypeHash)
	class FText                                   K2Node_Event__text_1;                              // 0x00B0(0x0018)(ConstParm)
	class FText                                   K2Node_Event__text;                                // 0x00C8(0x0018)(ConstParm)
	bool                                          K2Node_Event__can_reward;                          // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3BD7[0x7];                                     // 0x00E1(0x0007)(Fixing Size After Last Property [ Dumper-69 ])
	class UAnimatableWidget*                      K2Node_ComponentBoundEvent__widget_1;              // 0x00E8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent__select_1;              // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3BD8[0x7];                                     // 0x00F1(0x0007)(Fixing Size After Last Property [ Dumper-69 ])
	class UAnimatableWidget*                      K2Node_ComponentBoundEvent__widget;                // 0x00F8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent__select;                // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event__show;                                // 0x0101(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3BD9[0x6];                                     // 0x0102(0x0006)(Fixing Size After Last Property [ Dumper-69 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0108(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_MissionBriefSlot_Track_C_ExecuteUbergraph_UI_MissionBriefSlot_Track) == 0x000008, "Wrong alignment on UI_MissionBriefSlot_Track_C_ExecuteUbergraph_UI_MissionBriefSlot_Track");
static_assert(sizeof(UI_MissionBriefSlot_Track_C_ExecuteUbergraph_UI_MissionBriefSlot_Track) == 0x000118, "Wrong size on UI_MissionBriefSlot_Track_C_ExecuteUbergraph_UI_MissionBriefSlot_Track");
static_assert(offsetof(UI_MissionBriefSlot_Track_C_ExecuteUbergraph_UI_MissionBriefSlot_Track, EntryPoint) == 0x000000, "Member 'UI_MissionBriefSlot_Track_C_ExecuteUbergraph_UI_MissionBriefSlot_Track::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_MissionBriefSlot_Track_C_ExecuteUbergraph_UI_MissionBriefSlot_Track, CallFunc_MakeLiteralText_ReturnValue) == 0x000008, "Member 'UI_MissionBriefSlot_Track_C_ExecuteUbergraph_UI_MissionBriefSlot_Track::CallFunc_MakeLiteralText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_MissionBriefSlot_Track_C_ExecuteUbergraph_UI_MissionBriefSlot_Track, K2Node_MakeStruct_FormatArgumentData) == 0x000020, "Member 'UI_MissionBriefSlot_Track_C_ExecuteUbergraph_UI_MissionBriefSlot_Track::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(UI_MissionBriefSlot_Track_C_ExecuteUbergraph_UI_MissionBriefSlot_Track, CallFunc_IsValid_ReturnValue) == 0x000070, "Member 'UI_MissionBriefSlot_Track_C_ExecuteUbergraph_UI_MissionBriefSlot_Track::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_MissionBriefSlot_Track_C_ExecuteUbergraph_UI_MissionBriefSlot_Track, K2Node_MakeArray_Array) == 0x000078, "Member 'UI_MissionBriefSlot_Track_C_ExecuteUbergraph_UI_MissionBriefSlot_Track::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(UI_MissionBriefSlot_Track_C_ExecuteUbergraph_UI_MissionBriefSlot_Track, CallFunc_Format_ReturnValue) == 0x000088, "Member 'UI_MissionBriefSlot_Track_C_ExecuteUbergraph_UI_MissionBriefSlot_Track::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_MissionBriefSlot_Track_C_ExecuteUbergraph_UI_MissionBriefSlot_Track, CallFunc_GetMissionID_ReturnValue) == 0x0000A0, "Member 'UI_MissionBriefSlot_Track_C_ExecuteUbergraph_UI_MissionBriefSlot_Track::CallFunc_GetMissionID_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_MissionBriefSlot_Track_C_ExecuteUbergraph_UI_MissionBriefSlot_Track, K2Node_Event__text_1) == 0x0000B0, "Member 'UI_MissionBriefSlot_Track_C_ExecuteUbergraph_UI_MissionBriefSlot_Track::K2Node_Event__text_1' has a wrong offset!");
static_assert(offsetof(UI_MissionBriefSlot_Track_C_ExecuteUbergraph_UI_MissionBriefSlot_Track, K2Node_Event__text) == 0x0000C8, "Member 'UI_MissionBriefSlot_Track_C_ExecuteUbergraph_UI_MissionBriefSlot_Track::K2Node_Event__text' has a wrong offset!");
static_assert(offsetof(UI_MissionBriefSlot_Track_C_ExecuteUbergraph_UI_MissionBriefSlot_Track, K2Node_Event__can_reward) == 0x0000E0, "Member 'UI_MissionBriefSlot_Track_C_ExecuteUbergraph_UI_MissionBriefSlot_Track::K2Node_Event__can_reward' has a wrong offset!");
static_assert(offsetof(UI_MissionBriefSlot_Track_C_ExecuteUbergraph_UI_MissionBriefSlot_Track, K2Node_ComponentBoundEvent__widget_1) == 0x0000E8, "Member 'UI_MissionBriefSlot_Track_C_ExecuteUbergraph_UI_MissionBriefSlot_Track::K2Node_ComponentBoundEvent__widget_1' has a wrong offset!");
static_assert(offsetof(UI_MissionBriefSlot_Track_C_ExecuteUbergraph_UI_MissionBriefSlot_Track, K2Node_ComponentBoundEvent__select_1) == 0x0000F0, "Member 'UI_MissionBriefSlot_Track_C_ExecuteUbergraph_UI_MissionBriefSlot_Track::K2Node_ComponentBoundEvent__select_1' has a wrong offset!");
static_assert(offsetof(UI_MissionBriefSlot_Track_C_ExecuteUbergraph_UI_MissionBriefSlot_Track, K2Node_ComponentBoundEvent__widget) == 0x0000F8, "Member 'UI_MissionBriefSlot_Track_C_ExecuteUbergraph_UI_MissionBriefSlot_Track::K2Node_ComponentBoundEvent__widget' has a wrong offset!");
static_assert(offsetof(UI_MissionBriefSlot_Track_C_ExecuteUbergraph_UI_MissionBriefSlot_Track, K2Node_ComponentBoundEvent__select) == 0x000100, "Member 'UI_MissionBriefSlot_Track_C_ExecuteUbergraph_UI_MissionBriefSlot_Track::K2Node_ComponentBoundEvent__select' has a wrong offset!");
static_assert(offsetof(UI_MissionBriefSlot_Track_C_ExecuteUbergraph_UI_MissionBriefSlot_Track, K2Node_Event__show) == 0x000101, "Member 'UI_MissionBriefSlot_Track_C_ExecuteUbergraph_UI_MissionBriefSlot_Track::K2Node_Event__show' has a wrong offset!");
static_assert(offsetof(UI_MissionBriefSlot_Track_C_ExecuteUbergraph_UI_MissionBriefSlot_Track, CallFunc_PlayAnimation_ReturnValue) == 0x000108, "Member 'UI_MissionBriefSlot_Track_C_ExecuteUbergraph_UI_MissionBriefSlot_Track::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_MissionBriefSlot_Track_C_ExecuteUbergraph_UI_MissionBriefSlot_Track, K2Node_Event_IsDesignTime) == 0x000110, "Member 'UI_MissionBriefSlot_Track_C_ExecuteUbergraph_UI_MissionBriefSlot_Track::K2Node_Event_IsDesignTime' has a wrong offset!");

// Function UI_MissionBriefSlot_Track.UI_MissionBriefSlot_Track_C.BndEvt__UI_MissionBriefSlot_Track_Ctrl_CommonButton_Intensity_K2Node_ComponentBoundEvent_4_DM_OnSelectEnd__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct UI_MissionBriefSlot_Track_C_BndEvt__UI_MissionBriefSlot_Track_Ctrl_CommonButton_Intensity_K2Node_ComponentBoundEvent_4_DM_OnSelectEnd__DelegateSignature final
{
public:
	class UAnimatableWidget*                      _widget;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          _select;                                           // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_MissionBriefSlot_Track_C_BndEvt__UI_MissionBriefSlot_Track_Ctrl_CommonButton_Intensity_K2Node_ComponentBoundEvent_4_DM_OnSelectEnd__DelegateSignature) == 0x000008, "Wrong alignment on UI_MissionBriefSlot_Track_C_BndEvt__UI_MissionBriefSlot_Track_Ctrl_CommonButton_Intensity_K2Node_ComponentBoundEvent_4_DM_OnSelectEnd__DelegateSignature");
static_assert(sizeof(UI_MissionBriefSlot_Track_C_BndEvt__UI_MissionBriefSlot_Track_Ctrl_CommonButton_Intensity_K2Node_ComponentBoundEvent_4_DM_OnSelectEnd__DelegateSignature) == 0x000010, "Wrong size on UI_MissionBriefSlot_Track_C_BndEvt__UI_MissionBriefSlot_Track_Ctrl_CommonButton_Intensity_K2Node_ComponentBoundEvent_4_DM_OnSelectEnd__DelegateSignature");
static_assert(offsetof(UI_MissionBriefSlot_Track_C_BndEvt__UI_MissionBriefSlot_Track_Ctrl_CommonButton_Intensity_K2Node_ComponentBoundEvent_4_DM_OnSelectEnd__DelegateSignature, _widget) == 0x000000, "Member 'UI_MissionBriefSlot_Track_C_BndEvt__UI_MissionBriefSlot_Track_Ctrl_CommonButton_Intensity_K2Node_ComponentBoundEvent_4_DM_OnSelectEnd__DelegateSignature::_widget' has a wrong offset!");
static_assert(offsetof(UI_MissionBriefSlot_Track_C_BndEvt__UI_MissionBriefSlot_Track_Ctrl_CommonButton_Intensity_K2Node_ComponentBoundEvent_4_DM_OnSelectEnd__DelegateSignature, _select) == 0x000008, "Member 'UI_MissionBriefSlot_Track_C_BndEvt__UI_MissionBriefSlot_Track_Ctrl_CommonButton_Intensity_K2Node_ComponentBoundEvent_4_DM_OnSelectEnd__DelegateSignature::_select' has a wrong offset!");

// Function UI_MissionBriefSlot_Track.UI_MissionBriefSlot_Track_C.BndEvt__UI_MissionBriefSlot_Track_Btn_ConfirmReward_K2Node_ComponentBoundEvent_6_DM_OnSelectEnd__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct UI_MissionBriefSlot_Track_C_BndEvt__UI_MissionBriefSlot_Track_Btn_ConfirmReward_K2Node_ComponentBoundEvent_6_DM_OnSelectEnd__DelegateSignature final
{
public:
	class UAnimatableWidget*                      _widget;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          _select;                                           // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_MissionBriefSlot_Track_C_BndEvt__UI_MissionBriefSlot_Track_Btn_ConfirmReward_K2Node_ComponentBoundEvent_6_DM_OnSelectEnd__DelegateSignature) == 0x000008, "Wrong alignment on UI_MissionBriefSlot_Track_C_BndEvt__UI_MissionBriefSlot_Track_Btn_ConfirmReward_K2Node_ComponentBoundEvent_6_DM_OnSelectEnd__DelegateSignature");
static_assert(sizeof(UI_MissionBriefSlot_Track_C_BndEvt__UI_MissionBriefSlot_Track_Btn_ConfirmReward_K2Node_ComponentBoundEvent_6_DM_OnSelectEnd__DelegateSignature) == 0x000010, "Wrong size on UI_MissionBriefSlot_Track_C_BndEvt__UI_MissionBriefSlot_Track_Btn_ConfirmReward_K2Node_ComponentBoundEvent_6_DM_OnSelectEnd__DelegateSignature");
static_assert(offsetof(UI_MissionBriefSlot_Track_C_BndEvt__UI_MissionBriefSlot_Track_Btn_ConfirmReward_K2Node_ComponentBoundEvent_6_DM_OnSelectEnd__DelegateSignature, _widget) == 0x000000, "Member 'UI_MissionBriefSlot_Track_C_BndEvt__UI_MissionBriefSlot_Track_Btn_ConfirmReward_K2Node_ComponentBoundEvent_6_DM_OnSelectEnd__DelegateSignature::_widget' has a wrong offset!");
static_assert(offsetof(UI_MissionBriefSlot_Track_C_BndEvt__UI_MissionBriefSlot_Track_Btn_ConfirmReward_K2Node_ComponentBoundEvent_6_DM_OnSelectEnd__DelegateSignature, _select) == 0x000008, "Member 'UI_MissionBriefSlot_Track_C_BndEvt__UI_MissionBriefSlot_Track_Btn_ConfirmReward_K2Node_ComponentBoundEvent_6_DM_OnSelectEnd__DelegateSignature::_select' has a wrong offset!");

}

