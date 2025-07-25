#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: UI_Result_UserLevel

#include "Basic.hpp"

#include "Stigma_structs.hpp"
#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function UI_Result_UserLevel.UI_Result_UserLevel_C.ExecuteUbergraph_UI_Result_UserLevel
// 0x0004 (0x0004 - 0x0000)
struct UI_Result_UserLevel_C_ExecuteUbergraph_UI_Result_UserLevel final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Result_UserLevel_C_ExecuteUbergraph_UI_Result_UserLevel) == 0x000004, "Wrong alignment on UI_Result_UserLevel_C_ExecuteUbergraph_UI_Result_UserLevel");
static_assert(sizeof(UI_Result_UserLevel_C_ExecuteUbergraph_UI_Result_UserLevel) == 0x000004, "Wrong size on UI_Result_UserLevel_C_ExecuteUbergraph_UI_Result_UserLevel");
static_assert(offsetof(UI_Result_UserLevel_C_ExecuteUbergraph_UI_Result_UserLevel, EntryPoint) == 0x000000, "Member 'UI_Result_UserLevel_C_ExecuteUbergraph_UI_Result_UserLevel::EntryPoint' has a wrong offset!");

// Function UI_Result_UserLevel.UI_Result_UserLevel_C.SetTier
// 0x0001 (0x0001 - 0x0000)
struct UI_Result_UserLevel_C_SetTier final
{
public:
	ETier                                         _tier;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Result_UserLevel_C_SetTier) == 0x000001, "Wrong alignment on UI_Result_UserLevel_C_SetTier");
static_assert(sizeof(UI_Result_UserLevel_C_SetTier) == 0x000001, "Wrong size on UI_Result_UserLevel_C_SetTier");
static_assert(offsetof(UI_Result_UserLevel_C_SetTier, _tier) == 0x000000, "Member 'UI_Result_UserLevel_C_SetTier::_tier' has a wrong offset!");

// Function UI_Result_UserLevel.UI_Result_UserLevel_C.UpdateActiveFunc
// 0x00D8 (0x00D8 - 0x0000)
struct UI_Result_UserLevel_C_UpdateActiveFunc final
{
public:
	class UWIDGET_FunctionWidget_C*               Widget;                                            // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FActiveFunction                        Func_0;                                            // 0x0008(0x0028)(Edit, BlueprintVisible)
	class ULocalPlayerContext*                    Lpc;                                               // 0x0030(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A20[0x3];                                     // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-69 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A21[0x3];                                     // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-69 ])
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x0044(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3A22[0x4];                                     // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-69 ])
	class UWIDGET_FunctionWidget_C*               CallFunc_Create_ReturnValue;                       // 0x0058(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<struct FItemID>                        K2Node_MakeArray_Array;                            // 0x0060(0x0010)(ConstParm, ReferenceParm)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A23[0x4];                                     // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-69 ])
	class UHorizontalBoxSlot*                     CallFunc_AddChildToHorizontalBox_ReturnValue;      // 0x0078(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A24[0x4];                                     // 0x0084(0x0004)(Fixing Size After Last Property [ Dumper-69 ])
	TArray<struct FActiveFunction>                CallFunc_GetActiveFunctions_ReturnValue;           // 0x0088(0x0010)(ConstParm, ReferenceParm)
	struct FActiveFunction                        CallFunc_Array_Get_Item;                           // 0x0098(0x0028)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A25[0x3];                                     // 0x00C5(0x0003)(Fixing Size After Last Property [ Dumper-69 ])
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x00CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A26[0x3];                                     // 0x00CD(0x0003)(Fixing Size After Last Property [ Dumper-69 ])
	class ULocalPlayerContext*                    CallFunc_Get_ReturnValue;                          // 0x00D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Result_UserLevel_C_UpdateActiveFunc) == 0x000008, "Wrong alignment on UI_Result_UserLevel_C_UpdateActiveFunc");
static_assert(sizeof(UI_Result_UserLevel_C_UpdateActiveFunc) == 0x0000D8, "Wrong size on UI_Result_UserLevel_C_UpdateActiveFunc");
static_assert(offsetof(UI_Result_UserLevel_C_UpdateActiveFunc, Widget) == 0x000000, "Member 'UI_Result_UserLevel_C_UpdateActiveFunc::Widget' has a wrong offset!");
static_assert(offsetof(UI_Result_UserLevel_C_UpdateActiveFunc, Func_0) == 0x000008, "Member 'UI_Result_UserLevel_C_UpdateActiveFunc::Func_0' has a wrong offset!");
static_assert(offsetof(UI_Result_UserLevel_C_UpdateActiveFunc, Lpc) == 0x000030, "Member 'UI_Result_UserLevel_C_UpdateActiveFunc::Lpc' has a wrong offset!");
static_assert(offsetof(UI_Result_UserLevel_C_UpdateActiveFunc, CallFunc_IsValid_ReturnValue) == 0x000038, "Member 'UI_Result_UserLevel_C_UpdateActiveFunc::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Result_UserLevel_C_UpdateActiveFunc, Temp_int_Array_Index_Variable) == 0x00003C, "Member 'UI_Result_UserLevel_C_UpdateActiveFunc::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(UI_Result_UserLevel_C_UpdateActiveFunc, CallFunc_Greater_IntInt_ReturnValue) == 0x000040, "Member 'UI_Result_UserLevel_C_UpdateActiveFunc::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Result_UserLevel_C_UpdateActiveFunc, K2Node_MakeStruct_Margin) == 0x000044, "Member 'UI_Result_UserLevel_C_UpdateActiveFunc::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(UI_Result_UserLevel_C_UpdateActiveFunc, CallFunc_Create_ReturnValue) == 0x000058, "Member 'UI_Result_UserLevel_C_UpdateActiveFunc::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Result_UserLevel_C_UpdateActiveFunc, K2Node_MakeArray_Array) == 0x000060, "Member 'UI_Result_UserLevel_C_UpdateActiveFunc::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(UI_Result_UserLevel_C_UpdateActiveFunc, Temp_int_Loop_Counter_Variable) == 0x000070, "Member 'UI_Result_UserLevel_C_UpdateActiveFunc::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(UI_Result_UserLevel_C_UpdateActiveFunc, CallFunc_AddChildToHorizontalBox_ReturnValue) == 0x000078, "Member 'UI_Result_UserLevel_C_UpdateActiveFunc::CallFunc_AddChildToHorizontalBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Result_UserLevel_C_UpdateActiveFunc, CallFunc_Add_IntInt_ReturnValue) == 0x000080, "Member 'UI_Result_UserLevel_C_UpdateActiveFunc::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Result_UserLevel_C_UpdateActiveFunc, CallFunc_GetActiveFunctions_ReturnValue) == 0x000088, "Member 'UI_Result_UserLevel_C_UpdateActiveFunc::CallFunc_GetActiveFunctions_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Result_UserLevel_C_UpdateActiveFunc, CallFunc_Array_Get_Item) == 0x000098, "Member 'UI_Result_UserLevel_C_UpdateActiveFunc::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(UI_Result_UserLevel_C_UpdateActiveFunc, CallFunc_Array_Length_ReturnValue) == 0x0000C0, "Member 'UI_Result_UserLevel_C_UpdateActiveFunc::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Result_UserLevel_C_UpdateActiveFunc, CallFunc_Less_IntInt_ReturnValue) == 0x0000C4, "Member 'UI_Result_UserLevel_C_UpdateActiveFunc::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Result_UserLevel_C_UpdateActiveFunc, CallFunc_Array_Length_ReturnValue_1) == 0x0000C8, "Member 'UI_Result_UserLevel_C_UpdateActiveFunc::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_Result_UserLevel_C_UpdateActiveFunc, CallFunc_Greater_IntInt_ReturnValue_1) == 0x0000CC, "Member 'UI_Result_UserLevel_C_UpdateActiveFunc::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_Result_UserLevel_C_UpdateActiveFunc, CallFunc_Get_ReturnValue) == 0x0000D0, "Member 'UI_Result_UserLevel_C_UpdateActiveFunc::CallFunc_Get_ReturnValue' has a wrong offset!");

// Function UI_Result_UserLevel.UI_Result_UserLevel_C.UpdateLevelEXP
// 0x0260 (0x0260 - 0x0000)
struct UI_Result_UserLevel_C_UpdateLevelEXP final
{
public:
	class FText                                   CallFunc_MakeLiteralText_ReturnValue;              // 0x0000(0x0018)()
	class FText                                   CallFunc_MakeLiteralText_ReturnValue_1;            // 0x0018(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0030(0x0050)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0080(0x0050)(HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A27[0x4];                                     // 0x00DC(0x0004)(Fixing Size After Last Property [ Dumper-69 ])
	double                                        CallFunc_Add_DoubleDouble_ReturnValue_1;           // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x00E8(0x0018)()
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0104(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A28[0x3];                                     // 0x0105(0x0003)(Fixing Size After Last Property [ Dumper-69 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0108(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue;              // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsMaxLevel_ReturnValue;                   // 0x0118(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A29[0x7];                                     // 0x0119(0x0007)(Fixing Size After Last Property [ Dumper-69 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_2;            // 0x0120(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0170(0x0010)(ReferenceParm)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0180(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A2A[0x4];                                     // 0x0184(0x0004)(Fixing Size After Last Property [ Dumper-69 ])
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0188(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x01A0(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_2;             // 0x01B8(0x0018)()
	struct FUserBattleResult_UIValues             CallFunc_GetReport_LevelAndExp_ReturnValue;        // 0x01D0(0x0028)(NoDestructor)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue_2;           // 0x01F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue_3;           // 0x0200(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue_4;           // 0x0208(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_A_ImplicitCast;          // 0x0210(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_B_ImplicitCast;          // 0x0218(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_B_ImplicitCast_1;        // 0x0220(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetAxisMinMax__max_ImplicitCast;          // 0x0228(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A2B[0x4];                                     // 0x022C(0x0004)(Fixing Size After Last Property [ Dumper-69 ])
	double                                        CallFunc_Add_DoubleDouble_A_ImplicitCast_1;        // 0x0230(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_A_ImplicitCast_2;        // 0x0238(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_B_ImplicitCast_2;        // 0x0240(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_B_ImplicitCast_3;        // 0x0248(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_B_ImplicitCast_4;        // 0x0250(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetAxisValue__value_ImplicitCast;         // 0x0258(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetAxisValue__value_ImplicitCast_1;       // 0x025C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Result_UserLevel_C_UpdateLevelEXP) == 0x000008, "Wrong alignment on UI_Result_UserLevel_C_UpdateLevelEXP");
static_assert(sizeof(UI_Result_UserLevel_C_UpdateLevelEXP) == 0x000260, "Wrong size on UI_Result_UserLevel_C_UpdateLevelEXP");
static_assert(offsetof(UI_Result_UserLevel_C_UpdateLevelEXP, CallFunc_MakeLiteralText_ReturnValue) == 0x000000, "Member 'UI_Result_UserLevel_C_UpdateLevelEXP::CallFunc_MakeLiteralText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Result_UserLevel_C_UpdateLevelEXP, CallFunc_MakeLiteralText_ReturnValue_1) == 0x000018, "Member 'UI_Result_UserLevel_C_UpdateLevelEXP::CallFunc_MakeLiteralText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_Result_UserLevel_C_UpdateLevelEXP, K2Node_MakeStruct_FormatArgumentData) == 0x000030, "Member 'UI_Result_UserLevel_C_UpdateLevelEXP::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(UI_Result_UserLevel_C_UpdateLevelEXP, K2Node_MakeStruct_FormatArgumentData_1) == 0x000080, "Member 'UI_Result_UserLevel_C_UpdateLevelEXP::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(UI_Result_UserLevel_C_UpdateLevelEXP, CallFunc_Add_DoubleDouble_ReturnValue) == 0x0000D0, "Member 'UI_Result_UserLevel_C_UpdateLevelEXP::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Result_UserLevel_C_UpdateLevelEXP, CallFunc_Subtract_IntInt_ReturnValue) == 0x0000D8, "Member 'UI_Result_UserLevel_C_UpdateLevelEXP::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Result_UserLevel_C_UpdateLevelEXP, CallFunc_Add_DoubleDouble_ReturnValue_1) == 0x0000E0, "Member 'UI_Result_UserLevel_C_UpdateLevelEXP::CallFunc_Add_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_Result_UserLevel_C_UpdateLevelEXP, CallFunc_Conv_IntToText_ReturnValue) == 0x0000E8, "Member 'UI_Result_UserLevel_C_UpdateLevelEXP::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Result_UserLevel_C_UpdateLevelEXP, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x000100, "Member 'UI_Result_UserLevel_C_UpdateLevelEXP::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_Result_UserLevel_C_UpdateLevelEXP, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000104, "Member 'UI_Result_UserLevel_C_UpdateLevelEXP::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Result_UserLevel_C_UpdateLevelEXP, CallFunc_PlayAnimation_ReturnValue) == 0x000108, "Member 'UI_Result_UserLevel_C_UpdateLevelEXP::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Result_UserLevel_C_UpdateLevelEXP, CallFunc_Conv_IntToInt64_ReturnValue) == 0x000110, "Member 'UI_Result_UserLevel_C_UpdateLevelEXP::CallFunc_Conv_IntToInt64_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Result_UserLevel_C_UpdateLevelEXP, CallFunc_IsMaxLevel_ReturnValue) == 0x000118, "Member 'UI_Result_UserLevel_C_UpdateLevelEXP::CallFunc_IsMaxLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Result_UserLevel_C_UpdateLevelEXP, K2Node_MakeStruct_FormatArgumentData_2) == 0x000120, "Member 'UI_Result_UserLevel_C_UpdateLevelEXP::K2Node_MakeStruct_FormatArgumentData_2' has a wrong offset!");
static_assert(offsetof(UI_Result_UserLevel_C_UpdateLevelEXP, K2Node_MakeArray_Array) == 0x000170, "Member 'UI_Result_UserLevel_C_UpdateLevelEXP::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(UI_Result_UserLevel_C_UpdateLevelEXP, CallFunc_Add_IntInt_ReturnValue) == 0x000180, "Member 'UI_Result_UserLevel_C_UpdateLevelEXP::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Result_UserLevel_C_UpdateLevelEXP, CallFunc_Format_ReturnValue) == 0x000188, "Member 'UI_Result_UserLevel_C_UpdateLevelEXP::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Result_UserLevel_C_UpdateLevelEXP, CallFunc_Conv_IntToText_ReturnValue_1) == 0x0001A0, "Member 'UI_Result_UserLevel_C_UpdateLevelEXP::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_Result_UserLevel_C_UpdateLevelEXP, CallFunc_Conv_IntToText_ReturnValue_2) == 0x0001B8, "Member 'UI_Result_UserLevel_C_UpdateLevelEXP::CallFunc_Conv_IntToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UI_Result_UserLevel_C_UpdateLevelEXP, CallFunc_GetReport_LevelAndExp_ReturnValue) == 0x0001D0, "Member 'UI_Result_UserLevel_C_UpdateLevelEXP::CallFunc_GetReport_LevelAndExp_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Result_UserLevel_C_UpdateLevelEXP, CallFunc_Add_DoubleDouble_ReturnValue_2) == 0x0001F8, "Member 'UI_Result_UserLevel_C_UpdateLevelEXP::CallFunc_Add_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UI_Result_UserLevel_C_UpdateLevelEXP, CallFunc_Add_DoubleDouble_ReturnValue_3) == 0x000200, "Member 'UI_Result_UserLevel_C_UpdateLevelEXP::CallFunc_Add_DoubleDouble_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UI_Result_UserLevel_C_UpdateLevelEXP, CallFunc_Add_DoubleDouble_ReturnValue_4) == 0x000208, "Member 'UI_Result_UserLevel_C_UpdateLevelEXP::CallFunc_Add_DoubleDouble_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(UI_Result_UserLevel_C_UpdateLevelEXP, CallFunc_Add_DoubleDouble_A_ImplicitCast) == 0x000210, "Member 'UI_Result_UserLevel_C_UpdateLevelEXP::CallFunc_Add_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(UI_Result_UserLevel_C_UpdateLevelEXP, CallFunc_Add_DoubleDouble_B_ImplicitCast) == 0x000218, "Member 'UI_Result_UserLevel_C_UpdateLevelEXP::CallFunc_Add_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(UI_Result_UserLevel_C_UpdateLevelEXP, CallFunc_Add_DoubleDouble_B_ImplicitCast_1) == 0x000220, "Member 'UI_Result_UserLevel_C_UpdateLevelEXP::CallFunc_Add_DoubleDouble_B_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(UI_Result_UserLevel_C_UpdateLevelEXP, CallFunc_SetAxisMinMax__max_ImplicitCast) == 0x000228, "Member 'UI_Result_UserLevel_C_UpdateLevelEXP::CallFunc_SetAxisMinMax__max_ImplicitCast' has a wrong offset!");
static_assert(offsetof(UI_Result_UserLevel_C_UpdateLevelEXP, CallFunc_Add_DoubleDouble_A_ImplicitCast_1) == 0x000230, "Member 'UI_Result_UserLevel_C_UpdateLevelEXP::CallFunc_Add_DoubleDouble_A_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(UI_Result_UserLevel_C_UpdateLevelEXP, CallFunc_Add_DoubleDouble_A_ImplicitCast_2) == 0x000238, "Member 'UI_Result_UserLevel_C_UpdateLevelEXP::CallFunc_Add_DoubleDouble_A_ImplicitCast_2' has a wrong offset!");
static_assert(offsetof(UI_Result_UserLevel_C_UpdateLevelEXP, CallFunc_Add_DoubleDouble_B_ImplicitCast_2) == 0x000240, "Member 'UI_Result_UserLevel_C_UpdateLevelEXP::CallFunc_Add_DoubleDouble_B_ImplicitCast_2' has a wrong offset!");
static_assert(offsetof(UI_Result_UserLevel_C_UpdateLevelEXP, CallFunc_Add_DoubleDouble_B_ImplicitCast_3) == 0x000248, "Member 'UI_Result_UserLevel_C_UpdateLevelEXP::CallFunc_Add_DoubleDouble_B_ImplicitCast_3' has a wrong offset!");
static_assert(offsetof(UI_Result_UserLevel_C_UpdateLevelEXP, CallFunc_Add_DoubleDouble_B_ImplicitCast_4) == 0x000250, "Member 'UI_Result_UserLevel_C_UpdateLevelEXP::CallFunc_Add_DoubleDouble_B_ImplicitCast_4' has a wrong offset!");
static_assert(offsetof(UI_Result_UserLevel_C_UpdateLevelEXP, CallFunc_SetAxisValue__value_ImplicitCast) == 0x000258, "Member 'UI_Result_UserLevel_C_UpdateLevelEXP::CallFunc_SetAxisValue__value_ImplicitCast' has a wrong offset!");
static_assert(offsetof(UI_Result_UserLevel_C_UpdateLevelEXP, CallFunc_SetAxisValue__value_ImplicitCast_1) == 0x00025C, "Member 'UI_Result_UserLevel_C_UpdateLevelEXP::CallFunc_SetAxisValue__value_ImplicitCast_1' has a wrong offset!");

// Function UI_Result_UserLevel.UI_Result_UserLevel_C.UpdateTier
// 0x00E0 (0x00E0 - 0x0000)
struct UI_Result_UserLevel_C_UpdateTier final
{
public:
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A2C[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-69 ])
	struct FConfig_Tier                           CallFunc_GetTierDefine_ReturnValue;                // 0x0008(0x00D8)(ConstParm)
};
static_assert(alignof(UI_Result_UserLevel_C_UpdateTier) == 0x000008, "Wrong alignment on UI_Result_UserLevel_C_UpdateTier");
static_assert(sizeof(UI_Result_UserLevel_C_UpdateTier) == 0x0000E0, "Wrong size on UI_Result_UserLevel_C_UpdateTier");
static_assert(offsetof(UI_Result_UserLevel_C_UpdateTier, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000000, "Member 'UI_Result_UserLevel_C_UpdateTier::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Result_UserLevel_C_UpdateTier, CallFunc_GetTierDefine_ReturnValue) == 0x000008, "Member 'UI_Result_UserLevel_C_UpdateTier::CallFunc_GetTierDefine_ReturnValue' has a wrong offset!");

}

