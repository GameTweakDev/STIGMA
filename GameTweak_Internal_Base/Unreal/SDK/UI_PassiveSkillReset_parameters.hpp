#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: UI_PassiveSkillReset

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Stigma_structs.hpp"
#include "BPGLib_structs.hpp"


namespace SDK::Params
{

// Function UI_PassiveSkillReset.UI_PassiveSkillReset_C.AckGoToAbilityPage
// 0x0018 (0x0018 - 0x0000)
struct UI_PassiveSkillReset_C_AckGoToAbilityPage final
{
public:
	const class UPopupBase*                       _popup;                                            // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                   _ctrl_id;                                          // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchName_CmpSuccess;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_PassiveSkillReset_C_AckGoToAbilityPage) == 0x000008, "Wrong alignment on UI_PassiveSkillReset_C_AckGoToAbilityPage");
static_assert(sizeof(UI_PassiveSkillReset_C_AckGoToAbilityPage) == 0x000018, "Wrong size on UI_PassiveSkillReset_C_AckGoToAbilityPage");
static_assert(offsetof(UI_PassiveSkillReset_C_AckGoToAbilityPage, _popup) == 0x000000, "Member 'UI_PassiveSkillReset_C_AckGoToAbilityPage::_popup' has a wrong offset!");
static_assert(offsetof(UI_PassiveSkillReset_C_AckGoToAbilityPage, _ctrl_id) == 0x000008, "Member 'UI_PassiveSkillReset_C_AckGoToAbilityPage::_ctrl_id' has a wrong offset!");
static_assert(offsetof(UI_PassiveSkillReset_C_AckGoToAbilityPage, K2Node_SwitchName_CmpSuccess) == 0x000010, "Member 'UI_PassiveSkillReset_C_AckGoToAbilityPage::K2Node_SwitchName_CmpSuccess' has a wrong offset!");

// Function UI_PassiveSkillReset.UI_PassiveSkillReset_C.AckGoToShopPage
// 0x00A8 (0x00A8 - 0x0000)
struct UI_PassiveSkillReset_C_AckGoToShopPage final
{
public:
	const class UPopupBase*                       _popup;                                            // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                   _ctrl_id;                                          // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchName_CmpSuccess;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_35B6[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-69 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0018(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0068(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0078(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0090(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_AddToastMessage_ReturnValue;              // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_PassiveSkillReset_C_AckGoToShopPage) == 0x000008, "Wrong alignment on UI_PassiveSkillReset_C_AckGoToShopPage");
static_assert(sizeof(UI_PassiveSkillReset_C_AckGoToShopPage) == 0x0000A8, "Wrong size on UI_PassiveSkillReset_C_AckGoToShopPage");
static_assert(offsetof(UI_PassiveSkillReset_C_AckGoToShopPage, _popup) == 0x000000, "Member 'UI_PassiveSkillReset_C_AckGoToShopPage::_popup' has a wrong offset!");
static_assert(offsetof(UI_PassiveSkillReset_C_AckGoToShopPage, _ctrl_id) == 0x000008, "Member 'UI_PassiveSkillReset_C_AckGoToShopPage::_ctrl_id' has a wrong offset!");
static_assert(offsetof(UI_PassiveSkillReset_C_AckGoToShopPage, K2Node_SwitchName_CmpSuccess) == 0x000010, "Member 'UI_PassiveSkillReset_C_AckGoToShopPage::K2Node_SwitchName_CmpSuccess' has a wrong offset!");
static_assert(offsetof(UI_PassiveSkillReset_C_AckGoToShopPage, K2Node_MakeStruct_FormatArgumentData) == 0x000018, "Member 'UI_PassiveSkillReset_C_AckGoToShopPage::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(UI_PassiveSkillReset_C_AckGoToShopPage, K2Node_MakeArray_Array) == 0x000068, "Member 'UI_PassiveSkillReset_C_AckGoToShopPage::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(UI_PassiveSkillReset_C_AckGoToShopPage, CallFunc_Format_ReturnValue) == 0x000078, "Member 'UI_PassiveSkillReset_C_AckGoToShopPage::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_PassiveSkillReset_C_AckGoToShopPage, CallFunc_Conv_TextToString_ReturnValue) == 0x000090, "Member 'UI_PassiveSkillReset_C_AckGoToShopPage::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_PassiveSkillReset_C_AckGoToShopPage, CallFunc_AddToastMessage_ReturnValue) == 0x0000A0, "Member 'UI_PassiveSkillReset_C_AckGoToShopPage::CallFunc_AddToastMessage_ReturnValue' has a wrong offset!");

// Function UI_PassiveSkillReset.UI_PassiveSkillReset_C.AckResetSkillPoint
// 0x0070 (0x0070 - 0x0000)
struct UI_PassiveSkillReset_C_AckResetSkillPoint final
{
public:
	EResultCode                                   _code;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_35B7[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-69 ])
	struct FACK_ResetSkillPoint                   _ack;                                              // 0x0004(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	struct FNetReply                              ReturnValue;                                       // 0x0008(0x0020)(Parm, OutParm, ReturnParm)
	int32                                         NewLocalVar;                                       // 0x0028(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_35B8[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-69 ])
	class FText                                   Temp_text_Variable;                                // 0x0030(0x0018)(ConstParm)
	class FText                                   Temp_text_Variable_1;                              // 0x0048(0x0018)(ConstParm)
	TDelegate<void(class UPopupBase* _popup, class FName _ctrl_id)> K2Node_CreateDelegate_OutputDelegate;              // 0x0060(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_PassiveSkillReset_C_AckResetSkillPoint) == 0x000008, "Wrong alignment on UI_PassiveSkillReset_C_AckResetSkillPoint");
static_assert(sizeof(UI_PassiveSkillReset_C_AckResetSkillPoint) == 0x000070, "Wrong size on UI_PassiveSkillReset_C_AckResetSkillPoint");
static_assert(offsetof(UI_PassiveSkillReset_C_AckResetSkillPoint, _code) == 0x000000, "Member 'UI_PassiveSkillReset_C_AckResetSkillPoint::_code' has a wrong offset!");
static_assert(offsetof(UI_PassiveSkillReset_C_AckResetSkillPoint, _ack) == 0x000004, "Member 'UI_PassiveSkillReset_C_AckResetSkillPoint::_ack' has a wrong offset!");
static_assert(offsetof(UI_PassiveSkillReset_C_AckResetSkillPoint, ReturnValue) == 0x000008, "Member 'UI_PassiveSkillReset_C_AckResetSkillPoint::ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_PassiveSkillReset_C_AckResetSkillPoint, NewLocalVar) == 0x000028, "Member 'UI_PassiveSkillReset_C_AckResetSkillPoint::NewLocalVar' has a wrong offset!");
static_assert(offsetof(UI_PassiveSkillReset_C_AckResetSkillPoint, Temp_text_Variable) == 0x000030, "Member 'UI_PassiveSkillReset_C_AckResetSkillPoint::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(UI_PassiveSkillReset_C_AckResetSkillPoint, Temp_text_Variable_1) == 0x000048, "Member 'UI_PassiveSkillReset_C_AckResetSkillPoint::Temp_text_Variable_1' has a wrong offset!");
static_assert(offsetof(UI_PassiveSkillReset_C_AckResetSkillPoint, K2Node_CreateDelegate_OutputDelegate) == 0x000060, "Member 'UI_PassiveSkillReset_C_AckResetSkillPoint::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");

// Function UI_PassiveSkillReset.UI_PassiveSkillReset_C.BndEvt__UI_PassiveSkillReset_BTN_Cancel_K2Node_ComponentBoundEvent_0_DM_OnSelectEnd__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct UI_PassiveSkillReset_C_BndEvt__UI_PassiveSkillReset_BTN_Cancel_K2Node_ComponentBoundEvent_0_DM_OnSelectEnd__DelegateSignature final
{
public:
	class UAnimatableWidget*                      _widget;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          _select;                                           // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_PassiveSkillReset_C_BndEvt__UI_PassiveSkillReset_BTN_Cancel_K2Node_ComponentBoundEvent_0_DM_OnSelectEnd__DelegateSignature) == 0x000008, "Wrong alignment on UI_PassiveSkillReset_C_BndEvt__UI_PassiveSkillReset_BTN_Cancel_K2Node_ComponentBoundEvent_0_DM_OnSelectEnd__DelegateSignature");
static_assert(sizeof(UI_PassiveSkillReset_C_BndEvt__UI_PassiveSkillReset_BTN_Cancel_K2Node_ComponentBoundEvent_0_DM_OnSelectEnd__DelegateSignature) == 0x000010, "Wrong size on UI_PassiveSkillReset_C_BndEvt__UI_PassiveSkillReset_BTN_Cancel_K2Node_ComponentBoundEvent_0_DM_OnSelectEnd__DelegateSignature");
static_assert(offsetof(UI_PassiveSkillReset_C_BndEvt__UI_PassiveSkillReset_BTN_Cancel_K2Node_ComponentBoundEvent_0_DM_OnSelectEnd__DelegateSignature, _widget) == 0x000000, "Member 'UI_PassiveSkillReset_C_BndEvt__UI_PassiveSkillReset_BTN_Cancel_K2Node_ComponentBoundEvent_0_DM_OnSelectEnd__DelegateSignature::_widget' has a wrong offset!");
static_assert(offsetof(UI_PassiveSkillReset_C_BndEvt__UI_PassiveSkillReset_BTN_Cancel_K2Node_ComponentBoundEvent_0_DM_OnSelectEnd__DelegateSignature, _select) == 0x000008, "Member 'UI_PassiveSkillReset_C_BndEvt__UI_PassiveSkillReset_BTN_Cancel_K2Node_ComponentBoundEvent_0_DM_OnSelectEnd__DelegateSignature::_select' has a wrong offset!");

// Function UI_PassiveSkillReset.UI_PassiveSkillReset_C.BndEvt__UI_PassiveSkillReset_BTN_OK_K2Node_ComponentBoundEvent_4_DM_OnSelectEnd__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct UI_PassiveSkillReset_C_BndEvt__UI_PassiveSkillReset_BTN_OK_K2Node_ComponentBoundEvent_4_DM_OnSelectEnd__DelegateSignature final
{
public:
	class UAnimatableWidget*                      _widget;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          _select;                                           // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_PassiveSkillReset_C_BndEvt__UI_PassiveSkillReset_BTN_OK_K2Node_ComponentBoundEvent_4_DM_OnSelectEnd__DelegateSignature) == 0x000008, "Wrong alignment on UI_PassiveSkillReset_C_BndEvt__UI_PassiveSkillReset_BTN_OK_K2Node_ComponentBoundEvent_4_DM_OnSelectEnd__DelegateSignature");
static_assert(sizeof(UI_PassiveSkillReset_C_BndEvt__UI_PassiveSkillReset_BTN_OK_K2Node_ComponentBoundEvent_4_DM_OnSelectEnd__DelegateSignature) == 0x000010, "Wrong size on UI_PassiveSkillReset_C_BndEvt__UI_PassiveSkillReset_BTN_OK_K2Node_ComponentBoundEvent_4_DM_OnSelectEnd__DelegateSignature");
static_assert(offsetof(UI_PassiveSkillReset_C_BndEvt__UI_PassiveSkillReset_BTN_OK_K2Node_ComponentBoundEvent_4_DM_OnSelectEnd__DelegateSignature, _widget) == 0x000000, "Member 'UI_PassiveSkillReset_C_BndEvt__UI_PassiveSkillReset_BTN_OK_K2Node_ComponentBoundEvent_4_DM_OnSelectEnd__DelegateSignature::_widget' has a wrong offset!");
static_assert(offsetof(UI_PassiveSkillReset_C_BndEvt__UI_PassiveSkillReset_BTN_OK_K2Node_ComponentBoundEvent_4_DM_OnSelectEnd__DelegateSignature, _select) == 0x000008, "Member 'UI_PassiveSkillReset_C_BndEvt__UI_PassiveSkillReset_BTN_OK_K2Node_ComponentBoundEvent_4_DM_OnSelectEnd__DelegateSignature::_select' has a wrong offset!");

// Function UI_PassiveSkillReset.UI_PassiveSkillReset_C.ExecuteUbergraph_UI_PassiveSkillReset
// 0x01B8 (0x01B8 - 0x0000)
struct UI_PassiveSkillReset_C_ExecuteUbergraph_UI_PassiveSkillReset final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_35B9[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-69 ])
	class UAnimatableWidget*                      K2Node_ComponentBoundEvent__widget;                // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent__select;                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_35BA[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-69 ])
	TDelegate<void(EResultCode _code, struct FACK_ResetSkillPoint& _ack)> K2Node_CreateDelegate_OutputDelegate;              // 0x0014(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_35BB[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-69 ])
	class FText                                   CallFunc_MakeLiteralText_ReturnValue;              // 0x0028(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0040(0x0050)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0090(0x0050)(HasGetValueTypeHash)
	class FText                                   Temp_text_Variable;                                // 0x00E0(0x0018)(ConstParm)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00F8(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0108(0x0018)()
	TDelegate<void(class UPopupBase* _popup, class FName _ctrl_id)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0120(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_2;            // 0x0130(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_1;                          // 0x0180(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue_1;                     // 0x0190(0x0018)()
	class UAnimatableWidget*                      K2Node_ComponentBoundEvent__widget_1;              // 0x01A8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent__select_1;              // 0x01B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_PassiveSkillReset_C_ExecuteUbergraph_UI_PassiveSkillReset) == 0x000008, "Wrong alignment on UI_PassiveSkillReset_C_ExecuteUbergraph_UI_PassiveSkillReset");
static_assert(sizeof(UI_PassiveSkillReset_C_ExecuteUbergraph_UI_PassiveSkillReset) == 0x0001B8, "Wrong size on UI_PassiveSkillReset_C_ExecuteUbergraph_UI_PassiveSkillReset");
static_assert(offsetof(UI_PassiveSkillReset_C_ExecuteUbergraph_UI_PassiveSkillReset, EntryPoint) == 0x000000, "Member 'UI_PassiveSkillReset_C_ExecuteUbergraph_UI_PassiveSkillReset::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_PassiveSkillReset_C_ExecuteUbergraph_UI_PassiveSkillReset, K2Node_ComponentBoundEvent__widget) == 0x000008, "Member 'UI_PassiveSkillReset_C_ExecuteUbergraph_UI_PassiveSkillReset::K2Node_ComponentBoundEvent__widget' has a wrong offset!");
static_assert(offsetof(UI_PassiveSkillReset_C_ExecuteUbergraph_UI_PassiveSkillReset, K2Node_ComponentBoundEvent__select) == 0x000010, "Member 'UI_PassiveSkillReset_C_ExecuteUbergraph_UI_PassiveSkillReset::K2Node_ComponentBoundEvent__select' has a wrong offset!");
static_assert(offsetof(UI_PassiveSkillReset_C_ExecuteUbergraph_UI_PassiveSkillReset, K2Node_CreateDelegate_OutputDelegate) == 0x000014, "Member 'UI_PassiveSkillReset_C_ExecuteUbergraph_UI_PassiveSkillReset::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(UI_PassiveSkillReset_C_ExecuteUbergraph_UI_PassiveSkillReset, CallFunc_IsValid_ReturnValue) == 0x000024, "Member 'UI_PassiveSkillReset_C_ExecuteUbergraph_UI_PassiveSkillReset::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_PassiveSkillReset_C_ExecuteUbergraph_UI_PassiveSkillReset, CallFunc_MakeLiteralText_ReturnValue) == 0x000028, "Member 'UI_PassiveSkillReset_C_ExecuteUbergraph_UI_PassiveSkillReset::CallFunc_MakeLiteralText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_PassiveSkillReset_C_ExecuteUbergraph_UI_PassiveSkillReset, K2Node_MakeStruct_FormatArgumentData) == 0x000040, "Member 'UI_PassiveSkillReset_C_ExecuteUbergraph_UI_PassiveSkillReset::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(UI_PassiveSkillReset_C_ExecuteUbergraph_UI_PassiveSkillReset, K2Node_MakeStruct_FormatArgumentData_1) == 0x000090, "Member 'UI_PassiveSkillReset_C_ExecuteUbergraph_UI_PassiveSkillReset::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(UI_PassiveSkillReset_C_ExecuteUbergraph_UI_PassiveSkillReset, Temp_text_Variable) == 0x0000E0, "Member 'UI_PassiveSkillReset_C_ExecuteUbergraph_UI_PassiveSkillReset::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(UI_PassiveSkillReset_C_ExecuteUbergraph_UI_PassiveSkillReset, K2Node_MakeArray_Array) == 0x0000F8, "Member 'UI_PassiveSkillReset_C_ExecuteUbergraph_UI_PassiveSkillReset::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(UI_PassiveSkillReset_C_ExecuteUbergraph_UI_PassiveSkillReset, CallFunc_Format_ReturnValue) == 0x000108, "Member 'UI_PassiveSkillReset_C_ExecuteUbergraph_UI_PassiveSkillReset::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_PassiveSkillReset_C_ExecuteUbergraph_UI_PassiveSkillReset, K2Node_CreateDelegate_OutputDelegate_1) == 0x000120, "Member 'UI_PassiveSkillReset_C_ExecuteUbergraph_UI_PassiveSkillReset::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(UI_PassiveSkillReset_C_ExecuteUbergraph_UI_PassiveSkillReset, K2Node_MakeStruct_FormatArgumentData_2) == 0x000130, "Member 'UI_PassiveSkillReset_C_ExecuteUbergraph_UI_PassiveSkillReset::K2Node_MakeStruct_FormatArgumentData_2' has a wrong offset!");
static_assert(offsetof(UI_PassiveSkillReset_C_ExecuteUbergraph_UI_PassiveSkillReset, K2Node_MakeArray_Array_1) == 0x000180, "Member 'UI_PassiveSkillReset_C_ExecuteUbergraph_UI_PassiveSkillReset::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(UI_PassiveSkillReset_C_ExecuteUbergraph_UI_PassiveSkillReset, CallFunc_Format_ReturnValue_1) == 0x000190, "Member 'UI_PassiveSkillReset_C_ExecuteUbergraph_UI_PassiveSkillReset::CallFunc_Format_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_PassiveSkillReset_C_ExecuteUbergraph_UI_PassiveSkillReset, K2Node_ComponentBoundEvent__widget_1) == 0x0001A8, "Member 'UI_PassiveSkillReset_C_ExecuteUbergraph_UI_PassiveSkillReset::K2Node_ComponentBoundEvent__widget_1' has a wrong offset!");
static_assert(offsetof(UI_PassiveSkillReset_C_ExecuteUbergraph_UI_PassiveSkillReset, K2Node_ComponentBoundEvent__select_1) == 0x0001B0, "Member 'UI_PassiveSkillReset_C_ExecuteUbergraph_UI_PassiveSkillReset::K2Node_ComponentBoundEvent__select_1' has a wrong offset!");

// Function UI_PassiveSkillReset.UI_PassiveSkillReset_C.OnShowPopup
// 0x02B0 (0x02B0 - 0x0000)
struct UI_PassiveSkillReset_C_OnShowPopup final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_35BC[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-69 ])
	int32                                         CallFunc_GetCurrencyValue_ReturnValue;             // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FItemID                                CallFunc_MakeItemID_ReturnValue;                   // 0x0008(0x0010)(HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0018(0x0018)()
	struct FItemEntry                             CallFunc_GetItemEntry_ReturnValue;                 // 0x0030(0x0130)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0160(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x01B0(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x01C0(0x0018)()
	class ULocalPlayerContext*                    CallFunc_GetLocalPlayerContext_ReturnValue;        // 0x01D8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_MakeLiteralText_ReturnValue;              // 0x01E0(0x0018)()
	int32                                         CallFunc_GetTotalSkillPoint_ReturnValue;           // 0x01F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_35BD[0x4];                                     // 0x01FC(0x0004)(Fixing Size After Last Property [ Dumper-69 ])
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0200(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue;              // 0x0210(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_AddToastMessage_ReturnValue;              // 0x0218(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_35BE[0x7];                                     // 0x0219(0x0007)(Fixing Size After Last Property [ Dumper-69 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0220(0x0050)(HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0270(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_35BF[0x7];                                     // 0x0271(0x0007)(Fixing Size After Last Property [ Dumper-69 ])
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_1;                          // 0x0278(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue_1;                     // 0x0288(0x0018)()
	class ULocalPlayerContext*                    CallFunc_GetLocalPlayerContext_ReturnValue_1;      // 0x02A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x02A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_PassiveSkillReset_C_OnShowPopup) == 0x000008, "Wrong alignment on UI_PassiveSkillReset_C_OnShowPopup");
static_assert(sizeof(UI_PassiveSkillReset_C_OnShowPopup) == 0x0002B0, "Wrong size on UI_PassiveSkillReset_C_OnShowPopup");
static_assert(offsetof(UI_PassiveSkillReset_C_OnShowPopup, ReturnValue) == 0x000000, "Member 'UI_PassiveSkillReset_C_OnShowPopup::ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_PassiveSkillReset_C_OnShowPopup, CallFunc_GetCurrencyValue_ReturnValue) == 0x000004, "Member 'UI_PassiveSkillReset_C_OnShowPopup::CallFunc_GetCurrencyValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_PassiveSkillReset_C_OnShowPopup, CallFunc_MakeItemID_ReturnValue) == 0x000008, "Member 'UI_PassiveSkillReset_C_OnShowPopup::CallFunc_MakeItemID_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_PassiveSkillReset_C_OnShowPopup, CallFunc_Conv_IntToText_ReturnValue) == 0x000018, "Member 'UI_PassiveSkillReset_C_OnShowPopup::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_PassiveSkillReset_C_OnShowPopup, CallFunc_GetItemEntry_ReturnValue) == 0x000030, "Member 'UI_PassiveSkillReset_C_OnShowPopup::CallFunc_GetItemEntry_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_PassiveSkillReset_C_OnShowPopup, K2Node_MakeStruct_FormatArgumentData) == 0x000160, "Member 'UI_PassiveSkillReset_C_OnShowPopup::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(UI_PassiveSkillReset_C_OnShowPopup, K2Node_MakeArray_Array) == 0x0001B0, "Member 'UI_PassiveSkillReset_C_OnShowPopup::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(UI_PassiveSkillReset_C_OnShowPopup, CallFunc_Format_ReturnValue) == 0x0001C0, "Member 'UI_PassiveSkillReset_C_OnShowPopup::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_PassiveSkillReset_C_OnShowPopup, CallFunc_GetLocalPlayerContext_ReturnValue) == 0x0001D8, "Member 'UI_PassiveSkillReset_C_OnShowPopup::CallFunc_GetLocalPlayerContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_PassiveSkillReset_C_OnShowPopup, CallFunc_MakeLiteralText_ReturnValue) == 0x0001E0, "Member 'UI_PassiveSkillReset_C_OnShowPopup::CallFunc_MakeLiteralText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_PassiveSkillReset_C_OnShowPopup, CallFunc_GetTotalSkillPoint_ReturnValue) == 0x0001F8, "Member 'UI_PassiveSkillReset_C_OnShowPopup::CallFunc_GetTotalSkillPoint_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_PassiveSkillReset_C_OnShowPopup, CallFunc_Conv_TextToString_ReturnValue) == 0x000200, "Member 'UI_PassiveSkillReset_C_OnShowPopup::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_PassiveSkillReset_C_OnShowPopup, CallFunc_Conv_IntToInt64_ReturnValue) == 0x000210, "Member 'UI_PassiveSkillReset_C_OnShowPopup::CallFunc_Conv_IntToInt64_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_PassiveSkillReset_C_OnShowPopup, CallFunc_AddToastMessage_ReturnValue) == 0x000218, "Member 'UI_PassiveSkillReset_C_OnShowPopup::CallFunc_AddToastMessage_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_PassiveSkillReset_C_OnShowPopup, K2Node_MakeStruct_FormatArgumentData_1) == 0x000220, "Member 'UI_PassiveSkillReset_C_OnShowPopup::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(UI_PassiveSkillReset_C_OnShowPopup, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000270, "Member 'UI_PassiveSkillReset_C_OnShowPopup::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_PassiveSkillReset_C_OnShowPopup, K2Node_MakeArray_Array_1) == 0x000278, "Member 'UI_PassiveSkillReset_C_OnShowPopup::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(UI_PassiveSkillReset_C_OnShowPopup, CallFunc_Format_ReturnValue_1) == 0x000288, "Member 'UI_PassiveSkillReset_C_OnShowPopup::CallFunc_Format_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_PassiveSkillReset_C_OnShowPopup, CallFunc_GetLocalPlayerContext_ReturnValue_1) == 0x0002A0, "Member 'UI_PassiveSkillReset_C_OnShowPopup::CallFunc_GetLocalPlayerContext_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_PassiveSkillReset_C_OnShowPopup, CallFunc_IsValid_ReturnValue) == 0x0002A8, "Member 'UI_PassiveSkillReset_C_OnShowPopup::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}

