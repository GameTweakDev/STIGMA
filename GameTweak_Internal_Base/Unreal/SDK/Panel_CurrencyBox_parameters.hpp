#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: Panel_CurrencyBox

#include "Basic.hpp"

#include "Stigma_structs.hpp"


namespace SDK::Params
{

// Function Panel_CurrencyBox.Panel_CurrencyBox_C.Get_Btn_Wallet_ToolTipWidget
// 0x0060 (0x0060 - 0x0000)
struct Panel_CurrencyBox_C_Get_Btn_Wallet_ToolTipWidget final
{
public:
	class UWidget*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FTooltipKeyInfo                        K2Node_MakeStruct_TooltipKeyInfo;                  // 0x0008(0x0030)()
	class UUI_Tooltip*                            CallFunc_CreateTooltipWidget_ReturnValue;          // 0x0038(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UUI_Tooltip_Currency_C*                 K2Node_DynamicCast_AsUI_Tooltip_Currency;          // 0x0040(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3CE3[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-69 ])
	class UUI_Tooltip_ItemID_Default_C*           K2Node_DynamicCast_AsUI_Tooltip_Item_ID_Default;   // 0x0050(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Panel_CurrencyBox_C_Get_Btn_Wallet_ToolTipWidget) == 0x000008, "Wrong alignment on Panel_CurrencyBox_C_Get_Btn_Wallet_ToolTipWidget");
static_assert(sizeof(Panel_CurrencyBox_C_Get_Btn_Wallet_ToolTipWidget) == 0x000060, "Wrong size on Panel_CurrencyBox_C_Get_Btn_Wallet_ToolTipWidget");
static_assert(offsetof(Panel_CurrencyBox_C_Get_Btn_Wallet_ToolTipWidget, ReturnValue) == 0x000000, "Member 'Panel_CurrencyBox_C_Get_Btn_Wallet_ToolTipWidget::ReturnValue' has a wrong offset!");
static_assert(offsetof(Panel_CurrencyBox_C_Get_Btn_Wallet_ToolTipWidget, K2Node_MakeStruct_TooltipKeyInfo) == 0x000008, "Member 'Panel_CurrencyBox_C_Get_Btn_Wallet_ToolTipWidget::K2Node_MakeStruct_TooltipKeyInfo' has a wrong offset!");
static_assert(offsetof(Panel_CurrencyBox_C_Get_Btn_Wallet_ToolTipWidget, CallFunc_CreateTooltipWidget_ReturnValue) == 0x000038, "Member 'Panel_CurrencyBox_C_Get_Btn_Wallet_ToolTipWidget::CallFunc_CreateTooltipWidget_ReturnValue' has a wrong offset!");
static_assert(offsetof(Panel_CurrencyBox_C_Get_Btn_Wallet_ToolTipWidget, K2Node_DynamicCast_AsUI_Tooltip_Currency) == 0x000040, "Member 'Panel_CurrencyBox_C_Get_Btn_Wallet_ToolTipWidget::K2Node_DynamicCast_AsUI_Tooltip_Currency' has a wrong offset!");
static_assert(offsetof(Panel_CurrencyBox_C_Get_Btn_Wallet_ToolTipWidget, K2Node_DynamicCast_bSuccess) == 0x000048, "Member 'Panel_CurrencyBox_C_Get_Btn_Wallet_ToolTipWidget::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Panel_CurrencyBox_C_Get_Btn_Wallet_ToolTipWidget, K2Node_DynamicCast_AsUI_Tooltip_Item_ID_Default) == 0x000050, "Member 'Panel_CurrencyBox_C_Get_Btn_Wallet_ToolTipWidget::K2Node_DynamicCast_AsUI_Tooltip_Item_ID_Default' has a wrong offset!");
static_assert(offsetof(Panel_CurrencyBox_C_Get_Btn_Wallet_ToolTipWidget, K2Node_DynamicCast_bSuccess_1) == 0x000058, "Member 'Panel_CurrencyBox_C_Get_Btn_Wallet_ToolTipWidget::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

}

