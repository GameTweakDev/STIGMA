#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: UI_GameResult_Record

#include "Basic.hpp"

#include "Stigma_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function UI_GameResult_Record.UI_GameResult_Record_C.ExecuteUbergraph_UI_GameResult_Record
// 0x0004 (0x0004 - 0x0000)
struct UI_GameResult_Record_C_ExecuteUbergraph_UI_GameResult_Record final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_GameResult_Record_C_ExecuteUbergraph_UI_GameResult_Record) == 0x000004, "Wrong alignment on UI_GameResult_Record_C_ExecuteUbergraph_UI_GameResult_Record");
static_assert(sizeof(UI_GameResult_Record_C_ExecuteUbergraph_UI_GameResult_Record) == 0x000004, "Wrong size on UI_GameResult_Record_C_ExecuteUbergraph_UI_GameResult_Record");
static_assert(offsetof(UI_GameResult_Record_C_ExecuteUbergraph_UI_GameResult_Record, EntryPoint) == 0x000000, "Member 'UI_GameResult_Record_C_ExecuteUbergraph_UI_GameResult_Record::EntryPoint' has a wrong offset!");

// Function UI_GameResult_Record.UI_GameResult_Record_C.Get_ENTRY_LearningPoint_ToolTipWidget
// 0x0190 (0x0190 - 0x0000)
struct UI_GameResult_Record_C_Get_ENTRY_LearningPoint_ToolTipWidget final
{
public:
	class UWidget*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UUI_Tooltip*                            CallFunc_CreateTooltipWidget_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FCurrencyDef                           CallFunc_GetCurrencyDefine__out_def;               // 0x0010(0x0168)()
	bool                                          CallFunc_GetCurrencyDefine_ReturnValue;            // 0x0178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A2F[0x7];                                     // 0x0179(0x0007)(Fixing Size After Last Property [ Dumper-69 ])
	class UUI_Tooltip_ItemID_Default_C*           K2Node_DynamicCast_AsUI_Tooltip_Item_ID_Default;   // 0x0180(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_GameResult_Record_C_Get_ENTRY_LearningPoint_ToolTipWidget) == 0x000008, "Wrong alignment on UI_GameResult_Record_C_Get_ENTRY_LearningPoint_ToolTipWidget");
static_assert(sizeof(UI_GameResult_Record_C_Get_ENTRY_LearningPoint_ToolTipWidget) == 0x000190, "Wrong size on UI_GameResult_Record_C_Get_ENTRY_LearningPoint_ToolTipWidget");
static_assert(offsetof(UI_GameResult_Record_C_Get_ENTRY_LearningPoint_ToolTipWidget, ReturnValue) == 0x000000, "Member 'UI_GameResult_Record_C_Get_ENTRY_LearningPoint_ToolTipWidget::ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GameResult_Record_C_Get_ENTRY_LearningPoint_ToolTipWidget, CallFunc_CreateTooltipWidget_ReturnValue) == 0x000008, "Member 'UI_GameResult_Record_C_Get_ENTRY_LearningPoint_ToolTipWidget::CallFunc_CreateTooltipWidget_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GameResult_Record_C_Get_ENTRY_LearningPoint_ToolTipWidget, CallFunc_GetCurrencyDefine__out_def) == 0x000010, "Member 'UI_GameResult_Record_C_Get_ENTRY_LearningPoint_ToolTipWidget::CallFunc_GetCurrencyDefine__out_def' has a wrong offset!");
static_assert(offsetof(UI_GameResult_Record_C_Get_ENTRY_LearningPoint_ToolTipWidget, CallFunc_GetCurrencyDefine_ReturnValue) == 0x000178, "Member 'UI_GameResult_Record_C_Get_ENTRY_LearningPoint_ToolTipWidget::CallFunc_GetCurrencyDefine_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GameResult_Record_C_Get_ENTRY_LearningPoint_ToolTipWidget, K2Node_DynamicCast_AsUI_Tooltip_Item_ID_Default) == 0x000180, "Member 'UI_GameResult_Record_C_Get_ENTRY_LearningPoint_ToolTipWidget::K2Node_DynamicCast_AsUI_Tooltip_Item_ID_Default' has a wrong offset!");
static_assert(offsetof(UI_GameResult_Record_C_Get_ENTRY_LearningPoint_ToolTipWidget, K2Node_DynamicCast_bSuccess) == 0x000188, "Member 'UI_GameResult_Record_C_Get_ENTRY_LearningPoint_ToolTipWidget::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function UI_GameResult_Record.UI_GameResult_Record_C.Init
// 0x0160 (0x0160 - 0x0000)
struct UI_GameResult_Record_C_Init final
{
public:
	struct FBattleDecisionDetail                  _result;                                           // 0x0000(0x00D0)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FUserBattleResult                      _my_result;                                        // 0x00D0(0x0090)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(UI_GameResult_Record_C_Init) == 0x000008, "Wrong alignment on UI_GameResult_Record_C_Init");
static_assert(sizeof(UI_GameResult_Record_C_Init) == 0x000160, "Wrong size on UI_GameResult_Record_C_Init");
static_assert(offsetof(UI_GameResult_Record_C_Init, _result) == 0x000000, "Member 'UI_GameResult_Record_C_Init::_result' has a wrong offset!");
static_assert(offsetof(UI_GameResult_Record_C_Init, _my_result) == 0x0000D0, "Member 'UI_GameResult_Record_C_Init::_my_result' has a wrong offset!");

// Function UI_GameResult_Record.UI_GameResult_Record_C.OnUpdateUser
// 0x0001 (0x0001 - 0x0000)
struct UI_GameResult_Record_C_OnUpdateUser final
{
public:
	EUserEvent                                    _event;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_GameResult_Record_C_OnUpdateUser) == 0x000001, "Wrong alignment on UI_GameResult_Record_C_OnUpdateUser");
static_assert(sizeof(UI_GameResult_Record_C_OnUpdateUser) == 0x000001, "Wrong size on UI_GameResult_Record_C_OnUpdateUser");
static_assert(offsetof(UI_GameResult_Record_C_OnUpdateUser, _event) == 0x000000, "Member 'UI_GameResult_Record_C_OnUpdateUser::_event' has a wrong offset!");

// Function UI_GameResult_Record.UI_GameResult_Record_C.SubscribeUpdateUser
// 0x00B0 (0x00B0 - 0x0000)
struct UI_GameResult_Record_C_SubscribeUpdateUser final
{
public:
	TSet<EUserEvent>                              Event;                                             // 0x0000(0x0050)(Edit, BlueprintVisible)
	TSet<EUserEvent>                              K2Node_MakeVariable_MakeVariableOutput;            // 0x0050(0x0050)()
	TDelegate<void(EUserEvent _event)>            K2Node_CreateDelegate_OutputDelegate;              // 0x00A0(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_GameResult_Record_C_SubscribeUpdateUser) == 0x000008, "Wrong alignment on UI_GameResult_Record_C_SubscribeUpdateUser");
static_assert(sizeof(UI_GameResult_Record_C_SubscribeUpdateUser) == 0x0000B0, "Wrong size on UI_GameResult_Record_C_SubscribeUpdateUser");
static_assert(offsetof(UI_GameResult_Record_C_SubscribeUpdateUser, Event) == 0x000000, "Member 'UI_GameResult_Record_C_SubscribeUpdateUser::Event' has a wrong offset!");
static_assert(offsetof(UI_GameResult_Record_C_SubscribeUpdateUser, K2Node_MakeVariable_MakeVariableOutput) == 0x000050, "Member 'UI_GameResult_Record_C_SubscribeUpdateUser::K2Node_MakeVariable_MakeVariableOutput' has a wrong offset!");
static_assert(offsetof(UI_GameResult_Record_C_SubscribeUpdateUser, K2Node_CreateDelegate_OutputDelegate) == 0x0000A0, "Member 'UI_GameResult_Record_C_SubscribeUpdateUser::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");

// Function UI_GameResult_Record.UI_GameResult_Record_C.ToEXPText
// 0x00A8 (0x00A8 - 0x0000)
struct UI_GameResult_Record_C_ToEXPText final
{
public:
	double                                        _exp_val;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   _exp_txt;                                          // 0x0008(0x0018)(Parm, OutParm)
	int32                                         CallFunc_FTrunc_ReturnValue;                       // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A30[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-69 ])
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue;              // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0030(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0080(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0090(0x0018)()
};
static_assert(alignof(UI_GameResult_Record_C_ToEXPText) == 0x000008, "Wrong alignment on UI_GameResult_Record_C_ToEXPText");
static_assert(sizeof(UI_GameResult_Record_C_ToEXPText) == 0x0000A8, "Wrong size on UI_GameResult_Record_C_ToEXPText");
static_assert(offsetof(UI_GameResult_Record_C_ToEXPText, _exp_val) == 0x000000, "Member 'UI_GameResult_Record_C_ToEXPText::_exp_val' has a wrong offset!");
static_assert(offsetof(UI_GameResult_Record_C_ToEXPText, _exp_txt) == 0x000008, "Member 'UI_GameResult_Record_C_ToEXPText::_exp_txt' has a wrong offset!");
static_assert(offsetof(UI_GameResult_Record_C_ToEXPText, CallFunc_FTrunc_ReturnValue) == 0x000020, "Member 'UI_GameResult_Record_C_ToEXPText::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GameResult_Record_C_ToEXPText, CallFunc_Conv_IntToInt64_ReturnValue) == 0x000028, "Member 'UI_GameResult_Record_C_ToEXPText::CallFunc_Conv_IntToInt64_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GameResult_Record_C_ToEXPText, K2Node_MakeStruct_FormatArgumentData) == 0x000030, "Member 'UI_GameResult_Record_C_ToEXPText::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(UI_GameResult_Record_C_ToEXPText, K2Node_MakeArray_Array) == 0x000080, "Member 'UI_GameResult_Record_C_ToEXPText::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(UI_GameResult_Record_C_ToEXPText, CallFunc_Format_ReturnValue) == 0x000090, "Member 'UI_GameResult_Record_C_ToEXPText::CallFunc_Format_ReturnValue' has a wrong offset!");

// Function UI_GameResult_Record.UI_GameResult_Record_C.UpdateEXP
// 0x00A0 (0x00A0 - 0x0000)
struct UI_GameResult_Record_C_UpdateEXP final
{
public:
	int32                                         CallFunc_GetCurrencyValue_ReturnValue;             // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A31[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-69 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0008(0x0018)()
	double                                        CallFunc_Conv_IntToDouble_ReturnValue;             // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_ToEXPText__exp_txt;                       // 0x0028(0x0018)()
	double                                        CallFunc_Conv_IntToDouble_ReturnValue_1;           // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Conv_IntToDouble_ReturnValue_2;           // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_ToEXPText__exp_txt_1;                     // 0x0050(0x0018)()
	double                                        CallFunc_Conv_IntToDouble_ReturnValue_3;           // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Conv_IntToDouble_ReturnValue_4;           // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue_1;           // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_ToEXPText__exp_txt_2;                     // 0x0088(0x0018)()
};
static_assert(alignof(UI_GameResult_Record_C_UpdateEXP) == 0x000008, "Wrong alignment on UI_GameResult_Record_C_UpdateEXP");
static_assert(sizeof(UI_GameResult_Record_C_UpdateEXP) == 0x0000A0, "Wrong size on UI_GameResult_Record_C_UpdateEXP");
static_assert(offsetof(UI_GameResult_Record_C_UpdateEXP, CallFunc_GetCurrencyValue_ReturnValue) == 0x000000, "Member 'UI_GameResult_Record_C_UpdateEXP::CallFunc_GetCurrencyValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GameResult_Record_C_UpdateEXP, CallFunc_Conv_IntToText_ReturnValue) == 0x000008, "Member 'UI_GameResult_Record_C_UpdateEXP::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GameResult_Record_C_UpdateEXP, CallFunc_Conv_IntToDouble_ReturnValue) == 0x000020, "Member 'UI_GameResult_Record_C_UpdateEXP::CallFunc_Conv_IntToDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GameResult_Record_C_UpdateEXP, CallFunc_ToEXPText__exp_txt) == 0x000028, "Member 'UI_GameResult_Record_C_UpdateEXP::CallFunc_ToEXPText__exp_txt' has a wrong offset!");
static_assert(offsetof(UI_GameResult_Record_C_UpdateEXP, CallFunc_Conv_IntToDouble_ReturnValue_1) == 0x000040, "Member 'UI_GameResult_Record_C_UpdateEXP::CallFunc_Conv_IntToDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_GameResult_Record_C_UpdateEXP, CallFunc_Conv_IntToDouble_ReturnValue_2) == 0x000048, "Member 'UI_GameResult_Record_C_UpdateEXP::CallFunc_Conv_IntToDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UI_GameResult_Record_C_UpdateEXP, CallFunc_ToEXPText__exp_txt_1) == 0x000050, "Member 'UI_GameResult_Record_C_UpdateEXP::CallFunc_ToEXPText__exp_txt_1' has a wrong offset!");
static_assert(offsetof(UI_GameResult_Record_C_UpdateEXP, CallFunc_Conv_IntToDouble_ReturnValue_3) == 0x000068, "Member 'UI_GameResult_Record_C_UpdateEXP::CallFunc_Conv_IntToDouble_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UI_GameResult_Record_C_UpdateEXP, CallFunc_Conv_IntToDouble_ReturnValue_4) == 0x000070, "Member 'UI_GameResult_Record_C_UpdateEXP::CallFunc_Conv_IntToDouble_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(UI_GameResult_Record_C_UpdateEXP, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000078, "Member 'UI_GameResult_Record_C_UpdateEXP::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GameResult_Record_C_UpdateEXP, CallFunc_Add_DoubleDouble_ReturnValue_1) == 0x000080, "Member 'UI_GameResult_Record_C_UpdateEXP::CallFunc_Add_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_GameResult_Record_C_UpdateEXP, CallFunc_ToEXPText__exp_txt_2) == 0x000088, "Member 'UI_GameResult_Record_C_UpdateEXP::CallFunc_ToEXPText__exp_txt_2' has a wrong offset!");

// Function UI_GameResult_Record.UI_GameResult_Record_C.UpdateMap
// 0x06E8 (0x06E8 - 0x0000)
struct UI_GameResult_Record_C_UpdateMap final
{
public:
	struct FDateTime                              CallFunc_UTC_To_LocalTime_ReturnValue;             // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakDateTime_Year;                       // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakDateTime_Month;                      // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakDateTime_Day;                        // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakDateTime_Hour;                       // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakDateTime_Minute;                     // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakDateTime_Second;                     // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakDateTime_Millisecond;                // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A32[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-69 ])
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue;              // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0030(0x0050)(HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMode                                  CallFunc_GetGameModeEntry_ReturnValue;             // 0x0088(0x0370)(ConstParm)
	struct FMapEntry                              CallFunc_GetMapEntry_ReturnValue;                  // 0x03F8(0x0158)()
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue_1;            // 0x0550(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue_2;            // 0x0558(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0560(0x0050)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_2;            // 0x05B0(0x0050)(HasGetValueTypeHash)
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue_3;            // 0x0600(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0608(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_3;            // 0x0620(0x0050)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_4;            // 0x0670(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x06C0(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x06D0(0x0018)()
};
static_assert(alignof(UI_GameResult_Record_C_UpdateMap) == 0x000008, "Wrong alignment on UI_GameResult_Record_C_UpdateMap");
static_assert(sizeof(UI_GameResult_Record_C_UpdateMap) == 0x0006E8, "Wrong size on UI_GameResult_Record_C_UpdateMap");
static_assert(offsetof(UI_GameResult_Record_C_UpdateMap, CallFunc_UTC_To_LocalTime_ReturnValue) == 0x000000, "Member 'UI_GameResult_Record_C_UpdateMap::CallFunc_UTC_To_LocalTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GameResult_Record_C_UpdateMap, CallFunc_BreakDateTime_Year) == 0x000008, "Member 'UI_GameResult_Record_C_UpdateMap::CallFunc_BreakDateTime_Year' has a wrong offset!");
static_assert(offsetof(UI_GameResult_Record_C_UpdateMap, CallFunc_BreakDateTime_Month) == 0x00000C, "Member 'UI_GameResult_Record_C_UpdateMap::CallFunc_BreakDateTime_Month' has a wrong offset!");
static_assert(offsetof(UI_GameResult_Record_C_UpdateMap, CallFunc_BreakDateTime_Day) == 0x000010, "Member 'UI_GameResult_Record_C_UpdateMap::CallFunc_BreakDateTime_Day' has a wrong offset!");
static_assert(offsetof(UI_GameResult_Record_C_UpdateMap, CallFunc_BreakDateTime_Hour) == 0x000014, "Member 'UI_GameResult_Record_C_UpdateMap::CallFunc_BreakDateTime_Hour' has a wrong offset!");
static_assert(offsetof(UI_GameResult_Record_C_UpdateMap, CallFunc_BreakDateTime_Minute) == 0x000018, "Member 'UI_GameResult_Record_C_UpdateMap::CallFunc_BreakDateTime_Minute' has a wrong offset!");
static_assert(offsetof(UI_GameResult_Record_C_UpdateMap, CallFunc_BreakDateTime_Second) == 0x00001C, "Member 'UI_GameResult_Record_C_UpdateMap::CallFunc_BreakDateTime_Second' has a wrong offset!");
static_assert(offsetof(UI_GameResult_Record_C_UpdateMap, CallFunc_BreakDateTime_Millisecond) == 0x000020, "Member 'UI_GameResult_Record_C_UpdateMap::CallFunc_BreakDateTime_Millisecond' has a wrong offset!");
static_assert(offsetof(UI_GameResult_Record_C_UpdateMap, CallFunc_Conv_IntToInt64_ReturnValue) == 0x000028, "Member 'UI_GameResult_Record_C_UpdateMap::CallFunc_Conv_IntToInt64_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GameResult_Record_C_UpdateMap, K2Node_MakeStruct_FormatArgumentData) == 0x000030, "Member 'UI_GameResult_Record_C_UpdateMap::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(UI_GameResult_Record_C_UpdateMap, CallFunc_Conv_StringToName_ReturnValue) == 0x000080, "Member 'UI_GameResult_Record_C_UpdateMap::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GameResult_Record_C_UpdateMap, CallFunc_GetGameModeEntry_ReturnValue) == 0x000088, "Member 'UI_GameResult_Record_C_UpdateMap::CallFunc_GetGameModeEntry_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GameResult_Record_C_UpdateMap, CallFunc_GetMapEntry_ReturnValue) == 0x0003F8, "Member 'UI_GameResult_Record_C_UpdateMap::CallFunc_GetMapEntry_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GameResult_Record_C_UpdateMap, CallFunc_Conv_IntToInt64_ReturnValue_1) == 0x000550, "Member 'UI_GameResult_Record_C_UpdateMap::CallFunc_Conv_IntToInt64_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_GameResult_Record_C_UpdateMap, CallFunc_Conv_IntToInt64_ReturnValue_2) == 0x000558, "Member 'UI_GameResult_Record_C_UpdateMap::CallFunc_Conv_IntToInt64_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UI_GameResult_Record_C_UpdateMap, K2Node_MakeStruct_FormatArgumentData_1) == 0x000560, "Member 'UI_GameResult_Record_C_UpdateMap::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(UI_GameResult_Record_C_UpdateMap, K2Node_MakeStruct_FormatArgumentData_2) == 0x0005B0, "Member 'UI_GameResult_Record_C_UpdateMap::K2Node_MakeStruct_FormatArgumentData_2' has a wrong offset!");
static_assert(offsetof(UI_GameResult_Record_C_UpdateMap, CallFunc_Conv_IntToInt64_ReturnValue_3) == 0x000600, "Member 'UI_GameResult_Record_C_UpdateMap::CallFunc_Conv_IntToInt64_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UI_GameResult_Record_C_UpdateMap, CallFunc_Conv_IntToText_ReturnValue) == 0x000608, "Member 'UI_GameResult_Record_C_UpdateMap::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GameResult_Record_C_UpdateMap, K2Node_MakeStruct_FormatArgumentData_3) == 0x000620, "Member 'UI_GameResult_Record_C_UpdateMap::K2Node_MakeStruct_FormatArgumentData_3' has a wrong offset!");
static_assert(offsetof(UI_GameResult_Record_C_UpdateMap, K2Node_MakeStruct_FormatArgumentData_4) == 0x000670, "Member 'UI_GameResult_Record_C_UpdateMap::K2Node_MakeStruct_FormatArgumentData_4' has a wrong offset!");
static_assert(offsetof(UI_GameResult_Record_C_UpdateMap, K2Node_MakeArray_Array) == 0x0006C0, "Member 'UI_GameResult_Record_C_UpdateMap::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(UI_GameResult_Record_C_UpdateMap, CallFunc_Format_ReturnValue) == 0x0006D0, "Member 'UI_GameResult_Record_C_UpdateMap::CallFunc_Format_ReturnValue' has a wrong offset!");

// Function UI_GameResult_Record.UI_GameResult_Record_C.UpdateRecord
// 0x0258 (0x0258 - 0x0000)
struct UI_GameResult_Record_C_UpdateRecord final
{
public:
	class FText                                   CallFunc_Conv_DoubleToText_ReturnValue;            // 0x0000(0x0018)()
	int32                                         CallFunc_Divide_IntInt_ReturnValue;                // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A33[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-69 ])
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue;              // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Percent_IntInt_ReturnValue;               // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A34[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-69 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0030(0x0050)(HasGetValueTypeHash)
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue_1;            // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                         CallFunc_Conv_ByteToInt64_ReturnValue;             // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0090(0x0050)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_2;            // 0x00E0(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0130(0x0010)(ReferenceParm)
	int64                                         CallFunc_Conv_ByteToInt64_ReturnValue_1;           // 0x0140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0148(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_3;            // 0x0160(0x0050)(HasGetValueTypeHash)
	int64                                         CallFunc_Conv_ByteToInt64_ReturnValue_2;           // 0x01B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_ByteToText_ReturnValue;              // 0x01B8(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_4;            // 0x01D0(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_1;                          // 0x0220(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue_1;                     // 0x0230(0x0018)()
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0248(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A35[0x7];                                     // 0x0249(0x0007)(Fixing Size After Last Property [ Dumper-69 ])
	double                                        CallFunc_Conv_DoubleToText_Value_ImplicitCast;     // 0x0250(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_GameResult_Record_C_UpdateRecord) == 0x000008, "Wrong alignment on UI_GameResult_Record_C_UpdateRecord");
static_assert(sizeof(UI_GameResult_Record_C_UpdateRecord) == 0x000258, "Wrong size on UI_GameResult_Record_C_UpdateRecord");
static_assert(offsetof(UI_GameResult_Record_C_UpdateRecord, CallFunc_Conv_DoubleToText_ReturnValue) == 0x000000, "Member 'UI_GameResult_Record_C_UpdateRecord::CallFunc_Conv_DoubleToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GameResult_Record_C_UpdateRecord, CallFunc_Divide_IntInt_ReturnValue) == 0x000018, "Member 'UI_GameResult_Record_C_UpdateRecord::CallFunc_Divide_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GameResult_Record_C_UpdateRecord, CallFunc_Conv_IntToInt64_ReturnValue) == 0x000020, "Member 'UI_GameResult_Record_C_UpdateRecord::CallFunc_Conv_IntToInt64_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GameResult_Record_C_UpdateRecord, CallFunc_Percent_IntInt_ReturnValue) == 0x000028, "Member 'UI_GameResult_Record_C_UpdateRecord::CallFunc_Percent_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GameResult_Record_C_UpdateRecord, K2Node_MakeStruct_FormatArgumentData) == 0x000030, "Member 'UI_GameResult_Record_C_UpdateRecord::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(UI_GameResult_Record_C_UpdateRecord, CallFunc_Conv_IntToInt64_ReturnValue_1) == 0x000080, "Member 'UI_GameResult_Record_C_UpdateRecord::CallFunc_Conv_IntToInt64_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_GameResult_Record_C_UpdateRecord, CallFunc_Conv_ByteToInt64_ReturnValue) == 0x000088, "Member 'UI_GameResult_Record_C_UpdateRecord::CallFunc_Conv_ByteToInt64_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GameResult_Record_C_UpdateRecord, K2Node_MakeStruct_FormatArgumentData_1) == 0x000090, "Member 'UI_GameResult_Record_C_UpdateRecord::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(UI_GameResult_Record_C_UpdateRecord, K2Node_MakeStruct_FormatArgumentData_2) == 0x0000E0, "Member 'UI_GameResult_Record_C_UpdateRecord::K2Node_MakeStruct_FormatArgumentData_2' has a wrong offset!");
static_assert(offsetof(UI_GameResult_Record_C_UpdateRecord, K2Node_MakeArray_Array) == 0x000130, "Member 'UI_GameResult_Record_C_UpdateRecord::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(UI_GameResult_Record_C_UpdateRecord, CallFunc_Conv_ByteToInt64_ReturnValue_1) == 0x000140, "Member 'UI_GameResult_Record_C_UpdateRecord::CallFunc_Conv_ByteToInt64_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_GameResult_Record_C_UpdateRecord, CallFunc_Format_ReturnValue) == 0x000148, "Member 'UI_GameResult_Record_C_UpdateRecord::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GameResult_Record_C_UpdateRecord, K2Node_MakeStruct_FormatArgumentData_3) == 0x000160, "Member 'UI_GameResult_Record_C_UpdateRecord::K2Node_MakeStruct_FormatArgumentData_3' has a wrong offset!");
static_assert(offsetof(UI_GameResult_Record_C_UpdateRecord, CallFunc_Conv_ByteToInt64_ReturnValue_2) == 0x0001B0, "Member 'UI_GameResult_Record_C_UpdateRecord::CallFunc_Conv_ByteToInt64_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UI_GameResult_Record_C_UpdateRecord, CallFunc_Conv_ByteToText_ReturnValue) == 0x0001B8, "Member 'UI_GameResult_Record_C_UpdateRecord::CallFunc_Conv_ByteToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GameResult_Record_C_UpdateRecord, K2Node_MakeStruct_FormatArgumentData_4) == 0x0001D0, "Member 'UI_GameResult_Record_C_UpdateRecord::K2Node_MakeStruct_FormatArgumentData_4' has a wrong offset!");
static_assert(offsetof(UI_GameResult_Record_C_UpdateRecord, K2Node_MakeArray_Array_1) == 0x000220, "Member 'UI_GameResult_Record_C_UpdateRecord::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(UI_GameResult_Record_C_UpdateRecord, CallFunc_Format_ReturnValue_1) == 0x000230, "Member 'UI_GameResult_Record_C_UpdateRecord::CallFunc_Format_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_GameResult_Record_C_UpdateRecord, K2Node_SwitchEnum_CmpSuccess) == 0x000248, "Member 'UI_GameResult_Record_C_UpdateRecord::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(UI_GameResult_Record_C_UpdateRecord, CallFunc_Conv_DoubleToText_Value_ImplicitCast) == 0x000250, "Member 'UI_GameResult_Record_C_UpdateRecord::CallFunc_Conv_DoubleToText_Value_ImplicitCast' has a wrong offset!");

}

