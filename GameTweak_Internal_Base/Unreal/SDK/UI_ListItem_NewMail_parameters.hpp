#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: UI_ListItem_NewMail

#include "Basic.hpp"


namespace SDK::Params
{

// Function UI_ListItem_NewMail.UI_ListItem_NewMail_C.ExecuteUbergraph_UI_ListItem_NewMail
// 0x0008 (0x0008 - 0x0000)
struct UI_ListItem_NewMail_C_ExecuteUbergraph_UI_ListItem_NewMail final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bIsSelected;                          // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bIsExpanded;                          // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_ListItem_NewMail_C_ExecuteUbergraph_UI_ListItem_NewMail) == 0x000004, "Wrong alignment on UI_ListItem_NewMail_C_ExecuteUbergraph_UI_ListItem_NewMail");
static_assert(sizeof(UI_ListItem_NewMail_C_ExecuteUbergraph_UI_ListItem_NewMail) == 0x000008, "Wrong size on UI_ListItem_NewMail_C_ExecuteUbergraph_UI_ListItem_NewMail");
static_assert(offsetof(UI_ListItem_NewMail_C_ExecuteUbergraph_UI_ListItem_NewMail, EntryPoint) == 0x000000, "Member 'UI_ListItem_NewMail_C_ExecuteUbergraph_UI_ListItem_NewMail::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_ListItem_NewMail_C_ExecuteUbergraph_UI_ListItem_NewMail, K2Node_Event_bIsSelected) == 0x000004, "Member 'UI_ListItem_NewMail_C_ExecuteUbergraph_UI_ListItem_NewMail::K2Node_Event_bIsSelected' has a wrong offset!");
static_assert(offsetof(UI_ListItem_NewMail_C_ExecuteUbergraph_UI_ListItem_NewMail, K2Node_Event_bIsExpanded) == 0x000005, "Member 'UI_ListItem_NewMail_C_ExecuteUbergraph_UI_ListItem_NewMail::K2Node_Event_bIsExpanded' has a wrong offset!");

// Function UI_ListItem_NewMail.UI_ListItem_NewMail_C.BP_OnItemSelectionChanged
// 0x0001 (0x0001 - 0x0000)
struct UI_ListItem_NewMail_C_BP_OnItemSelectionChanged final
{
public:
	bool                                          bIsSelected;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_ListItem_NewMail_C_BP_OnItemSelectionChanged) == 0x000001, "Wrong alignment on UI_ListItem_NewMail_C_BP_OnItemSelectionChanged");
static_assert(sizeof(UI_ListItem_NewMail_C_BP_OnItemSelectionChanged) == 0x000001, "Wrong size on UI_ListItem_NewMail_C_BP_OnItemSelectionChanged");
static_assert(offsetof(UI_ListItem_NewMail_C_BP_OnItemSelectionChanged, bIsSelected) == 0x000000, "Member 'UI_ListItem_NewMail_C_BP_OnItemSelectionChanged::bIsSelected' has a wrong offset!");

// Function UI_ListItem_NewMail.UI_ListItem_NewMail_C.BP_OnItemExpansionChanged
// 0x0001 (0x0001 - 0x0000)
struct UI_ListItem_NewMail_C_BP_OnItemExpansionChanged final
{
public:
	bool                                          bIsExpanded;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_ListItem_NewMail_C_BP_OnItemExpansionChanged) == 0x000001, "Wrong alignment on UI_ListItem_NewMail_C_BP_OnItemExpansionChanged");
static_assert(sizeof(UI_ListItem_NewMail_C_BP_OnItemExpansionChanged) == 0x000001, "Wrong size on UI_ListItem_NewMail_C_BP_OnItemExpansionChanged");
static_assert(offsetof(UI_ListItem_NewMail_C_BP_OnItemExpansionChanged, bIsExpanded) == 0x000000, "Member 'UI_ListItem_NewMail_C_BP_OnItemExpansionChanged::bIsExpanded' has a wrong offset!");

}

