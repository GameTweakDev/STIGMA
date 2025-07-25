#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: UI_DEBUG_Chara_Movement

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function UI_DEBUG_Chara_Movement.UI_DEBUG_Chara_Movement_C.BindTarget
// 0x0008 (0x0008 - 0x0000)
struct UI_DEBUG_Chara_Movement_C_BindTarget final
{
public:
	class ACharaBase*                             _chara;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_DEBUG_Chara_Movement_C_BindTarget) == 0x000008, "Wrong alignment on UI_DEBUG_Chara_Movement_C_BindTarget");
static_assert(sizeof(UI_DEBUG_Chara_Movement_C_BindTarget) == 0x000008, "Wrong size on UI_DEBUG_Chara_Movement_C_BindTarget");
static_assert(offsetof(UI_DEBUG_Chara_Movement_C_BindTarget, _chara) == 0x000000, "Member 'UI_DEBUG_Chara_Movement_C_BindTarget::_chara' has a wrong offset!");

// Function UI_DEBUG_Chara_Movement.UI_DEBUG_Chara_Movement_C.ExecuteUbergraph_UI_DEBUG_Chara_Movement
// 0x0048 (0x0048 - 0x0000)
struct UI_DEBUG_Chara_Movement_C_ExecuteUbergraph_UI_DEBUG_Chara_Movement final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0004(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_OnTick__delta_ImplicitCast;               // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_DEBUG_Chara_Movement_C_ExecuteUbergraph_UI_DEBUG_Chara_Movement) == 0x000008, "Wrong alignment on UI_DEBUG_Chara_Movement_C_ExecuteUbergraph_UI_DEBUG_Chara_Movement");
static_assert(sizeof(UI_DEBUG_Chara_Movement_C_ExecuteUbergraph_UI_DEBUG_Chara_Movement) == 0x000048, "Wrong size on UI_DEBUG_Chara_Movement_C_ExecuteUbergraph_UI_DEBUG_Chara_Movement");
static_assert(offsetof(UI_DEBUG_Chara_Movement_C_ExecuteUbergraph_UI_DEBUG_Chara_Movement, EntryPoint) == 0x000000, "Member 'UI_DEBUG_Chara_Movement_C_ExecuteUbergraph_UI_DEBUG_Chara_Movement::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_DEBUG_Chara_Movement_C_ExecuteUbergraph_UI_DEBUG_Chara_Movement, K2Node_Event_MyGeometry) == 0x000004, "Member 'UI_DEBUG_Chara_Movement_C_ExecuteUbergraph_UI_DEBUG_Chara_Movement::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(UI_DEBUG_Chara_Movement_C_ExecuteUbergraph_UI_DEBUG_Chara_Movement, K2Node_Event_InDeltaTime) == 0x00003C, "Member 'UI_DEBUG_Chara_Movement_C_ExecuteUbergraph_UI_DEBUG_Chara_Movement::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(UI_DEBUG_Chara_Movement_C_ExecuteUbergraph_UI_DEBUG_Chara_Movement, CallFunc_OnTick__delta_ImplicitCast) == 0x000040, "Member 'UI_DEBUG_Chara_Movement_C_ExecuteUbergraph_UI_DEBUG_Chara_Movement::CallFunc_OnTick__delta_ImplicitCast' has a wrong offset!");

// Function UI_DEBUG_Chara_Movement.UI_DEBUG_Chara_Movement_C.OnTick
// 0x0018 (0x0018 - 0x0000)
struct UI_DEBUG_Chara_Movement_C_OnTick final
{
public:
	double                                        _delta;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Delta;                                             // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_DEBUG_Chara_Movement_C_OnTick) == 0x000008, "Wrong alignment on UI_DEBUG_Chara_Movement_C_OnTick");
static_assert(sizeof(UI_DEBUG_Chara_Movement_C_OnTick) == 0x000018, "Wrong size on UI_DEBUG_Chara_Movement_C_OnTick");
static_assert(offsetof(UI_DEBUG_Chara_Movement_C_OnTick, _delta) == 0x000000, "Member 'UI_DEBUG_Chara_Movement_C_OnTick::_delta' has a wrong offset!");
static_assert(offsetof(UI_DEBUG_Chara_Movement_C_OnTick, Delta) == 0x000008, "Member 'UI_DEBUG_Chara_Movement_C_OnTick::Delta' has a wrong offset!");
static_assert(offsetof(UI_DEBUG_Chara_Movement_C_OnTick, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'UI_DEBUG_Chara_Movement_C_OnTick::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function UI_DEBUG_Chara_Movement.UI_DEBUG_Chara_Movement_C.Tick
// 0x003C (0x003C - 0x0000)
struct UI_DEBUG_Chara_Movement_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_DEBUG_Chara_Movement_C_Tick) == 0x000004, "Wrong alignment on UI_DEBUG_Chara_Movement_C_Tick");
static_assert(sizeof(UI_DEBUG_Chara_Movement_C_Tick) == 0x00003C, "Wrong size on UI_DEBUG_Chara_Movement_C_Tick");
static_assert(offsetof(UI_DEBUG_Chara_Movement_C_Tick, MyGeometry) == 0x000000, "Member 'UI_DEBUG_Chara_Movement_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(UI_DEBUG_Chara_Movement_C_Tick, InDeltaTime) == 0x000038, "Member 'UI_DEBUG_Chara_Movement_C_Tick::InDeltaTime' has a wrong offset!");

// Function UI_DEBUG_Chara_Movement.UI_DEBUG_Chara_Movement_C.UpdateMovement
// 0x00B8 (0x00B8 - 0x0000)
struct UI_DEBUG_Chara_Movement_C_UpdateMovement final
{
public:
	class UBPMotionMovementComponent*             Move_comp;                                         // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDebugInfoString_ReturnValue;           // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3722[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-69 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0020(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0038(0x0050)(HasGetValueTypeHash)
	class UBPMotionMovementComponent*             CallFunc_GetMovementComponent__comp;               // 0x0088(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0090(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00A0(0x0018)()
};
static_assert(alignof(UI_DEBUG_Chara_Movement_C_UpdateMovement) == 0x000008, "Wrong alignment on UI_DEBUG_Chara_Movement_C_UpdateMovement");
static_assert(sizeof(UI_DEBUG_Chara_Movement_C_UpdateMovement) == 0x0000B8, "Wrong size on UI_DEBUG_Chara_Movement_C_UpdateMovement");
static_assert(offsetof(UI_DEBUG_Chara_Movement_C_UpdateMovement, Move_comp) == 0x000000, "Member 'UI_DEBUG_Chara_Movement_C_UpdateMovement::Move_comp' has a wrong offset!");
static_assert(offsetof(UI_DEBUG_Chara_Movement_C_UpdateMovement, CallFunc_GetDebugInfoString_ReturnValue) == 0x000008, "Member 'UI_DEBUG_Chara_Movement_C_UpdateMovement::CallFunc_GetDebugInfoString_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_DEBUG_Chara_Movement_C_UpdateMovement, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'UI_DEBUG_Chara_Movement_C_UpdateMovement::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_DEBUG_Chara_Movement_C_UpdateMovement, CallFunc_Conv_StringToText_ReturnValue) == 0x000020, "Member 'UI_DEBUG_Chara_Movement_C_UpdateMovement::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_DEBUG_Chara_Movement_C_UpdateMovement, K2Node_MakeStruct_FormatArgumentData) == 0x000038, "Member 'UI_DEBUG_Chara_Movement_C_UpdateMovement::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(UI_DEBUG_Chara_Movement_C_UpdateMovement, CallFunc_GetMovementComponent__comp) == 0x000088, "Member 'UI_DEBUG_Chara_Movement_C_UpdateMovement::CallFunc_GetMovementComponent__comp' has a wrong offset!");
static_assert(offsetof(UI_DEBUG_Chara_Movement_C_UpdateMovement, K2Node_MakeArray_Array) == 0x000090, "Member 'UI_DEBUG_Chara_Movement_C_UpdateMovement::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(UI_DEBUG_Chara_Movement_C_UpdateMovement, CallFunc_Format_ReturnValue) == 0x0000A0, "Member 'UI_DEBUG_Chara_Movement_C_UpdateMovement::CallFunc_Format_ReturnValue' has a wrong offset!");

// Function UI_DEBUG_Chara_Movement.UI_DEBUG_Chara_Movement_C.UpdateRoles
// 0x0190 (0x0190 - 0x0000)
struct UI_DEBUG_Chara_Movement_C_UpdateRoles final
{
public:
	ENetRole                                      CallFunc_GetLocalRole_ReturnValue;                 // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLocallyControlled_ReturnValue;          // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3723[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-69 ])
	class FString                                 CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_BoolToText_ReturnValue;              // 0x0018(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0030(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0048(0x0050)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0098(0x0050)(HasGetValueTypeHash)
	ENetRole                                      CallFunc_GetRemoteRole_ReturnValue;                // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3724[0x7];                                     // 0x00E9(0x0007)(Fixing Size After Last Property [ Dumper-69 ])
	class FString                                 CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1; // 0x00F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0100(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_2;            // 0x0118(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0168(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0178(0x0018)()
};
static_assert(alignof(UI_DEBUG_Chara_Movement_C_UpdateRoles) == 0x000008, "Wrong alignment on UI_DEBUG_Chara_Movement_C_UpdateRoles");
static_assert(sizeof(UI_DEBUG_Chara_Movement_C_UpdateRoles) == 0x000190, "Wrong size on UI_DEBUG_Chara_Movement_C_UpdateRoles");
static_assert(offsetof(UI_DEBUG_Chara_Movement_C_UpdateRoles, CallFunc_GetLocalRole_ReturnValue) == 0x000000, "Member 'UI_DEBUG_Chara_Movement_C_UpdateRoles::CallFunc_GetLocalRole_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_DEBUG_Chara_Movement_C_UpdateRoles, CallFunc_IsLocallyControlled_ReturnValue) == 0x000001, "Member 'UI_DEBUG_Chara_Movement_C_UpdateRoles::CallFunc_IsLocallyControlled_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_DEBUG_Chara_Movement_C_UpdateRoles, CallFunc_GetEnumeratorUserFriendlyName_ReturnValue) == 0x000008, "Member 'UI_DEBUG_Chara_Movement_C_UpdateRoles::CallFunc_GetEnumeratorUserFriendlyName_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_DEBUG_Chara_Movement_C_UpdateRoles, CallFunc_Conv_BoolToText_ReturnValue) == 0x000018, "Member 'UI_DEBUG_Chara_Movement_C_UpdateRoles::CallFunc_Conv_BoolToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_DEBUG_Chara_Movement_C_UpdateRoles, CallFunc_Conv_StringToText_ReturnValue) == 0x000030, "Member 'UI_DEBUG_Chara_Movement_C_UpdateRoles::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_DEBUG_Chara_Movement_C_UpdateRoles, K2Node_MakeStruct_FormatArgumentData) == 0x000048, "Member 'UI_DEBUG_Chara_Movement_C_UpdateRoles::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(UI_DEBUG_Chara_Movement_C_UpdateRoles, K2Node_MakeStruct_FormatArgumentData_1) == 0x000098, "Member 'UI_DEBUG_Chara_Movement_C_UpdateRoles::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(UI_DEBUG_Chara_Movement_C_UpdateRoles, CallFunc_GetRemoteRole_ReturnValue) == 0x0000E8, "Member 'UI_DEBUG_Chara_Movement_C_UpdateRoles::CallFunc_GetRemoteRole_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_DEBUG_Chara_Movement_C_UpdateRoles, CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1) == 0x0000F0, "Member 'UI_DEBUG_Chara_Movement_C_UpdateRoles::CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_DEBUG_Chara_Movement_C_UpdateRoles, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000100, "Member 'UI_DEBUG_Chara_Movement_C_UpdateRoles::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_DEBUG_Chara_Movement_C_UpdateRoles, K2Node_MakeStruct_FormatArgumentData_2) == 0x000118, "Member 'UI_DEBUG_Chara_Movement_C_UpdateRoles::K2Node_MakeStruct_FormatArgumentData_2' has a wrong offset!");
static_assert(offsetof(UI_DEBUG_Chara_Movement_C_UpdateRoles, K2Node_MakeArray_Array) == 0x000168, "Member 'UI_DEBUG_Chara_Movement_C_UpdateRoles::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(UI_DEBUG_Chara_Movement_C_UpdateRoles, CallFunc_Format_ReturnValue) == 0x000178, "Member 'UI_DEBUG_Chara_Movement_C_UpdateRoles::CallFunc_Format_ReturnValue' has a wrong offset!");

// Function UI_DEBUG_Chara_Movement.UI_DEBUG_Chara_Movement_C.GetMovementComponent
// 0x0028 (0x0028 - 0x0000)
struct UI_DEBUG_Chara_Movement_C_GetMovementComponent final
{
public:
	class UBPMotionMovementComponent*             _comp;                                             // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPawnMovementComponent*                 CallFunc_GetMovementComponent_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3725[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-69 ])
	class UBPMotionMovementComponent*             K2Node_DynamicCast_AsBPMotion_Movement_Component;  // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_DEBUG_Chara_Movement_C_GetMovementComponent) == 0x000008, "Wrong alignment on UI_DEBUG_Chara_Movement_C_GetMovementComponent");
static_assert(sizeof(UI_DEBUG_Chara_Movement_C_GetMovementComponent) == 0x000028, "Wrong size on UI_DEBUG_Chara_Movement_C_GetMovementComponent");
static_assert(offsetof(UI_DEBUG_Chara_Movement_C_GetMovementComponent, _comp) == 0x000000, "Member 'UI_DEBUG_Chara_Movement_C_GetMovementComponent::_comp' has a wrong offset!");
static_assert(offsetof(UI_DEBUG_Chara_Movement_C_GetMovementComponent, CallFunc_GetMovementComponent_ReturnValue) == 0x000008, "Member 'UI_DEBUG_Chara_Movement_C_GetMovementComponent::CallFunc_GetMovementComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_DEBUG_Chara_Movement_C_GetMovementComponent, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'UI_DEBUG_Chara_Movement_C_GetMovementComponent::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_DEBUG_Chara_Movement_C_GetMovementComponent, K2Node_DynamicCast_AsBPMotion_Movement_Component) == 0x000018, "Member 'UI_DEBUG_Chara_Movement_C_GetMovementComponent::K2Node_DynamicCast_AsBPMotion_Movement_Component' has a wrong offset!");
static_assert(offsetof(UI_DEBUG_Chara_Movement_C_GetMovementComponent, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'UI_DEBUG_Chara_Movement_C_GetMovementComponent::K2Node_DynamicCast_bSuccess' has a wrong offset!");

}

