#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: UI_Challenge_RoundSelectPopup

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function UI_Challenge_RoundSelectPopup.UI_Challenge_RoundSelectPopup_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct UI_Challenge_RoundSelectPopup_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Challenge_RoundSelectPopup_C_PreConstruct) == 0x000001, "Wrong alignment on UI_Challenge_RoundSelectPopup_C_PreConstruct");
static_assert(sizeof(UI_Challenge_RoundSelectPopup_C_PreConstruct) == 0x000001, "Wrong size on UI_Challenge_RoundSelectPopup_C_PreConstruct");
static_assert(offsetof(UI_Challenge_RoundSelectPopup_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'UI_Challenge_RoundSelectPopup_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function UI_Challenge_RoundSelectPopup.UI_Challenge_RoundSelectPopup_C.GetBestRoundText
// 0x0100 (0x0100 - 0x0000)
struct UI_Challenge_RoundSelectPopup_C_GetBestRoundText final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
	class UChallenge_SubSystem*                   CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue;              // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_40FD[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-69 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0030(0x0050)(HasGetValueTypeHash)
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue_1;            // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0088(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00D8(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00E8(0x0018)()
};
static_assert(alignof(UI_Challenge_RoundSelectPopup_C_GetBestRoundText) == 0x000008, "Wrong alignment on UI_Challenge_RoundSelectPopup_C_GetBestRoundText");
static_assert(sizeof(UI_Challenge_RoundSelectPopup_C_GetBestRoundText) == 0x000100, "Wrong size on UI_Challenge_RoundSelectPopup_C_GetBestRoundText");
static_assert(offsetof(UI_Challenge_RoundSelectPopup_C_GetBestRoundText, ReturnValue) == 0x000000, "Member 'UI_Challenge_RoundSelectPopup_C_GetBestRoundText::ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Challenge_RoundSelectPopup_C_GetBestRoundText, CallFunc_GetGameInstanceSubsystem_ReturnValue) == 0x000018, "Member 'UI_Challenge_RoundSelectPopup_C_GetBestRoundText::CallFunc_GetGameInstanceSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Challenge_RoundSelectPopup_C_GetBestRoundText, CallFunc_Conv_IntToInt64_ReturnValue) == 0x000020, "Member 'UI_Challenge_RoundSelectPopup_C_GetBestRoundText::CallFunc_Conv_IntToInt64_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Challenge_RoundSelectPopup_C_GetBestRoundText, CallFunc_Add_IntInt_ReturnValue) == 0x000028, "Member 'UI_Challenge_RoundSelectPopup_C_GetBestRoundText::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Challenge_RoundSelectPopup_C_GetBestRoundText, K2Node_MakeStruct_FormatArgumentData) == 0x000030, "Member 'UI_Challenge_RoundSelectPopup_C_GetBestRoundText::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(UI_Challenge_RoundSelectPopup_C_GetBestRoundText, CallFunc_Conv_IntToInt64_ReturnValue_1) == 0x000080, "Member 'UI_Challenge_RoundSelectPopup_C_GetBestRoundText::CallFunc_Conv_IntToInt64_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_Challenge_RoundSelectPopup_C_GetBestRoundText, K2Node_MakeStruct_FormatArgumentData_1) == 0x000088, "Member 'UI_Challenge_RoundSelectPopup_C_GetBestRoundText::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(UI_Challenge_RoundSelectPopup_C_GetBestRoundText, K2Node_MakeArray_Array) == 0x0000D8, "Member 'UI_Challenge_RoundSelectPopup_C_GetBestRoundText::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(UI_Challenge_RoundSelectPopup_C_GetBestRoundText, CallFunc_Format_ReturnValue) == 0x0000E8, "Member 'UI_Challenge_RoundSelectPopup_C_GetBestRoundText::CallFunc_Format_ReturnValue' has a wrong offset!");

// Function UI_Challenge_RoundSelectPopup.UI_Challenge_RoundSelectPopup_C.ExecuteUbergraph_UI_Challenge_RoundSelectPopup
// 0x00D8 (0x00D8 - 0x0000)
struct UI_Challenge_RoundSelectPopup_C_ExecuteUbergraph_UI_Challenge_RoundSelectPopup final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_40FE[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-69 ])
	class UAnimatableWidget*                      K2Node_ComponentBoundEvent__widget;                // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent__select;                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bIsChecked_1;           // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bIsChecked;             // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_40FF[0x5];                                     // 0x0013(0x0005)(Fixing Size After Last Property [ Dumper-69 ])
	class AStigmaPlayerController*                CallFunc_GetLocalPlayerController_ReturnValue;     // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsChecked_ReturnValue;                    // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4100[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-69 ])
	class ALobbyControllerBase*                   K2Node_DynamicCast_AsLobby_Controller_Base;        // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ClickButton_ReturnValue;                  // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ClickButton_ReturnValue_1;                // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0033(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4101[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-69 ])
	class UChallenge_SubSystem*                   CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_MakeLiteralInt_ReturnValue;               // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4102[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-69 ])
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue;              // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimatableWidget*                      K2Node_ComponentBoundEvent__widget_1;              // 0x0050(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent__select_1;              // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4103[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-69 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0060(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00B0(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00C0(0x0018)()
};
static_assert(alignof(UI_Challenge_RoundSelectPopup_C_ExecuteUbergraph_UI_Challenge_RoundSelectPopup) == 0x000008, "Wrong alignment on UI_Challenge_RoundSelectPopup_C_ExecuteUbergraph_UI_Challenge_RoundSelectPopup");
static_assert(sizeof(UI_Challenge_RoundSelectPopup_C_ExecuteUbergraph_UI_Challenge_RoundSelectPopup) == 0x0000D8, "Wrong size on UI_Challenge_RoundSelectPopup_C_ExecuteUbergraph_UI_Challenge_RoundSelectPopup");
static_assert(offsetof(UI_Challenge_RoundSelectPopup_C_ExecuteUbergraph_UI_Challenge_RoundSelectPopup, EntryPoint) == 0x000000, "Member 'UI_Challenge_RoundSelectPopup_C_ExecuteUbergraph_UI_Challenge_RoundSelectPopup::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_Challenge_RoundSelectPopup_C_ExecuteUbergraph_UI_Challenge_RoundSelectPopup, K2Node_ComponentBoundEvent__widget) == 0x000008, "Member 'UI_Challenge_RoundSelectPopup_C_ExecuteUbergraph_UI_Challenge_RoundSelectPopup::K2Node_ComponentBoundEvent__widget' has a wrong offset!");
static_assert(offsetof(UI_Challenge_RoundSelectPopup_C_ExecuteUbergraph_UI_Challenge_RoundSelectPopup, K2Node_ComponentBoundEvent__select) == 0x000010, "Member 'UI_Challenge_RoundSelectPopup_C_ExecuteUbergraph_UI_Challenge_RoundSelectPopup::K2Node_ComponentBoundEvent__select' has a wrong offset!");
static_assert(offsetof(UI_Challenge_RoundSelectPopup_C_ExecuteUbergraph_UI_Challenge_RoundSelectPopup, K2Node_ComponentBoundEvent_bIsChecked_1) == 0x000011, "Member 'UI_Challenge_RoundSelectPopup_C_ExecuteUbergraph_UI_Challenge_RoundSelectPopup::K2Node_ComponentBoundEvent_bIsChecked_1' has a wrong offset!");
static_assert(offsetof(UI_Challenge_RoundSelectPopup_C_ExecuteUbergraph_UI_Challenge_RoundSelectPopup, K2Node_ComponentBoundEvent_bIsChecked) == 0x000012, "Member 'UI_Challenge_RoundSelectPopup_C_ExecuteUbergraph_UI_Challenge_RoundSelectPopup::K2Node_ComponentBoundEvent_bIsChecked' has a wrong offset!");
static_assert(offsetof(UI_Challenge_RoundSelectPopup_C_ExecuteUbergraph_UI_Challenge_RoundSelectPopup, CallFunc_GetLocalPlayerController_ReturnValue) == 0x000018, "Member 'UI_Challenge_RoundSelectPopup_C_ExecuteUbergraph_UI_Challenge_RoundSelectPopup::CallFunc_GetLocalPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Challenge_RoundSelectPopup_C_ExecuteUbergraph_UI_Challenge_RoundSelectPopup, CallFunc_IsChecked_ReturnValue) == 0x000020, "Member 'UI_Challenge_RoundSelectPopup_C_ExecuteUbergraph_UI_Challenge_RoundSelectPopup::CallFunc_IsChecked_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Challenge_RoundSelectPopup_C_ExecuteUbergraph_UI_Challenge_RoundSelectPopup, K2Node_DynamicCast_AsLobby_Controller_Base) == 0x000028, "Member 'UI_Challenge_RoundSelectPopup_C_ExecuteUbergraph_UI_Challenge_RoundSelectPopup::K2Node_DynamicCast_AsLobby_Controller_Base' has a wrong offset!");
static_assert(offsetof(UI_Challenge_RoundSelectPopup_C_ExecuteUbergraph_UI_Challenge_RoundSelectPopup, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'UI_Challenge_RoundSelectPopup_C_ExecuteUbergraph_UI_Challenge_RoundSelectPopup::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UI_Challenge_RoundSelectPopup_C_ExecuteUbergraph_UI_Challenge_RoundSelectPopup, CallFunc_ClickButton_ReturnValue) == 0x000031, "Member 'UI_Challenge_RoundSelectPopup_C_ExecuteUbergraph_UI_Challenge_RoundSelectPopup::CallFunc_ClickButton_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Challenge_RoundSelectPopup_C_ExecuteUbergraph_UI_Challenge_RoundSelectPopup, CallFunc_ClickButton_ReturnValue_1) == 0x000032, "Member 'UI_Challenge_RoundSelectPopup_C_ExecuteUbergraph_UI_Challenge_RoundSelectPopup::CallFunc_ClickButton_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_Challenge_RoundSelectPopup_C_ExecuteUbergraph_UI_Challenge_RoundSelectPopup, K2Node_Event_IsDesignTime) == 0x000033, "Member 'UI_Challenge_RoundSelectPopup_C_ExecuteUbergraph_UI_Challenge_RoundSelectPopup::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(UI_Challenge_RoundSelectPopup_C_ExecuteUbergraph_UI_Challenge_RoundSelectPopup, CallFunc_GetGameInstanceSubsystem_ReturnValue) == 0x000038, "Member 'UI_Challenge_RoundSelectPopup_C_ExecuteUbergraph_UI_Challenge_RoundSelectPopup::CallFunc_GetGameInstanceSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Challenge_RoundSelectPopup_C_ExecuteUbergraph_UI_Challenge_RoundSelectPopup, CallFunc_MakeLiteralInt_ReturnValue) == 0x000040, "Member 'UI_Challenge_RoundSelectPopup_C_ExecuteUbergraph_UI_Challenge_RoundSelectPopup::CallFunc_MakeLiteralInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Challenge_RoundSelectPopup_C_ExecuteUbergraph_UI_Challenge_RoundSelectPopup, CallFunc_Conv_IntToInt64_ReturnValue) == 0x000048, "Member 'UI_Challenge_RoundSelectPopup_C_ExecuteUbergraph_UI_Challenge_RoundSelectPopup::CallFunc_Conv_IntToInt64_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Challenge_RoundSelectPopup_C_ExecuteUbergraph_UI_Challenge_RoundSelectPopup, K2Node_ComponentBoundEvent__widget_1) == 0x000050, "Member 'UI_Challenge_RoundSelectPopup_C_ExecuteUbergraph_UI_Challenge_RoundSelectPopup::K2Node_ComponentBoundEvent__widget_1' has a wrong offset!");
static_assert(offsetof(UI_Challenge_RoundSelectPopup_C_ExecuteUbergraph_UI_Challenge_RoundSelectPopup, K2Node_ComponentBoundEvent__select_1) == 0x000058, "Member 'UI_Challenge_RoundSelectPopup_C_ExecuteUbergraph_UI_Challenge_RoundSelectPopup::K2Node_ComponentBoundEvent__select_1' has a wrong offset!");
static_assert(offsetof(UI_Challenge_RoundSelectPopup_C_ExecuteUbergraph_UI_Challenge_RoundSelectPopup, K2Node_MakeStruct_FormatArgumentData) == 0x000060, "Member 'UI_Challenge_RoundSelectPopup_C_ExecuteUbergraph_UI_Challenge_RoundSelectPopup::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(UI_Challenge_RoundSelectPopup_C_ExecuteUbergraph_UI_Challenge_RoundSelectPopup, K2Node_MakeArray_Array) == 0x0000B0, "Member 'UI_Challenge_RoundSelectPopup_C_ExecuteUbergraph_UI_Challenge_RoundSelectPopup::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(UI_Challenge_RoundSelectPopup_C_ExecuteUbergraph_UI_Challenge_RoundSelectPopup, CallFunc_Format_ReturnValue) == 0x0000C0, "Member 'UI_Challenge_RoundSelectPopup_C_ExecuteUbergraph_UI_Challenge_RoundSelectPopup::CallFunc_Format_ReturnValue' has a wrong offset!");

// Function UI_Challenge_RoundSelectPopup.UI_Challenge_RoundSelectPopup_C.BndEvt__UI_Challenge_RoundSelectPopup_CheckBox_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct UI_Challenge_RoundSelectPopup_C_BndEvt__UI_Challenge_RoundSelectPopup_CheckBox_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature final
{
public:
	bool                                          bIsChecked;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Challenge_RoundSelectPopup_C_BndEvt__UI_Challenge_RoundSelectPopup_CheckBox_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong alignment on UI_Challenge_RoundSelectPopup_C_BndEvt__UI_Challenge_RoundSelectPopup_CheckBox_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(sizeof(UI_Challenge_RoundSelectPopup_C_BndEvt__UI_Challenge_RoundSelectPopup_CheckBox_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong size on UI_Challenge_RoundSelectPopup_C_BndEvt__UI_Challenge_RoundSelectPopup_CheckBox_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(offsetof(UI_Challenge_RoundSelectPopup_C_BndEvt__UI_Challenge_RoundSelectPopup_CheckBox_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature, bIsChecked) == 0x000000, "Member 'UI_Challenge_RoundSelectPopup_C_BndEvt__UI_Challenge_RoundSelectPopup_CheckBox_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature::bIsChecked' has a wrong offset!");

// Function UI_Challenge_RoundSelectPopup.UI_Challenge_RoundSelectPopup_C.BndEvt__UI_Challenge_RoundSelectPopup_CheckBox_348_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct UI_Challenge_RoundSelectPopup_C_BndEvt__UI_Challenge_RoundSelectPopup_CheckBox_348_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature final
{
public:
	bool                                          bIsChecked;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Challenge_RoundSelectPopup_C_BndEvt__UI_Challenge_RoundSelectPopup_CheckBox_348_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong alignment on UI_Challenge_RoundSelectPopup_C_BndEvt__UI_Challenge_RoundSelectPopup_CheckBox_348_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(sizeof(UI_Challenge_RoundSelectPopup_C_BndEvt__UI_Challenge_RoundSelectPopup_CheckBox_348_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong size on UI_Challenge_RoundSelectPopup_C_BndEvt__UI_Challenge_RoundSelectPopup_CheckBox_348_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(offsetof(UI_Challenge_RoundSelectPopup_C_BndEvt__UI_Challenge_RoundSelectPopup_CheckBox_348_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature, bIsChecked) == 0x000000, "Member 'UI_Challenge_RoundSelectPopup_C_BndEvt__UI_Challenge_RoundSelectPopup_CheckBox_348_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature::bIsChecked' has a wrong offset!");

// Function UI_Challenge_RoundSelectPopup.UI_Challenge_RoundSelectPopup_C.BndEvt__UI_Challenge_RoundSelectPopup_BTN_OK_K2Node_ComponentBoundEvent_6_DM_OnSelectEnd__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct UI_Challenge_RoundSelectPopup_C_BndEvt__UI_Challenge_RoundSelectPopup_BTN_OK_K2Node_ComponentBoundEvent_6_DM_OnSelectEnd__DelegateSignature final
{
public:
	class UAnimatableWidget*                      _widget;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          _select;                                           // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Challenge_RoundSelectPopup_C_BndEvt__UI_Challenge_RoundSelectPopup_BTN_OK_K2Node_ComponentBoundEvent_6_DM_OnSelectEnd__DelegateSignature) == 0x000008, "Wrong alignment on UI_Challenge_RoundSelectPopup_C_BndEvt__UI_Challenge_RoundSelectPopup_BTN_OK_K2Node_ComponentBoundEvent_6_DM_OnSelectEnd__DelegateSignature");
static_assert(sizeof(UI_Challenge_RoundSelectPopup_C_BndEvt__UI_Challenge_RoundSelectPopup_BTN_OK_K2Node_ComponentBoundEvent_6_DM_OnSelectEnd__DelegateSignature) == 0x000010, "Wrong size on UI_Challenge_RoundSelectPopup_C_BndEvt__UI_Challenge_RoundSelectPopup_BTN_OK_K2Node_ComponentBoundEvent_6_DM_OnSelectEnd__DelegateSignature");
static_assert(offsetof(UI_Challenge_RoundSelectPopup_C_BndEvt__UI_Challenge_RoundSelectPopup_BTN_OK_K2Node_ComponentBoundEvent_6_DM_OnSelectEnd__DelegateSignature, _widget) == 0x000000, "Member 'UI_Challenge_RoundSelectPopup_C_BndEvt__UI_Challenge_RoundSelectPopup_BTN_OK_K2Node_ComponentBoundEvent_6_DM_OnSelectEnd__DelegateSignature::_widget' has a wrong offset!");
static_assert(offsetof(UI_Challenge_RoundSelectPopup_C_BndEvt__UI_Challenge_RoundSelectPopup_BTN_OK_K2Node_ComponentBoundEvent_6_DM_OnSelectEnd__DelegateSignature, _select) == 0x000008, "Member 'UI_Challenge_RoundSelectPopup_C_BndEvt__UI_Challenge_RoundSelectPopup_BTN_OK_K2Node_ComponentBoundEvent_6_DM_OnSelectEnd__DelegateSignature::_select' has a wrong offset!");

// Function UI_Challenge_RoundSelectPopup.UI_Challenge_RoundSelectPopup_C.BndEvt__UI_Challenge_RoundSelectPopup_BTN_Cancel_K2Node_ComponentBoundEvent_1_DM_OnSelectEnd__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct UI_Challenge_RoundSelectPopup_C_BndEvt__UI_Challenge_RoundSelectPopup_BTN_Cancel_K2Node_ComponentBoundEvent_1_DM_OnSelectEnd__DelegateSignature final
{
public:
	class UAnimatableWidget*                      _widget;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          _select;                                           // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Challenge_RoundSelectPopup_C_BndEvt__UI_Challenge_RoundSelectPopup_BTN_Cancel_K2Node_ComponentBoundEvent_1_DM_OnSelectEnd__DelegateSignature) == 0x000008, "Wrong alignment on UI_Challenge_RoundSelectPopup_C_BndEvt__UI_Challenge_RoundSelectPopup_BTN_Cancel_K2Node_ComponentBoundEvent_1_DM_OnSelectEnd__DelegateSignature");
static_assert(sizeof(UI_Challenge_RoundSelectPopup_C_BndEvt__UI_Challenge_RoundSelectPopup_BTN_Cancel_K2Node_ComponentBoundEvent_1_DM_OnSelectEnd__DelegateSignature) == 0x000010, "Wrong size on UI_Challenge_RoundSelectPopup_C_BndEvt__UI_Challenge_RoundSelectPopup_BTN_Cancel_K2Node_ComponentBoundEvent_1_DM_OnSelectEnd__DelegateSignature");
static_assert(offsetof(UI_Challenge_RoundSelectPopup_C_BndEvt__UI_Challenge_RoundSelectPopup_BTN_Cancel_K2Node_ComponentBoundEvent_1_DM_OnSelectEnd__DelegateSignature, _widget) == 0x000000, "Member 'UI_Challenge_RoundSelectPopup_C_BndEvt__UI_Challenge_RoundSelectPopup_BTN_Cancel_K2Node_ComponentBoundEvent_1_DM_OnSelectEnd__DelegateSignature::_widget' has a wrong offset!");
static_assert(offsetof(UI_Challenge_RoundSelectPopup_C_BndEvt__UI_Challenge_RoundSelectPopup_BTN_Cancel_K2Node_ComponentBoundEvent_1_DM_OnSelectEnd__DelegateSignature, _select) == 0x000008, "Member 'UI_Challenge_RoundSelectPopup_C_BndEvt__UI_Challenge_RoundSelectPopup_BTN_Cancel_K2Node_ComponentBoundEvent_1_DM_OnSelectEnd__DelegateSignature::_select' has a wrong offset!");

}

