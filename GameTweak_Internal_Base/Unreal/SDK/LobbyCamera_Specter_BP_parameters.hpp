#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: LobbyCamera_Specter_BP

#include "Basic.hpp"

#include "Stigma_structs.hpp"


namespace SDK::Params
{

// Function LobbyCamera_Specter_BP.LobbyCamera_Specter_BP_C.SetCharaType
// 0x09F0 (0x09F0 - 0x0000)
struct LobbyCamera_Specter_BP_C_SetCharaType final
{
public:
	ECharaType                                    Chara_type;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_40B5[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-69 ])
	struct FCharacterDefine                       CallFunc_GetCharacterDefByType__out_data;          // 0x0008(0x09E0)()
	bool                                          CallFunc_GetCharacterDefByType_ReturnValue;        // 0x09E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LobbyCamera_Specter_BP_C_SetCharaType) == 0x000008, "Wrong alignment on LobbyCamera_Specter_BP_C_SetCharaType");
static_assert(sizeof(LobbyCamera_Specter_BP_C_SetCharaType) == 0x0009F0, "Wrong size on LobbyCamera_Specter_BP_C_SetCharaType");
static_assert(offsetof(LobbyCamera_Specter_BP_C_SetCharaType, Chara_type) == 0x000000, "Member 'LobbyCamera_Specter_BP_C_SetCharaType::Chara_type' has a wrong offset!");
static_assert(offsetof(LobbyCamera_Specter_BP_C_SetCharaType, CallFunc_GetCharacterDefByType__out_data) == 0x000008, "Member 'LobbyCamera_Specter_BP_C_SetCharaType::CallFunc_GetCharacterDefByType__out_data' has a wrong offset!");
static_assert(offsetof(LobbyCamera_Specter_BP_C_SetCharaType, CallFunc_GetCharacterDefByType_ReturnValue) == 0x0009E8, "Member 'LobbyCamera_Specter_BP_C_SetCharaType::CallFunc_GetCharacterDefByType_ReturnValue' has a wrong offset!");

}

