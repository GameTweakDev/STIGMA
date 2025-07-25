#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: UI_Tooltip_KillStreak

#include "Basic.hpp"

#include "Stigma_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function UI_Tooltip_KillStreak.UI_Tooltip_KillStreak_C.InitWidget
// 0x0178 (0x0178 - 0x0000)
struct UI_Tooltip_KillStreak_C_InitWidget final
{
public:
	class URecord_KillStreak_ListItemData*        KillStreakItem;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EKillStreak                                   CallFunc_GetKillStreak_ReturnValue;                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A17[0x6];                                     // 0x000A(0x0006)(Fixing Size After Last Property [ Dumper-69 ])
	struct FKillStreakDefine                      CallFunc_GetKillStreakDefine_ReturnValue;          // 0x0010(0x00E0)(ConstParm)
	struct FGradeDef                              CallFunc_GetGradeDefine_ReturnValue;               // 0x00F0(0x0070)(ConstParm)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0160(0x0014)()
};
static_assert(alignof(UI_Tooltip_KillStreak_C_InitWidget) == 0x000008, "Wrong alignment on UI_Tooltip_KillStreak_C_InitWidget");
static_assert(sizeof(UI_Tooltip_KillStreak_C_InitWidget) == 0x000178, "Wrong size on UI_Tooltip_KillStreak_C_InitWidget");
static_assert(offsetof(UI_Tooltip_KillStreak_C_InitWidget, KillStreakItem) == 0x000000, "Member 'UI_Tooltip_KillStreak_C_InitWidget::KillStreakItem' has a wrong offset!");
static_assert(offsetof(UI_Tooltip_KillStreak_C_InitWidget, CallFunc_GetKillStreak_ReturnValue) == 0x000008, "Member 'UI_Tooltip_KillStreak_C_InitWidget::CallFunc_GetKillStreak_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Tooltip_KillStreak_C_InitWidget, CallFunc_IsValid_ReturnValue) == 0x000009, "Member 'UI_Tooltip_KillStreak_C_InitWidget::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Tooltip_KillStreak_C_InitWidget, CallFunc_GetKillStreakDefine_ReturnValue) == 0x000010, "Member 'UI_Tooltip_KillStreak_C_InitWidget::CallFunc_GetKillStreakDefine_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Tooltip_KillStreak_C_InitWidget, CallFunc_GetGradeDefine_ReturnValue) == 0x0000F0, "Member 'UI_Tooltip_KillStreak_C_InitWidget::CallFunc_GetGradeDefine_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Tooltip_KillStreak_C_InitWidget, K2Node_MakeStruct_SlateColor) == 0x000160, "Member 'UI_Tooltip_KillStreak_C_InitWidget::K2Node_MakeStruct_SlateColor' has a wrong offset!");

// Function UI_Tooltip_KillStreak.UI_Tooltip_KillStreak_C.OnShowTooltip
// 0x0020 (0x0020 - 0x0000)
struct UI_Tooltip_KillStreak_C_OnShowTooltip final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A18[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-69 ])
	class FText                                   CallFunc_GetTooltipModeCountText_ReturnValue;      // 0x0008(0x0018)()
};
static_assert(alignof(UI_Tooltip_KillStreak_C_OnShowTooltip) == 0x000008, "Wrong alignment on UI_Tooltip_KillStreak_C_OnShowTooltip");
static_assert(sizeof(UI_Tooltip_KillStreak_C_OnShowTooltip) == 0x000020, "Wrong size on UI_Tooltip_KillStreak_C_OnShowTooltip");
static_assert(offsetof(UI_Tooltip_KillStreak_C_OnShowTooltip, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'UI_Tooltip_KillStreak_C_OnShowTooltip::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Tooltip_KillStreak_C_OnShowTooltip, CallFunc_GetTooltipModeCountText_ReturnValue) == 0x000008, "Member 'UI_Tooltip_KillStreak_C_OnShowTooltip::CallFunc_GetTooltipModeCountText_ReturnValue' has a wrong offset!");

}

