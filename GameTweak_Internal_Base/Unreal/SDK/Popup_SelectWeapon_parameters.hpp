#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: Popup_SelectWeapon

#include "Basic.hpp"

#include "Stigma_structs.hpp"


namespace SDK::Params
{

// Function Popup_SelectWeapon.Popup_SelectWeapon_C.ExecuteUbergraph_Popup_SelectWeapon
// 0x0004 (0x0004 - 0x0000)
struct Popup_SelectWeapon_C_ExecuteUbergraph_Popup_SelectWeapon final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Popup_SelectWeapon_C_ExecuteUbergraph_Popup_SelectWeapon) == 0x000004, "Wrong alignment on Popup_SelectWeapon_C_ExecuteUbergraph_Popup_SelectWeapon");
static_assert(sizeof(Popup_SelectWeapon_C_ExecuteUbergraph_Popup_SelectWeapon) == 0x000004, "Wrong size on Popup_SelectWeapon_C_ExecuteUbergraph_Popup_SelectWeapon");
static_assert(offsetof(Popup_SelectWeapon_C_ExecuteUbergraph_Popup_SelectWeapon, EntryPoint) == 0x000000, "Member 'Popup_SelectWeapon_C_ExecuteUbergraph_Popup_SelectWeapon::EntryPoint' has a wrong offset!");

// Function Popup_SelectWeapon.Popup_SelectWeapon_C.OnChangeItem__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct Popup_SelectWeapon_C_OnChangeItem__DelegateSignature final
{
public:
	struct FGunPreset                             _gun_preset;                                       // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	int32                                         _zidx_chara;                                       // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Popup_SelectWeapon_C_OnChangeItem__DelegateSignature) == 0x000008, "Wrong alignment on Popup_SelectWeapon_C_OnChangeItem__DelegateSignature");
static_assert(sizeof(Popup_SelectWeapon_C_OnChangeItem__DelegateSignature) == 0x000018, "Wrong size on Popup_SelectWeapon_C_OnChangeItem__DelegateSignature");
static_assert(offsetof(Popup_SelectWeapon_C_OnChangeItem__DelegateSignature, _gun_preset) == 0x000000, "Member 'Popup_SelectWeapon_C_OnChangeItem__DelegateSignature::_gun_preset' has a wrong offset!");
static_assert(offsetof(Popup_SelectWeapon_C_OnChangeItem__DelegateSignature, _zidx_chara) == 0x000010, "Member 'Popup_SelectWeapon_C_OnChangeItem__DelegateSignature::_zidx_chara' has a wrong offset!");

// Function Popup_SelectWeapon.Popup_SelectWeapon_C.OnShowPopup
// 0x0001 (0x0001 - 0x0000)
struct Popup_SelectWeapon_C_OnShowPopup final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Popup_SelectWeapon_C_OnShowPopup) == 0x000001, "Wrong alignment on Popup_SelectWeapon_C_OnShowPopup");
static_assert(sizeof(Popup_SelectWeapon_C_OnShowPopup) == 0x000001, "Wrong size on Popup_SelectWeapon_C_OnShowPopup");
static_assert(offsetof(Popup_SelectWeapon_C_OnShowPopup, ReturnValue) == 0x000000, "Member 'Popup_SelectWeapon_C_OnShowPopup::ReturnValue' has a wrong offset!");

}

