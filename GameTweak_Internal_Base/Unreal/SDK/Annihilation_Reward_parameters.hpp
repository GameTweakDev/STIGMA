#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: Annihilation_Reward

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function Annihilation_Reward.Annihilation_Reward_C.DriveLifeTime
// 0x0018 (0x0018 - 0x0000)
struct Annihilation_Reward_C_DriveLifeTime final
{
public:
	double                                        Delta;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_DoubleDouble_ReturnValue;       // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_36F8[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-69 ])
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Annihilation_Reward_C_DriveLifeTime) == 0x000008, "Wrong alignment on Annihilation_Reward_C_DriveLifeTime");
static_assert(sizeof(Annihilation_Reward_C_DriveLifeTime) == 0x000018, "Wrong size on Annihilation_Reward_C_DriveLifeTime");
static_assert(offsetof(Annihilation_Reward_C_DriveLifeTime, Delta) == 0x000000, "Member 'Annihilation_Reward_C_DriveLifeTime::Delta' has a wrong offset!");
static_assert(offsetof(Annihilation_Reward_C_DriveLifeTime, CallFunc_LessEqual_DoubleDouble_ReturnValue) == 0x000008, "Member 'Annihilation_Reward_C_DriveLifeTime::CallFunc_LessEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(Annihilation_Reward_C_DriveLifeTime, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000010, "Member 'Annihilation_Reward_C_DriveLifeTime::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");

// Function Annihilation_Reward.Annihilation_Reward_C.ExecuteUbergraph_Annihilation_Reward
// 0x0048 (0x0048 - 0x0000)
struct Annihilation_Reward_C_ExecuteUbergraph_Annihilation_Reward final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0004(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_DriveLifeTime_delta_ImplicitCast;         // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Annihilation_Reward_C_ExecuteUbergraph_Annihilation_Reward) == 0x000008, "Wrong alignment on Annihilation_Reward_C_ExecuteUbergraph_Annihilation_Reward");
static_assert(sizeof(Annihilation_Reward_C_ExecuteUbergraph_Annihilation_Reward) == 0x000048, "Wrong size on Annihilation_Reward_C_ExecuteUbergraph_Annihilation_Reward");
static_assert(offsetof(Annihilation_Reward_C_ExecuteUbergraph_Annihilation_Reward, EntryPoint) == 0x000000, "Member 'Annihilation_Reward_C_ExecuteUbergraph_Annihilation_Reward::EntryPoint' has a wrong offset!");
static_assert(offsetof(Annihilation_Reward_C_ExecuteUbergraph_Annihilation_Reward, K2Node_Event_MyGeometry) == 0x000004, "Member 'Annihilation_Reward_C_ExecuteUbergraph_Annihilation_Reward::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(Annihilation_Reward_C_ExecuteUbergraph_Annihilation_Reward, K2Node_Event_InDeltaTime) == 0x00003C, "Member 'Annihilation_Reward_C_ExecuteUbergraph_Annihilation_Reward::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(Annihilation_Reward_C_ExecuteUbergraph_Annihilation_Reward, CallFunc_DriveLifeTime_delta_ImplicitCast) == 0x000040, "Member 'Annihilation_Reward_C_ExecuteUbergraph_Annihilation_Reward::CallFunc_DriveLifeTime_delta_ImplicitCast' has a wrong offset!");

// Function Annihilation_Reward.Annihilation_Reward_C.Get Coin Text
// 0x0038 (0x0038 - 0x0000)
struct Annihilation_Reward_C_Get_Coin_Text final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
	int32                                         Round;                                             // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_36F9[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-69 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0020(0x0018)()
};
static_assert(alignof(Annihilation_Reward_C_Get_Coin_Text) == 0x000008, "Wrong alignment on Annihilation_Reward_C_Get_Coin_Text");
static_assert(sizeof(Annihilation_Reward_C_Get_Coin_Text) == 0x000038, "Wrong size on Annihilation_Reward_C_Get_Coin_Text");
static_assert(offsetof(Annihilation_Reward_C_Get_Coin_Text, ReturnValue) == 0x000000, "Member 'Annihilation_Reward_C_Get_Coin_Text::ReturnValue' has a wrong offset!");
static_assert(offsetof(Annihilation_Reward_C_Get_Coin_Text, Round) == 0x000018, "Member 'Annihilation_Reward_C_Get_Coin_Text::Round' has a wrong offset!");
static_assert(offsetof(Annihilation_Reward_C_Get_Coin_Text, CallFunc_Conv_IntToText_ReturnValue) == 0x000020, "Member 'Annihilation_Reward_C_Get_Coin_Text::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");

// Function Annihilation_Reward.Annihilation_Reward_C.Get Round Text
// 0x00B0 (0x00B0 - 0x0000)
struct Annihilation_Reward_C_Get_Round_Text final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;                 // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AAnnihilation_GameState*                K2Node_DynamicCast_AsAnnihilation_Game_State;      // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_36FA[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-69 ])
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue;              // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0038(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0088(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0098(0x0018)()
};
static_assert(alignof(Annihilation_Reward_C_Get_Round_Text) == 0x000008, "Wrong alignment on Annihilation_Reward_C_Get_Round_Text");
static_assert(sizeof(Annihilation_Reward_C_Get_Round_Text) == 0x0000B0, "Wrong size on Annihilation_Reward_C_Get_Round_Text");
static_assert(offsetof(Annihilation_Reward_C_Get_Round_Text, ReturnValue) == 0x000000, "Member 'Annihilation_Reward_C_Get_Round_Text::ReturnValue' has a wrong offset!");
static_assert(offsetof(Annihilation_Reward_C_Get_Round_Text, CallFunc_GetGameState_ReturnValue) == 0x000018, "Member 'Annihilation_Reward_C_Get_Round_Text::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(Annihilation_Reward_C_Get_Round_Text, K2Node_DynamicCast_AsAnnihilation_Game_State) == 0x000020, "Member 'Annihilation_Reward_C_Get_Round_Text::K2Node_DynamicCast_AsAnnihilation_Game_State' has a wrong offset!");
static_assert(offsetof(Annihilation_Reward_C_Get_Round_Text, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'Annihilation_Reward_C_Get_Round_Text::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Annihilation_Reward_C_Get_Round_Text, CallFunc_Conv_IntToInt64_ReturnValue) == 0x000030, "Member 'Annihilation_Reward_C_Get_Round_Text::CallFunc_Conv_IntToInt64_ReturnValue' has a wrong offset!");
static_assert(offsetof(Annihilation_Reward_C_Get_Round_Text, K2Node_MakeStruct_FormatArgumentData) == 0x000038, "Member 'Annihilation_Reward_C_Get_Round_Text::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(Annihilation_Reward_C_Get_Round_Text, K2Node_MakeArray_Array) == 0x000088, "Member 'Annihilation_Reward_C_Get_Round_Text::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(Annihilation_Reward_C_Get_Round_Text, CallFunc_Format_ReturnValue) == 0x000098, "Member 'Annihilation_Reward_C_Get_Round_Text::CallFunc_Format_ReturnValue' has a wrong offset!");

// Function Annihilation_Reward.Annihilation_Reward_C.Get_Round_Win_Panel_Visibility_0
// 0x0002 (0x0002 - 0x0000)
struct Annihilation_Reward_C_Get_Round_Win_Panel_Visibility_0 final
{
public:
	ESlateVisibility                              ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Annihilation_Reward_C_Get_Round_Win_Panel_Visibility_0) == 0x000001, "Wrong alignment on Annihilation_Reward_C_Get_Round_Win_Panel_Visibility_0");
static_assert(sizeof(Annihilation_Reward_C_Get_Round_Win_Panel_Visibility_0) == 0x000002, "Wrong size on Annihilation_Reward_C_Get_Round_Win_Panel_Visibility_0");
static_assert(offsetof(Annihilation_Reward_C_Get_Round_Win_Panel_Visibility_0, ReturnValue) == 0x000000, "Member 'Annihilation_Reward_C_Get_Round_Win_Panel_Visibility_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(Annihilation_Reward_C_Get_Round_Win_Panel_Visibility_0, CallFunc_Greater_IntInt_ReturnValue) == 0x000001, "Member 'Annihilation_Reward_C_Get_Round_Win_Panel_Visibility_0::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");

// Function Annihilation_Reward.Annihilation_Reward_C.GetBonusCoinText
// 0x0110 (0x0110 - 0x0000)
struct Annihilation_Reward_C_GetBonusCoinText final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
	class FText                                   CallFunc_MakeLiteralText_ReturnValue;              // 0x0018(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0030(0x0050)(HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0080(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0098(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00E8(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00F8(0x0018)()
};
static_assert(alignof(Annihilation_Reward_C_GetBonusCoinText) == 0x000008, "Wrong alignment on Annihilation_Reward_C_GetBonusCoinText");
static_assert(sizeof(Annihilation_Reward_C_GetBonusCoinText) == 0x000110, "Wrong size on Annihilation_Reward_C_GetBonusCoinText");
static_assert(offsetof(Annihilation_Reward_C_GetBonusCoinText, ReturnValue) == 0x000000, "Member 'Annihilation_Reward_C_GetBonusCoinText::ReturnValue' has a wrong offset!");
static_assert(offsetof(Annihilation_Reward_C_GetBonusCoinText, CallFunc_MakeLiteralText_ReturnValue) == 0x000018, "Member 'Annihilation_Reward_C_GetBonusCoinText::CallFunc_MakeLiteralText_ReturnValue' has a wrong offset!");
static_assert(offsetof(Annihilation_Reward_C_GetBonusCoinText, K2Node_MakeStruct_FormatArgumentData) == 0x000030, "Member 'Annihilation_Reward_C_GetBonusCoinText::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(Annihilation_Reward_C_GetBonusCoinText, CallFunc_Conv_IntToText_ReturnValue) == 0x000080, "Member 'Annihilation_Reward_C_GetBonusCoinText::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(Annihilation_Reward_C_GetBonusCoinText, K2Node_MakeStruct_FormatArgumentData_1) == 0x000098, "Member 'Annihilation_Reward_C_GetBonusCoinText::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(Annihilation_Reward_C_GetBonusCoinText, K2Node_MakeArray_Array) == 0x0000E8, "Member 'Annihilation_Reward_C_GetBonusCoinText::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(Annihilation_Reward_C_GetBonusCoinText, CallFunc_Format_ReturnValue) == 0x0000F8, "Member 'Annihilation_Reward_C_GetBonusCoinText::CallFunc_Format_ReturnValue' has a wrong offset!");

// Function Annihilation_Reward.Annihilation_Reward_C.GetWinBonusCoin
// 0x0030 (0x0030 - 0x0000)
struct Annihilation_Reward_C_GetWinBonusCoin final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0018(0x0018)()
};
static_assert(alignof(Annihilation_Reward_C_GetWinBonusCoin) == 0x000008, "Wrong alignment on Annihilation_Reward_C_GetWinBonusCoin");
static_assert(sizeof(Annihilation_Reward_C_GetWinBonusCoin) == 0x000030, "Wrong size on Annihilation_Reward_C_GetWinBonusCoin");
static_assert(offsetof(Annihilation_Reward_C_GetWinBonusCoin, ReturnValue) == 0x000000, "Member 'Annihilation_Reward_C_GetWinBonusCoin::ReturnValue' has a wrong offset!");
static_assert(offsetof(Annihilation_Reward_C_GetWinBonusCoin, CallFunc_Conv_IntToText_ReturnValue) == 0x000018, "Member 'Annihilation_Reward_C_GetWinBonusCoin::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");

// Function Annihilation_Reward.Annihilation_Reward_C.Show
// 0x0018 (0x0018 - 0x0000)
struct Annihilation_Reward_C_Show final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_36FB[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-69 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Annihilation_Reward_C_Show) == 0x000008, "Wrong alignment on Annihilation_Reward_C_Show");
static_assert(sizeof(Annihilation_Reward_C_Show) == 0x000018, "Wrong size on Annihilation_Reward_C_Show");
static_assert(offsetof(Annihilation_Reward_C_Show, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'Annihilation_Reward_C_Show::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Annihilation_Reward_C_Show, CallFunc_Greater_IntInt_ReturnValue) == 0x000008, "Member 'Annihilation_Reward_C_Show::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Annihilation_Reward_C_Show, CallFunc_PlayAnimation_ReturnValue_1) == 0x000010, "Member 'Annihilation_Reward_C_Show::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");

// Function Annihilation_Reward.Annihilation_Reward_C.Tick
// 0x003C (0x003C - 0x0000)
struct Annihilation_Reward_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Annihilation_Reward_C_Tick) == 0x000004, "Wrong alignment on Annihilation_Reward_C_Tick");
static_assert(sizeof(Annihilation_Reward_C_Tick) == 0x00003C, "Wrong size on Annihilation_Reward_C_Tick");
static_assert(offsetof(Annihilation_Reward_C_Tick, MyGeometry) == 0x000000, "Member 'Annihilation_Reward_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(Annihilation_Reward_C_Tick, InDeltaTime) == 0x000038, "Member 'Annihilation_Reward_C_Tick::InDeltaTime' has a wrong offset!");

}

