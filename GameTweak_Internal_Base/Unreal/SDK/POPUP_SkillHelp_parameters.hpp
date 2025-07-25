#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: POPUP_SkillHelp

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"
#include "Stigma_structs.hpp"


namespace SDK::Params
{

// Function POPUP_SkillHelp.POPUP_SkillHelp_C.ActivateTab
// 0x005C (0x005C - 0x0000)
struct POPUP_SkillHelp_C_ActivateTab final
{
public:
	class FName                                   _tab_id;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0008(0x0014)()
	bool                                          K2Node_SwitchName_CmpSuccess;                      // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A5F[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-69 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0020(0x0014)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_2;                    // 0x0034(0x0014)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_3;                    // 0x0048(0x0014)()
};
static_assert(alignof(POPUP_SkillHelp_C_ActivateTab) == 0x000004, "Wrong alignment on POPUP_SkillHelp_C_ActivateTab");
static_assert(sizeof(POPUP_SkillHelp_C_ActivateTab) == 0x00005C, "Wrong size on POPUP_SkillHelp_C_ActivateTab");
static_assert(offsetof(POPUP_SkillHelp_C_ActivateTab, _tab_id) == 0x000000, "Member 'POPUP_SkillHelp_C_ActivateTab::_tab_id' has a wrong offset!");
static_assert(offsetof(POPUP_SkillHelp_C_ActivateTab, K2Node_MakeStruct_SlateColor) == 0x000008, "Member 'POPUP_SkillHelp_C_ActivateTab::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(POPUP_SkillHelp_C_ActivateTab, K2Node_SwitchName_CmpSuccess) == 0x00001C, "Member 'POPUP_SkillHelp_C_ActivateTab::K2Node_SwitchName_CmpSuccess' has a wrong offset!");
static_assert(offsetof(POPUP_SkillHelp_C_ActivateTab, K2Node_MakeStruct_SlateColor_1) == 0x000020, "Member 'POPUP_SkillHelp_C_ActivateTab::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(POPUP_SkillHelp_C_ActivateTab, K2Node_MakeStruct_SlateColor_2) == 0x000034, "Member 'POPUP_SkillHelp_C_ActivateTab::K2Node_MakeStruct_SlateColor_2' has a wrong offset!");
static_assert(offsetof(POPUP_SkillHelp_C_ActivateTab, K2Node_MakeStruct_SlateColor_3) == 0x000048, "Member 'POPUP_SkillHelp_C_ActivateTab::K2Node_MakeStruct_SlateColor_3' has a wrong offset!");

// Function POPUP_SkillHelp.POPUP_SkillHelp_C.ExecuteUbergraph_POPUP_SkillHelp
// 0x0050 (0x0050 - 0x0000)
struct POPUP_SkillHelp_C_ExecuteUbergraph_POPUP_SkillHelp final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A60[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-69 ])
	class ULocalPlayerContext*                    CallFunc_GetLocalPlayerContext_ReturnValue;        // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A61[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-69 ])
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class ULocalPlayerContext*                    CallFunc_GetLocalPlayerContext_ReturnValue_1;      // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A62[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-69 ])
	class FString                                 CallFunc_Conv_NameToString_ReturnValue_1;          // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ECharaType                                    CallFunc_GetCurrentCharacterType_ReturnValue;      // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(POPUP_SkillHelp_C_ExecuteUbergraph_POPUP_SkillHelp) == 0x000008, "Wrong alignment on POPUP_SkillHelp_C_ExecuteUbergraph_POPUP_SkillHelp");
static_assert(sizeof(POPUP_SkillHelp_C_ExecuteUbergraph_POPUP_SkillHelp) == 0x000050, "Wrong size on POPUP_SkillHelp_C_ExecuteUbergraph_POPUP_SkillHelp");
static_assert(offsetof(POPUP_SkillHelp_C_ExecuteUbergraph_POPUP_SkillHelp, EntryPoint) == 0x000000, "Member 'POPUP_SkillHelp_C_ExecuteUbergraph_POPUP_SkillHelp::EntryPoint' has a wrong offset!");
static_assert(offsetof(POPUP_SkillHelp_C_ExecuteUbergraph_POPUP_SkillHelp, CallFunc_GetLocalPlayerContext_ReturnValue) == 0x000008, "Member 'POPUP_SkillHelp_C_ExecuteUbergraph_POPUP_SkillHelp::CallFunc_GetLocalPlayerContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(POPUP_SkillHelp_C_ExecuteUbergraph_POPUP_SkillHelp, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'POPUP_SkillHelp_C_ExecuteUbergraph_POPUP_SkillHelp::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(POPUP_SkillHelp_C_ExecuteUbergraph_POPUP_SkillHelp, CallFunc_Conv_NameToString_ReturnValue) == 0x000018, "Member 'POPUP_SkillHelp_C_ExecuteUbergraph_POPUP_SkillHelp::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(POPUP_SkillHelp_C_ExecuteUbergraph_POPUP_SkillHelp, CallFunc_GetLocalPlayerContext_ReturnValue_1) == 0x000028, "Member 'POPUP_SkillHelp_C_ExecuteUbergraph_POPUP_SkillHelp::CallFunc_GetLocalPlayerContext_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(POPUP_SkillHelp_C_ExecuteUbergraph_POPUP_SkillHelp, CallFunc_IsValid_ReturnValue_1) == 0x000030, "Member 'POPUP_SkillHelp_C_ExecuteUbergraph_POPUP_SkillHelp::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(POPUP_SkillHelp_C_ExecuteUbergraph_POPUP_SkillHelp, CallFunc_Conv_NameToString_ReturnValue_1) == 0x000038, "Member 'POPUP_SkillHelp_C_ExecuteUbergraph_POPUP_SkillHelp::CallFunc_Conv_NameToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(POPUP_SkillHelp_C_ExecuteUbergraph_POPUP_SkillHelp, CallFunc_GetCurrentCharacterType_ReturnValue) == 0x000048, "Member 'POPUP_SkillHelp_C_ExecuteUbergraph_POPUP_SkillHelp::CallFunc_GetCurrentCharacterType_ReturnValue' has a wrong offset!");

// Function POPUP_SkillHelp.POPUP_SkillHelp_C.SetCharaType
// 0x0001 (0x0001 - 0x0000)
struct POPUP_SkillHelp_C_SetCharaType final
{
public:
	ECharaType                                    _chara_type;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(POPUP_SkillHelp_C_SetCharaType) == 0x000001, "Wrong alignment on POPUP_SkillHelp_C_SetCharaType");
static_assert(sizeof(POPUP_SkillHelp_C_SetCharaType) == 0x000001, "Wrong size on POPUP_SkillHelp_C_SetCharaType");
static_assert(offsetof(POPUP_SkillHelp_C_SetCharaType, _chara_type) == 0x000000, "Member 'POPUP_SkillHelp_C_SetCharaType::_chara_type' has a wrong offset!");

// Function POPUP_SkillHelp.POPUP_SkillHelp_C.UpdateModeDetail
// 0x0428 (0x0428 - 0x0000)
struct POPUP_SkillHelp_C_UpdateModeDetail final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateChildSize                        K2Node_MakeStruct_SlateChildSize;                  // 0x000C(0x0008)(NoDestructor)
	uint8                                         Pad_3A63[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-69 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUI_Help_ModeDetailEntry_C*             CallFunc_Create_ReturnValue;                       // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBoxSlot*                     K2Node_DynamicCast_As________;                     // 0x0030(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A64[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-69 ])
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;                 // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABattleGameStateBase*                   K2Node_DynamicCast_AsBattle_Game_State_Base;       // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A65[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-69 ])
	struct FMode                                  CallFunc_GetModeConfig_ReturnValue;                // 0x0058(0x0370)(ConstParm)
	struct FModeHelpDetails                       CallFunc_Array_Get_Item;                           // 0x03C8(0x0058)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0420(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0424(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(POPUP_SkillHelp_C_UpdateModeDetail) == 0x000008, "Wrong alignment on POPUP_SkillHelp_C_UpdateModeDetail");
static_assert(sizeof(POPUP_SkillHelp_C_UpdateModeDetail) == 0x000428, "Wrong size on POPUP_SkillHelp_C_UpdateModeDetail");
static_assert(offsetof(POPUP_SkillHelp_C_UpdateModeDetail, Temp_int_Array_Index_Variable) == 0x000000, "Member 'POPUP_SkillHelp_C_UpdateModeDetail::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(POPUP_SkillHelp_C_UpdateModeDetail, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'POPUP_SkillHelp_C_UpdateModeDetail::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(POPUP_SkillHelp_C_UpdateModeDetail, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'POPUP_SkillHelp_C_UpdateModeDetail::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(POPUP_SkillHelp_C_UpdateModeDetail, K2Node_MakeStruct_SlateChildSize) == 0x00000C, "Member 'POPUP_SkillHelp_C_UpdateModeDetail::K2Node_MakeStruct_SlateChildSize' has a wrong offset!");
static_assert(offsetof(POPUP_SkillHelp_C_UpdateModeDetail, CallFunc_GetPlayerController_ReturnValue) == 0x000018, "Member 'POPUP_SkillHelp_C_UpdateModeDetail::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(POPUP_SkillHelp_C_UpdateModeDetail, CallFunc_Create_ReturnValue) == 0x000020, "Member 'POPUP_SkillHelp_C_UpdateModeDetail::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(POPUP_SkillHelp_C_UpdateModeDetail, CallFunc_AddChild_ReturnValue) == 0x000028, "Member 'POPUP_SkillHelp_C_UpdateModeDetail::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(POPUP_SkillHelp_C_UpdateModeDetail, K2Node_DynamicCast_As________) == 0x000030, "Member 'POPUP_SkillHelp_C_UpdateModeDetail::K2Node_DynamicCast_As________' has a wrong offset!");
static_assert(offsetof(POPUP_SkillHelp_C_UpdateModeDetail, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'POPUP_SkillHelp_C_UpdateModeDetail::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(POPUP_SkillHelp_C_UpdateModeDetail, CallFunc_GetGameState_ReturnValue) == 0x000040, "Member 'POPUP_SkillHelp_C_UpdateModeDetail::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(POPUP_SkillHelp_C_UpdateModeDetail, K2Node_DynamicCast_AsBattle_Game_State_Base) == 0x000048, "Member 'POPUP_SkillHelp_C_UpdateModeDetail::K2Node_DynamicCast_AsBattle_Game_State_Base' has a wrong offset!");
static_assert(offsetof(POPUP_SkillHelp_C_UpdateModeDetail, K2Node_DynamicCast_bSuccess_1) == 0x000050, "Member 'POPUP_SkillHelp_C_UpdateModeDetail::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(POPUP_SkillHelp_C_UpdateModeDetail, CallFunc_GetModeConfig_ReturnValue) == 0x000058, "Member 'POPUP_SkillHelp_C_UpdateModeDetail::CallFunc_GetModeConfig_ReturnValue' has a wrong offset!");
static_assert(offsetof(POPUP_SkillHelp_C_UpdateModeDetail, CallFunc_Array_Get_Item) == 0x0003C8, "Member 'POPUP_SkillHelp_C_UpdateModeDetail::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(POPUP_SkillHelp_C_UpdateModeDetail, CallFunc_Array_Length_ReturnValue) == 0x000420, "Member 'POPUP_SkillHelp_C_UpdateModeDetail::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(POPUP_SkillHelp_C_UpdateModeDetail, CallFunc_Less_IntInt_ReturnValue) == 0x000424, "Member 'POPUP_SkillHelp_C_UpdateModeDetail::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

}

