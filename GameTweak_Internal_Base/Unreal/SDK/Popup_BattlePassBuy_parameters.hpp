#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: Popup_BattlePassBuy

#include "Basic.hpp"


namespace SDK::Params
{

// Function Popup_BattlePassBuy.Popup_BattlePassBuy_C.ExecuteUbergraph_Popup_BattlePassBuy
// 0x0020 (0x0020 - 0x0000)
struct Popup_BattlePassBuy_C_ExecuteUbergraph_Popup_BattlePassBuy final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_57[0x4];                                       // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-69 ])
	class FText                                   K2Node_Event__text;                                // 0x0008(0x0018)(ConstParm)
};
static_assert(alignof(Popup_BattlePassBuy_C_ExecuteUbergraph_Popup_BattlePassBuy) == 0x000008, "Wrong alignment on Popup_BattlePassBuy_C_ExecuteUbergraph_Popup_BattlePassBuy");
static_assert(sizeof(Popup_BattlePassBuy_C_ExecuteUbergraph_Popup_BattlePassBuy) == 0x000020, "Wrong size on Popup_BattlePassBuy_C_ExecuteUbergraph_Popup_BattlePassBuy");
static_assert(offsetof(Popup_BattlePassBuy_C_ExecuteUbergraph_Popup_BattlePassBuy, EntryPoint) == 0x000000, "Member 'Popup_BattlePassBuy_C_ExecuteUbergraph_Popup_BattlePassBuy::EntryPoint' has a wrong offset!");
static_assert(offsetof(Popup_BattlePassBuy_C_ExecuteUbergraph_Popup_BattlePassBuy, K2Node_Event__text) == 0x000008, "Member 'Popup_BattlePassBuy_C_ExecuteUbergraph_Popup_BattlePassBuy::K2Node_Event__text' has a wrong offset!");

// Function Popup_BattlePassBuy.Popup_BattlePassBuy_C.SetDesc
// 0x0018 (0x0018 - 0x0000)
struct Popup_BattlePassBuy_C_SetDesc final
{
public:
	class FText                                   _text;                                             // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(Popup_BattlePassBuy_C_SetDesc) == 0x000008, "Wrong alignment on Popup_BattlePassBuy_C_SetDesc");
static_assert(sizeof(Popup_BattlePassBuy_C_SetDesc) == 0x000018, "Wrong size on Popup_BattlePassBuy_C_SetDesc");
static_assert(offsetof(Popup_BattlePassBuy_C_SetDesc, _text) == 0x000000, "Member 'Popup_BattlePassBuy_C_SetDesc::_text' has a wrong offset!");

}

