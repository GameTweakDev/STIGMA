#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: UI_LobbyNew

#include "Basic.hpp"

#include "Stigma_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function UI_LobbyNew.UI_LobbyNew_C.Show
// 0x0001 (0x0001 - 0x0000)
struct UI_LobbyNew_C_Show final
{
public:
	bool                                          CallFunc_IsInViewport_ReturnValue;                 // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_LobbyNew_C_Show) == 0x000001, "Wrong alignment on UI_LobbyNew_C_Show");
static_assert(sizeof(UI_LobbyNew_C_Show) == 0x000001, "Wrong size on UI_LobbyNew_C_Show");
static_assert(offsetof(UI_LobbyNew_C_Show, CallFunc_IsInViewport_ReturnValue) == 0x000000, "Member 'UI_LobbyNew_C_Show::CallFunc_IsInViewport_ReturnValue' has a wrong offset!");

// Function UI_LobbyNew.UI_LobbyNew_C.OnSaveUser_ACK
// 0x000C (0x000C - 0x0000)
struct UI_LobbyNew_C_OnSaveUser_ACK final
{
public:
	struct FApiResult                             Response;                                          // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	uint8                                         ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_LobbyNew_C_OnSaveUser_ACK) == 0x000004, "Wrong alignment on UI_LobbyNew_C_OnSaveUser_ACK");
static_assert(sizeof(UI_LobbyNew_C_OnSaveUser_ACK) == 0x00000C, "Wrong size on UI_LobbyNew_C_OnSaveUser_ACK");
static_assert(offsetof(UI_LobbyNew_C_OnSaveUser_ACK, Response) == 0x000000, "Member 'UI_LobbyNew_C_OnSaveUser_ACK::Response' has a wrong offset!");
static_assert(offsetof(UI_LobbyNew_C_OnSaveUser_ACK, ReturnValue) == 0x000008, "Member 'UI_LobbyNew_C_OnSaveUser_ACK::ReturnValue' has a wrong offset!");

// Function UI_LobbyNew.UI_LobbyNew_C.OnOK_DoNothing
// 0x0008 (0x0008 - 0x0000)
struct UI_LobbyNew_C_OnOK_DoNothing final
{
public:
	class FName                                   _button_id;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_LobbyNew_C_OnOK_DoNothing) == 0x000004, "Wrong alignment on UI_LobbyNew_C_OnOK_DoNothing");
static_assert(sizeof(UI_LobbyNew_C_OnOK_DoNothing) == 0x000008, "Wrong size on UI_LobbyNew_C_OnOK_DoNothing");
static_assert(offsetof(UI_LobbyNew_C_OnOK_DoNothing, _button_id) == 0x000000, "Member 'UI_LobbyNew_C_OnOK_DoNothing::_button_id' has a wrong offset!");

// Function UI_LobbyNew.UI_LobbyNew_C.OnInit
// 0x0038 (0x0038 - 0x0000)
struct UI_LobbyNew_C_OnInit final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3945[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-69 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(ELobbyPage Page, EItemCategory _item_category)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0014(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3946[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-69 ])
	class UGNB_Lobby_C*                           K2Node_DynamicCast_AsGNB_Lobby;                    // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_LobbyNew_C_OnInit) == 0x000008, "Wrong alignment on UI_LobbyNew_C_OnInit");
static_assert(sizeof(UI_LobbyNew_C_OnInit) == 0x000038, "Wrong size on UI_LobbyNew_C_OnInit");
static_assert(offsetof(UI_LobbyNew_C_OnInit, ReturnValue) == 0x000000, "Member 'UI_LobbyNew_C_OnInit::ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_LobbyNew_C_OnInit, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'UI_LobbyNew_C_OnInit::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(UI_LobbyNew_C_OnInit, K2Node_CreateDelegate_OutputDelegate_1) == 0x000014, "Member 'UI_LobbyNew_C_OnInit::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(UI_LobbyNew_C_OnInit, K2Node_DynamicCast_AsGNB_Lobby) == 0x000028, "Member 'UI_LobbyNew_C_OnInit::K2Node_DynamicCast_AsGNB_Lobby' has a wrong offset!");
static_assert(offsetof(UI_LobbyNew_C_OnInit, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'UI_LobbyNew_C_OnInit::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function UI_LobbyNew.UI_LobbyNew_C.OnGotoPage
// 0x0058 (0x0058 - 0x0000)
struct UI_LobbyNew_C_OnGotoPage final
{
public:
	ELobbyPage                                    _page;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemCategory                                 _sub_option;                                       // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0002(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemCategory                                 Option;                                            // 0x0003(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ELobbyPage                                    Page;                                              // 0x0004(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_OnGotoPage_ReturnValue;                   // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3947[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-69 ])
	struct FLobbyPageConfig                       CallFunc_Map_Find_Value;                           // 0x0008(0x0028)()
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3948[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-69 ])
	class UGNB_Lobby_C*                           K2Node_DynamicCast_AsGNB_Lobby;                    // 0x0038(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3949[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-69 ])
	class UPage_Armory_C*                         K2Node_DynamicCast_AsPage_Armory;                  // 0x0048(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_LobbyNew_C_OnGotoPage) == 0x000008, "Wrong alignment on UI_LobbyNew_C_OnGotoPage");
static_assert(sizeof(UI_LobbyNew_C_OnGotoPage) == 0x000058, "Wrong size on UI_LobbyNew_C_OnGotoPage");
static_assert(offsetof(UI_LobbyNew_C_OnGotoPage, _page) == 0x000000, "Member 'UI_LobbyNew_C_OnGotoPage::_page' has a wrong offset!");
static_assert(offsetof(UI_LobbyNew_C_OnGotoPage, _sub_option) == 0x000001, "Member 'UI_LobbyNew_C_OnGotoPage::_sub_option' has a wrong offset!");
static_assert(offsetof(UI_LobbyNew_C_OnGotoPage, ReturnValue) == 0x000002, "Member 'UI_LobbyNew_C_OnGotoPage::ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_LobbyNew_C_OnGotoPage, Option) == 0x000003, "Member 'UI_LobbyNew_C_OnGotoPage::Option' has a wrong offset!");
static_assert(offsetof(UI_LobbyNew_C_OnGotoPage, Page) == 0x000004, "Member 'UI_LobbyNew_C_OnGotoPage::Page' has a wrong offset!");
static_assert(offsetof(UI_LobbyNew_C_OnGotoPage, CallFunc_OnGotoPage_ReturnValue) == 0x000005, "Member 'UI_LobbyNew_C_OnGotoPage::CallFunc_OnGotoPage_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_LobbyNew_C_OnGotoPage, CallFunc_Map_Find_Value) == 0x000008, "Member 'UI_LobbyNew_C_OnGotoPage::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(UI_LobbyNew_C_OnGotoPage, CallFunc_Map_Find_ReturnValue) == 0x000030, "Member 'UI_LobbyNew_C_OnGotoPage::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_LobbyNew_C_OnGotoPage, K2Node_DynamicCast_AsGNB_Lobby) == 0x000038, "Member 'UI_LobbyNew_C_OnGotoPage::K2Node_DynamicCast_AsGNB_Lobby' has a wrong offset!");
static_assert(offsetof(UI_LobbyNew_C_OnGotoPage, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'UI_LobbyNew_C_OnGotoPage::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UI_LobbyNew_C_OnGotoPage, K2Node_DynamicCast_AsPage_Armory) == 0x000048, "Member 'UI_LobbyNew_C_OnGotoPage::K2Node_DynamicCast_AsPage_Armory' has a wrong offset!");
static_assert(offsetof(UI_LobbyNew_C_OnGotoPage, K2Node_DynamicCast_bSuccess_1) == 0x000050, "Member 'UI_LobbyNew_C_OnGotoPage::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

// Function UI_LobbyNew.UI_LobbyNew_C.ExecuteUbergraph_UI_LobbyNew
// 0x0004 (0x0004 - 0x0000)
struct UI_LobbyNew_C_ExecuteUbergraph_UI_LobbyNew final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_LobbyNew_C_ExecuteUbergraph_UI_LobbyNew) == 0x000004, "Wrong alignment on UI_LobbyNew_C_ExecuteUbergraph_UI_LobbyNew");
static_assert(sizeof(UI_LobbyNew_C_ExecuteUbergraph_UI_LobbyNew) == 0x000004, "Wrong size on UI_LobbyNew_C_ExecuteUbergraph_UI_LobbyNew");
static_assert(offsetof(UI_LobbyNew_C_ExecuteUbergraph_UI_LobbyNew, EntryPoint) == 0x000000, "Member 'UI_LobbyNew_C_ExecuteUbergraph_UI_LobbyNew::EntryPoint' has a wrong offset!");

// Function UI_LobbyNew.UI_LobbyNew_C.CheckDisableMatchFunc
// 0x01C0 (0x01C0 - 0x0000)
struct UI_LobbyNew_C_CheckDisableMatchFunc final
{
public:
	struct FAppliedFunction                       Func_0;                                            // 0x0000(0x0030)(Edit, BlueprintVisible)
	bool                                          Locked;                                            // 0x0030(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_394A[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-69 ])
	class ULocalPlayerContext*                    Lpc;                                               // 0x0038(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                   Temp_text_Variable;                                // 0x0040(0x0018)(ConstParm)
	class FText                                   Temp_text_Variable_1;                              // 0x0058(0x0018)(ConstParm)
	class FText                                   Temp_text_Variable_2;                              // 0x0070(0x0018)(ConstParm)
	class FText                                   Temp_text_Variable_3;                              // 0x0088(0x0018)(ConstParm)
	class FText                                   Temp_text_Variable_4;                              // 0x00A0(0x0018)(ConstParm)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_394B[0x7];                                     // 0x00B9(0x0007)(Fixing Size After Last Property [ Dumper-69 ])
	struct FAppliedFunction                       CallFunc_FindFunctionByTarget__function;           // 0x00C0(0x0030)()
	bool                                          CallFunc_FindFunctionByTarget_ReturnValue;         // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_394C[0x7];                                     // 0x00F1(0x0007)(Fixing Size After Last Property [ Dumper-69 ])
	class ULocalPlayerContext*                    CallFunc_GetLocalPlayerContext_ReturnValue;        // 0x00F8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              CallFunc_UtcNow_ReturnValue;                       // 0x0100(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimespan                              CallFunc_Subtract_DateTimeDateTime_ReturnValue;    // 0x0108(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DateTimeDateTime_ReturnValue;     // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_394D[0x7];                                     // 0x0111(0x0007)(Fixing Size After Last Property [ Dumper-69 ])
	class FText                                   CallFunc_GetDisplayTimespan_ReturnValue;           // 0x0118(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0130(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0180(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0190(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x01A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_AddToastMessage_ReturnValue;              // 0x01B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_LobbyNew_C_CheckDisableMatchFunc) == 0x000008, "Wrong alignment on UI_LobbyNew_C_CheckDisableMatchFunc");
static_assert(sizeof(UI_LobbyNew_C_CheckDisableMatchFunc) == 0x0001C0, "Wrong size on UI_LobbyNew_C_CheckDisableMatchFunc");
static_assert(offsetof(UI_LobbyNew_C_CheckDisableMatchFunc, Func_0) == 0x000000, "Member 'UI_LobbyNew_C_CheckDisableMatchFunc::Func_0' has a wrong offset!");
static_assert(offsetof(UI_LobbyNew_C_CheckDisableMatchFunc, Locked) == 0x000030, "Member 'UI_LobbyNew_C_CheckDisableMatchFunc::Locked' has a wrong offset!");
static_assert(offsetof(UI_LobbyNew_C_CheckDisableMatchFunc, Lpc) == 0x000038, "Member 'UI_LobbyNew_C_CheckDisableMatchFunc::Lpc' has a wrong offset!");
static_assert(offsetof(UI_LobbyNew_C_CheckDisableMatchFunc, Temp_text_Variable) == 0x000040, "Member 'UI_LobbyNew_C_CheckDisableMatchFunc::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(UI_LobbyNew_C_CheckDisableMatchFunc, Temp_text_Variable_1) == 0x000058, "Member 'UI_LobbyNew_C_CheckDisableMatchFunc::Temp_text_Variable_1' has a wrong offset!");
static_assert(offsetof(UI_LobbyNew_C_CheckDisableMatchFunc, Temp_text_Variable_2) == 0x000070, "Member 'UI_LobbyNew_C_CheckDisableMatchFunc::Temp_text_Variable_2' has a wrong offset!");
static_assert(offsetof(UI_LobbyNew_C_CheckDisableMatchFunc, Temp_text_Variable_3) == 0x000088, "Member 'UI_LobbyNew_C_CheckDisableMatchFunc::Temp_text_Variable_3' has a wrong offset!");
static_assert(offsetof(UI_LobbyNew_C_CheckDisableMatchFunc, Temp_text_Variable_4) == 0x0000A0, "Member 'UI_LobbyNew_C_CheckDisableMatchFunc::Temp_text_Variable_4' has a wrong offset!");
static_assert(offsetof(UI_LobbyNew_C_CheckDisableMatchFunc, CallFunc_IsValid_ReturnValue) == 0x0000B8, "Member 'UI_LobbyNew_C_CheckDisableMatchFunc::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_LobbyNew_C_CheckDisableMatchFunc, CallFunc_FindFunctionByTarget__function) == 0x0000C0, "Member 'UI_LobbyNew_C_CheckDisableMatchFunc::CallFunc_FindFunctionByTarget__function' has a wrong offset!");
static_assert(offsetof(UI_LobbyNew_C_CheckDisableMatchFunc, CallFunc_FindFunctionByTarget_ReturnValue) == 0x0000F0, "Member 'UI_LobbyNew_C_CheckDisableMatchFunc::CallFunc_FindFunctionByTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_LobbyNew_C_CheckDisableMatchFunc, CallFunc_GetLocalPlayerContext_ReturnValue) == 0x0000F8, "Member 'UI_LobbyNew_C_CheckDisableMatchFunc::CallFunc_GetLocalPlayerContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_LobbyNew_C_CheckDisableMatchFunc, CallFunc_UtcNow_ReturnValue) == 0x000100, "Member 'UI_LobbyNew_C_CheckDisableMatchFunc::CallFunc_UtcNow_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_LobbyNew_C_CheckDisableMatchFunc, CallFunc_Subtract_DateTimeDateTime_ReturnValue) == 0x000108, "Member 'UI_LobbyNew_C_CheckDisableMatchFunc::CallFunc_Subtract_DateTimeDateTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_LobbyNew_C_CheckDisableMatchFunc, CallFunc_Greater_DateTimeDateTime_ReturnValue) == 0x000110, "Member 'UI_LobbyNew_C_CheckDisableMatchFunc::CallFunc_Greater_DateTimeDateTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_LobbyNew_C_CheckDisableMatchFunc, CallFunc_GetDisplayTimespan_ReturnValue) == 0x000118, "Member 'UI_LobbyNew_C_CheckDisableMatchFunc::CallFunc_GetDisplayTimespan_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_LobbyNew_C_CheckDisableMatchFunc, K2Node_MakeStruct_FormatArgumentData) == 0x000130, "Member 'UI_LobbyNew_C_CheckDisableMatchFunc::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(UI_LobbyNew_C_CheckDisableMatchFunc, K2Node_MakeArray_Array) == 0x000180, "Member 'UI_LobbyNew_C_CheckDisableMatchFunc::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(UI_LobbyNew_C_CheckDisableMatchFunc, CallFunc_Format_ReturnValue) == 0x000190, "Member 'UI_LobbyNew_C_CheckDisableMatchFunc::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_LobbyNew_C_CheckDisableMatchFunc, CallFunc_Conv_TextToString_ReturnValue) == 0x0001A8, "Member 'UI_LobbyNew_C_CheckDisableMatchFunc::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_LobbyNew_C_CheckDisableMatchFunc, CallFunc_AddToastMessage_ReturnValue) == 0x0001B8, "Member 'UI_LobbyNew_C_CheckDisableMatchFunc::CallFunc_AddToastMessage_ReturnValue' has a wrong offset!");

// Function UI_LobbyNew.UI_LobbyNew_C.OnChangeCharaSlot_ACK
// 0x000C (0x000C - 0x0000)
struct UI_LobbyNew_C_OnChangeCharaSlot_ACK final
{
public:
	struct FApiResult                             Response;                                          // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	uint8                                         ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_LobbyNew_C_OnChangeCharaSlot_ACK) == 0x000004, "Wrong alignment on UI_LobbyNew_C_OnChangeCharaSlot_ACK");
static_assert(sizeof(UI_LobbyNew_C_OnChangeCharaSlot_ACK) == 0x00000C, "Wrong size on UI_LobbyNew_C_OnChangeCharaSlot_ACK");
static_assert(offsetof(UI_LobbyNew_C_OnChangeCharaSlot_ACK, Response) == 0x000000, "Member 'UI_LobbyNew_C_OnChangeCharaSlot_ACK::Response' has a wrong offset!");
static_assert(offsetof(UI_LobbyNew_C_OnChangeCharaSlot_ACK, ReturnValue) == 0x000008, "Member 'UI_LobbyNew_C_OnChangeCharaSlot_ACK::ReturnValue' has a wrong offset!");

}

