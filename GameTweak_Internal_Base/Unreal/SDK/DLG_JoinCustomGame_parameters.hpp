#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: DLG_JoinCustomGame

#include "Basic.hpp"


namespace SDK::Params
{

// Function DLG_JoinCustomGame.DLG_JoinCustomGame_C.OnJoinCustomGame__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct DLG_JoinCustomGame_C_OnJoinCustomGame__DelegateSignature final
{
public:
	class FString                                 _battle_ids;                                       // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(DLG_JoinCustomGame_C_OnJoinCustomGame__DelegateSignature) == 0x000008, "Wrong alignment on DLG_JoinCustomGame_C_OnJoinCustomGame__DelegateSignature");
static_assert(sizeof(DLG_JoinCustomGame_C_OnJoinCustomGame__DelegateSignature) == 0x000010, "Wrong size on DLG_JoinCustomGame_C_OnJoinCustomGame__DelegateSignature");
static_assert(offsetof(DLG_JoinCustomGame_C_OnJoinCustomGame__DelegateSignature, _battle_ids) == 0x000000, "Member 'DLG_JoinCustomGame_C_OnJoinCustomGame__DelegateSignature::_battle_ids' has a wrong offset!");

// Function DLG_JoinCustomGame.DLG_JoinCustomGame_C.GetFocusWidget
// 0x0008 (0x0008 - 0x0000)
struct DLG_JoinCustomGame_C_GetFocusWidget final
{
public:
	class UWidget*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DLG_JoinCustomGame_C_GetFocusWidget) == 0x000008, "Wrong alignment on DLG_JoinCustomGame_C_GetFocusWidget");
static_assert(sizeof(DLG_JoinCustomGame_C_GetFocusWidget) == 0x000008, "Wrong size on DLG_JoinCustomGame_C_GetFocusWidget");
static_assert(offsetof(DLG_JoinCustomGame_C_GetFocusWidget, ReturnValue) == 0x000000, "Member 'DLG_JoinCustomGame_C_GetFocusWidget::ReturnValue' has a wrong offset!");

// Function DLG_JoinCustomGame.DLG_JoinCustomGame_C.ExecuteUbergraph_DLG_JoinCustomGame
// 0x0050 (0x0050 - 0x0000)
struct DLG_JoinCustomGame_C_ExecuteUbergraph_DLG_JoinCustomGame final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_40DC[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-69 ])
	class UAnimatableWidget*                      K2Node_ComponentBoundEvent__widget;                // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent__select;                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ClickButton_ReturnValue;                  // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ClickButton_ReturnValue_1;                // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_40DD[0x5];                                     // 0x0013(0x0005)(Fixing Size After Last Property [ Dumper-69 ])
	class UAnimatableWidget*                      K2Node_ComponentBoundEvent__widget_1;              // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent__select_1;              // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_40DE[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-69 ])
	class FText                                   CallFunc_GetText_ReturnValue;                      // 0x0028(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(DLG_JoinCustomGame_C_ExecuteUbergraph_DLG_JoinCustomGame) == 0x000008, "Wrong alignment on DLG_JoinCustomGame_C_ExecuteUbergraph_DLG_JoinCustomGame");
static_assert(sizeof(DLG_JoinCustomGame_C_ExecuteUbergraph_DLG_JoinCustomGame) == 0x000050, "Wrong size on DLG_JoinCustomGame_C_ExecuteUbergraph_DLG_JoinCustomGame");
static_assert(offsetof(DLG_JoinCustomGame_C_ExecuteUbergraph_DLG_JoinCustomGame, EntryPoint) == 0x000000, "Member 'DLG_JoinCustomGame_C_ExecuteUbergraph_DLG_JoinCustomGame::EntryPoint' has a wrong offset!");
static_assert(offsetof(DLG_JoinCustomGame_C_ExecuteUbergraph_DLG_JoinCustomGame, K2Node_ComponentBoundEvent__widget) == 0x000008, "Member 'DLG_JoinCustomGame_C_ExecuteUbergraph_DLG_JoinCustomGame::K2Node_ComponentBoundEvent__widget' has a wrong offset!");
static_assert(offsetof(DLG_JoinCustomGame_C_ExecuteUbergraph_DLG_JoinCustomGame, K2Node_ComponentBoundEvent__select) == 0x000010, "Member 'DLG_JoinCustomGame_C_ExecuteUbergraph_DLG_JoinCustomGame::K2Node_ComponentBoundEvent__select' has a wrong offset!");
static_assert(offsetof(DLG_JoinCustomGame_C_ExecuteUbergraph_DLG_JoinCustomGame, CallFunc_ClickButton_ReturnValue) == 0x000011, "Member 'DLG_JoinCustomGame_C_ExecuteUbergraph_DLG_JoinCustomGame::CallFunc_ClickButton_ReturnValue' has a wrong offset!");
static_assert(offsetof(DLG_JoinCustomGame_C_ExecuteUbergraph_DLG_JoinCustomGame, CallFunc_ClickButton_ReturnValue_1) == 0x000012, "Member 'DLG_JoinCustomGame_C_ExecuteUbergraph_DLG_JoinCustomGame::CallFunc_ClickButton_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DLG_JoinCustomGame_C_ExecuteUbergraph_DLG_JoinCustomGame, K2Node_ComponentBoundEvent__widget_1) == 0x000018, "Member 'DLG_JoinCustomGame_C_ExecuteUbergraph_DLG_JoinCustomGame::K2Node_ComponentBoundEvent__widget_1' has a wrong offset!");
static_assert(offsetof(DLG_JoinCustomGame_C_ExecuteUbergraph_DLG_JoinCustomGame, K2Node_ComponentBoundEvent__select_1) == 0x000020, "Member 'DLG_JoinCustomGame_C_ExecuteUbergraph_DLG_JoinCustomGame::K2Node_ComponentBoundEvent__select_1' has a wrong offset!");
static_assert(offsetof(DLG_JoinCustomGame_C_ExecuteUbergraph_DLG_JoinCustomGame, CallFunc_GetText_ReturnValue) == 0x000028, "Member 'DLG_JoinCustomGame_C_ExecuteUbergraph_DLG_JoinCustomGame::CallFunc_GetText_ReturnValue' has a wrong offset!");
static_assert(offsetof(DLG_JoinCustomGame_C_ExecuteUbergraph_DLG_JoinCustomGame, CallFunc_Conv_TextToString_ReturnValue) == 0x000040, "Member 'DLG_JoinCustomGame_C_ExecuteUbergraph_DLG_JoinCustomGame::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");

// Function DLG_JoinCustomGame.DLG_JoinCustomGame_C.BndEvt__DLG_JoinCustomGame_BTN_OK_K2Node_ComponentBoundEvent_3_DM_OnSelectEnd__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct DLG_JoinCustomGame_C_BndEvt__DLG_JoinCustomGame_BTN_OK_K2Node_ComponentBoundEvent_3_DM_OnSelectEnd__DelegateSignature final
{
public:
	class UAnimatableWidget*                      _widget;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          _select;                                           // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DLG_JoinCustomGame_C_BndEvt__DLG_JoinCustomGame_BTN_OK_K2Node_ComponentBoundEvent_3_DM_OnSelectEnd__DelegateSignature) == 0x000008, "Wrong alignment on DLG_JoinCustomGame_C_BndEvt__DLG_JoinCustomGame_BTN_OK_K2Node_ComponentBoundEvent_3_DM_OnSelectEnd__DelegateSignature");
static_assert(sizeof(DLG_JoinCustomGame_C_BndEvt__DLG_JoinCustomGame_BTN_OK_K2Node_ComponentBoundEvent_3_DM_OnSelectEnd__DelegateSignature) == 0x000010, "Wrong size on DLG_JoinCustomGame_C_BndEvt__DLG_JoinCustomGame_BTN_OK_K2Node_ComponentBoundEvent_3_DM_OnSelectEnd__DelegateSignature");
static_assert(offsetof(DLG_JoinCustomGame_C_BndEvt__DLG_JoinCustomGame_BTN_OK_K2Node_ComponentBoundEvent_3_DM_OnSelectEnd__DelegateSignature, _widget) == 0x000000, "Member 'DLG_JoinCustomGame_C_BndEvt__DLG_JoinCustomGame_BTN_OK_K2Node_ComponentBoundEvent_3_DM_OnSelectEnd__DelegateSignature::_widget' has a wrong offset!");
static_assert(offsetof(DLG_JoinCustomGame_C_BndEvt__DLG_JoinCustomGame_BTN_OK_K2Node_ComponentBoundEvent_3_DM_OnSelectEnd__DelegateSignature, _select) == 0x000008, "Member 'DLG_JoinCustomGame_C_BndEvt__DLG_JoinCustomGame_BTN_OK_K2Node_ComponentBoundEvent_3_DM_OnSelectEnd__DelegateSignature::_select' has a wrong offset!");

// Function DLG_JoinCustomGame.DLG_JoinCustomGame_C.BndEvt__DLG_JoinCustomGame_BTN_Cancel_K2Node_ComponentBoundEvent_0_DM_OnSelectEnd__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct DLG_JoinCustomGame_C_BndEvt__DLG_JoinCustomGame_BTN_Cancel_K2Node_ComponentBoundEvent_0_DM_OnSelectEnd__DelegateSignature final
{
public:
	class UAnimatableWidget*                      _widget;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          _select;                                           // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DLG_JoinCustomGame_C_BndEvt__DLG_JoinCustomGame_BTN_Cancel_K2Node_ComponentBoundEvent_0_DM_OnSelectEnd__DelegateSignature) == 0x000008, "Wrong alignment on DLG_JoinCustomGame_C_BndEvt__DLG_JoinCustomGame_BTN_Cancel_K2Node_ComponentBoundEvent_0_DM_OnSelectEnd__DelegateSignature");
static_assert(sizeof(DLG_JoinCustomGame_C_BndEvt__DLG_JoinCustomGame_BTN_Cancel_K2Node_ComponentBoundEvent_0_DM_OnSelectEnd__DelegateSignature) == 0x000010, "Wrong size on DLG_JoinCustomGame_C_BndEvt__DLG_JoinCustomGame_BTN_Cancel_K2Node_ComponentBoundEvent_0_DM_OnSelectEnd__DelegateSignature");
static_assert(offsetof(DLG_JoinCustomGame_C_BndEvt__DLG_JoinCustomGame_BTN_Cancel_K2Node_ComponentBoundEvent_0_DM_OnSelectEnd__DelegateSignature, _widget) == 0x000000, "Member 'DLG_JoinCustomGame_C_BndEvt__DLG_JoinCustomGame_BTN_Cancel_K2Node_ComponentBoundEvent_0_DM_OnSelectEnd__DelegateSignature::_widget' has a wrong offset!");
static_assert(offsetof(DLG_JoinCustomGame_C_BndEvt__DLG_JoinCustomGame_BTN_Cancel_K2Node_ComponentBoundEvent_0_DM_OnSelectEnd__DelegateSignature, _select) == 0x000008, "Member 'DLG_JoinCustomGame_C_BndEvt__DLG_JoinCustomGame_BTN_Cancel_K2Node_ComponentBoundEvent_0_DM_OnSelectEnd__DelegateSignature::_select' has a wrong offset!");

}

