#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: Cam_Mesh_BP_Gun

#include "Basic.hpp"


namespace SDK::Params
{

// Function Cam_Mesh_BP_Gun.Cam_Mesh_BP_Gun_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct Cam_Mesh_BP_Gun_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Cam_Mesh_BP_Gun_C_ReceiveTick) == 0x000004, "Wrong alignment on Cam_Mesh_BP_Gun_C_ReceiveTick");
static_assert(sizeof(Cam_Mesh_BP_Gun_C_ReceiveTick) == 0x000004, "Wrong size on Cam_Mesh_BP_Gun_C_ReceiveTick");
static_assert(offsetof(Cam_Mesh_BP_Gun_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'Cam_Mesh_BP_Gun_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function Cam_Mesh_BP_Gun.Cam_Mesh_BP_Gun_C.ExecuteUbergraph_Cam_Mesh_BP_Gun
// 0x0008 (0x0008 - 0x0000)
struct Cam_Mesh_BP_Gun_C_ExecuteUbergraph_Cam_Mesh_BP_Gun final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Cam_Mesh_BP_Gun_C_ExecuteUbergraph_Cam_Mesh_BP_Gun) == 0x000004, "Wrong alignment on Cam_Mesh_BP_Gun_C_ExecuteUbergraph_Cam_Mesh_BP_Gun");
static_assert(sizeof(Cam_Mesh_BP_Gun_C_ExecuteUbergraph_Cam_Mesh_BP_Gun) == 0x000008, "Wrong size on Cam_Mesh_BP_Gun_C_ExecuteUbergraph_Cam_Mesh_BP_Gun");
static_assert(offsetof(Cam_Mesh_BP_Gun_C_ExecuteUbergraph_Cam_Mesh_BP_Gun, EntryPoint) == 0x000000, "Member 'Cam_Mesh_BP_Gun_C_ExecuteUbergraph_Cam_Mesh_BP_Gun::EntryPoint' has a wrong offset!");
static_assert(offsetof(Cam_Mesh_BP_Gun_C_ExecuteUbergraph_Cam_Mesh_BP_Gun, K2Node_Event_DeltaSeconds) == 0x000004, "Member 'Cam_Mesh_BP_Gun_C_ExecuteUbergraph_Cam_Mesh_BP_Gun::K2Node_Event_DeltaSeconds' has a wrong offset!");

}

