#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: AITask_SetBlackBoard

#include "Basic.hpp"


namespace SDK::Params
{

// Function AITask_SetBlackBoard.AITask_SetBlackBoard_C.ExecuteUbergraph_AITask_SetBlackBoard
// 0x0010 (0x0010 - 0x0000)
struct AITask_SetBlackBoard_C_ExecuteUbergraph_AITask_SetBlackBoard final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3639[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-69 ])
	class AActor*                                 K2Node_Event_OwnerActor;                           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AITask_SetBlackBoard_C_ExecuteUbergraph_AITask_SetBlackBoard) == 0x000008, "Wrong alignment on AITask_SetBlackBoard_C_ExecuteUbergraph_AITask_SetBlackBoard");
static_assert(sizeof(AITask_SetBlackBoard_C_ExecuteUbergraph_AITask_SetBlackBoard) == 0x000010, "Wrong size on AITask_SetBlackBoard_C_ExecuteUbergraph_AITask_SetBlackBoard");
static_assert(offsetof(AITask_SetBlackBoard_C_ExecuteUbergraph_AITask_SetBlackBoard, EntryPoint) == 0x000000, "Member 'AITask_SetBlackBoard_C_ExecuteUbergraph_AITask_SetBlackBoard::EntryPoint' has a wrong offset!");
static_assert(offsetof(AITask_SetBlackBoard_C_ExecuteUbergraph_AITask_SetBlackBoard, K2Node_Event_OwnerActor) == 0x000008, "Member 'AITask_SetBlackBoard_C_ExecuteUbergraph_AITask_SetBlackBoard::K2Node_Event_OwnerActor' has a wrong offset!");

// Function AITask_SetBlackBoard.AITask_SetBlackBoard_C.ReceiveExecute
// 0x0008 (0x0008 - 0x0000)
struct AITask_SetBlackBoard_C_ReceiveExecute final
{
public:
	class AActor*                                 OwnerActor;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AITask_SetBlackBoard_C_ReceiveExecute) == 0x000008, "Wrong alignment on AITask_SetBlackBoard_C_ReceiveExecute");
static_assert(sizeof(AITask_SetBlackBoard_C_ReceiveExecute) == 0x000008, "Wrong size on AITask_SetBlackBoard_C_ReceiveExecute");
static_assert(offsetof(AITask_SetBlackBoard_C_ReceiveExecute, OwnerActor) == 0x000000, "Member 'AITask_SetBlackBoard_C_ReceiveExecute::OwnerActor' has a wrong offset!");

}

