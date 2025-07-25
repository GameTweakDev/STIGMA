#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: PANEL_SelectWeapon

#include "Basic.hpp"

#include "Stigma_structs.hpp"


namespace SDK::Params
{

// Function PANEL_SelectWeapon.PANEL_SelectWeapon_C.UpdateDetail
// 0x0398 (0x0398 - 0x0000)
struct PANEL_SelectWeapon_C_UpdateDetail final
{
public:
	class UGunObject*                             _origin_gun_obj;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UGunObject*                             _compared_gun_obj;                                 // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	ECharaType                                    _chara_type;                                       // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Is_init;                                           // 0x0011(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EGunType                                      CallFunc_GetGunType_ReturnValue;                   // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_35EF[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-69 ])
	class FString                                 CallFunc_GetPresetName_ReturnValue;                // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FGunEntry_Main                         CallFunc_GetGunMainEntry_ReturnValue;              // 0x0028(0x0350)(ConstParm)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0378(0x0018)()
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0390(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PANEL_SelectWeapon_C_UpdateDetail) == 0x000008, "Wrong alignment on PANEL_SelectWeapon_C_UpdateDetail");
static_assert(sizeof(PANEL_SelectWeapon_C_UpdateDetail) == 0x000398, "Wrong size on PANEL_SelectWeapon_C_UpdateDetail");
static_assert(offsetof(PANEL_SelectWeapon_C_UpdateDetail, _origin_gun_obj) == 0x000000, "Member 'PANEL_SelectWeapon_C_UpdateDetail::_origin_gun_obj' has a wrong offset!");
static_assert(offsetof(PANEL_SelectWeapon_C_UpdateDetail, _compared_gun_obj) == 0x000008, "Member 'PANEL_SelectWeapon_C_UpdateDetail::_compared_gun_obj' has a wrong offset!");
static_assert(offsetof(PANEL_SelectWeapon_C_UpdateDetail, _chara_type) == 0x000010, "Member 'PANEL_SelectWeapon_C_UpdateDetail::_chara_type' has a wrong offset!");
static_assert(offsetof(PANEL_SelectWeapon_C_UpdateDetail, Is_init) == 0x000011, "Member 'PANEL_SelectWeapon_C_UpdateDetail::Is_init' has a wrong offset!");
static_assert(offsetof(PANEL_SelectWeapon_C_UpdateDetail, CallFunc_IsValid_ReturnValue) == 0x000012, "Member 'PANEL_SelectWeapon_C_UpdateDetail::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(PANEL_SelectWeapon_C_UpdateDetail, CallFunc_IsValid_ReturnValue_1) == 0x000013, "Member 'PANEL_SelectWeapon_C_UpdateDetail::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PANEL_SelectWeapon_C_UpdateDetail, CallFunc_GetGunType_ReturnValue) == 0x000014, "Member 'PANEL_SelectWeapon_C_UpdateDetail::CallFunc_GetGunType_ReturnValue' has a wrong offset!");
static_assert(offsetof(PANEL_SelectWeapon_C_UpdateDetail, CallFunc_GetPresetName_ReturnValue) == 0x000018, "Member 'PANEL_SelectWeapon_C_UpdateDetail::CallFunc_GetPresetName_ReturnValue' has a wrong offset!");
static_assert(offsetof(PANEL_SelectWeapon_C_UpdateDetail, CallFunc_GetGunMainEntry_ReturnValue) == 0x000028, "Member 'PANEL_SelectWeapon_C_UpdateDetail::CallFunc_GetGunMainEntry_ReturnValue' has a wrong offset!");
static_assert(offsetof(PANEL_SelectWeapon_C_UpdateDetail, CallFunc_Conv_StringToText_ReturnValue) == 0x000378, "Member 'PANEL_SelectWeapon_C_UpdateDetail::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(PANEL_SelectWeapon_C_UpdateDetail, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000390, "Member 'PANEL_SelectWeapon_C_UpdateDetail::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");

}

