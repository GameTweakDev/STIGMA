#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: UI_HTMLHelpViewer_BP

#include "Basic.hpp"


namespace SDK::Params
{

// Function UI_HTMLHelpViewer_BP.UI_HTMLHelpViewer_BP_C.ExecuteUbergraph_UI_HTMLHelpViewer_BP
// 0x0008 (0x0008 - 0x0000)
struct UI_HTMLHelpViewer_BP_C_ExecuteUbergraph_UI_HTMLHelpViewer_BP final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_OpenHelp_ReturnValue;                     // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_TextIsEmpty_ReturnValue;                  // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_HTMLHelpViewer_BP_C_ExecuteUbergraph_UI_HTMLHelpViewer_BP) == 0x000004, "Wrong alignment on UI_HTMLHelpViewer_BP_C_ExecuteUbergraph_UI_HTMLHelpViewer_BP");
static_assert(sizeof(UI_HTMLHelpViewer_BP_C_ExecuteUbergraph_UI_HTMLHelpViewer_BP) == 0x000008, "Wrong size on UI_HTMLHelpViewer_BP_C_ExecuteUbergraph_UI_HTMLHelpViewer_BP");
static_assert(offsetof(UI_HTMLHelpViewer_BP_C_ExecuteUbergraph_UI_HTMLHelpViewer_BP, EntryPoint) == 0x000000, "Member 'UI_HTMLHelpViewer_BP_C_ExecuteUbergraph_UI_HTMLHelpViewer_BP::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_HTMLHelpViewer_BP_C_ExecuteUbergraph_UI_HTMLHelpViewer_BP, CallFunc_OpenHelp_ReturnValue) == 0x000004, "Member 'UI_HTMLHelpViewer_BP_C_ExecuteUbergraph_UI_HTMLHelpViewer_BP::CallFunc_OpenHelp_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_HTMLHelpViewer_BP_C_ExecuteUbergraph_UI_HTMLHelpViewer_BP, CallFunc_TextIsEmpty_ReturnValue) == 0x000005, "Member 'UI_HTMLHelpViewer_BP_C_ExecuteUbergraph_UI_HTMLHelpViewer_BP::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");

// Function UI_HTMLHelpViewer_BP.UI_HTMLHelpViewer_BP_C.OpenHelp
// 0x0030 (0x0030 - 0x0000)
struct UI_HTMLHelpViewer_BP_C_OpenHelp final
{
public:
	class FText                                   _url;                                              // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          ReturnValue;                                       // 0x0018(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_372D[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-69 ])
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_HTMLHelpViewer_BP_C_OpenHelp) == 0x000008, "Wrong alignment on UI_HTMLHelpViewer_BP_C_OpenHelp");
static_assert(sizeof(UI_HTMLHelpViewer_BP_C_OpenHelp) == 0x000030, "Wrong size on UI_HTMLHelpViewer_BP_C_OpenHelp");
static_assert(offsetof(UI_HTMLHelpViewer_BP_C_OpenHelp, _url) == 0x000000, "Member 'UI_HTMLHelpViewer_BP_C_OpenHelp::_url' has a wrong offset!");
static_assert(offsetof(UI_HTMLHelpViewer_BP_C_OpenHelp, ReturnValue) == 0x000018, "Member 'UI_HTMLHelpViewer_BP_C_OpenHelp::ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_HTMLHelpViewer_BP_C_OpenHelp, CallFunc_Conv_TextToString_ReturnValue) == 0x000020, "Member 'UI_HTMLHelpViewer_BP_C_OpenHelp::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");

}

