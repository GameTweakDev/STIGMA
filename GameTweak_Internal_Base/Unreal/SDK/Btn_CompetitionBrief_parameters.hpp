#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: Btn_CompetitionBrief

#include "Basic.hpp"

#include "Stigma_structs.hpp"
#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function Btn_CompetitionBrief.Btn_CompetitionBrief_C.UpdateFastStartBtn
// 0x0128 (0x0128 - 0x0000)
struct Btn_CompetitionBrief_C_UpdateFastStartBtn final
{
public:
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0010(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECompetitionState                             CallFunc_GetMyPlayerState_ReturnValue;             // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4104[0x5];                                     // 0x001B(0x0005)(Fixing Size After Last Property [ Dumper-69 ])
	struct FCurrencyPlain                         CallFunc_CalcCurrency_OnFastStart_currency;        // 0x0020(0x0018)()
	class FText                                   CallFunc_MakeLiteralText_ReturnValue;              // 0x0038(0x0018)()
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue;              // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0058(0x0050)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x00A8(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00F8(0x0010)(ReferenceParm)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4105[0x7];                                     // 0x0109(0x0007)(Fixing Size After Last Property [ Dumper-69 ])
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0110(0x0018)()
};
static_assert(alignof(Btn_CompetitionBrief_C_UpdateFastStartBtn) == 0x000008, "Wrong alignment on Btn_CompetitionBrief_C_UpdateFastStartBtn");
static_assert(sizeof(Btn_CompetitionBrief_C_UpdateFastStartBtn) == 0x000128, "Wrong size on Btn_CompetitionBrief_C_UpdateFastStartBtn");
static_assert(offsetof(Btn_CompetitionBrief_C_UpdateFastStartBtn, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'Btn_CompetitionBrief_C_UpdateFastStartBtn::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(Btn_CompetitionBrief_C_UpdateFastStartBtn, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000010, "Member 'Btn_CompetitionBrief_C_UpdateFastStartBtn::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(Btn_CompetitionBrief_C_UpdateFastStartBtn, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'Btn_CompetitionBrief_C_UpdateFastStartBtn::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Btn_CompetitionBrief_C_UpdateFastStartBtn, CallFunc_GetMyPlayerState_ReturnValue) == 0x000019, "Member 'Btn_CompetitionBrief_C_UpdateFastStartBtn::CallFunc_GetMyPlayerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(Btn_CompetitionBrief_C_UpdateFastStartBtn, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00001A, "Member 'Btn_CompetitionBrief_C_UpdateFastStartBtn::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(Btn_CompetitionBrief_C_UpdateFastStartBtn, CallFunc_CalcCurrency_OnFastStart_currency) == 0x000020, "Member 'Btn_CompetitionBrief_C_UpdateFastStartBtn::CallFunc_CalcCurrency_OnFastStart_currency' has a wrong offset!");
static_assert(offsetof(Btn_CompetitionBrief_C_UpdateFastStartBtn, CallFunc_MakeLiteralText_ReturnValue) == 0x000038, "Member 'Btn_CompetitionBrief_C_UpdateFastStartBtn::CallFunc_MakeLiteralText_ReturnValue' has a wrong offset!");
static_assert(offsetof(Btn_CompetitionBrief_C_UpdateFastStartBtn, CallFunc_Conv_IntToInt64_ReturnValue) == 0x000050, "Member 'Btn_CompetitionBrief_C_UpdateFastStartBtn::CallFunc_Conv_IntToInt64_ReturnValue' has a wrong offset!");
static_assert(offsetof(Btn_CompetitionBrief_C_UpdateFastStartBtn, K2Node_MakeStruct_FormatArgumentData) == 0x000058, "Member 'Btn_CompetitionBrief_C_UpdateFastStartBtn::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(Btn_CompetitionBrief_C_UpdateFastStartBtn, K2Node_MakeStruct_FormatArgumentData_1) == 0x0000A8, "Member 'Btn_CompetitionBrief_C_UpdateFastStartBtn::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(Btn_CompetitionBrief_C_UpdateFastStartBtn, K2Node_MakeArray_Array) == 0x0000F8, "Member 'Btn_CompetitionBrief_C_UpdateFastStartBtn::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(Btn_CompetitionBrief_C_UpdateFastStartBtn, CallFunc_IsValid_ReturnValue_1) == 0x000108, "Member 'Btn_CompetitionBrief_C_UpdateFastStartBtn::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Btn_CompetitionBrief_C_UpdateFastStartBtn, CallFunc_Format_ReturnValue) == 0x000110, "Member 'Btn_CompetitionBrief_C_UpdateFastStartBtn::CallFunc_Format_ReturnValue' has a wrong offset!");

// Function Btn_CompetitionBrief.Btn_CompetitionBrief_C.OpenPopupCompetition
// 0x0010 (0x0010 - 0x0000)
struct Btn_CompetitionBrief_C_OpenPopupCompetition final
{
public:
	class UPopup_Competition_C*                   CallFunc_Create_ReturnValue;                       // 0x0000(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPopupBase*                             CallFunc_DoModal_ReturnValue;                      // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Btn_CompetitionBrief_C_OpenPopupCompetition) == 0x000008, "Wrong alignment on Btn_CompetitionBrief_C_OpenPopupCompetition");
static_assert(sizeof(Btn_CompetitionBrief_C_OpenPopupCompetition) == 0x000010, "Wrong size on Btn_CompetitionBrief_C_OpenPopupCompetition");
static_assert(offsetof(Btn_CompetitionBrief_C_OpenPopupCompetition, CallFunc_Create_ReturnValue) == 0x000000, "Member 'Btn_CompetitionBrief_C_OpenPopupCompetition::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(Btn_CompetitionBrief_C_OpenPopupCompetition, CallFunc_DoModal_ReturnValue) == 0x000008, "Member 'Btn_CompetitionBrief_C_OpenPopupCompetition::CallFunc_DoModal_ReturnValue' has a wrong offset!");

// Function Btn_CompetitionBrief.Btn_CompetitionBrief_C.OnSynchronizeProperties
// 0x0001 (0x0001 - 0x0000)
struct Btn_CompetitionBrief_C_OnSynchronizeProperties final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Btn_CompetitionBrief_C_OnSynchronizeProperties) == 0x000001, "Wrong alignment on Btn_CompetitionBrief_C_OnSynchronizeProperties");
static_assert(sizeof(Btn_CompetitionBrief_C_OnSynchronizeProperties) == 0x000001, "Wrong size on Btn_CompetitionBrief_C_OnSynchronizeProperties");
static_assert(offsetof(Btn_CompetitionBrief_C_OnSynchronizeProperties, ReturnValue) == 0x000000, "Member 'Btn_CompetitionBrief_C_OnSynchronizeProperties::ReturnValue' has a wrong offset!");

// Function Btn_CompetitionBrief.Btn_CompetitionBrief_C.InitWidget
// 0x0088 (0x0088 - 0x0000)
struct Btn_CompetitionBrief_C_InitWidget final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4106[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-69 ])
	class UCtrl_Competition_UserPreViewBP_C*      CallFunc_Create_ReturnValue;                       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4107[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-69 ])
	TArray<class UCompetitionBriefPlayer*>        CallFunc_GetBriefPlayers_ReturnValue;              // 0x0018(0x0010)(ReferenceParm)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4108[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-69 ])
	class UCompetitionBriefPlayer*                CallFunc_Array_Get_Item;                           // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECompetitionState                             CallFunc_GetMyPlayerState_ReturnValue;             // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x003D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;                    // 0x003E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4109[0x1];                                     // 0x003F(0x0001)(Fixing Size After Last Property [ Dumper-69 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_410A[0x3];                                     // 0x0045(0x0003)(Fixing Size After Last Property [ Dumper-69 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x004C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_410B[0x4];                                     // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-69 ])
	struct FVector2D                              Temp_struct_Variable;                              // 0x0060(0x0010)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0070(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                       K2Node_DynamicCast_As________;                     // 0x0078(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_InitWidget_ReturnValue;                   // 0x0081(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Btn_CompetitionBrief_C_InitWidget) == 0x000008, "Wrong alignment on Btn_CompetitionBrief_C_InitWidget");
static_assert(sizeof(Btn_CompetitionBrief_C_InitWidget) == 0x000088, "Wrong size on Btn_CompetitionBrief_C_InitWidget");
static_assert(offsetof(Btn_CompetitionBrief_C_InitWidget, ReturnValue) == 0x000000, "Member 'Btn_CompetitionBrief_C_InitWidget::ReturnValue' has a wrong offset!");
static_assert(offsetof(Btn_CompetitionBrief_C_InitWidget, CallFunc_Create_ReturnValue) == 0x000008, "Member 'Btn_CompetitionBrief_C_InitWidget::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(Btn_CompetitionBrief_C_InitWidget, Temp_int_Array_Index_Variable) == 0x000010, "Member 'Btn_CompetitionBrief_C_InitWidget::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(Btn_CompetitionBrief_C_InitWidget, CallFunc_GetBriefPlayers_ReturnValue) == 0x000018, "Member 'Btn_CompetitionBrief_C_InitWidget::CallFunc_GetBriefPlayers_ReturnValue' has a wrong offset!");
static_assert(offsetof(Btn_CompetitionBrief_C_InitWidget, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'Btn_CompetitionBrief_C_InitWidget::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Btn_CompetitionBrief_C_InitWidget, CallFunc_Array_Get_Item) == 0x000030, "Member 'Btn_CompetitionBrief_C_InitWidget::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Btn_CompetitionBrief_C_InitWidget, CallFunc_Array_Length_ReturnValue) == 0x000038, "Member 'Btn_CompetitionBrief_C_InitWidget::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(Btn_CompetitionBrief_C_InitWidget, CallFunc_GetMyPlayerState_ReturnValue) == 0x00003C, "Member 'Btn_CompetitionBrief_C_InitWidget::CallFunc_GetMyPlayerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(Btn_CompetitionBrief_C_InitWidget, K2Node_SwitchEnum_CmpSuccess) == 0x00003D, "Member 'Btn_CompetitionBrief_C_InitWidget::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(Btn_CompetitionBrief_C_InitWidget, K2Node_SwitchEnum_CmpSuccess_1) == 0x00003E, "Member 'Btn_CompetitionBrief_C_InitWidget::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(Btn_CompetitionBrief_C_InitWidget, Temp_int_Loop_Counter_Variable) == 0x000040, "Member 'Btn_CompetitionBrief_C_InitWidget::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(Btn_CompetitionBrief_C_InitWidget, CallFunc_Less_IntInt_ReturnValue) == 0x000044, "Member 'Btn_CompetitionBrief_C_InitWidget::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Btn_CompetitionBrief_C_InitWidget, CallFunc_Add_IntInt_ReturnValue) == 0x000048, "Member 'Btn_CompetitionBrief_C_InitWidget::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Btn_CompetitionBrief_C_InitWidget, K2Node_MakeStruct_Margin) == 0x00004C, "Member 'Btn_CompetitionBrief_C_InitWidget::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(Btn_CompetitionBrief_C_InitWidget, Temp_struct_Variable) == 0x000060, "Member 'Btn_CompetitionBrief_C_InitWidget::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(Btn_CompetitionBrief_C_InitWidget, CallFunc_AddChild_ReturnValue) == 0x000070, "Member 'Btn_CompetitionBrief_C_InitWidget::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(Btn_CompetitionBrief_C_InitWidget, K2Node_DynamicCast_As________) == 0x000078, "Member 'Btn_CompetitionBrief_C_InitWidget::K2Node_DynamicCast_As________' has a wrong offset!");
static_assert(offsetof(Btn_CompetitionBrief_C_InitWidget, K2Node_DynamicCast_bSuccess) == 0x000080, "Member 'Btn_CompetitionBrief_C_InitWidget::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Btn_CompetitionBrief_C_InitWidget, CallFunc_InitWidget_ReturnValue) == 0x000081, "Member 'Btn_CompetitionBrief_C_InitWidget::CallFunc_InitWidget_ReturnValue' has a wrong offset!");

// Function Btn_CompetitionBrief.Btn_CompetitionBrief_C.ExecuteUbergraph_Btn_CompetitionBrief
// 0x0048 (0x0048 - 0x0000)
struct Btn_CompetitionBrief_C_ExecuteUbergraph_Btn_CompetitionBrief final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_410C[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-69 ])
	class UAnimatableWidget*                      K2Node_ComponentBoundEvent__widget;                // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent__select;                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_410D[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-69 ])
	struct FCurrencyPlain                         CallFunc_CalcCurrency_OnFastStart_currency;        // 0x0018(0x0018)()
	bool                                          CallFunc_InitWidget_ReturnValue;                   // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_410E[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-69 ])
	class UAnimatableWidget*                      K2Node_ComponentBoundEvent__widget_1;              // 0x0038(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent__select_1;              // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Btn_CompetitionBrief_C_ExecuteUbergraph_Btn_CompetitionBrief) == 0x000008, "Wrong alignment on Btn_CompetitionBrief_C_ExecuteUbergraph_Btn_CompetitionBrief");
static_assert(sizeof(Btn_CompetitionBrief_C_ExecuteUbergraph_Btn_CompetitionBrief) == 0x000048, "Wrong size on Btn_CompetitionBrief_C_ExecuteUbergraph_Btn_CompetitionBrief");
static_assert(offsetof(Btn_CompetitionBrief_C_ExecuteUbergraph_Btn_CompetitionBrief, EntryPoint) == 0x000000, "Member 'Btn_CompetitionBrief_C_ExecuteUbergraph_Btn_CompetitionBrief::EntryPoint' has a wrong offset!");
static_assert(offsetof(Btn_CompetitionBrief_C_ExecuteUbergraph_Btn_CompetitionBrief, K2Node_ComponentBoundEvent__widget) == 0x000008, "Member 'Btn_CompetitionBrief_C_ExecuteUbergraph_Btn_CompetitionBrief::K2Node_ComponentBoundEvent__widget' has a wrong offset!");
static_assert(offsetof(Btn_CompetitionBrief_C_ExecuteUbergraph_Btn_CompetitionBrief, K2Node_ComponentBoundEvent__select) == 0x000010, "Member 'Btn_CompetitionBrief_C_ExecuteUbergraph_Btn_CompetitionBrief::K2Node_ComponentBoundEvent__select' has a wrong offset!");
static_assert(offsetof(Btn_CompetitionBrief_C_ExecuteUbergraph_Btn_CompetitionBrief, CallFunc_CalcCurrency_OnFastStart_currency) == 0x000018, "Member 'Btn_CompetitionBrief_C_ExecuteUbergraph_Btn_CompetitionBrief::CallFunc_CalcCurrency_OnFastStart_currency' has a wrong offset!");
static_assert(offsetof(Btn_CompetitionBrief_C_ExecuteUbergraph_Btn_CompetitionBrief, CallFunc_InitWidget_ReturnValue) == 0x000030, "Member 'Btn_CompetitionBrief_C_ExecuteUbergraph_Btn_CompetitionBrief::CallFunc_InitWidget_ReturnValue' has a wrong offset!");
static_assert(offsetof(Btn_CompetitionBrief_C_ExecuteUbergraph_Btn_CompetitionBrief, K2Node_ComponentBoundEvent__widget_1) == 0x000038, "Member 'Btn_CompetitionBrief_C_ExecuteUbergraph_Btn_CompetitionBrief::K2Node_ComponentBoundEvent__widget_1' has a wrong offset!");
static_assert(offsetof(Btn_CompetitionBrief_C_ExecuteUbergraph_Btn_CompetitionBrief, K2Node_ComponentBoundEvent__select_1) == 0x000040, "Member 'Btn_CompetitionBrief_C_ExecuteUbergraph_Btn_CompetitionBrief::K2Node_ComponentBoundEvent__select_1' has a wrong offset!");

// Function Btn_CompetitionBrief.Btn_CompetitionBrief_C.CalcCurrency_OnFastStart
// 0x0250 (0x0250 - 0x0000)
struct Btn_CompetitionBrief_C_CalcCurrency_OnFastStart final
{
public:
	struct FCurrencyPlain                         Currency;                                          // 0x0000(0x0018)(Parm, OutParm)
	struct FDateTime                              CallFunc_UtcNow_ReturnValue;                       // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_410F[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-69 ])
	struct FDateTime                              CallFunc_GetBreakEndAt_ReturnValue;                // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimespan                              CallFunc_Subtract_DateTimeDateTime_ReturnValue;    // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetTotalSeconds_ReturnValue;              // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4110[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-69 ])
	struct FConfig_GroupCompetition               CallFunc_GetCompetitionGroupDefine_ReturnValue;    // 0x0040(0x0040)(ConstParm)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                         CallFunc_FCeil64_ReturnValue;                      // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue;              // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCurrencyDef                           CallFunc_GetCurrencyDefine__out_def;               // 0x0098(0x0168)()
	bool                                          CallFunc_GetCurrencyDefine_ReturnValue;            // 0x0200(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4111[0x7];                                     // 0x0201(0x0007)(Fixing Size After Last Property [ Dumper-69 ])
	int64                                         CallFunc_Multiply_Int64Int64_ReturnValue;          // 0x0208(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Conv_Int64ToDouble_ReturnValue;           // 0x0210(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FItemID_Currency                       CallFunc_ToCurrencyID_ReturnValue;                 // 0x0218(0x0010)(HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue;                       // 0x0228(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4112[0x4];                                     // 0x022C(0x0004)(Fixing Size After Last Property [ Dumper-69 ])
	struct FCurrencyPlain                         K2Node_MakeStruct_CurrencyPlain;                   // 0x0230(0x0018)()
	double                                        CallFunc_Divide_DoubleDouble_A_ImplicitCast;       // 0x0248(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Btn_CompetitionBrief_C_CalcCurrency_OnFastStart) == 0x000008, "Wrong alignment on Btn_CompetitionBrief_C_CalcCurrency_OnFastStart");
static_assert(sizeof(Btn_CompetitionBrief_C_CalcCurrency_OnFastStart) == 0x000250, "Wrong size on Btn_CompetitionBrief_C_CalcCurrency_OnFastStart");
static_assert(offsetof(Btn_CompetitionBrief_C_CalcCurrency_OnFastStart, Currency) == 0x000000, "Member 'Btn_CompetitionBrief_C_CalcCurrency_OnFastStart::Currency' has a wrong offset!");
static_assert(offsetof(Btn_CompetitionBrief_C_CalcCurrency_OnFastStart, CallFunc_UtcNow_ReturnValue) == 0x000018, "Member 'Btn_CompetitionBrief_C_CalcCurrency_OnFastStart::CallFunc_UtcNow_ReturnValue' has a wrong offset!");
static_assert(offsetof(Btn_CompetitionBrief_C_CalcCurrency_OnFastStart, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'Btn_CompetitionBrief_C_CalcCurrency_OnFastStart::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Btn_CompetitionBrief_C_CalcCurrency_OnFastStart, CallFunc_GetBreakEndAt_ReturnValue) == 0x000028, "Member 'Btn_CompetitionBrief_C_CalcCurrency_OnFastStart::CallFunc_GetBreakEndAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Btn_CompetitionBrief_C_CalcCurrency_OnFastStart, CallFunc_Subtract_DateTimeDateTime_ReturnValue) == 0x000030, "Member 'Btn_CompetitionBrief_C_CalcCurrency_OnFastStart::CallFunc_Subtract_DateTimeDateTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(Btn_CompetitionBrief_C_CalcCurrency_OnFastStart, CallFunc_GetTotalSeconds_ReturnValue) == 0x000038, "Member 'Btn_CompetitionBrief_C_CalcCurrency_OnFastStart::CallFunc_GetTotalSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(Btn_CompetitionBrief_C_CalcCurrency_OnFastStart, CallFunc_GetCompetitionGroupDefine_ReturnValue) == 0x000040, "Member 'Btn_CompetitionBrief_C_CalcCurrency_OnFastStart::CallFunc_GetCompetitionGroupDefine_ReturnValue' has a wrong offset!");
static_assert(offsetof(Btn_CompetitionBrief_C_CalcCurrency_OnFastStart, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000080, "Member 'Btn_CompetitionBrief_C_CalcCurrency_OnFastStart::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(Btn_CompetitionBrief_C_CalcCurrency_OnFastStart, CallFunc_FCeil64_ReturnValue) == 0x000088, "Member 'Btn_CompetitionBrief_C_CalcCurrency_OnFastStart::CallFunc_FCeil64_ReturnValue' has a wrong offset!");
static_assert(offsetof(Btn_CompetitionBrief_C_CalcCurrency_OnFastStart, CallFunc_Conv_IntToInt64_ReturnValue) == 0x000090, "Member 'Btn_CompetitionBrief_C_CalcCurrency_OnFastStart::CallFunc_Conv_IntToInt64_ReturnValue' has a wrong offset!");
static_assert(offsetof(Btn_CompetitionBrief_C_CalcCurrency_OnFastStart, CallFunc_GetCurrencyDefine__out_def) == 0x000098, "Member 'Btn_CompetitionBrief_C_CalcCurrency_OnFastStart::CallFunc_GetCurrencyDefine__out_def' has a wrong offset!");
static_assert(offsetof(Btn_CompetitionBrief_C_CalcCurrency_OnFastStart, CallFunc_GetCurrencyDefine_ReturnValue) == 0x000200, "Member 'Btn_CompetitionBrief_C_CalcCurrency_OnFastStart::CallFunc_GetCurrencyDefine_ReturnValue' has a wrong offset!");
static_assert(offsetof(Btn_CompetitionBrief_C_CalcCurrency_OnFastStart, CallFunc_Multiply_Int64Int64_ReturnValue) == 0x000208, "Member 'Btn_CompetitionBrief_C_CalcCurrency_OnFastStart::CallFunc_Multiply_Int64Int64_ReturnValue' has a wrong offset!");
static_assert(offsetof(Btn_CompetitionBrief_C_CalcCurrency_OnFastStart, CallFunc_Conv_Int64ToDouble_ReturnValue) == 0x000210, "Member 'Btn_CompetitionBrief_C_CalcCurrency_OnFastStart::CallFunc_Conv_Int64ToDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(Btn_CompetitionBrief_C_CalcCurrency_OnFastStart, CallFunc_ToCurrencyID_ReturnValue) == 0x000218, "Member 'Btn_CompetitionBrief_C_CalcCurrency_OnFastStart::CallFunc_ToCurrencyID_ReturnValue' has a wrong offset!");
static_assert(offsetof(Btn_CompetitionBrief_C_CalcCurrency_OnFastStart, CallFunc_FTrunc_ReturnValue) == 0x000228, "Member 'Btn_CompetitionBrief_C_CalcCurrency_OnFastStart::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(Btn_CompetitionBrief_C_CalcCurrency_OnFastStart, K2Node_MakeStruct_CurrencyPlain) == 0x000230, "Member 'Btn_CompetitionBrief_C_CalcCurrency_OnFastStart::K2Node_MakeStruct_CurrencyPlain' has a wrong offset!");
static_assert(offsetof(Btn_CompetitionBrief_C_CalcCurrency_OnFastStart, CallFunc_Divide_DoubleDouble_A_ImplicitCast) == 0x000248, "Member 'Btn_CompetitionBrief_C_CalcCurrency_OnFastStart::CallFunc_Divide_DoubleDouble_A_ImplicitCast' has a wrong offset!");

// Function Btn_CompetitionBrief.Btn_CompetitionBrief_C.BndEvt__Btn_CompetitionBrief_Btn_Hover_K2Node_ComponentBoundEvent_3_DM_OnSelectEnd__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct Btn_CompetitionBrief_C_BndEvt__Btn_CompetitionBrief_Btn_Hover_K2Node_ComponentBoundEvent_3_DM_OnSelectEnd__DelegateSignature final
{
public:
	class UAnimatableWidget*                      _widget;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          _select;                                           // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Btn_CompetitionBrief_C_BndEvt__Btn_CompetitionBrief_Btn_Hover_K2Node_ComponentBoundEvent_3_DM_OnSelectEnd__DelegateSignature) == 0x000008, "Wrong alignment on Btn_CompetitionBrief_C_BndEvt__Btn_CompetitionBrief_Btn_Hover_K2Node_ComponentBoundEvent_3_DM_OnSelectEnd__DelegateSignature");
static_assert(sizeof(Btn_CompetitionBrief_C_BndEvt__Btn_CompetitionBrief_Btn_Hover_K2Node_ComponentBoundEvent_3_DM_OnSelectEnd__DelegateSignature) == 0x000010, "Wrong size on Btn_CompetitionBrief_C_BndEvt__Btn_CompetitionBrief_Btn_Hover_K2Node_ComponentBoundEvent_3_DM_OnSelectEnd__DelegateSignature");
static_assert(offsetof(Btn_CompetitionBrief_C_BndEvt__Btn_CompetitionBrief_Btn_Hover_K2Node_ComponentBoundEvent_3_DM_OnSelectEnd__DelegateSignature, _widget) == 0x000000, "Member 'Btn_CompetitionBrief_C_BndEvt__Btn_CompetitionBrief_Btn_Hover_K2Node_ComponentBoundEvent_3_DM_OnSelectEnd__DelegateSignature::_widget' has a wrong offset!");
static_assert(offsetof(Btn_CompetitionBrief_C_BndEvt__Btn_CompetitionBrief_Btn_Hover_K2Node_ComponentBoundEvent_3_DM_OnSelectEnd__DelegateSignature, _select) == 0x000008, "Member 'Btn_CompetitionBrief_C_BndEvt__Btn_CompetitionBrief_Btn_Hover_K2Node_ComponentBoundEvent_3_DM_OnSelectEnd__DelegateSignature::_select' has a wrong offset!");

// Function Btn_CompetitionBrief.Btn_CompetitionBrief_C.BndEvt__Btn_CompetitionBrief_Btn_FastStart_K2Node_ComponentBoundEvent_1_DM_OnSelectEnd__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct Btn_CompetitionBrief_C_BndEvt__Btn_CompetitionBrief_Btn_FastStart_K2Node_ComponentBoundEvent_1_DM_OnSelectEnd__DelegateSignature final
{
public:
	class UAnimatableWidget*                      _widget;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          _select;                                           // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Btn_CompetitionBrief_C_BndEvt__Btn_CompetitionBrief_Btn_FastStart_K2Node_ComponentBoundEvent_1_DM_OnSelectEnd__DelegateSignature) == 0x000008, "Wrong alignment on Btn_CompetitionBrief_C_BndEvt__Btn_CompetitionBrief_Btn_FastStart_K2Node_ComponentBoundEvent_1_DM_OnSelectEnd__DelegateSignature");
static_assert(sizeof(Btn_CompetitionBrief_C_BndEvt__Btn_CompetitionBrief_Btn_FastStart_K2Node_ComponentBoundEvent_1_DM_OnSelectEnd__DelegateSignature) == 0x000010, "Wrong size on Btn_CompetitionBrief_C_BndEvt__Btn_CompetitionBrief_Btn_FastStart_K2Node_ComponentBoundEvent_1_DM_OnSelectEnd__DelegateSignature");
static_assert(offsetof(Btn_CompetitionBrief_C_BndEvt__Btn_CompetitionBrief_Btn_FastStart_K2Node_ComponentBoundEvent_1_DM_OnSelectEnd__DelegateSignature, _widget) == 0x000000, "Member 'Btn_CompetitionBrief_C_BndEvt__Btn_CompetitionBrief_Btn_FastStart_K2Node_ComponentBoundEvent_1_DM_OnSelectEnd__DelegateSignature::_widget' has a wrong offset!");
static_assert(offsetof(Btn_CompetitionBrief_C_BndEvt__Btn_CompetitionBrief_Btn_FastStart_K2Node_ComponentBoundEvent_1_DM_OnSelectEnd__DelegateSignature, _select) == 0x000008, "Member 'Btn_CompetitionBrief_C_BndEvt__Btn_CompetitionBrief_Btn_FastStart_K2Node_ComponentBoundEvent_1_DM_OnSelectEnd__DelegateSignature::_select' has a wrong offset!");

}

