#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: Ctrl_HUD_PlayerSlot

#include "Basic.hpp"

#include "Stigma_structs.hpp"
#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function Ctrl_HUD_PlayerSlot.Ctrl_HUD_PlayerSlot_C.ExecuteUbergraph_Ctrl_HUD_PlayerSlot
// 0x0040 (0x0040 - 0x0000)
struct Ctrl_HUD_PlayerSlot_C_ExecuteUbergraph_Ctrl_HUD_PlayerSlot final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0004(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Ctrl_HUD_PlayerSlot_C_ExecuteUbergraph_Ctrl_HUD_PlayerSlot) == 0x000004, "Wrong alignment on Ctrl_HUD_PlayerSlot_C_ExecuteUbergraph_Ctrl_HUD_PlayerSlot");
static_assert(sizeof(Ctrl_HUD_PlayerSlot_C_ExecuteUbergraph_Ctrl_HUD_PlayerSlot) == 0x000040, "Wrong size on Ctrl_HUD_PlayerSlot_C_ExecuteUbergraph_Ctrl_HUD_PlayerSlot");
static_assert(offsetof(Ctrl_HUD_PlayerSlot_C_ExecuteUbergraph_Ctrl_HUD_PlayerSlot, EntryPoint) == 0x000000, "Member 'Ctrl_HUD_PlayerSlot_C_ExecuteUbergraph_Ctrl_HUD_PlayerSlot::EntryPoint' has a wrong offset!");
static_assert(offsetof(Ctrl_HUD_PlayerSlot_C_ExecuteUbergraph_Ctrl_HUD_PlayerSlot, K2Node_Event_MyGeometry) == 0x000004, "Member 'Ctrl_HUD_PlayerSlot_C_ExecuteUbergraph_Ctrl_HUD_PlayerSlot::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(Ctrl_HUD_PlayerSlot_C_ExecuteUbergraph_Ctrl_HUD_PlayerSlot, K2Node_Event_InDeltaTime) == 0x00003C, "Member 'Ctrl_HUD_PlayerSlot_C_ExecuteUbergraph_Ctrl_HUD_PlayerSlot::K2Node_Event_InDeltaTime' has a wrong offset!");

// Function Ctrl_HUD_PlayerSlot.Ctrl_HUD_PlayerSlot_C.Tick
// 0x003C (0x003C - 0x0000)
struct Ctrl_HUD_PlayerSlot_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Ctrl_HUD_PlayerSlot_C_Tick) == 0x000004, "Wrong alignment on Ctrl_HUD_PlayerSlot_C_Tick");
static_assert(sizeof(Ctrl_HUD_PlayerSlot_C_Tick) == 0x00003C, "Wrong size on Ctrl_HUD_PlayerSlot_C_Tick");
static_assert(offsetof(Ctrl_HUD_PlayerSlot_C_Tick, MyGeometry) == 0x000000, "Member 'Ctrl_HUD_PlayerSlot_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(Ctrl_HUD_PlayerSlot_C_Tick, InDeltaTime) == 0x000038, "Member 'Ctrl_HUD_PlayerSlot_C_Tick::InDeltaTime' has a wrong offset!");

// Function Ctrl_HUD_PlayerSlot.Ctrl_HUD_PlayerSlot_C.Update Gold Reviver
// 0x00A0 (0x00A0 - 0x0000)
struct Ctrl_HUD_PlayerSlot_C_Update_Gold_Reviver final
{
public:
	class UScaleBox*                              Scale_box;                                         // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_35D7[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-69 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABattlePlayerControllerBase*            K2Node_DynamicCast_AsBattle_Player_Controller_Base; // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETeams                                        CallFunc_GetTeam_ReturnValue;                      // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_35D8[0x2];                                     // 0x0022(0x0002)(Fixing Size After Last Property [ Dumper-69 ])
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETeams                                        CallFunc_GetTeam_ReturnValue_1;                    // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0033(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_35D9[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-69 ])
	class AReviverBase*                           CallFunc_Array_Get_Item;                           // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_35DA[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-69 ])
	class AGoldReviver_BP_C*                      K2Node_DynamicCast_AsGold_Reviver_BP;              // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_35DB[0x2];                                     // 0x0052(0x0002)(Fixing Size After Last Property [ Dumper-69 ])
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_35DC[0x3];                                     // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-69 ])
	struct FSlateChildSize                        K2Node_MakeStruct_SlateChildSize;                  // 0x005C(0x0008)(NoDestructor)
	uint8                                         Pad_35DD[0x4];                                     // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-69 ])
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0068(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBoxSlot*                     K2Node_DynamicCast_As________;                     // 0x0070(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_35DE[0x7];                                     // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-69 ])
	class UScaleBox*                              CallFunc_SpawnObject_ReturnValue;                  // 0x0080(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_1;        // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnnihilation_HUD_Reviver_Chara_Notify_C* CallFunc_Create_ReturnValue;                       // 0x0090(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue_1;                   // 0x0098(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Ctrl_HUD_PlayerSlot_C_Update_Gold_Reviver) == 0x000008, "Wrong alignment on Ctrl_HUD_PlayerSlot_C_Update_Gold_Reviver");
static_assert(sizeof(Ctrl_HUD_PlayerSlot_C_Update_Gold_Reviver) == 0x0000A0, "Wrong size on Ctrl_HUD_PlayerSlot_C_Update_Gold_Reviver");
static_assert(offsetof(Ctrl_HUD_PlayerSlot_C_Update_Gold_Reviver, Scale_box) == 0x000000, "Member 'Ctrl_HUD_PlayerSlot_C_Update_Gold_Reviver::Scale_box' has a wrong offset!");
static_assert(offsetof(Ctrl_HUD_PlayerSlot_C_Update_Gold_Reviver, Temp_int_Array_Index_Variable) == 0x000008, "Member 'Ctrl_HUD_PlayerSlot_C_Update_Gold_Reviver::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(Ctrl_HUD_PlayerSlot_C_Update_Gold_Reviver, CallFunc_GetPlayerController_ReturnValue) == 0x000010, "Member 'Ctrl_HUD_PlayerSlot_C_Update_Gold_Reviver::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ctrl_HUD_PlayerSlot_C_Update_Gold_Reviver, K2Node_DynamicCast_AsBattle_Player_Controller_Base) == 0x000018, "Member 'Ctrl_HUD_PlayerSlot_C_Update_Gold_Reviver::K2Node_DynamicCast_AsBattle_Player_Controller_Base' has a wrong offset!");
static_assert(offsetof(Ctrl_HUD_PlayerSlot_C_Update_Gold_Reviver, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'Ctrl_HUD_PlayerSlot_C_Update_Gold_Reviver::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Ctrl_HUD_PlayerSlot_C_Update_Gold_Reviver, CallFunc_GetTeam_ReturnValue) == 0x000021, "Member 'Ctrl_HUD_PlayerSlot_C_Update_Gold_Reviver::CallFunc_GetTeam_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ctrl_HUD_PlayerSlot_C_Update_Gold_Reviver, CallFunc_GetChildrenCount_ReturnValue) == 0x000024, "Member 'Ctrl_HUD_PlayerSlot_C_Update_Gold_Reviver::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ctrl_HUD_PlayerSlot_C_Update_Gold_Reviver, Temp_int_Loop_Counter_Variable) == 0x000028, "Member 'Ctrl_HUD_PlayerSlot_C_Update_Gold_Reviver::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(Ctrl_HUD_PlayerSlot_C_Update_Gold_Reviver, CallFunc_Add_IntInt_ReturnValue) == 0x00002C, "Member 'Ctrl_HUD_PlayerSlot_C_Update_Gold_Reviver::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ctrl_HUD_PlayerSlot_C_Update_Gold_Reviver, CallFunc_IsValid_ReturnValue) == 0x000030, "Member 'Ctrl_HUD_PlayerSlot_C_Update_Gold_Reviver::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ctrl_HUD_PlayerSlot_C_Update_Gold_Reviver, CallFunc_GetTeam_ReturnValue_1) == 0x000031, "Member 'Ctrl_HUD_PlayerSlot_C_Update_Gold_Reviver::CallFunc_GetTeam_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Ctrl_HUD_PlayerSlot_C_Update_Gold_Reviver, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000032, "Member 'Ctrl_HUD_PlayerSlot_C_Update_Gold_Reviver::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ctrl_HUD_PlayerSlot_C_Update_Gold_Reviver, CallFunc_IsValid_ReturnValue_1) == 0x000033, "Member 'Ctrl_HUD_PlayerSlot_C_Update_Gold_Reviver::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Ctrl_HUD_PlayerSlot_C_Update_Gold_Reviver, CallFunc_Array_Get_Item) == 0x000038, "Member 'Ctrl_HUD_PlayerSlot_C_Update_Gold_Reviver::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Ctrl_HUD_PlayerSlot_C_Update_Gold_Reviver, CallFunc_Array_Length_ReturnValue) == 0x000040, "Member 'Ctrl_HUD_PlayerSlot_C_Update_Gold_Reviver::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ctrl_HUD_PlayerSlot_C_Update_Gold_Reviver, K2Node_DynamicCast_AsGold_Reviver_BP) == 0x000048, "Member 'Ctrl_HUD_PlayerSlot_C_Update_Gold_Reviver::K2Node_DynamicCast_AsGold_Reviver_BP' has a wrong offset!");
static_assert(offsetof(Ctrl_HUD_PlayerSlot_C_Update_Gold_Reviver, K2Node_DynamicCast_bSuccess_1) == 0x000050, "Member 'Ctrl_HUD_PlayerSlot_C_Update_Gold_Reviver::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(Ctrl_HUD_PlayerSlot_C_Update_Gold_Reviver, CallFunc_Less_IntInt_ReturnValue) == 0x000051, "Member 'Ctrl_HUD_PlayerSlot_C_Update_Gold_Reviver::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ctrl_HUD_PlayerSlot_C_Update_Gold_Reviver, CallFunc_Array_Length_ReturnValue_1) == 0x000054, "Member 'Ctrl_HUD_PlayerSlot_C_Update_Gold_Reviver::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Ctrl_HUD_PlayerSlot_C_Update_Gold_Reviver, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000058, "Member 'Ctrl_HUD_PlayerSlot_C_Update_Gold_Reviver::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ctrl_HUD_PlayerSlot_C_Update_Gold_Reviver, K2Node_MakeStruct_SlateChildSize) == 0x00005C, "Member 'Ctrl_HUD_PlayerSlot_C_Update_Gold_Reviver::K2Node_MakeStruct_SlateChildSize' has a wrong offset!");
static_assert(offsetof(Ctrl_HUD_PlayerSlot_C_Update_Gold_Reviver, CallFunc_AddChild_ReturnValue) == 0x000068, "Member 'Ctrl_HUD_PlayerSlot_C_Update_Gold_Reviver::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ctrl_HUD_PlayerSlot_C_Update_Gold_Reviver, K2Node_DynamicCast_As________) == 0x000070, "Member 'Ctrl_HUD_PlayerSlot_C_Update_Gold_Reviver::K2Node_DynamicCast_As________' has a wrong offset!");
static_assert(offsetof(Ctrl_HUD_PlayerSlot_C_Update_Gold_Reviver, K2Node_DynamicCast_bSuccess_2) == 0x000078, "Member 'Ctrl_HUD_PlayerSlot_C_Update_Gold_Reviver::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(Ctrl_HUD_PlayerSlot_C_Update_Gold_Reviver, CallFunc_SpawnObject_ReturnValue) == 0x000080, "Member 'Ctrl_HUD_PlayerSlot_C_Update_Gold_Reviver::CallFunc_SpawnObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ctrl_HUD_PlayerSlot_C_Update_Gold_Reviver, CallFunc_GetPlayerController_ReturnValue_1) == 0x000088, "Member 'Ctrl_HUD_PlayerSlot_C_Update_Gold_Reviver::CallFunc_GetPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Ctrl_HUD_PlayerSlot_C_Update_Gold_Reviver, CallFunc_Create_ReturnValue) == 0x000090, "Member 'Ctrl_HUD_PlayerSlot_C_Update_Gold_Reviver::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ctrl_HUD_PlayerSlot_C_Update_Gold_Reviver, CallFunc_AddChild_ReturnValue_1) == 0x000098, "Member 'Ctrl_HUD_PlayerSlot_C_Update_Gold_Reviver::CallFunc_AddChild_ReturnValue_1' has a wrong offset!");

}

