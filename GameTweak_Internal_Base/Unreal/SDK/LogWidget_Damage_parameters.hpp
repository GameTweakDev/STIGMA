#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: LogWidget_Damage

#include "Basic.hpp"

#include "Stigma_structs.hpp"
#include "ActionGraph_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function LogWidget_Damage.LogWidget_Damage_C.SetDamagedData
// 0x0030 (0x0030 - 0x0000)
struct LogWidget_Damage_C_SetDamagedData final
{
public:
	struct FDamagedData                           _data;                                             // 0x0000(0x0030)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};
static_assert(alignof(LogWidget_Damage_C_SetDamagedData) == 0x000008, "Wrong alignment on LogWidget_Damage_C_SetDamagedData");
static_assert(sizeof(LogWidget_Damage_C_SetDamagedData) == 0x000030, "Wrong size on LogWidget_Damage_C_SetDamagedData");
static_assert(offsetof(LogWidget_Damage_C_SetDamagedData, _data) == 0x000000, "Member 'LogWidget_Damage_C_SetDamagedData::_data' has a wrong offset!");

// Function LogWidget_Damage.LogWidget_Damage_C.Update
// 0x0250 (0x0250 - 0x0000)
struct LogWidget_Damage_C_Update final
{
public:
	class FText                                   bone_text;                                         // 0x0000(0x0018)(Edit, BlueprintVisible)
	class FText                                   Abnormal_text;                                     // 0x0018(0x0018)(Edit, BlueprintVisible)
	class FText                                   Twotap_text;                                       // 0x0030(0x0018)(Edit, BlueprintVisible)
	class FText                                   Headshot_text;                                     // 0x0048(0x0018)(Edit, BlueprintVisible)
	double                                        Armor_Damage;                                      // 0x0060(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        HP_Damage;                                         // 0x0068(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EBones                                        bone;                                              // 0x0070(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EKnockType                                    Knock_type;                                        // 0x0071(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActionGraphOperatorID                 Op_id;                                             // 0x0072(0x0006)(Edit, BlueprintVisible, NoDestructor)
	EAttackType                                   Attack_type;                                       // 0x0078(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAbnormals                             Abnormal;                                          // 0x0079(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_390F[0x6];                                     // 0x007A(0x0006)(Fixing Size After Last Property [ Dumper-69 ])
	class FText                                   Attack_desc;                                       // 0x0080(0x0018)(Edit, BlueprintVisible)
	class ACharaBase*                             Attacker;                                          // 0x0098(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3910[0x7];                                     // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-69 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x00A8(0x0050)(HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x00F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3911[0x6];                                     // 0x00FA(0x0006)(Fixing Size After Last Property [ Dumper-69 ])
	class FText                                   CallFunc_AppendText_ReturnValue;                   // 0x0100(0x0018)()
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3912[0x7];                                     // 0x0119(0x0007)(Fixing Size After Last Property [ Dumper-69 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0120(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0170(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0180(0x0018)()
	EBodyParts                                    CallFunc_GetPartsByBone_ReturnValue;               // 0x0198(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3913[0x7];                                     // 0x0199(0x0007)(Fixing Size After Last Property [ Dumper-69 ])
	struct FBodyPartDefine                        CallFunc_GetBodyPartDefine_ReturnValue;            // 0x01A0(0x0028)(ConstParm)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_3;        // 0x01C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x01C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3914[0x6];                                     // 0x01CA(0x0006)(Fixing Size After Last Property [ Dumper-69 ])
	class FText                                   CallFunc_Conv_DoubleToText_ReturnValue;            // 0x01D0(0x0018)()
	class FText                                   CallFunc_Conv_DoubleToText_ReturnValue_1;          // 0x01E8(0x0018)()
	class FText                                   CallFunc_GetKillLogText_ReturnValue;               // 0x0200(0x0018)()
	class AGunBase*                               CallFunc_GetGunInCurHand_ReturnValue;              // 0x0218(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetDisplayNameText_ReturnValue;           // 0x0220(0x0018)()
	bool                                          CallFunc_TextIsEmpty_ReturnValue;                  // 0x0238(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3915[0x7];                                     // 0x0239(0x0007)(Fixing Size After Last Property [ Dumper-69 ])
	double                                        K2Node_VariableSet_hp_damage_ImplicitCast;         // 0x0240(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        K2Node_VariableSet_armor_damage_ImplicitCast;      // 0x0248(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LogWidget_Damage_C_Update) == 0x000008, "Wrong alignment on LogWidget_Damage_C_Update");
static_assert(sizeof(LogWidget_Damage_C_Update) == 0x000250, "Wrong size on LogWidget_Damage_C_Update");
static_assert(offsetof(LogWidget_Damage_C_Update, bone_text) == 0x000000, "Member 'LogWidget_Damage_C_Update::bone_text' has a wrong offset!");
static_assert(offsetof(LogWidget_Damage_C_Update, Abnormal_text) == 0x000018, "Member 'LogWidget_Damage_C_Update::Abnormal_text' has a wrong offset!");
static_assert(offsetof(LogWidget_Damage_C_Update, Twotap_text) == 0x000030, "Member 'LogWidget_Damage_C_Update::Twotap_text' has a wrong offset!");
static_assert(offsetof(LogWidget_Damage_C_Update, Headshot_text) == 0x000048, "Member 'LogWidget_Damage_C_Update::Headshot_text' has a wrong offset!");
static_assert(offsetof(LogWidget_Damage_C_Update, Armor_Damage) == 0x000060, "Member 'LogWidget_Damage_C_Update::Armor_Damage' has a wrong offset!");
static_assert(offsetof(LogWidget_Damage_C_Update, HP_Damage) == 0x000068, "Member 'LogWidget_Damage_C_Update::HP_Damage' has a wrong offset!");
static_assert(offsetof(LogWidget_Damage_C_Update, bone) == 0x000070, "Member 'LogWidget_Damage_C_Update::bone' has a wrong offset!");
static_assert(offsetof(LogWidget_Damage_C_Update, Knock_type) == 0x000071, "Member 'LogWidget_Damage_C_Update::Knock_type' has a wrong offset!");
static_assert(offsetof(LogWidget_Damage_C_Update, Op_id) == 0x000072, "Member 'LogWidget_Damage_C_Update::Op_id' has a wrong offset!");
static_assert(offsetof(LogWidget_Damage_C_Update, Attack_type) == 0x000078, "Member 'LogWidget_Damage_C_Update::Attack_type' has a wrong offset!");
static_assert(offsetof(LogWidget_Damage_C_Update, Abnormal) == 0x000079, "Member 'LogWidget_Damage_C_Update::Abnormal' has a wrong offset!");
static_assert(offsetof(LogWidget_Damage_C_Update, Attack_desc) == 0x000080, "Member 'LogWidget_Damage_C_Update::Attack_desc' has a wrong offset!");
static_assert(offsetof(LogWidget_Damage_C_Update, Attacker) == 0x000098, "Member 'LogWidget_Damage_C_Update::Attacker' has a wrong offset!");
static_assert(offsetof(LogWidget_Damage_C_Update, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0000A0, "Member 'LogWidget_Damage_C_Update::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(LogWidget_Damage_C_Update, K2Node_MakeStruct_FormatArgumentData) == 0x0000A8, "Member 'LogWidget_Damage_C_Update::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(LogWidget_Damage_C_Update, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x0000F8, "Member 'LogWidget_Damage_C_Update::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LogWidget_Damage_C_Update, CallFunc_BooleanOR_ReturnValue) == 0x0000F9, "Member 'LogWidget_Damage_C_Update::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(LogWidget_Damage_C_Update, CallFunc_AppendText_ReturnValue) == 0x000100, "Member 'LogWidget_Damage_C_Update::CallFunc_AppendText_ReturnValue' has a wrong offset!");
static_assert(offsetof(LogWidget_Damage_C_Update, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x000118, "Member 'LogWidget_Damage_C_Update::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(LogWidget_Damage_C_Update, K2Node_MakeStruct_FormatArgumentData_1) == 0x000120, "Member 'LogWidget_Damage_C_Update::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(LogWidget_Damage_C_Update, K2Node_MakeArray_Array) == 0x000170, "Member 'LogWidget_Damage_C_Update::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(LogWidget_Damage_C_Update, CallFunc_Format_ReturnValue) == 0x000180, "Member 'LogWidget_Damage_C_Update::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(LogWidget_Damage_C_Update, CallFunc_GetPartsByBone_ReturnValue) == 0x000198, "Member 'LogWidget_Damage_C_Update::CallFunc_GetPartsByBone_ReturnValue' has a wrong offset!");
static_assert(offsetof(LogWidget_Damage_C_Update, CallFunc_GetBodyPartDefine_ReturnValue) == 0x0001A0, "Member 'LogWidget_Damage_C_Update::CallFunc_GetBodyPartDefine_ReturnValue' has a wrong offset!");
static_assert(offsetof(LogWidget_Damage_C_Update, CallFunc_EqualEqual_ByteByte_ReturnValue_3) == 0x0001C8, "Member 'LogWidget_Damage_C_Update::CallFunc_EqualEqual_ByteByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(LogWidget_Damage_C_Update, CallFunc_IsValid_ReturnValue) == 0x0001C9, "Member 'LogWidget_Damage_C_Update::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(LogWidget_Damage_C_Update, CallFunc_Conv_DoubleToText_ReturnValue) == 0x0001D0, "Member 'LogWidget_Damage_C_Update::CallFunc_Conv_DoubleToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(LogWidget_Damage_C_Update, CallFunc_Conv_DoubleToText_ReturnValue_1) == 0x0001E8, "Member 'LogWidget_Damage_C_Update::CallFunc_Conv_DoubleToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LogWidget_Damage_C_Update, CallFunc_GetKillLogText_ReturnValue) == 0x000200, "Member 'LogWidget_Damage_C_Update::CallFunc_GetKillLogText_ReturnValue' has a wrong offset!");
static_assert(offsetof(LogWidget_Damage_C_Update, CallFunc_GetGunInCurHand_ReturnValue) == 0x000218, "Member 'LogWidget_Damage_C_Update::CallFunc_GetGunInCurHand_ReturnValue' has a wrong offset!");
static_assert(offsetof(LogWidget_Damage_C_Update, CallFunc_GetDisplayNameText_ReturnValue) == 0x000220, "Member 'LogWidget_Damage_C_Update::CallFunc_GetDisplayNameText_ReturnValue' has a wrong offset!");
static_assert(offsetof(LogWidget_Damage_C_Update, CallFunc_TextIsEmpty_ReturnValue) == 0x000238, "Member 'LogWidget_Damage_C_Update::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(LogWidget_Damage_C_Update, K2Node_VariableSet_hp_damage_ImplicitCast) == 0x000240, "Member 'LogWidget_Damage_C_Update::K2Node_VariableSet_hp_damage_ImplicitCast' has a wrong offset!");
static_assert(offsetof(LogWidget_Damage_C_Update, K2Node_VariableSet_armor_damage_ImplicitCast) == 0x000248, "Member 'LogWidget_Damage_C_Update::K2Node_VariableSet_armor_damage_ImplicitCast' has a wrong offset!");

}

