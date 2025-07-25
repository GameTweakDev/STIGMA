#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: PingMarker_BP

#include "Basic.hpp"

#include "BPGLib_structs.hpp"
#include "Stigma_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function PingMarker_BP.PingMarker_BP_C.OnQueryAddIndiactor
// 0x05D0 (0x05D0 - 0x0000)
struct PingMarker_BP_C_OnQueryAddIndiactor final
{
public:
	class ABPGPlayerController*                   Controller;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EIndicatorType                                _type;                                             // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E54[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-69 ])
	struct FIndicatorData                         _out_detail;                                       // 0x0010(0x0028)(Parm, OutParm, NoDestructor, ContainsInstancedReference)
	bool                                          ReturnValue;                                       // 0x0038(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E55[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-69 ])
	struct FConfig_Game                           CallFunc_GetGameConfig_ReturnValue;                // 0x0040(0x0560)(ConstParm)
	class UUI_Indicator_Ping_World_C*             CallFunc_Create_ReturnValue;                       // 0x05A0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FIndicatorData                         K2Node_MakeStruct_IndicatorData;                   // 0x05A8(0x0028)(NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(PingMarker_BP_C_OnQueryAddIndiactor) == 0x000008, "Wrong alignment on PingMarker_BP_C_OnQueryAddIndiactor");
static_assert(sizeof(PingMarker_BP_C_OnQueryAddIndiactor) == 0x0005D0, "Wrong size on PingMarker_BP_C_OnQueryAddIndiactor");
static_assert(offsetof(PingMarker_BP_C_OnQueryAddIndiactor, Controller) == 0x000000, "Member 'PingMarker_BP_C_OnQueryAddIndiactor::Controller' has a wrong offset!");
static_assert(offsetof(PingMarker_BP_C_OnQueryAddIndiactor, _type) == 0x000008, "Member 'PingMarker_BP_C_OnQueryAddIndiactor::_type' has a wrong offset!");
static_assert(offsetof(PingMarker_BP_C_OnQueryAddIndiactor, _out_detail) == 0x000010, "Member 'PingMarker_BP_C_OnQueryAddIndiactor::_out_detail' has a wrong offset!");
static_assert(offsetof(PingMarker_BP_C_OnQueryAddIndiactor, ReturnValue) == 0x000038, "Member 'PingMarker_BP_C_OnQueryAddIndiactor::ReturnValue' has a wrong offset!");
static_assert(offsetof(PingMarker_BP_C_OnQueryAddIndiactor, CallFunc_GetGameConfig_ReturnValue) == 0x000040, "Member 'PingMarker_BP_C_OnQueryAddIndiactor::CallFunc_GetGameConfig_ReturnValue' has a wrong offset!");
static_assert(offsetof(PingMarker_BP_C_OnQueryAddIndiactor, CallFunc_Create_ReturnValue) == 0x0005A0, "Member 'PingMarker_BP_C_OnQueryAddIndiactor::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(PingMarker_BP_C_OnQueryAddIndiactor, K2Node_MakeStruct_IndicatorData) == 0x0005A8, "Member 'PingMarker_BP_C_OnQueryAddIndiactor::K2Node_MakeStruct_IndicatorData' has a wrong offset!");

// Function PingMarker_BP.PingMarker_BP_C.OnQueryVisibility
// 0x0018 (0x0018 - 0x0000)
struct PingMarker_BP_C_OnQueryVisibility final
{
public:
	EIndicatorType                                _type;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E56[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-69 ])
	class ACharaBase*                             CallFunc_GetLocalPlayerCharacter_ReturnValue;      // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PingMarker_BP_C_OnQueryVisibility) == 0x000008, "Wrong alignment on PingMarker_BP_C_OnQueryVisibility");
static_assert(sizeof(PingMarker_BP_C_OnQueryVisibility) == 0x000018, "Wrong size on PingMarker_BP_C_OnQueryVisibility");
static_assert(offsetof(PingMarker_BP_C_OnQueryVisibility, _type) == 0x000000, "Member 'PingMarker_BP_C_OnQueryVisibility::_type' has a wrong offset!");
static_assert(offsetof(PingMarker_BP_C_OnQueryVisibility, ReturnValue) == 0x000001, "Member 'PingMarker_BP_C_OnQueryVisibility::ReturnValue' has a wrong offset!");
static_assert(offsetof(PingMarker_BP_C_OnQueryVisibility, CallFunc_GetLocalPlayerCharacter_ReturnValue) == 0x000008, "Member 'PingMarker_BP_C_OnQueryVisibility::CallFunc_GetLocalPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(PingMarker_BP_C_OnQueryVisibility, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'PingMarker_BP_C_OnQueryVisibility::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(PingMarker_BP_C_OnQueryVisibility, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000011, "Member 'PingMarker_BP_C_OnQueryVisibility::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(PingMarker_BP_C_OnQueryVisibility, CallFunc_Not_PreBool_ReturnValue) == 0x000012, "Member 'PingMarker_BP_C_OnQueryVisibility::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function PingMarker_BP.PingMarker_BP_C.OnSetPing
// 0x01F8 (0x01F8 - 0x0000)
struct PingMarker_BP_C_OnSetPing final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E57[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-69 ])
	double                                        beam_width;                                        // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Color;                                             // 0x0010(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E58[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-69 ])
	struct FConfig_Ping                           CallFunc_GetPingDefine_ReturnValue;                // 0x0030(0x00B8)()
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E59[0x7];                                     // 0x00E9(0x0007)(Fixing Size After Last Property [ Dumper-69 ])
	struct FRotator                               CallFunc_MakeRotFromX_ReturnValue;                 // 0x00F0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                             CallFunc_K2_SetRelativeRotation_SweepHitResult;    // 0x0108(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	float                                         CallFunc_SetVariableFloat_InValue_ImplicitCast;    // 0x01F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PingMarker_BP_C_OnSetPing) == 0x000008, "Wrong alignment on PingMarker_BP_C_OnSetPing");
static_assert(sizeof(PingMarker_BP_C_OnSetPing) == 0x0001F8, "Wrong size on PingMarker_BP_C_OnSetPing");
static_assert(offsetof(PingMarker_BP_C_OnSetPing, ReturnValue) == 0x000000, "Member 'PingMarker_BP_C_OnSetPing::ReturnValue' has a wrong offset!");
static_assert(offsetof(PingMarker_BP_C_OnSetPing, beam_width) == 0x000008, "Member 'PingMarker_BP_C_OnSetPing::beam_width' has a wrong offset!");
static_assert(offsetof(PingMarker_BP_C_OnSetPing, Color) == 0x000010, "Member 'PingMarker_BP_C_OnSetPing::Color' has a wrong offset!");
static_assert(offsetof(PingMarker_BP_C_OnSetPing, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000020, "Member 'PingMarker_BP_C_OnSetPing::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(PingMarker_BP_C_OnSetPing, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'PingMarker_BP_C_OnSetPing::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(PingMarker_BP_C_OnSetPing, CallFunc_GetPingDefine_ReturnValue) == 0x000030, "Member 'PingMarker_BP_C_OnSetPing::CallFunc_GetPingDefine_ReturnValue' has a wrong offset!");
static_assert(offsetof(PingMarker_BP_C_OnSetPing, K2Node_SwitchEnum_CmpSuccess) == 0x0000E8, "Member 'PingMarker_BP_C_OnSetPing::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(PingMarker_BP_C_OnSetPing, CallFunc_MakeRotFromX_ReturnValue) == 0x0000F0, "Member 'PingMarker_BP_C_OnSetPing::CallFunc_MakeRotFromX_ReturnValue' has a wrong offset!");
static_assert(offsetof(PingMarker_BP_C_OnSetPing, CallFunc_K2_SetRelativeRotation_SweepHitResult) == 0x000108, "Member 'PingMarker_BP_C_OnSetPing::CallFunc_K2_SetRelativeRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(PingMarker_BP_C_OnSetPing, CallFunc_SetVariableFloat_InValue_ImplicitCast) == 0x0001F0, "Member 'PingMarker_BP_C_OnSetPing::CallFunc_SetVariableFloat_InValue_ImplicitCast' has a wrong offset!");

}

