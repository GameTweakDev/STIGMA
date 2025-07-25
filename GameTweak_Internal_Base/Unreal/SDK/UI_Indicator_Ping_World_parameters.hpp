#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: UI_Indicator_Ping_World

#include "Basic.hpp"

#include "Stigma_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function UI_Indicator_Ping_World.UI_Indicator_Ping_World_C.ExecuteUbergraph_UI_Indicator_Ping_World
// 0x0020 (0x0020 - 0x0000)
struct UI_Indicator_Ping_World_C_ExecuteUbergraph_UI_Indicator_Ping_World final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event__is_clipped;                          // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3632[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-69 ])
	float                                         K2Node_Event__angle;                               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3633[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-69 ])
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_A_ImplicitCast;          // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Indicator_Ping_World_C_ExecuteUbergraph_UI_Indicator_Ping_World) == 0x000008, "Wrong alignment on UI_Indicator_Ping_World_C_ExecuteUbergraph_UI_Indicator_Ping_World");
static_assert(sizeof(UI_Indicator_Ping_World_C_ExecuteUbergraph_UI_Indicator_Ping_World) == 0x000020, "Wrong size on UI_Indicator_Ping_World_C_ExecuteUbergraph_UI_Indicator_Ping_World");
static_assert(offsetof(UI_Indicator_Ping_World_C_ExecuteUbergraph_UI_Indicator_Ping_World, EntryPoint) == 0x000000, "Member 'UI_Indicator_Ping_World_C_ExecuteUbergraph_UI_Indicator_Ping_World::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_Indicator_Ping_World_C_ExecuteUbergraph_UI_Indicator_Ping_World, K2Node_Event__is_clipped) == 0x000004, "Member 'UI_Indicator_Ping_World_C_ExecuteUbergraph_UI_Indicator_Ping_World::K2Node_Event__is_clipped' has a wrong offset!");
static_assert(offsetof(UI_Indicator_Ping_World_C_ExecuteUbergraph_UI_Indicator_Ping_World, K2Node_Event__angle) == 0x000008, "Member 'UI_Indicator_Ping_World_C_ExecuteUbergraph_UI_Indicator_Ping_World::K2Node_Event__angle' has a wrong offset!");
static_assert(offsetof(UI_Indicator_Ping_World_C_ExecuteUbergraph_UI_Indicator_Ping_World, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000010, "Member 'UI_Indicator_Ping_World_C_ExecuteUbergraph_UI_Indicator_Ping_World::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Indicator_Ping_World_C_ExecuteUbergraph_UI_Indicator_Ping_World, CallFunc_Add_DoubleDouble_A_ImplicitCast) == 0x000018, "Member 'UI_Indicator_Ping_World_C_ExecuteUbergraph_UI_Indicator_Ping_World::CallFunc_Add_DoubleDouble_A_ImplicitCast' has a wrong offset!");

// Function UI_Indicator_Ping_World.UI_Indicator_Ping_World_C.OnUpdateLocation
// 0x0008 (0x0008 - 0x0000)
struct UI_Indicator_Ping_World_C_OnUpdateLocation final
{
public:
	bool                                          _is_clipped;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3634[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-69 ])
	float                                         _angle;                                            // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Indicator_Ping_World_C_OnUpdateLocation) == 0x000004, "Wrong alignment on UI_Indicator_Ping_World_C_OnUpdateLocation");
static_assert(sizeof(UI_Indicator_Ping_World_C_OnUpdateLocation) == 0x000008, "Wrong size on UI_Indicator_Ping_World_C_OnUpdateLocation");
static_assert(offsetof(UI_Indicator_Ping_World_C_OnUpdateLocation, _is_clipped) == 0x000000, "Member 'UI_Indicator_Ping_World_C_OnUpdateLocation::_is_clipped' has a wrong offset!");
static_assert(offsetof(UI_Indicator_Ping_World_C_OnUpdateLocation, _angle) == 0x000004, "Member 'UI_Indicator_Ping_World_C_OnUpdateLocation::_angle' has a wrong offset!");

// Function UI_Indicator_Ping_World.UI_Indicator_Ping_World_C.OnUpdateUI
// 0x02B0 (0x02B0 - 0x0000)
struct UI_Indicator_Ping_World_C_OnUpdateUI final
{
public:
	struct FConfig_Ping                           CallFunc_GetPingDefine_ReturnValue;                // 0x0000(0x00B8)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x00B8(0x0014)()
	uint8                                         Pad_3635[0x4];                                     // 0x00CC(0x0004)(Fixing Size After Last Property [ Dumper-69 ])
	class UObject*                                CallFunc_LoadAsset_Blocking_ReturnValue;           // 0x00D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3636[0x8];                                     // 0x00D8(0x0008)(Fixing Size After Last Property [ Dumper-69 ])
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush;                      // 0x00E0(0x00D0)()
	class USoundCue*                              K2Node_DynamicCast_As_____;                        // 0x01B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x01B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3637[0x7];                                     // 0x01B9(0x0007)(Fixing Size After Last Property [ Dumper-69 ])
	class UObject*                                CallFunc_LoadAsset_Blocking_ReturnValue_1;         // 0x01C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3638[0x8];                                     // 0x01C8(0x0008)(Fixing Size After Last Property [ Dumper-69 ])
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush_1;                    // 0x01D0(0x00D0)()
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x02A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Indicator_Ping_World_C_OnUpdateUI) == 0x000010, "Wrong alignment on UI_Indicator_Ping_World_C_OnUpdateUI");
static_assert(sizeof(UI_Indicator_Ping_World_C_OnUpdateUI) == 0x0002B0, "Wrong size on UI_Indicator_Ping_World_C_OnUpdateUI");
static_assert(offsetof(UI_Indicator_Ping_World_C_OnUpdateUI, CallFunc_GetPingDefine_ReturnValue) == 0x000000, "Member 'UI_Indicator_Ping_World_C_OnUpdateUI::CallFunc_GetPingDefine_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Indicator_Ping_World_C_OnUpdateUI, K2Node_MakeStruct_SlateColor) == 0x0000B8, "Member 'UI_Indicator_Ping_World_C_OnUpdateUI::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(UI_Indicator_Ping_World_C_OnUpdateUI, CallFunc_LoadAsset_Blocking_ReturnValue) == 0x0000D0, "Member 'UI_Indicator_Ping_World_C_OnUpdateUI::CallFunc_LoadAsset_Blocking_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Indicator_Ping_World_C_OnUpdateUI, K2Node_MakeStruct_SlateBrush) == 0x0000E0, "Member 'UI_Indicator_Ping_World_C_OnUpdateUI::K2Node_MakeStruct_SlateBrush' has a wrong offset!");
static_assert(offsetof(UI_Indicator_Ping_World_C_OnUpdateUI, K2Node_DynamicCast_As_____) == 0x0001B0, "Member 'UI_Indicator_Ping_World_C_OnUpdateUI::K2Node_DynamicCast_As_____' has a wrong offset!");
static_assert(offsetof(UI_Indicator_Ping_World_C_OnUpdateUI, K2Node_DynamicCast_bSuccess) == 0x0001B8, "Member 'UI_Indicator_Ping_World_C_OnUpdateUI::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UI_Indicator_Ping_World_C_OnUpdateUI, CallFunc_LoadAsset_Blocking_ReturnValue_1) == 0x0001C0, "Member 'UI_Indicator_Ping_World_C_OnUpdateUI::CallFunc_LoadAsset_Blocking_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_Indicator_Ping_World_C_OnUpdateUI, K2Node_MakeStruct_SlateBrush_1) == 0x0001D0, "Member 'UI_Indicator_Ping_World_C_OnUpdateUI::K2Node_MakeStruct_SlateBrush_1' has a wrong offset!");
static_assert(offsetof(UI_Indicator_Ping_World_C_OnUpdateUI, CallFunc_IsValid_ReturnValue) == 0x0002A0, "Member 'UI_Indicator_Ping_World_C_OnUpdateUI::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}

