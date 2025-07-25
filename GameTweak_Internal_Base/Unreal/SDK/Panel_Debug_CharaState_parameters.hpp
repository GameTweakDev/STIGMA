#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: Panel_Debug_CharaState

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function Panel_Debug_CharaState.Panel_Debug_CharaState_C.BindTargetChara
// 0x0008 (0x0008 - 0x0000)
struct Panel_Debug_CharaState_C_BindTargetChara final
{
public:
	class ACharaBase*                             _target;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Panel_Debug_CharaState_C_BindTargetChara) == 0x000008, "Wrong alignment on Panel_Debug_CharaState_C_BindTargetChara");
static_assert(sizeof(Panel_Debug_CharaState_C_BindTargetChara) == 0x000008, "Wrong size on Panel_Debug_CharaState_C_BindTargetChara");
static_assert(offsetof(Panel_Debug_CharaState_C_BindTargetChara, _target) == 0x000000, "Member 'Panel_Debug_CharaState_C_BindTargetChara::_target' has a wrong offset!");

// Function Panel_Debug_CharaState.Panel_Debug_CharaState_C.ExecuteUbergraph_Panel_Debug_CharaState
// 0x0040 (0x0040 - 0x0000)
struct Panel_Debug_CharaState_C_ExecuteUbergraph_Panel_Debug_CharaState final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0004(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Panel_Debug_CharaState_C_ExecuteUbergraph_Panel_Debug_CharaState) == 0x000004, "Wrong alignment on Panel_Debug_CharaState_C_ExecuteUbergraph_Panel_Debug_CharaState");
static_assert(sizeof(Panel_Debug_CharaState_C_ExecuteUbergraph_Panel_Debug_CharaState) == 0x000040, "Wrong size on Panel_Debug_CharaState_C_ExecuteUbergraph_Panel_Debug_CharaState");
static_assert(offsetof(Panel_Debug_CharaState_C_ExecuteUbergraph_Panel_Debug_CharaState, EntryPoint) == 0x000000, "Member 'Panel_Debug_CharaState_C_ExecuteUbergraph_Panel_Debug_CharaState::EntryPoint' has a wrong offset!");
static_assert(offsetof(Panel_Debug_CharaState_C_ExecuteUbergraph_Panel_Debug_CharaState, K2Node_Event_MyGeometry) == 0x000004, "Member 'Panel_Debug_CharaState_C_ExecuteUbergraph_Panel_Debug_CharaState::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(Panel_Debug_CharaState_C_ExecuteUbergraph_Panel_Debug_CharaState, K2Node_Event_InDeltaTime) == 0x00003C, "Member 'Panel_Debug_CharaState_C_ExecuteUbergraph_Panel_Debug_CharaState::K2Node_Event_InDeltaTime' has a wrong offset!");

// Function Panel_Debug_CharaState.Panel_Debug_CharaState_C.OnTick
// 0x0030 (0x0030 - 0x0000)
struct Panel_Debug_CharaState_C_OnTick final
{
public:
	class FString                                 CallFunc_DEBUG_GetDebugString_ReturnValue;         // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0010(0x0018)()
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Panel_Debug_CharaState_C_OnTick) == 0x000008, "Wrong alignment on Panel_Debug_CharaState_C_OnTick");
static_assert(sizeof(Panel_Debug_CharaState_C_OnTick) == 0x000030, "Wrong size on Panel_Debug_CharaState_C_OnTick");
static_assert(offsetof(Panel_Debug_CharaState_C_OnTick, CallFunc_DEBUG_GetDebugString_ReturnValue) == 0x000000, "Member 'Panel_Debug_CharaState_C_OnTick::CallFunc_DEBUG_GetDebugString_ReturnValue' has a wrong offset!");
static_assert(offsetof(Panel_Debug_CharaState_C_OnTick, CallFunc_Conv_StringToText_ReturnValue) == 0x000010, "Member 'Panel_Debug_CharaState_C_OnTick::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(Panel_Debug_CharaState_C_OnTick, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'Panel_Debug_CharaState_C_OnTick::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function Panel_Debug_CharaState.Panel_Debug_CharaState_C.Tick
// 0x003C (0x003C - 0x0000)
struct Panel_Debug_CharaState_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Panel_Debug_CharaState_C_Tick) == 0x000004, "Wrong alignment on Panel_Debug_CharaState_C_Tick");
static_assert(sizeof(Panel_Debug_CharaState_C_Tick) == 0x00003C, "Wrong size on Panel_Debug_CharaState_C_Tick");
static_assert(offsetof(Panel_Debug_CharaState_C_Tick, MyGeometry) == 0x000000, "Member 'Panel_Debug_CharaState_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(Panel_Debug_CharaState_C_Tick, InDeltaTime) == 0x000038, "Member 'Panel_Debug_CharaState_C_Tick::InDeltaTime' has a wrong offset!");

}

