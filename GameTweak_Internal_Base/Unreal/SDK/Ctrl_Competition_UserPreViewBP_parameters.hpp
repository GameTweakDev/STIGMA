#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: Ctrl_Competition_UserPreViewBP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Stigma_structs.hpp"


namespace SDK::Params
{

// Function Ctrl_Competition_UserPreViewBP.Ctrl_Competition_UserPreViewBP_C.UpdateUI
// 0x0001 (0x0001 - 0x0000)
struct Ctrl_Competition_UserPreViewBP_C_UpdateUI final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Ctrl_Competition_UserPreViewBP_C_UpdateUI) == 0x000001, "Wrong alignment on Ctrl_Competition_UserPreViewBP_C_UpdateUI");
static_assert(sizeof(Ctrl_Competition_UserPreViewBP_C_UpdateUI) == 0x000001, "Wrong size on Ctrl_Competition_UserPreViewBP_C_UpdateUI");
static_assert(offsetof(Ctrl_Competition_UserPreViewBP_C_UpdateUI, ReturnValue) == 0x000000, "Member 'Ctrl_Competition_UserPreViewBP_C_UpdateUI::ReturnValue' has a wrong offset!");

// Function Ctrl_Competition_UserPreViewBP.Ctrl_Competition_UserPreViewBP_C.UpdateState
// 0x0030 (0x0030 - 0x0000)
struct Ctrl_Competition_UserPreViewBP_C_UpdateState final
{
public:
	struct FDateTime                              End_at;                                            // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsInBattle_ReturnValue;                   // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsMyBrief_ReturnValue;                    // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E4A[0x5];                                     // 0x000B(0x0005)(Fixing Size After Last Property [ Dumper-69 ])
	struct FDateTime                              CallFunc_GetEndAt_ReturnValue;                     // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              CallFunc_UtcNow_ReturnValue;                       // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimespan                              CallFunc_Subtract_DateTimeDateTime_ReturnValue;    // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_TimespanTimespan_ReturnValue;     // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Ctrl_Competition_UserPreViewBP_C_UpdateState) == 0x000008, "Wrong alignment on Ctrl_Competition_UserPreViewBP_C_UpdateState");
static_assert(sizeof(Ctrl_Competition_UserPreViewBP_C_UpdateState) == 0x000030, "Wrong size on Ctrl_Competition_UserPreViewBP_C_UpdateState");
static_assert(offsetof(Ctrl_Competition_UserPreViewBP_C_UpdateState, End_at) == 0x000000, "Member 'Ctrl_Competition_UserPreViewBP_C_UpdateState::End_at' has a wrong offset!");
static_assert(offsetof(Ctrl_Competition_UserPreViewBP_C_UpdateState, CallFunc_IsInBattle_ReturnValue) == 0x000008, "Member 'Ctrl_Competition_UserPreViewBP_C_UpdateState::CallFunc_IsInBattle_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ctrl_Competition_UserPreViewBP_C_UpdateState, CallFunc_IsMyBrief_ReturnValue) == 0x000009, "Member 'Ctrl_Competition_UserPreViewBP_C_UpdateState::CallFunc_IsMyBrief_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ctrl_Competition_UserPreViewBP_C_UpdateState, CallFunc_IsValid_ReturnValue) == 0x00000A, "Member 'Ctrl_Competition_UserPreViewBP_C_UpdateState::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ctrl_Competition_UserPreViewBP_C_UpdateState, CallFunc_GetEndAt_ReturnValue) == 0x000010, "Member 'Ctrl_Competition_UserPreViewBP_C_UpdateState::CallFunc_GetEndAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ctrl_Competition_UserPreViewBP_C_UpdateState, CallFunc_UtcNow_ReturnValue) == 0x000018, "Member 'Ctrl_Competition_UserPreViewBP_C_UpdateState::CallFunc_UtcNow_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ctrl_Competition_UserPreViewBP_C_UpdateState, CallFunc_Subtract_DateTimeDateTime_ReturnValue) == 0x000020, "Member 'Ctrl_Competition_UserPreViewBP_C_UpdateState::CallFunc_Subtract_DateTimeDateTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ctrl_Competition_UserPreViewBP_C_UpdateState, CallFunc_Greater_TimespanTimespan_ReturnValue) == 0x000028, "Member 'Ctrl_Competition_UserPreViewBP_C_UpdateState::CallFunc_Greater_TimespanTimespan_ReturnValue' has a wrong offset!");

// Function Ctrl_Competition_UserPreViewBP.Ctrl_Competition_UserPreViewBP_C.UpdateSize
// 0x0018 (0x0018 - 0x0000)
struct Ctrl_Competition_UserPreViewBP_C_UpdateSize final
{
public:
	double                                        CallFunc_BreakVector2D_X;                          // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector2D_Y;                          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast; // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast; // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Ctrl_Competition_UserPreViewBP_C_UpdateSize) == 0x000008, "Wrong alignment on Ctrl_Competition_UserPreViewBP_C_UpdateSize");
static_assert(sizeof(Ctrl_Competition_UserPreViewBP_C_UpdateSize) == 0x000018, "Wrong size on Ctrl_Competition_UserPreViewBP_C_UpdateSize");
static_assert(offsetof(Ctrl_Competition_UserPreViewBP_C_UpdateSize, CallFunc_BreakVector2D_X) == 0x000000, "Member 'Ctrl_Competition_UserPreViewBP_C_UpdateSize::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(Ctrl_Competition_UserPreViewBP_C_UpdateSize, CallFunc_BreakVector2D_Y) == 0x000008, "Member 'Ctrl_Competition_UserPreViewBP_C_UpdateSize::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(Ctrl_Competition_UserPreViewBP_C_UpdateSize, CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast) == 0x000010, "Member 'Ctrl_Competition_UserPreViewBP_C_UpdateSize::CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast' has a wrong offset!");
static_assert(offsetof(Ctrl_Competition_UserPreViewBP_C_UpdateSize, CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast) == 0x000014, "Member 'Ctrl_Competition_UserPreViewBP_C_UpdateSize::CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast' has a wrong offset!");

// Function Ctrl_Competition_UserPreViewBP.Ctrl_Competition_UserPreViewBP_C.UpdateRank
// 0x0100 (0x0100 - 0x0000)
struct Ctrl_Competition_UserPreViewBP_C_UpdateRank final
{
public:
	int32                                         Rank;                                              // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E4B[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-69 ])
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0010(0x0050)(HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E4C[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-69 ])
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0068(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0078(0x0018)()
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_1;                          // 0x0090(0x0010)(ReferenceParm)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E4D[0x7];                                     // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-69 ])
	class FText                                   CallFunc_Format_ReturnValue_1;                     // 0x00A8(0x0018)()
	float                                         CallFunc_GetRankPoint_ReturnValue;                 // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetRankPoint_ReturnValue_1;               // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_DoubleDouble_ReturnValue;       // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E4E[0x3];                                     // 0x00C9(0x0003)(Fixing Size After Last Property [ Dumper-69 ])
	int32                                         CallFunc_FTrunc_ReturnValue;                       // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x00D0(0x0018)()
	int32                                         CallFunc_GetRank_ReturnValue;                      // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E4F[0x4];                                     // 0x00EC(0x0004)(Fixing Size After Last Property [ Dumper-69 ])
	double                                        CallFunc_LessEqual_DoubleDouble_A_ImplicitCast;    // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FTrunc_A_ImplicitCast;                    // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Ctrl_Competition_UserPreViewBP_C_UpdateRank) == 0x000008, "Wrong alignment on Ctrl_Competition_UserPreViewBP_C_UpdateRank");
static_assert(sizeof(Ctrl_Competition_UserPreViewBP_C_UpdateRank) == 0x000100, "Wrong size on Ctrl_Competition_UserPreViewBP_C_UpdateRank");
static_assert(offsetof(Ctrl_Competition_UserPreViewBP_C_UpdateRank, Rank) == 0x000000, "Member 'Ctrl_Competition_UserPreViewBP_C_UpdateRank::Rank' has a wrong offset!");
static_assert(offsetof(Ctrl_Competition_UserPreViewBP_C_UpdateRank, K2Node_SwitchInteger_CmpSuccess) == 0x000004, "Member 'Ctrl_Competition_UserPreViewBP_C_UpdateRank::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");
static_assert(offsetof(Ctrl_Competition_UserPreViewBP_C_UpdateRank, CallFunc_Conv_IntToInt64_ReturnValue) == 0x000008, "Member 'Ctrl_Competition_UserPreViewBP_C_UpdateRank::CallFunc_Conv_IntToInt64_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ctrl_Competition_UserPreViewBP_C_UpdateRank, K2Node_MakeStruct_FormatArgumentData) == 0x000010, "Member 'Ctrl_Competition_UserPreViewBP_C_UpdateRank::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(Ctrl_Competition_UserPreViewBP_C_UpdateRank, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000060, "Member 'Ctrl_Competition_UserPreViewBP_C_UpdateRank::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ctrl_Competition_UserPreViewBP_C_UpdateRank, K2Node_MakeArray_Array) == 0x000068, "Member 'Ctrl_Competition_UserPreViewBP_C_UpdateRank::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(Ctrl_Competition_UserPreViewBP_C_UpdateRank, CallFunc_Format_ReturnValue) == 0x000078, "Member 'Ctrl_Competition_UserPreViewBP_C_UpdateRank::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ctrl_Competition_UserPreViewBP_C_UpdateRank, K2Node_MakeArray_Array_1) == 0x000090, "Member 'Ctrl_Competition_UserPreViewBP_C_UpdateRank::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(Ctrl_Competition_UserPreViewBP_C_UpdateRank, CallFunc_IsValid_ReturnValue) == 0x0000A0, "Member 'Ctrl_Competition_UserPreViewBP_C_UpdateRank::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ctrl_Competition_UserPreViewBP_C_UpdateRank, CallFunc_Format_ReturnValue_1) == 0x0000A8, "Member 'Ctrl_Competition_UserPreViewBP_C_UpdateRank::CallFunc_Format_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Ctrl_Competition_UserPreViewBP_C_UpdateRank, CallFunc_GetRankPoint_ReturnValue) == 0x0000C0, "Member 'Ctrl_Competition_UserPreViewBP_C_UpdateRank::CallFunc_GetRankPoint_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ctrl_Competition_UserPreViewBP_C_UpdateRank, CallFunc_GetRankPoint_ReturnValue_1) == 0x0000C4, "Member 'Ctrl_Competition_UserPreViewBP_C_UpdateRank::CallFunc_GetRankPoint_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Ctrl_Competition_UserPreViewBP_C_UpdateRank, CallFunc_LessEqual_DoubleDouble_ReturnValue) == 0x0000C8, "Member 'Ctrl_Competition_UserPreViewBP_C_UpdateRank::CallFunc_LessEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ctrl_Competition_UserPreViewBP_C_UpdateRank, CallFunc_FTrunc_ReturnValue) == 0x0000CC, "Member 'Ctrl_Competition_UserPreViewBP_C_UpdateRank::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ctrl_Competition_UserPreViewBP_C_UpdateRank, CallFunc_Conv_IntToText_ReturnValue) == 0x0000D0, "Member 'Ctrl_Competition_UserPreViewBP_C_UpdateRank::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ctrl_Competition_UserPreViewBP_C_UpdateRank, CallFunc_GetRank_ReturnValue) == 0x0000E8, "Member 'Ctrl_Competition_UserPreViewBP_C_UpdateRank::CallFunc_GetRank_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ctrl_Competition_UserPreViewBP_C_UpdateRank, CallFunc_LessEqual_DoubleDouble_A_ImplicitCast) == 0x0000F0, "Member 'Ctrl_Competition_UserPreViewBP_C_UpdateRank::CallFunc_LessEqual_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(Ctrl_Competition_UserPreViewBP_C_UpdateRank, CallFunc_FTrunc_A_ImplicitCast) == 0x0000F8, "Member 'Ctrl_Competition_UserPreViewBP_C_UpdateRank::CallFunc_FTrunc_A_ImplicitCast' has a wrong offset!");

// Function Ctrl_Competition_UserPreViewBP.Ctrl_Competition_UserPreViewBP_C.UpdateNickname
// 0x0078 (0x0078 - 0x0000)
struct Ctrl_Competition_UserPreViewBP_C_UpdateNickname final
{
public:
	struct FUserName                              CallFunc_GetUserNickName_ReturnValue;              // 0x0000(0x0018)(ConstParm, HasGetValueTypeHash)
	class FText                                   CallFunc_ToText_ReturnValue;                       // 0x0018(0x0018)()
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E50[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-69 ])
	struct FUserName                              CallFunc_GetNickname_ReturnValue;                  // 0x0038(0x0018)(HasGetValueTypeHash)
	class FString                                 CallFunc_ToString_ReturnValue;                     // 0x0050(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0060(0x0018)()
};
static_assert(alignof(Ctrl_Competition_UserPreViewBP_C_UpdateNickname) == 0x000008, "Wrong alignment on Ctrl_Competition_UserPreViewBP_C_UpdateNickname");
static_assert(sizeof(Ctrl_Competition_UserPreViewBP_C_UpdateNickname) == 0x000078, "Wrong size on Ctrl_Competition_UserPreViewBP_C_UpdateNickname");
static_assert(offsetof(Ctrl_Competition_UserPreViewBP_C_UpdateNickname, CallFunc_GetUserNickName_ReturnValue) == 0x000000, "Member 'Ctrl_Competition_UserPreViewBP_C_UpdateNickname::CallFunc_GetUserNickName_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ctrl_Competition_UserPreViewBP_C_UpdateNickname, CallFunc_ToText_ReturnValue) == 0x000018, "Member 'Ctrl_Competition_UserPreViewBP_C_UpdateNickname::CallFunc_ToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ctrl_Competition_UserPreViewBP_C_UpdateNickname, CallFunc_IsValid_ReturnValue) == 0x000030, "Member 'Ctrl_Competition_UserPreViewBP_C_UpdateNickname::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ctrl_Competition_UserPreViewBP_C_UpdateNickname, CallFunc_GetNickname_ReturnValue) == 0x000038, "Member 'Ctrl_Competition_UserPreViewBP_C_UpdateNickname::CallFunc_GetNickname_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ctrl_Competition_UserPreViewBP_C_UpdateNickname, CallFunc_ToString_ReturnValue) == 0x000050, "Member 'Ctrl_Competition_UserPreViewBP_C_UpdateNickname::CallFunc_ToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ctrl_Competition_UserPreViewBP_C_UpdateNickname, CallFunc_Conv_StringToText_ReturnValue) == 0x000060, "Member 'Ctrl_Competition_UserPreViewBP_C_UpdateNickname::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function Ctrl_Competition_UserPreViewBP.Ctrl_Competition_UserPreViewBP_C.Update Mine
// 0x0002 (0x0002 - 0x0000)
struct Ctrl_Competition_UserPreViewBP_C_Update_Mine final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsMyBrief_ReturnValue;                    // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Ctrl_Competition_UserPreViewBP_C_Update_Mine) == 0x000001, "Wrong alignment on Ctrl_Competition_UserPreViewBP_C_Update_Mine");
static_assert(sizeof(Ctrl_Competition_UserPreViewBP_C_Update_Mine) == 0x000002, "Wrong size on Ctrl_Competition_UserPreViewBP_C_Update_Mine");
static_assert(offsetof(Ctrl_Competition_UserPreViewBP_C_Update_Mine, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'Ctrl_Competition_UserPreViewBP_C_Update_Mine::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ctrl_Competition_UserPreViewBP_C_Update_Mine, CallFunc_IsMyBrief_ReturnValue) == 0x000001, "Member 'Ctrl_Competition_UserPreViewBP_C_Update_Mine::CallFunc_IsMyBrief_ReturnValue' has a wrong offset!");

// Function Ctrl_Competition_UserPreViewBP.Ctrl_Competition_UserPreViewBP_C.ExecuteUbergraph_Ctrl_Competition_UserPreViewBP
// 0x0004 (0x0004 - 0x0000)
struct Ctrl_Competition_UserPreViewBP_C_ExecuteUbergraph_Ctrl_Competition_UserPreViewBP final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Ctrl_Competition_UserPreViewBP_C_ExecuteUbergraph_Ctrl_Competition_UserPreViewBP) == 0x000004, "Wrong alignment on Ctrl_Competition_UserPreViewBP_C_ExecuteUbergraph_Ctrl_Competition_UserPreViewBP");
static_assert(sizeof(Ctrl_Competition_UserPreViewBP_C_ExecuteUbergraph_Ctrl_Competition_UserPreViewBP) == 0x000004, "Wrong size on Ctrl_Competition_UserPreViewBP_C_ExecuteUbergraph_Ctrl_Competition_UserPreViewBP");
static_assert(offsetof(Ctrl_Competition_UserPreViewBP_C_ExecuteUbergraph_Ctrl_Competition_UserPreViewBP, EntryPoint) == 0x000000, "Member 'Ctrl_Competition_UserPreViewBP_C_ExecuteUbergraph_Ctrl_Competition_UserPreViewBP::EntryPoint' has a wrong offset!");

}

