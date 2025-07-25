#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: Popup_BattleStore_New

#include "Basic.hpp"

#include "Stigma_structs.hpp"


namespace SDK::Params
{

// Function Popup_BattleStore_New.Popup_BattleStore_New_C.ExecuteUbergraph_Popup_BattleStore_New
// 0x0004 (0x0004 - 0x0000)
struct Popup_BattleStore_New_C_ExecuteUbergraph_Popup_BattleStore_New final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Popup_BattleStore_New_C_ExecuteUbergraph_Popup_BattleStore_New) == 0x000004, "Wrong alignment on Popup_BattleStore_New_C_ExecuteUbergraph_Popup_BattleStore_New");
static_assert(sizeof(Popup_BattleStore_New_C_ExecuteUbergraph_Popup_BattleStore_New) == 0x000004, "Wrong size on Popup_BattleStore_New_C_ExecuteUbergraph_Popup_BattleStore_New");
static_assert(offsetof(Popup_BattleStore_New_C_ExecuteUbergraph_Popup_BattleStore_New, EntryPoint) == 0x000000, "Member 'Popup_BattleStore_New_C_ExecuteUbergraph_Popup_BattleStore_New::EntryPoint' has a wrong offset!");

// Function Popup_BattleStore_New.Popup_BattleStore_New_C.UpdateMasterDetail
// 0x0EC8 (0x0EC8 - 0x0000)
struct Popup_BattleStore_New_C_UpdateMasterDetail final
{
public:
	int32                                         _chara_idx;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A66[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-69 ])
	struct FGunPreset                             _gun_preset;                                       // 0x0008(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	class ULocalPlayerContext*                    CallFunc_GetLocalPlayerContext_ReturnValue;        // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UGunObject*                             CallFunc_FindGunObjectByPreset_ReturnValue;        // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EGunType                                      CallFunc_GetGunType_ReturnValue;                   // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A67[0x6];                                     // 0x002A(0x0006)(Fixing Size After Last Property [ Dumper-69 ])
	struct FGunEntry_Main                         CallFunc_FindGunMainEntry__out_config;             // 0x0030(0x0350)()
	bool                                          CallFunc_FindGunMainEntry_ReturnValue;             // 0x0380(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A68[0x7];                                     // 0x0381(0x0007)(Fixing Size After Last Property [ Dumper-69 ])
	class APlayerState*                           CallFunc_GetLocalPlayerState_ReturnValue;          // 0x0388(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AMatchServicedPlayerState*              K2Node_DynamicCast_AsMatch_Serviced_Player_State;  // 0x0390(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0398(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A69[0x7];                                     // 0x0399(0x0007)(Fixing Size After Last Property [ Dumper-69 ])
	struct FCharacterSetting                      CallFunc_GetPickedCharacter_ReturnValue;           // 0x03A0(0x0140)(ConstParm)
	struct FCharacterDefine                       CallFunc_GetCharacterDefByType__out_data;          // 0x04E0(0x09E0)()
	bool                                          CallFunc_GetCharacterDefByType_ReturnValue;        // 0x0EC0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Popup_BattleStore_New_C_UpdateMasterDetail) == 0x000008, "Wrong alignment on Popup_BattleStore_New_C_UpdateMasterDetail");
static_assert(sizeof(Popup_BattleStore_New_C_UpdateMasterDetail) == 0x000EC8, "Wrong size on Popup_BattleStore_New_C_UpdateMasterDetail");
static_assert(offsetof(Popup_BattleStore_New_C_UpdateMasterDetail, _chara_idx) == 0x000000, "Member 'Popup_BattleStore_New_C_UpdateMasterDetail::_chara_idx' has a wrong offset!");
static_assert(offsetof(Popup_BattleStore_New_C_UpdateMasterDetail, _gun_preset) == 0x000008, "Member 'Popup_BattleStore_New_C_UpdateMasterDetail::_gun_preset' has a wrong offset!");
static_assert(offsetof(Popup_BattleStore_New_C_UpdateMasterDetail, CallFunc_GetLocalPlayerContext_ReturnValue) == 0x000018, "Member 'Popup_BattleStore_New_C_UpdateMasterDetail::CallFunc_GetLocalPlayerContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(Popup_BattleStore_New_C_UpdateMasterDetail, CallFunc_FindGunObjectByPreset_ReturnValue) == 0x000020, "Member 'Popup_BattleStore_New_C_UpdateMasterDetail::CallFunc_FindGunObjectByPreset_ReturnValue' has a wrong offset!");
static_assert(offsetof(Popup_BattleStore_New_C_UpdateMasterDetail, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'Popup_BattleStore_New_C_UpdateMasterDetail::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Popup_BattleStore_New_C_UpdateMasterDetail, CallFunc_GetGunType_ReturnValue) == 0x000029, "Member 'Popup_BattleStore_New_C_UpdateMasterDetail::CallFunc_GetGunType_ReturnValue' has a wrong offset!");
static_assert(offsetof(Popup_BattleStore_New_C_UpdateMasterDetail, CallFunc_FindGunMainEntry__out_config) == 0x000030, "Member 'Popup_BattleStore_New_C_UpdateMasterDetail::CallFunc_FindGunMainEntry__out_config' has a wrong offset!");
static_assert(offsetof(Popup_BattleStore_New_C_UpdateMasterDetail, CallFunc_FindGunMainEntry_ReturnValue) == 0x000380, "Member 'Popup_BattleStore_New_C_UpdateMasterDetail::CallFunc_FindGunMainEntry_ReturnValue' has a wrong offset!");
static_assert(offsetof(Popup_BattleStore_New_C_UpdateMasterDetail, CallFunc_GetLocalPlayerState_ReturnValue) == 0x000388, "Member 'Popup_BattleStore_New_C_UpdateMasterDetail::CallFunc_GetLocalPlayerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(Popup_BattleStore_New_C_UpdateMasterDetail, K2Node_DynamicCast_AsMatch_Serviced_Player_State) == 0x000390, "Member 'Popup_BattleStore_New_C_UpdateMasterDetail::K2Node_DynamicCast_AsMatch_Serviced_Player_State' has a wrong offset!");
static_assert(offsetof(Popup_BattleStore_New_C_UpdateMasterDetail, K2Node_DynamicCast_bSuccess) == 0x000398, "Member 'Popup_BattleStore_New_C_UpdateMasterDetail::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Popup_BattleStore_New_C_UpdateMasterDetail, CallFunc_GetPickedCharacter_ReturnValue) == 0x0003A0, "Member 'Popup_BattleStore_New_C_UpdateMasterDetail::CallFunc_GetPickedCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(Popup_BattleStore_New_C_UpdateMasterDetail, CallFunc_GetCharacterDefByType__out_data) == 0x0004E0, "Member 'Popup_BattleStore_New_C_UpdateMasterDetail::CallFunc_GetCharacterDefByType__out_data' has a wrong offset!");
static_assert(offsetof(Popup_BattleStore_New_C_UpdateMasterDetail, CallFunc_GetCharacterDefByType_ReturnValue) == 0x000EC0, "Member 'Popup_BattleStore_New_C_UpdateMasterDetail::CallFunc_GetCharacterDefByType_ReturnValue' has a wrong offset!");

}

