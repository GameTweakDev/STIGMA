#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: UI_Event_CompleteCountRewards

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Stigma_structs.hpp"


namespace SDK::Params
{

// Function UI_Event_CompleteCountRewards.UI_Event_CompleteCountRewards_C.BndEvt__UI_Event_CompleteCountRewards_Ctrl_CommonButton_K2Node_ComponentBoundEvent_0_DM_OnSelectEnd__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct UI_Event_CompleteCountRewards_C_BndEvt__UI_Event_CompleteCountRewards_Ctrl_CommonButton_K2Node_ComponentBoundEvent_0_DM_OnSelectEnd__DelegateSignature final
{
public:
	class UAnimatableWidget*                      _widget;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          _select;                                           // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Event_CompleteCountRewards_C_BndEvt__UI_Event_CompleteCountRewards_Ctrl_CommonButton_K2Node_ComponentBoundEvent_0_DM_OnSelectEnd__DelegateSignature) == 0x000008, "Wrong alignment on UI_Event_CompleteCountRewards_C_BndEvt__UI_Event_CompleteCountRewards_Ctrl_CommonButton_K2Node_ComponentBoundEvent_0_DM_OnSelectEnd__DelegateSignature");
static_assert(sizeof(UI_Event_CompleteCountRewards_C_BndEvt__UI_Event_CompleteCountRewards_Ctrl_CommonButton_K2Node_ComponentBoundEvent_0_DM_OnSelectEnd__DelegateSignature) == 0x000010, "Wrong size on UI_Event_CompleteCountRewards_C_BndEvt__UI_Event_CompleteCountRewards_Ctrl_CommonButton_K2Node_ComponentBoundEvent_0_DM_OnSelectEnd__DelegateSignature");
static_assert(offsetof(UI_Event_CompleteCountRewards_C_BndEvt__UI_Event_CompleteCountRewards_Ctrl_CommonButton_K2Node_ComponentBoundEvent_0_DM_OnSelectEnd__DelegateSignature, _widget) == 0x000000, "Member 'UI_Event_CompleteCountRewards_C_BndEvt__UI_Event_CompleteCountRewards_Ctrl_CommonButton_K2Node_ComponentBoundEvent_0_DM_OnSelectEnd__DelegateSignature::_widget' has a wrong offset!");
static_assert(offsetof(UI_Event_CompleteCountRewards_C_BndEvt__UI_Event_CompleteCountRewards_Ctrl_CommonButton_K2Node_ComponentBoundEvent_0_DM_OnSelectEnd__DelegateSignature, _select) == 0x000008, "Member 'UI_Event_CompleteCountRewards_C_BndEvt__UI_Event_CompleteCountRewards_Ctrl_CommonButton_K2Node_ComponentBoundEvent_0_DM_OnSelectEnd__DelegateSignature::_select' has a wrong offset!");

// Function UI_Event_CompleteCountRewards.UI_Event_CompleteCountRewards_C.ExecuteUbergraph_UI_Event_CompleteCountRewards
// 0x0018 (0x0018 - 0x0000)
struct UI_Event_CompleteCountRewards_C_ExecuteUbergraph_UI_Event_CompleteCountRewards final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3534[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-69 ])
	class UAnimatableWidget*                      K2Node_ComponentBoundEvent__widget;                // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent__select;                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Event_CompleteCountRewards_C_ExecuteUbergraph_UI_Event_CompleteCountRewards) == 0x000008, "Wrong alignment on UI_Event_CompleteCountRewards_C_ExecuteUbergraph_UI_Event_CompleteCountRewards");
static_assert(sizeof(UI_Event_CompleteCountRewards_C_ExecuteUbergraph_UI_Event_CompleteCountRewards) == 0x000018, "Wrong size on UI_Event_CompleteCountRewards_C_ExecuteUbergraph_UI_Event_CompleteCountRewards");
static_assert(offsetof(UI_Event_CompleteCountRewards_C_ExecuteUbergraph_UI_Event_CompleteCountRewards, EntryPoint) == 0x000000, "Member 'UI_Event_CompleteCountRewards_C_ExecuteUbergraph_UI_Event_CompleteCountRewards::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_Event_CompleteCountRewards_C_ExecuteUbergraph_UI_Event_CompleteCountRewards, K2Node_ComponentBoundEvent__widget) == 0x000008, "Member 'UI_Event_CompleteCountRewards_C_ExecuteUbergraph_UI_Event_CompleteCountRewards::K2Node_ComponentBoundEvent__widget' has a wrong offset!");
static_assert(offsetof(UI_Event_CompleteCountRewards_C_ExecuteUbergraph_UI_Event_CompleteCountRewards, K2Node_ComponentBoundEvent__select) == 0x000010, "Member 'UI_Event_CompleteCountRewards_C_ExecuteUbergraph_UI_Event_CompleteCountRewards::K2Node_ComponentBoundEvent__select' has a wrong offset!");

// Function UI_Event_CompleteCountRewards.UI_Event_CompleteCountRewards_C.InitWidget
// 0x0278 (0x0278 - 0x0000)
struct UI_Event_CompleteCountRewards_C_InitWidget final
{
public:
	struct FItemID_EventPage                      EventPageID;                                       // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	TArray<class UUI_Comp_RewardItem_C*>          Items;                                             // 0x0010(0x0010)(Edit, BlueprintVisible, ContainsInstancedReference)
	struct FEventKeepConnectDefine                Def;                                               // 0x0020(0x0038)(Edit, BlueprintVisible)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3535[0x3];                                     // 0x0065(0x0003)(Fixing Size After Last Property [ Dumper-69 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3536[0x4];                                     // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-69 ])
	struct FEventPageCompleteCountReward          CallFunc_Array_Get_Item;                           // 0x0070(0x0018)()
	int32                                         CallFunc_MakeLiteralInt_ReturnValue;               // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3537[0x4];                                     // 0x008C(0x0004)(Fixing Size After Last Property [ Dumper-69 ])
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue;              // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0098(0x0050)(HasGetValueTypeHash)
	int32                                         CallFunc_MakeLiteralInt_ReturnValue_1;             // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3538[0x4];                                     // 0x00EC(0x0004)(Fixing Size After Last Property [ Dumper-69 ])
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00F0(0x0010)(ReferenceParm)
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue_1;            // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0108(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0120(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_1;                          // 0x0170(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue_1;                     // 0x0180(0x0018)()
	int32                                         CallFunc_MakeLiteralInt_ReturnValue_2;             // 0x0198(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3539[0x4];                                     // 0x019C(0x0004)(Fixing Size After Last Property [ Dumper-69 ])
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue_2;            // 0x01A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FEventKeepConnectDefine                CallFunc_GetEventKeepConnectDefineByID_ReturnValue; // 0x01A8(0x0038)(ConstParm)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_2;            // 0x01E0(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_2;                          // 0x0230(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue_2;                     // 0x0240(0x0018)()
	int32                                         CallFunc_GetSubCategoryByItemID_ReturnValue;       // 0x0258(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x025C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x025D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_353A[0x2];                                     // 0x025E(0x0002)(Fixing Size After Last Property [ Dumper-69 ])
	class UUI_Comp_RewardItem_C*                  CallFunc_Array_Get_Item_1;                         // 0x0260(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0268(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0269(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_353B[0x2];                                     // 0x026A(0x0002)(Fixing Size After Last Property [ Dumper-69 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x026C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x0270(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_2;                  // 0x0274(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Event_CompleteCountRewards_C_InitWidget) == 0x000008, "Wrong alignment on UI_Event_CompleteCountRewards_C_InitWidget");
static_assert(sizeof(UI_Event_CompleteCountRewards_C_InitWidget) == 0x000278, "Wrong size on UI_Event_CompleteCountRewards_C_InitWidget");
static_assert(offsetof(UI_Event_CompleteCountRewards_C_InitWidget, EventPageID) == 0x000000, "Member 'UI_Event_CompleteCountRewards_C_InitWidget::EventPageID' has a wrong offset!");
static_assert(offsetof(UI_Event_CompleteCountRewards_C_InitWidget, Items) == 0x000010, "Member 'UI_Event_CompleteCountRewards_C_InitWidget::Items' has a wrong offset!");
static_assert(offsetof(UI_Event_CompleteCountRewards_C_InitWidget, Def) == 0x000020, "Member 'UI_Event_CompleteCountRewards_C_InitWidget::Def' has a wrong offset!");
static_assert(offsetof(UI_Event_CompleteCountRewards_C_InitWidget, Temp_int_Loop_Counter_Variable) == 0x000058, "Member 'UI_Event_CompleteCountRewards_C_InitWidget::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(UI_Event_CompleteCountRewards_C_InitWidget, CallFunc_Array_Length_ReturnValue) == 0x00005C, "Member 'UI_Event_CompleteCountRewards_C_InitWidget::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Event_CompleteCountRewards_C_InitWidget, CallFunc_Add_IntInt_ReturnValue) == 0x000060, "Member 'UI_Event_CompleteCountRewards_C_InitWidget::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Event_CompleteCountRewards_C_InitWidget, CallFunc_Less_IntInt_ReturnValue) == 0x000064, "Member 'UI_Event_CompleteCountRewards_C_InitWidget::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Event_CompleteCountRewards_C_InitWidget, Temp_int_Array_Index_Variable) == 0x000068, "Member 'UI_Event_CompleteCountRewards_C_InitWidget::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(UI_Event_CompleteCountRewards_C_InitWidget, CallFunc_Array_Get_Item) == 0x000070, "Member 'UI_Event_CompleteCountRewards_C_InitWidget::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(UI_Event_CompleteCountRewards_C_InitWidget, CallFunc_MakeLiteralInt_ReturnValue) == 0x000088, "Member 'UI_Event_CompleteCountRewards_C_InitWidget::CallFunc_MakeLiteralInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Event_CompleteCountRewards_C_InitWidget, CallFunc_Conv_IntToInt64_ReturnValue) == 0x000090, "Member 'UI_Event_CompleteCountRewards_C_InitWidget::CallFunc_Conv_IntToInt64_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Event_CompleteCountRewards_C_InitWidget, K2Node_MakeStruct_FormatArgumentData) == 0x000098, "Member 'UI_Event_CompleteCountRewards_C_InitWidget::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(UI_Event_CompleteCountRewards_C_InitWidget, CallFunc_MakeLiteralInt_ReturnValue_1) == 0x0000E8, "Member 'UI_Event_CompleteCountRewards_C_InitWidget::CallFunc_MakeLiteralInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_Event_CompleteCountRewards_C_InitWidget, K2Node_MakeArray_Array) == 0x0000F0, "Member 'UI_Event_CompleteCountRewards_C_InitWidget::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(UI_Event_CompleteCountRewards_C_InitWidget, CallFunc_Conv_IntToInt64_ReturnValue_1) == 0x000100, "Member 'UI_Event_CompleteCountRewards_C_InitWidget::CallFunc_Conv_IntToInt64_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_Event_CompleteCountRewards_C_InitWidget, CallFunc_Format_ReturnValue) == 0x000108, "Member 'UI_Event_CompleteCountRewards_C_InitWidget::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Event_CompleteCountRewards_C_InitWidget, K2Node_MakeStruct_FormatArgumentData_1) == 0x000120, "Member 'UI_Event_CompleteCountRewards_C_InitWidget::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(UI_Event_CompleteCountRewards_C_InitWidget, K2Node_MakeArray_Array_1) == 0x000170, "Member 'UI_Event_CompleteCountRewards_C_InitWidget::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(UI_Event_CompleteCountRewards_C_InitWidget, CallFunc_Format_ReturnValue_1) == 0x000180, "Member 'UI_Event_CompleteCountRewards_C_InitWidget::CallFunc_Format_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_Event_CompleteCountRewards_C_InitWidget, CallFunc_MakeLiteralInt_ReturnValue_2) == 0x000198, "Member 'UI_Event_CompleteCountRewards_C_InitWidget::CallFunc_MakeLiteralInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UI_Event_CompleteCountRewards_C_InitWidget, CallFunc_Conv_IntToInt64_ReturnValue_2) == 0x0001A0, "Member 'UI_Event_CompleteCountRewards_C_InitWidget::CallFunc_Conv_IntToInt64_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UI_Event_CompleteCountRewards_C_InitWidget, CallFunc_GetEventKeepConnectDefineByID_ReturnValue) == 0x0001A8, "Member 'UI_Event_CompleteCountRewards_C_InitWidget::CallFunc_GetEventKeepConnectDefineByID_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Event_CompleteCountRewards_C_InitWidget, K2Node_MakeStruct_FormatArgumentData_2) == 0x0001E0, "Member 'UI_Event_CompleteCountRewards_C_InitWidget::K2Node_MakeStruct_FormatArgumentData_2' has a wrong offset!");
static_assert(offsetof(UI_Event_CompleteCountRewards_C_InitWidget, K2Node_MakeArray_Array_2) == 0x000230, "Member 'UI_Event_CompleteCountRewards_C_InitWidget::K2Node_MakeArray_Array_2' has a wrong offset!");
static_assert(offsetof(UI_Event_CompleteCountRewards_C_InitWidget, CallFunc_Format_ReturnValue_2) == 0x000240, "Member 'UI_Event_CompleteCountRewards_C_InitWidget::CallFunc_Format_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UI_Event_CompleteCountRewards_C_InitWidget, CallFunc_GetSubCategoryByItemID_ReturnValue) == 0x000258, "Member 'UI_Event_CompleteCountRewards_C_InitWidget::CallFunc_GetSubCategoryByItemID_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Event_CompleteCountRewards_C_InitWidget, CallFunc_Conv_IntToByte_ReturnValue) == 0x00025C, "Member 'UI_Event_CompleteCountRewards_C_InitWidget::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Event_CompleteCountRewards_C_InitWidget, CallFunc_GetValidValue_ReturnValue) == 0x00025D, "Member 'UI_Event_CompleteCountRewards_C_InitWidget::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Event_CompleteCountRewards_C_InitWidget, CallFunc_Array_Get_Item_1) == 0x000260, "Member 'UI_Event_CompleteCountRewards_C_InitWidget::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(UI_Event_CompleteCountRewards_C_InitWidget, CallFunc_IsValid_ReturnValue) == 0x000268, "Member 'UI_Event_CompleteCountRewards_C_InitWidget::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Event_CompleteCountRewards_C_InitWidget, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000269, "Member 'UI_Event_CompleteCountRewards_C_InitWidget::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Event_CompleteCountRewards_C_InitWidget, CallFunc_Array_Add_ReturnValue) == 0x00026C, "Member 'UI_Event_CompleteCountRewards_C_InitWidget::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Event_CompleteCountRewards_C_InitWidget, CallFunc_Array_Add_ReturnValue_1) == 0x000270, "Member 'UI_Event_CompleteCountRewards_C_InitWidget::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_Event_CompleteCountRewards_C_InitWidget, CallFunc_Array_Add_ReturnValue_2) == 0x000274, "Member 'UI_Event_CompleteCountRewards_C_InitWidget::CallFunc_Array_Add_ReturnValue_2' has a wrong offset!");

// Function UI_Event_CompleteCountRewards.UI_Event_CompleteCountRewards_C.UpdateWidget
// 0x00B0 (0x00B0 - 0x0000)
struct UI_Event_CompleteCountRewards_C_UpdateWidget final
{
public:
	int32                                         Count;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         RewardCount;                                       // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_353C[0x6];                                     // 0x000A(0x0006)(Fixing Size After Last Property [ Dumper-69 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0010(0x0018)()
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_353D[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-69 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0030(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0080(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0090(0x0018)()
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue_1;        // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue_2;        // 0x00A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_2;             // 0x00AA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Event_CompleteCountRewards_C_UpdateWidget) == 0x000008, "Wrong alignment on UI_Event_CompleteCountRewards_C_UpdateWidget");
static_assert(sizeof(UI_Event_CompleteCountRewards_C_UpdateWidget) == 0x0000B0, "Wrong size on UI_Event_CompleteCountRewards_C_UpdateWidget");
static_assert(offsetof(UI_Event_CompleteCountRewards_C_UpdateWidget, Count) == 0x000000, "Member 'UI_Event_CompleteCountRewards_C_UpdateWidget::Count' has a wrong offset!");
static_assert(offsetof(UI_Event_CompleteCountRewards_C_UpdateWidget, RewardCount) == 0x000004, "Member 'UI_Event_CompleteCountRewards_C_UpdateWidget::RewardCount' has a wrong offset!");
static_assert(offsetof(UI_Event_CompleteCountRewards_C_UpdateWidget, CallFunc_Greater_IntInt_ReturnValue) == 0x000008, "Member 'UI_Event_CompleteCountRewards_C_UpdateWidget::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Event_CompleteCountRewards_C_UpdateWidget, CallFunc_Greater_IntInt_ReturnValue_1) == 0x000009, "Member 'UI_Event_CompleteCountRewards_C_UpdateWidget::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_Event_CompleteCountRewards_C_UpdateWidget, CallFunc_Conv_IntToText_ReturnValue) == 0x000010, "Member 'UI_Event_CompleteCountRewards_C_UpdateWidget::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Event_CompleteCountRewards_C_UpdateWidget, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000028, "Member 'UI_Event_CompleteCountRewards_C_UpdateWidget::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Event_CompleteCountRewards_C_UpdateWidget, K2Node_MakeStruct_FormatArgumentData) == 0x000030, "Member 'UI_Event_CompleteCountRewards_C_UpdateWidget::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(UI_Event_CompleteCountRewards_C_UpdateWidget, K2Node_MakeArray_Array) == 0x000080, "Member 'UI_Event_CompleteCountRewards_C_UpdateWidget::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(UI_Event_CompleteCountRewards_C_UpdateWidget, CallFunc_Format_ReturnValue) == 0x000090, "Member 'UI_Event_CompleteCountRewards_C_UpdateWidget::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Event_CompleteCountRewards_C_UpdateWidget, CallFunc_GreaterEqual_IntInt_ReturnValue_1) == 0x0000A8, "Member 'UI_Event_CompleteCountRewards_C_UpdateWidget::CallFunc_GreaterEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_Event_CompleteCountRewards_C_UpdateWidget, CallFunc_GreaterEqual_IntInt_ReturnValue_2) == 0x0000A9, "Member 'UI_Event_CompleteCountRewards_C_UpdateWidget::CallFunc_GreaterEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UI_Event_CompleteCountRewards_C_UpdateWidget, CallFunc_Greater_IntInt_ReturnValue_2) == 0x0000AA, "Member 'UI_Event_CompleteCountRewards_C_UpdateWidget::CallFunc_Greater_IntInt_ReturnValue_2' has a wrong offset!");

}

