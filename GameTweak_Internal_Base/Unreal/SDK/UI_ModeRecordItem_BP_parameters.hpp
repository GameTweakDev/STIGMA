#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: UI_ModeRecordItem_BP

#include "Basic.hpp"

#include "Stigma_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function UI_ModeRecordItem_BP.UI_ModeRecordItem_BP_C.SetValues
// 0x0028 (0x0028 - 0x0000)
struct UI_ModeRecordItem_BP_C_SetValues final
{
public:
	struct FModeRecord                            _records;                                          // 0x0000(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(UI_ModeRecordItem_BP_C_SetValues) == 0x000008, "Wrong alignment on UI_ModeRecordItem_BP_C_SetValues");
static_assert(sizeof(UI_ModeRecordItem_BP_C_SetValues) == 0x000028, "Wrong size on UI_ModeRecordItem_BP_C_SetValues");
static_assert(offsetof(UI_ModeRecordItem_BP_C_SetValues, _records) == 0x000000, "Member 'UI_ModeRecordItem_BP_C_SetValues::_records' has a wrong offset!");

// Function UI_ModeRecordItem_BP.UI_ModeRecordItem_BP_C.SetRecordText
// 0x0018 (0x0018 - 0x0000)
struct UI_ModeRecordItem_BP_C_SetRecordText final
{
public:
	class FText                                   _text;                                             // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(UI_ModeRecordItem_BP_C_SetRecordText) == 0x000008, "Wrong alignment on UI_ModeRecordItem_BP_C_SetRecordText");
static_assert(sizeof(UI_ModeRecordItem_BP_C_SetRecordText) == 0x000018, "Wrong size on UI_ModeRecordItem_BP_C_SetRecordText");
static_assert(offsetof(UI_ModeRecordItem_BP_C_SetRecordText, _text) == 0x000000, "Member 'UI_ModeRecordItem_BP_C_SetRecordText::_text' has a wrong offset!");

// Function UI_ModeRecordItem_BP.UI_ModeRecordItem_BP_C.SetProgressPercent
// 0x0010 (0x0010 - 0x0000)
struct UI_ModeRecordItem_BP_C_SetProgressPercent final
{
public:
	double                                        _percent;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetPercent_InPercent_ImplicitCast;        // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_ModeRecordItem_BP_C_SetProgressPercent) == 0x000008, "Wrong alignment on UI_ModeRecordItem_BP_C_SetProgressPercent");
static_assert(sizeof(UI_ModeRecordItem_BP_C_SetProgressPercent) == 0x000010, "Wrong size on UI_ModeRecordItem_BP_C_SetProgressPercent");
static_assert(offsetof(UI_ModeRecordItem_BP_C_SetProgressPercent, _percent) == 0x000000, "Member 'UI_ModeRecordItem_BP_C_SetProgressPercent::_percent' has a wrong offset!");
static_assert(offsetof(UI_ModeRecordItem_BP_C_SetProgressPercent, CallFunc_SetPercent_InPercent_ImplicitCast) == 0x000008, "Member 'UI_ModeRecordItem_BP_C_SetProgressPercent::CallFunc_SetPercent_InPercent_ImplicitCast' has a wrong offset!");

// Function UI_ModeRecordItem_BP.UI_ModeRecordItem_BP_C.OnSynchronizeProperties
// 0x0001 (0x0001 - 0x0000)
struct UI_ModeRecordItem_BP_C_OnSynchronizeProperties final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_ModeRecordItem_BP_C_OnSynchronizeProperties) == 0x000001, "Wrong alignment on UI_ModeRecordItem_BP_C_OnSynchronizeProperties");
static_assert(sizeof(UI_ModeRecordItem_BP_C_OnSynchronizeProperties) == 0x000001, "Wrong size on UI_ModeRecordItem_BP_C_OnSynchronizeProperties");
static_assert(offsetof(UI_ModeRecordItem_BP_C_OnSynchronizeProperties, ReturnValue) == 0x000000, "Member 'UI_ModeRecordItem_BP_C_OnSynchronizeProperties::ReturnValue' has a wrong offset!");

// Function UI_ModeRecordItem_BP.UI_ModeRecordItem_BP_C.ExecuteUbergraph_UI_ModeRecordItem_BP
// 0x0730 (0x0730 - 0x0000)
struct UI_ModeRecordItem_BP_C_ExecuteUbergraph_UI_ModeRecordItem_BP final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bIsExpanded;                          // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bIsSelected;                          // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_40C1[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-69 ])
	struct FModeRecord                            K2Node_Event__records;                             // 0x0008(0x0028)()
	struct FMode                                  CallFunc_GetGameModeEntry_ReturnValue;             // 0x0030(0x0370)(ConstParm)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x03A0(0x0014)()
	uint8                                         Pad_40C2[0xC];                                     // 0x03B4(0x000C)(Fixing Size After Last Property [ Dumper-69 ])
	struct FProgressBarStyle                      K2Node_MakeStruct_ProgressBarStyle;                // 0x03C0(0x0290)()
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush;                      // 0x0650(0x00D0)()
	double                                        CallFunc_SetProgressPercent__percent_ImplicitCast; // 0x0720(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_ModeRecordItem_BP_C_ExecuteUbergraph_UI_ModeRecordItem_BP) == 0x000010, "Wrong alignment on UI_ModeRecordItem_BP_C_ExecuteUbergraph_UI_ModeRecordItem_BP");
static_assert(sizeof(UI_ModeRecordItem_BP_C_ExecuteUbergraph_UI_ModeRecordItem_BP) == 0x000730, "Wrong size on UI_ModeRecordItem_BP_C_ExecuteUbergraph_UI_ModeRecordItem_BP");
static_assert(offsetof(UI_ModeRecordItem_BP_C_ExecuteUbergraph_UI_ModeRecordItem_BP, EntryPoint) == 0x000000, "Member 'UI_ModeRecordItem_BP_C_ExecuteUbergraph_UI_ModeRecordItem_BP::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_ModeRecordItem_BP_C_ExecuteUbergraph_UI_ModeRecordItem_BP, K2Node_Event_bIsExpanded) == 0x000004, "Member 'UI_ModeRecordItem_BP_C_ExecuteUbergraph_UI_ModeRecordItem_BP::K2Node_Event_bIsExpanded' has a wrong offset!");
static_assert(offsetof(UI_ModeRecordItem_BP_C_ExecuteUbergraph_UI_ModeRecordItem_BP, K2Node_Event_bIsSelected) == 0x000005, "Member 'UI_ModeRecordItem_BP_C_ExecuteUbergraph_UI_ModeRecordItem_BP::K2Node_Event_bIsSelected' has a wrong offset!");
static_assert(offsetof(UI_ModeRecordItem_BP_C_ExecuteUbergraph_UI_ModeRecordItem_BP, K2Node_Event__records) == 0x000008, "Member 'UI_ModeRecordItem_BP_C_ExecuteUbergraph_UI_ModeRecordItem_BP::K2Node_Event__records' has a wrong offset!");
static_assert(offsetof(UI_ModeRecordItem_BP_C_ExecuteUbergraph_UI_ModeRecordItem_BP, CallFunc_GetGameModeEntry_ReturnValue) == 0x000030, "Member 'UI_ModeRecordItem_BP_C_ExecuteUbergraph_UI_ModeRecordItem_BP::CallFunc_GetGameModeEntry_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_ModeRecordItem_BP_C_ExecuteUbergraph_UI_ModeRecordItem_BP, K2Node_MakeStruct_SlateColor) == 0x0003A0, "Member 'UI_ModeRecordItem_BP_C_ExecuteUbergraph_UI_ModeRecordItem_BP::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(UI_ModeRecordItem_BP_C_ExecuteUbergraph_UI_ModeRecordItem_BP, K2Node_MakeStruct_ProgressBarStyle) == 0x0003C0, "Member 'UI_ModeRecordItem_BP_C_ExecuteUbergraph_UI_ModeRecordItem_BP::K2Node_MakeStruct_ProgressBarStyle' has a wrong offset!");
static_assert(offsetof(UI_ModeRecordItem_BP_C_ExecuteUbergraph_UI_ModeRecordItem_BP, K2Node_MakeStruct_SlateBrush) == 0x000650, "Member 'UI_ModeRecordItem_BP_C_ExecuteUbergraph_UI_ModeRecordItem_BP::K2Node_MakeStruct_SlateBrush' has a wrong offset!");
static_assert(offsetof(UI_ModeRecordItem_BP_C_ExecuteUbergraph_UI_ModeRecordItem_BP, CallFunc_SetProgressPercent__percent_ImplicitCast) == 0x000720, "Member 'UI_ModeRecordItem_BP_C_ExecuteUbergraph_UI_ModeRecordItem_BP::CallFunc_SetProgressPercent__percent_ImplicitCast' has a wrong offset!");

// Function UI_ModeRecordItem_BP.UI_ModeRecordItem_BP_C.BP_OnItemSelectionChanged
// 0x0001 (0x0001 - 0x0000)
struct UI_ModeRecordItem_BP_C_BP_OnItemSelectionChanged final
{
public:
	bool                                          bIsSelected;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_ModeRecordItem_BP_C_BP_OnItemSelectionChanged) == 0x000001, "Wrong alignment on UI_ModeRecordItem_BP_C_BP_OnItemSelectionChanged");
static_assert(sizeof(UI_ModeRecordItem_BP_C_BP_OnItemSelectionChanged) == 0x000001, "Wrong size on UI_ModeRecordItem_BP_C_BP_OnItemSelectionChanged");
static_assert(offsetof(UI_ModeRecordItem_BP_C_BP_OnItemSelectionChanged, bIsSelected) == 0x000000, "Member 'UI_ModeRecordItem_BP_C_BP_OnItemSelectionChanged::bIsSelected' has a wrong offset!");

// Function UI_ModeRecordItem_BP.UI_ModeRecordItem_BP_C.BP_OnItemExpansionChanged
// 0x0001 (0x0001 - 0x0000)
struct UI_ModeRecordItem_BP_C_BP_OnItemExpansionChanged final
{
public:
	bool                                          bIsExpanded;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_ModeRecordItem_BP_C_BP_OnItemExpansionChanged) == 0x000001, "Wrong alignment on UI_ModeRecordItem_BP_C_BP_OnItemExpansionChanged");
static_assert(sizeof(UI_ModeRecordItem_BP_C_BP_OnItemExpansionChanged) == 0x000001, "Wrong size on UI_ModeRecordItem_BP_C_BP_OnItemExpansionChanged");
static_assert(offsetof(UI_ModeRecordItem_BP_C_BP_OnItemExpansionChanged, bIsExpanded) == 0x000000, "Member 'UI_ModeRecordItem_BP_C_BP_OnItemExpansionChanged::bIsExpanded' has a wrong offset!");

}

