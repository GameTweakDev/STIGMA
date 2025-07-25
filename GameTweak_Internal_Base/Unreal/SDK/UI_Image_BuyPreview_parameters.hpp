#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: UI_Image_BuyPreview

#include "Basic.hpp"

#include "Stigma_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function UI_Image_BuyPreview.UI_Image_BuyPreview_C.ExecuteUbergraph_UI_Image_BuyPreview
// 0x0038 (0x0038 - 0x0000)
struct UI_Image_BuyPreview_C_ExecuteUbergraph_UI_Image_BuyPreview final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3CD9[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-69 ])
	class UPOPUP_Detail_RandomBox_C*              CallFunc_Create_ReturnValue;                       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPopupBase*                             CallFunc_DoModal_ReturnValue;                      // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	EItemCategory                                 CallFunc_GetCategory_ReturnValue;                  // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3CDA[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-69 ])
	struct FItemID_RandomBox                      CallFunc_ToRandomBoxID_ReturnValue;                // 0x0020(0x0010)(HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Image_BuyPreview_C_ExecuteUbergraph_UI_Image_BuyPreview) == 0x000008, "Wrong alignment on UI_Image_BuyPreview_C_ExecuteUbergraph_UI_Image_BuyPreview");
static_assert(sizeof(UI_Image_BuyPreview_C_ExecuteUbergraph_UI_Image_BuyPreview) == 0x000038, "Wrong size on UI_Image_BuyPreview_C_ExecuteUbergraph_UI_Image_BuyPreview");
static_assert(offsetof(UI_Image_BuyPreview_C_ExecuteUbergraph_UI_Image_BuyPreview, EntryPoint) == 0x000000, "Member 'UI_Image_BuyPreview_C_ExecuteUbergraph_UI_Image_BuyPreview::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_Image_BuyPreview_C_ExecuteUbergraph_UI_Image_BuyPreview, CallFunc_Create_ReturnValue) == 0x000008, "Member 'UI_Image_BuyPreview_C_ExecuteUbergraph_UI_Image_BuyPreview::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Image_BuyPreview_C_ExecuteUbergraph_UI_Image_BuyPreview, CallFunc_DoModal_ReturnValue) == 0x000010, "Member 'UI_Image_BuyPreview_C_ExecuteUbergraph_UI_Image_BuyPreview::CallFunc_DoModal_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Image_BuyPreview_C_ExecuteUbergraph_UI_Image_BuyPreview, CallFunc_GetCategory_ReturnValue) == 0x000018, "Member 'UI_Image_BuyPreview_C_ExecuteUbergraph_UI_Image_BuyPreview::CallFunc_GetCategory_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Image_BuyPreview_C_ExecuteUbergraph_UI_Image_BuyPreview, CallFunc_ToRandomBoxID_ReturnValue) == 0x000020, "Member 'UI_Image_BuyPreview_C_ExecuteUbergraph_UI_Image_BuyPreview::CallFunc_ToRandomBoxID_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Image_BuyPreview_C_ExecuteUbergraph_UI_Image_BuyPreview, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000030, "Member 'UI_Image_BuyPreview_C_ExecuteUbergraph_UI_Image_BuyPreview::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function UI_Image_BuyPreview.UI_Image_BuyPreview_C.Get_Btn_Click_Area_ToolTipWidget
// 0x0028 (0x0028 - 0x0000)
struct UI_Image_BuyPreview_C_Get_Btn_Click_Area_ToolTipWidget final
{
public:
	class UWidget*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	EItemCategory                                 CallFunc_GetCategory_ReturnValue;                  // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidItemID_ReturnValue;                // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETooltipType                                  CallFunc_GetTooltipTypeFromItemCategory_ReturnValue; // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3CDB[0x5];                                     // 0x000B(0x0005)(Fixing Size After Last Property [ Dumper-69 ])
	class UUI_Tooltip*                            CallFunc_CreateTooltipWidget_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UUI_Tooltip_ItemID_Default_C*           K2Node_DynamicCast_AsUI_Tooltip_Item_ID_Default;   // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Image_BuyPreview_C_Get_Btn_Click_Area_ToolTipWidget) == 0x000008, "Wrong alignment on UI_Image_BuyPreview_C_Get_Btn_Click_Area_ToolTipWidget");
static_assert(sizeof(UI_Image_BuyPreview_C_Get_Btn_Click_Area_ToolTipWidget) == 0x000028, "Wrong size on UI_Image_BuyPreview_C_Get_Btn_Click_Area_ToolTipWidget");
static_assert(offsetof(UI_Image_BuyPreview_C_Get_Btn_Click_Area_ToolTipWidget, ReturnValue) == 0x000000, "Member 'UI_Image_BuyPreview_C_Get_Btn_Click_Area_ToolTipWidget::ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Image_BuyPreview_C_Get_Btn_Click_Area_ToolTipWidget, CallFunc_GetCategory_ReturnValue) == 0x000008, "Member 'UI_Image_BuyPreview_C_Get_Btn_Click_Area_ToolTipWidget::CallFunc_GetCategory_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Image_BuyPreview_C_Get_Btn_Click_Area_ToolTipWidget, CallFunc_IsValidItemID_ReturnValue) == 0x000009, "Member 'UI_Image_BuyPreview_C_Get_Btn_Click_Area_ToolTipWidget::CallFunc_IsValidItemID_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Image_BuyPreview_C_Get_Btn_Click_Area_ToolTipWidget, CallFunc_GetTooltipTypeFromItemCategory_ReturnValue) == 0x00000A, "Member 'UI_Image_BuyPreview_C_Get_Btn_Click_Area_ToolTipWidget::CallFunc_GetTooltipTypeFromItemCategory_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Image_BuyPreview_C_Get_Btn_Click_Area_ToolTipWidget, CallFunc_CreateTooltipWidget_ReturnValue) == 0x000010, "Member 'UI_Image_BuyPreview_C_Get_Btn_Click_Area_ToolTipWidget::CallFunc_CreateTooltipWidget_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Image_BuyPreview_C_Get_Btn_Click_Area_ToolTipWidget, K2Node_DynamicCast_AsUI_Tooltip_Item_ID_Default) == 0x000018, "Member 'UI_Image_BuyPreview_C_Get_Btn_Click_Area_ToolTipWidget::K2Node_DynamicCast_AsUI_Tooltip_Item_ID_Default' has a wrong offset!");
static_assert(offsetof(UI_Image_BuyPreview_C_Get_Btn_Click_Area_ToolTipWidget, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'UI_Image_BuyPreview_C_Get_Btn_Click_Area_ToolTipWidget::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function UI_Image_BuyPreview.UI_Image_BuyPreview_C.InitWidget
// 0x0200 (0x0200 - 0x0000)
struct UI_Image_BuyPreview_C_InitWidget final
{
public:
	class UGoodsObject*                           GoodsObj;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FConfig_Goods                          GoodsDefine;                                       // 0x0008(0x01F0)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          CallFunc_InitWidget_result;                        // 0x01F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;           // 0x01F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x01FA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3CDC[0x1];                                     // 0x01FB(0x0001)(Fixing Size After Last Property [ Dumper-69 ])
	int32                                         CallFunc_GetBuyCount_ReturnValue;                  // 0x01FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Image_BuyPreview_C_InitWidget) == 0x000008, "Wrong alignment on UI_Image_BuyPreview_C_InitWidget");
static_assert(sizeof(UI_Image_BuyPreview_C_InitWidget) == 0x000200, "Wrong size on UI_Image_BuyPreview_C_InitWidget");
static_assert(offsetof(UI_Image_BuyPreview_C_InitWidget, GoodsObj) == 0x000000, "Member 'UI_Image_BuyPreview_C_InitWidget::GoodsObj' has a wrong offset!");
static_assert(offsetof(UI_Image_BuyPreview_C_InitWidget, GoodsDefine) == 0x000008, "Member 'UI_Image_BuyPreview_C_InitWidget::GoodsDefine' has a wrong offset!");
static_assert(offsetof(UI_Image_BuyPreview_C_InitWidget, CallFunc_InitWidget_result) == 0x0001F8, "Member 'UI_Image_BuyPreview_C_InitWidget::CallFunc_InitWidget_result' has a wrong offset!");
static_assert(offsetof(UI_Image_BuyPreview_C_InitWidget, CallFunc_Array_IsValidIndex_ReturnValue) == 0x0001F9, "Member 'UI_Image_BuyPreview_C_InitWidget::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Image_BuyPreview_C_InitWidget, CallFunc_IsValid_ReturnValue) == 0x0001FA, "Member 'UI_Image_BuyPreview_C_InitWidget::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Image_BuyPreview_C_InitWidget, CallFunc_GetBuyCount_ReturnValue) == 0x0001FC, "Member 'UI_Image_BuyPreview_C_InitWidget::CallFunc_GetBuyCount_ReturnValue' has a wrong offset!");

// Function UI_Image_BuyPreview.UI_Image_BuyPreview_C.SetExpireTime
// 0x0050 (0x0050 - 0x0000)
struct UI_Image_BuyPreview_C_SetExpireTime final
{
public:
	struct FReward                                BasicItems;                                        // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemCategory                                 CallFunc_GetCategory_ReturnValue;                  // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0016(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0017(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_1;          // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_2;          // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3CDD[0x5];                                     // 0x001B(0x0005)(Fixing Size After Last Property [ Dumper-69 ])
	struct FTimespan                              CallFunc_MakeTimespan_ReturnValue;                 // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3CDE[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-69 ])
	class FText                                   CallFunc_GetRemainTimeText_ReturnValue;            // 0x0030(0x0018)()
	bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Image_BuyPreview_C_SetExpireTime) == 0x000008, "Wrong alignment on UI_Image_BuyPreview_C_SetExpireTime");
static_assert(sizeof(UI_Image_BuyPreview_C_SetExpireTime) == 0x000050, "Wrong size on UI_Image_BuyPreview_C_SetExpireTime");
static_assert(offsetof(UI_Image_BuyPreview_C_SetExpireTime, BasicItems) == 0x000000, "Member 'UI_Image_BuyPreview_C_SetExpireTime::BasicItems' has a wrong offset!");
static_assert(offsetof(UI_Image_BuyPreview_C_SetExpireTime, CallFunc_Array_Length_ReturnValue) == 0x000010, "Member 'UI_Image_BuyPreview_C_SetExpireTime::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Image_BuyPreview_C_SetExpireTime, CallFunc_Greater_IntInt_ReturnValue) == 0x000014, "Member 'UI_Image_BuyPreview_C_SetExpireTime::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Image_BuyPreview_C_SetExpireTime, CallFunc_GetCategory_ReturnValue) == 0x000015, "Member 'UI_Image_BuyPreview_C_SetExpireTime::CallFunc_GetCategory_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Image_BuyPreview_C_SetExpireTime, CallFunc_Less_IntInt_ReturnValue) == 0x000016, "Member 'UI_Image_BuyPreview_C_SetExpireTime::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Image_BuyPreview_C_SetExpireTime, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000017, "Member 'UI_Image_BuyPreview_C_SetExpireTime::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Image_BuyPreview_C_SetExpireTime, CallFunc_NotEqual_ByteByte_ReturnValue_1) == 0x000018, "Member 'UI_Image_BuyPreview_C_SetExpireTime::CallFunc_NotEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_Image_BuyPreview_C_SetExpireTime, CallFunc_NotEqual_ByteByte_ReturnValue_2) == 0x000019, "Member 'UI_Image_BuyPreview_C_SetExpireTime::CallFunc_NotEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UI_Image_BuyPreview_C_SetExpireTime, CallFunc_BooleanAND_ReturnValue) == 0x00001A, "Member 'UI_Image_BuyPreview_C_SetExpireTime::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Image_BuyPreview_C_SetExpireTime, CallFunc_MakeTimespan_ReturnValue) == 0x000020, "Member 'UI_Image_BuyPreview_C_SetExpireTime::CallFunc_MakeTimespan_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Image_BuyPreview_C_SetExpireTime, CallFunc_BooleanAND_ReturnValue_1) == 0x000028, "Member 'UI_Image_BuyPreview_C_SetExpireTime::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_Image_BuyPreview_C_SetExpireTime, CallFunc_GetRemainTimeText_ReturnValue) == 0x000030, "Member 'UI_Image_BuyPreview_C_SetExpireTime::CallFunc_GetRemainTimeText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Image_BuyPreview_C_SetExpireTime, CallFunc_BooleanAND_ReturnValue_2) == 0x000048, "Member 'UI_Image_BuyPreview_C_SetExpireTime::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");

// Function UI_Image_BuyPreview.UI_Image_BuyPreview_C.SetGoodsGrade
// 0x0038 (0x0038 - 0x0000)
struct UI_Image_BuyPreview_C_SetGoodsGrade final
{
public:
	EItemGrade                                    Grade;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3CDF[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-69 ])
	TSoftObjectPtr<class UTexture2D>              DecoImage;                                         // 0x0008(0x0028)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Image_BuyPreview_C_SetGoodsGrade) == 0x000008, "Wrong alignment on UI_Image_BuyPreview_C_SetGoodsGrade");
static_assert(sizeof(UI_Image_BuyPreview_C_SetGoodsGrade) == 0x000038, "Wrong size on UI_Image_BuyPreview_C_SetGoodsGrade");
static_assert(offsetof(UI_Image_BuyPreview_C_SetGoodsGrade, Grade) == 0x000000, "Member 'UI_Image_BuyPreview_C_SetGoodsGrade::Grade' has a wrong offset!");
static_assert(offsetof(UI_Image_BuyPreview_C_SetGoodsGrade, DecoImage) == 0x000008, "Member 'UI_Image_BuyPreview_C_SetGoodsGrade::DecoImage' has a wrong offset!");
static_assert(offsetof(UI_Image_BuyPreview_C_SetGoodsGrade, K2Node_SwitchEnum_CmpSuccess) == 0x000030, "Member 'UI_Image_BuyPreview_C_SetGoodsGrade::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function UI_Image_BuyPreview.UI_Image_BuyPreview_C.SetLimitText
// 0x00A8 (0x00A8 - 0x0000)
struct UI_Image_BuyPreview_C_SetLimitText final
{
public:
	struct FBuyLimit                              BuyLimit;                                          // 0x0000(0x0020)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	int32                                         BuyCount;                                          // 0x0020(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3CE0[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-69 ])
	class FText                                   LimitText;                                         // 0x0028(0x0018)(Edit, BlueprintVisible)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0040(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x0058(0x0018)()
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3CE1[0x7];                                     // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-69 ])
	class FText                                   CallFunc_AppendText_ReturnValue;                   // 0x0078(0x0018)()
	class FText                                   CallFunc_AppendText_ReturnValue_1;                 // 0x0090(0x0018)()
};
static_assert(alignof(UI_Image_BuyPreview_C_SetLimitText) == 0x000008, "Wrong alignment on UI_Image_BuyPreview_C_SetLimitText");
static_assert(sizeof(UI_Image_BuyPreview_C_SetLimitText) == 0x0000A8, "Wrong size on UI_Image_BuyPreview_C_SetLimitText");
static_assert(offsetof(UI_Image_BuyPreview_C_SetLimitText, BuyLimit) == 0x000000, "Member 'UI_Image_BuyPreview_C_SetLimitText::BuyLimit' has a wrong offset!");
static_assert(offsetof(UI_Image_BuyPreview_C_SetLimitText, BuyCount) == 0x000020, "Member 'UI_Image_BuyPreview_C_SetLimitText::BuyCount' has a wrong offset!");
static_assert(offsetof(UI_Image_BuyPreview_C_SetLimitText, LimitText) == 0x000028, "Member 'UI_Image_BuyPreview_C_SetLimitText::LimitText' has a wrong offset!");
static_assert(offsetof(UI_Image_BuyPreview_C_SetLimitText, CallFunc_Conv_IntToText_ReturnValue) == 0x000040, "Member 'UI_Image_BuyPreview_C_SetLimitText::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Image_BuyPreview_C_SetLimitText, CallFunc_Conv_IntToText_ReturnValue_1) == 0x000058, "Member 'UI_Image_BuyPreview_C_SetLimitText::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_Image_BuyPreview_C_SetLimitText, K2Node_SwitchEnum_CmpSuccess) == 0x000070, "Member 'UI_Image_BuyPreview_C_SetLimitText::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(UI_Image_BuyPreview_C_SetLimitText, CallFunc_AppendText_ReturnValue) == 0x000078, "Member 'UI_Image_BuyPreview_C_SetLimitText::CallFunc_AppendText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Image_BuyPreview_C_SetLimitText, CallFunc_AppendText_ReturnValue_1) == 0x000090, "Member 'UI_Image_BuyPreview_C_SetLimitText::CallFunc_AppendText_ReturnValue_1' has a wrong offset!");

}

