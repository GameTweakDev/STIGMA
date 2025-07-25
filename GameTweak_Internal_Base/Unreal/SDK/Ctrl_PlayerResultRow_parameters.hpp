#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: Ctrl_PlayerResultRow

#include "Basic.hpp"

#include "Stigma_structs.hpp"
#include "BPGLib_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function Ctrl_PlayerResultRow.Ctrl_PlayerResultRow_C.AddFriend
// 0x0028 (0x0028 - 0x0000)
struct Ctrl_PlayerResultRow_C_AddFriend final
{
public:
	class ABattlePlayerState*                     Ps;                                                // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EResultCode _rcode, struct FACK_Friend& _ack)> K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUI_TeamResultItem*                     K2Node_DynamicCast_AsUI_Team_Result_Item;          // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Ctrl_PlayerResultRow_C_AddFriend) == 0x000008, "Wrong alignment on Ctrl_PlayerResultRow_C_AddFriend");
static_assert(sizeof(Ctrl_PlayerResultRow_C_AddFriend) == 0x000028, "Wrong size on Ctrl_PlayerResultRow_C_AddFriend");
static_assert(offsetof(Ctrl_PlayerResultRow_C_AddFriend, Ps) == 0x000000, "Member 'Ctrl_PlayerResultRow_C_AddFriend::Ps' has a wrong offset!");
static_assert(offsetof(Ctrl_PlayerResultRow_C_AddFriend, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'Ctrl_PlayerResultRow_C_AddFriend::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(Ctrl_PlayerResultRow_C_AddFriend, K2Node_DynamicCast_AsUI_Team_Result_Item) == 0x000018, "Member 'Ctrl_PlayerResultRow_C_AddFriend::K2Node_DynamicCast_AsUI_Team_Result_Item' has a wrong offset!");
static_assert(offsetof(Ctrl_PlayerResultRow_C_AddFriend, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'Ctrl_PlayerResultRow_C_AddFriend::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function Ctrl_PlayerResultRow.Ctrl_PlayerResultRow_C.AddTempToastMsg
// 0x0028 (0x0028 - 0x0000)
struct Ctrl_PlayerResultRow_C_AddTempToastMsg final
{
public:
	class FString                                 _msg;                                              // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39F7[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-69 ])
	class UUI_ToastMessageContainer_C*            CallFunc_Create_ReturnValue;                       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_AddSimpleToast_ReturnValue;               // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Ctrl_PlayerResultRow_C_AddTempToastMsg) == 0x000008, "Wrong alignment on Ctrl_PlayerResultRow_C_AddTempToastMsg");
static_assert(sizeof(Ctrl_PlayerResultRow_C_AddTempToastMsg) == 0x000028, "Wrong size on Ctrl_PlayerResultRow_C_AddTempToastMsg");
static_assert(offsetof(Ctrl_PlayerResultRow_C_AddTempToastMsg, _msg) == 0x000000, "Member 'Ctrl_PlayerResultRow_C_AddTempToastMsg::_msg' has a wrong offset!");
static_assert(offsetof(Ctrl_PlayerResultRow_C_AddTempToastMsg, CallFunc_MakeLiteralByte_ReturnValue) == 0x000010, "Member 'Ctrl_PlayerResultRow_C_AddTempToastMsg::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ctrl_PlayerResultRow_C_AddTempToastMsg, CallFunc_Create_ReturnValue) == 0x000018, "Member 'Ctrl_PlayerResultRow_C_AddTempToastMsg::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ctrl_PlayerResultRow_C_AddTempToastMsg, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000020, "Member 'Ctrl_PlayerResultRow_C_AddTempToastMsg::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ctrl_PlayerResultRow_C_AddTempToastMsg, CallFunc_AddSimpleToast_ReturnValue) == 0x000024, "Member 'Ctrl_PlayerResultRow_C_AddTempToastMsg::CallFunc_AddSimpleToast_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ctrl_PlayerResultRow_C_AddTempToastMsg, CallFunc_IsValid_ReturnValue) == 0x000025, "Member 'Ctrl_PlayerResultRow_C_AddTempToastMsg::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function Ctrl_PlayerResultRow.Ctrl_PlayerResultRow_C.BndEvt__Ctrl_PlayerResultRow_ProfileCard_K2Node_ComponentBoundEvent_3_OnAck_AboutFriend__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct Ctrl_PlayerResultRow_C_BndEvt__Ctrl_PlayerResultRow_ProfileCard_K2Node_ComponentBoundEvent_3_OnAck_AboutFriend__DelegateSignature final
{
public:
	class FString                                 _toast_msg;                                        // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(Ctrl_PlayerResultRow_C_BndEvt__Ctrl_PlayerResultRow_ProfileCard_K2Node_ComponentBoundEvent_3_OnAck_AboutFriend__DelegateSignature) == 0x000008, "Wrong alignment on Ctrl_PlayerResultRow_C_BndEvt__Ctrl_PlayerResultRow_ProfileCard_K2Node_ComponentBoundEvent_3_OnAck_AboutFriend__DelegateSignature");
static_assert(sizeof(Ctrl_PlayerResultRow_C_BndEvt__Ctrl_PlayerResultRow_ProfileCard_K2Node_ComponentBoundEvent_3_OnAck_AboutFriend__DelegateSignature) == 0x000010, "Wrong size on Ctrl_PlayerResultRow_C_BndEvt__Ctrl_PlayerResultRow_ProfileCard_K2Node_ComponentBoundEvent_3_OnAck_AboutFriend__DelegateSignature");
static_assert(offsetof(Ctrl_PlayerResultRow_C_BndEvt__Ctrl_PlayerResultRow_ProfileCard_K2Node_ComponentBoundEvent_3_OnAck_AboutFriend__DelegateSignature, _toast_msg) == 0x000000, "Member 'Ctrl_PlayerResultRow_C_BndEvt__Ctrl_PlayerResultRow_ProfileCard_K2Node_ComponentBoundEvent_3_OnAck_AboutFriend__DelegateSignature::_toast_msg' has a wrong offset!");

// Function Ctrl_PlayerResultRow.Ctrl_PlayerResultRow_C.ExecuteUbergraph_Ctrl_PlayerResultRow
// 0x0018 (0x0018 - 0x0000)
struct Ctrl_PlayerResultRow_C_ExecuteUbergraph_Ctrl_PlayerResultRow final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39F8[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-69 ])
	class FString                                 K2Node_ComponentBoundEvent__toast_msg;             // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(Ctrl_PlayerResultRow_C_ExecuteUbergraph_Ctrl_PlayerResultRow) == 0x000008, "Wrong alignment on Ctrl_PlayerResultRow_C_ExecuteUbergraph_Ctrl_PlayerResultRow");
static_assert(sizeof(Ctrl_PlayerResultRow_C_ExecuteUbergraph_Ctrl_PlayerResultRow) == 0x000018, "Wrong size on Ctrl_PlayerResultRow_C_ExecuteUbergraph_Ctrl_PlayerResultRow");
static_assert(offsetof(Ctrl_PlayerResultRow_C_ExecuteUbergraph_Ctrl_PlayerResultRow, EntryPoint) == 0x000000, "Member 'Ctrl_PlayerResultRow_C_ExecuteUbergraph_Ctrl_PlayerResultRow::EntryPoint' has a wrong offset!");
static_assert(offsetof(Ctrl_PlayerResultRow_C_ExecuteUbergraph_Ctrl_PlayerResultRow, K2Node_ComponentBoundEvent__toast_msg) == 0x000008, "Member 'Ctrl_PlayerResultRow_C_ExecuteUbergraph_Ctrl_PlayerResultRow::K2Node_ComponentBoundEvent__toast_msg' has a wrong offset!");

// Function Ctrl_PlayerResultRow.Ctrl_PlayerResultRow_C.Get_ProfileCard_ToolTipWidget
// 0x0020 (0x0020 - 0x0000)
struct Ctrl_PlayerResultRow_C_Get_ProfileCard_ToolTipWidget final
{
public:
	class UWidget*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UProfileCard_CanHover_C*                K2Node_DynamicCast_AsProfile_Card_Can_Hover;       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39F9[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-69 ])
	class UWidget*                                CallFunc_GetToolTipWidget_ReturnValue;             // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Ctrl_PlayerResultRow_C_Get_ProfileCard_ToolTipWidget) == 0x000008, "Wrong alignment on Ctrl_PlayerResultRow_C_Get_ProfileCard_ToolTipWidget");
static_assert(sizeof(Ctrl_PlayerResultRow_C_Get_ProfileCard_ToolTipWidget) == 0x000020, "Wrong size on Ctrl_PlayerResultRow_C_Get_ProfileCard_ToolTipWidget");
static_assert(offsetof(Ctrl_PlayerResultRow_C_Get_ProfileCard_ToolTipWidget, ReturnValue) == 0x000000, "Member 'Ctrl_PlayerResultRow_C_Get_ProfileCard_ToolTipWidget::ReturnValue' has a wrong offset!");
static_assert(offsetof(Ctrl_PlayerResultRow_C_Get_ProfileCard_ToolTipWidget, K2Node_DynamicCast_AsProfile_Card_Can_Hover) == 0x000008, "Member 'Ctrl_PlayerResultRow_C_Get_ProfileCard_ToolTipWidget::K2Node_DynamicCast_AsProfile_Card_Can_Hover' has a wrong offset!");
static_assert(offsetof(Ctrl_PlayerResultRow_C_Get_ProfileCard_ToolTipWidget, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'Ctrl_PlayerResultRow_C_Get_ProfileCard_ToolTipWidget::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Ctrl_PlayerResultRow_C_Get_ProfileCard_ToolTipWidget, CallFunc_GetToolTipWidget_ReturnValue) == 0x000018, "Member 'Ctrl_PlayerResultRow_C_Get_ProfileCard_ToolTipWidget::CallFunc_GetToolTipWidget_ReturnValue' has a wrong offset!");

// Function Ctrl_PlayerResultRow.Ctrl_PlayerResultRow_C.OnAck_AskFriend
// 0x0100 (0x0100 - 0x0000)
struct Ctrl_PlayerResultRow_C_OnAck_AskFriend final
{
public:
	EResultCode                                   _rcode;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39FA[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-69 ])
	struct FACK_Friend                            _ack;                                              // 0x0008(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	struct FNetReply                              ReturnValue;                                       // 0x0018(0x0020)(Parm, OutParm, ReturnParm)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39FB[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-69 ])
	class FText                                   CallFunc_ToText_ReturnValue;                       // 0x0040(0x0018)()
	struct FNetReply                              CallFunc_NetReplyFromCode_ReturnValue;             // 0x0058(0x0020)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0078(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00C8(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00D8(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x00F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(Ctrl_PlayerResultRow_C_OnAck_AskFriend) == 0x000008, "Wrong alignment on Ctrl_PlayerResultRow_C_OnAck_AskFriend");
static_assert(sizeof(Ctrl_PlayerResultRow_C_OnAck_AskFriend) == 0x000100, "Wrong size on Ctrl_PlayerResultRow_C_OnAck_AskFriend");
static_assert(offsetof(Ctrl_PlayerResultRow_C_OnAck_AskFriend, _rcode) == 0x000000, "Member 'Ctrl_PlayerResultRow_C_OnAck_AskFriend::_rcode' has a wrong offset!");
static_assert(offsetof(Ctrl_PlayerResultRow_C_OnAck_AskFriend, _ack) == 0x000008, "Member 'Ctrl_PlayerResultRow_C_OnAck_AskFriend::_ack' has a wrong offset!");
static_assert(offsetof(Ctrl_PlayerResultRow_C_OnAck_AskFriend, ReturnValue) == 0x000018, "Member 'Ctrl_PlayerResultRow_C_OnAck_AskFriend::ReturnValue' has a wrong offset!");
static_assert(offsetof(Ctrl_PlayerResultRow_C_OnAck_AskFriend, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000038, "Member 'Ctrl_PlayerResultRow_C_OnAck_AskFriend::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ctrl_PlayerResultRow_C_OnAck_AskFriend, CallFunc_ToText_ReturnValue) == 0x000040, "Member 'Ctrl_PlayerResultRow_C_OnAck_AskFriend::CallFunc_ToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ctrl_PlayerResultRow_C_OnAck_AskFriend, CallFunc_NetReplyFromCode_ReturnValue) == 0x000058, "Member 'Ctrl_PlayerResultRow_C_OnAck_AskFriend::CallFunc_NetReplyFromCode_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ctrl_PlayerResultRow_C_OnAck_AskFriend, K2Node_MakeStruct_FormatArgumentData) == 0x000078, "Member 'Ctrl_PlayerResultRow_C_OnAck_AskFriend::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(Ctrl_PlayerResultRow_C_OnAck_AskFriend, K2Node_MakeArray_Array) == 0x0000C8, "Member 'Ctrl_PlayerResultRow_C_OnAck_AskFriend::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(Ctrl_PlayerResultRow_C_OnAck_AskFriend, CallFunc_Format_ReturnValue) == 0x0000D8, "Member 'Ctrl_PlayerResultRow_C_OnAck_AskFriend::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ctrl_PlayerResultRow_C_OnAck_AskFriend, CallFunc_Conv_TextToString_ReturnValue) == 0x0000F0, "Member 'Ctrl_PlayerResultRow_C_OnAck_AskFriend::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");

// Function Ctrl_PlayerResultRow.Ctrl_PlayerResultRow_C.OnAck_UserReportJWT
// 0x0070 (0x0070 - 0x0000)
struct Ctrl_PlayerResultRow_C_OnAck_UserReportJWT final
{
public:
	EResultCode                                   _rcode;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39FC[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-69 ])
	struct FACK_GetUserReportJWT                  _ack;                                              // 0x0008(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FNetReply                              ReturnValue;                                       // 0x0018(0x0020)(Parm, OutParm, ReturnParm)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39FD[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-69 ])
	class FString                                 CallFunc_MakeLiteralString_ReturnValue;            // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UPopup_UserReport_C*                    CallFunc_Create_ReturnValue;                       // 0x0050(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UPopupBase*                             CallFunc_DoModal_ReturnValue;                      // 0x0068(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Ctrl_PlayerResultRow_C_OnAck_UserReportJWT) == 0x000008, "Wrong alignment on Ctrl_PlayerResultRow_C_OnAck_UserReportJWT");
static_assert(sizeof(Ctrl_PlayerResultRow_C_OnAck_UserReportJWT) == 0x000070, "Wrong size on Ctrl_PlayerResultRow_C_OnAck_UserReportJWT");
static_assert(offsetof(Ctrl_PlayerResultRow_C_OnAck_UserReportJWT, _rcode) == 0x000000, "Member 'Ctrl_PlayerResultRow_C_OnAck_UserReportJWT::_rcode' has a wrong offset!");
static_assert(offsetof(Ctrl_PlayerResultRow_C_OnAck_UserReportJWT, _ack) == 0x000008, "Member 'Ctrl_PlayerResultRow_C_OnAck_UserReportJWT::_ack' has a wrong offset!");
static_assert(offsetof(Ctrl_PlayerResultRow_C_OnAck_UserReportJWT, ReturnValue) == 0x000018, "Member 'Ctrl_PlayerResultRow_C_OnAck_UserReportJWT::ReturnValue' has a wrong offset!");
static_assert(offsetof(Ctrl_PlayerResultRow_C_OnAck_UserReportJWT, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000038, "Member 'Ctrl_PlayerResultRow_C_OnAck_UserReportJWT::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ctrl_PlayerResultRow_C_OnAck_UserReportJWT, CallFunc_MakeLiteralString_ReturnValue) == 0x000040, "Member 'Ctrl_PlayerResultRow_C_OnAck_UserReportJWT::CallFunc_MakeLiteralString_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ctrl_PlayerResultRow_C_OnAck_UserReportJWT, CallFunc_Create_ReturnValue) == 0x000050, "Member 'Ctrl_PlayerResultRow_C_OnAck_UserReportJWT::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ctrl_PlayerResultRow_C_OnAck_UserReportJWT, CallFunc_Concat_StrStr_ReturnValue) == 0x000058, "Member 'Ctrl_PlayerResultRow_C_OnAck_UserReportJWT::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ctrl_PlayerResultRow_C_OnAck_UserReportJWT, CallFunc_DoModal_ReturnValue) == 0x000068, "Member 'Ctrl_PlayerResultRow_C_OnAck_UserReportJWT::CallFunc_DoModal_ReturnValue' has a wrong offset!");

// Function Ctrl_PlayerResultRow.Ctrl_PlayerResultRow_C.OnGetVisibility_NonHover
// 0x0002 (0x0002 - 0x0000)
struct Ctrl_PlayerResultRow_C_OnGetVisibility_NonHover final
{
public:
	ESlateVisibility                              ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsHovered_ReturnValue;                    // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Ctrl_PlayerResultRow_C_OnGetVisibility_NonHover) == 0x000001, "Wrong alignment on Ctrl_PlayerResultRow_C_OnGetVisibility_NonHover");
static_assert(sizeof(Ctrl_PlayerResultRow_C_OnGetVisibility_NonHover) == 0x000002, "Wrong size on Ctrl_PlayerResultRow_C_OnGetVisibility_NonHover");
static_assert(offsetof(Ctrl_PlayerResultRow_C_OnGetVisibility_NonHover, ReturnValue) == 0x000000, "Member 'Ctrl_PlayerResultRow_C_OnGetVisibility_NonHover::ReturnValue' has a wrong offset!");
static_assert(offsetof(Ctrl_PlayerResultRow_C_OnGetVisibility_NonHover, CallFunc_IsHovered_ReturnValue) == 0x000001, "Member 'Ctrl_PlayerResultRow_C_OnGetVisibility_NonHover::CallFunc_IsHovered_ReturnValue' has a wrong offset!");

// Function Ctrl_PlayerResultRow.Ctrl_PlayerResultRow_C.OnUpdateUI_ProfileCard
// 0x0100 (0x0100 - 0x0000)
struct Ctrl_PlayerResultRow_C_OnUpdateUI_ProfileCard final
{
public:
	class UProfileCard_Common_C*                  K2Node_DynamicCast_AsProfile_Card_Common;          // 0x0000(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39FE[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-69 ])
	struct FConfig_Tier                           CallFunc_GetTierDefine_ReturnValue;                // 0x0010(0x00D8)(ConstParm)
	class FText                                   CallFunc_ToText_ReturnValue;                       // 0x00E8(0x0018)()
};
static_assert(alignof(Ctrl_PlayerResultRow_C_OnUpdateUI_ProfileCard) == 0x000008, "Wrong alignment on Ctrl_PlayerResultRow_C_OnUpdateUI_ProfileCard");
static_assert(sizeof(Ctrl_PlayerResultRow_C_OnUpdateUI_ProfileCard) == 0x000100, "Wrong size on Ctrl_PlayerResultRow_C_OnUpdateUI_ProfileCard");
static_assert(offsetof(Ctrl_PlayerResultRow_C_OnUpdateUI_ProfileCard, K2Node_DynamicCast_AsProfile_Card_Common) == 0x000000, "Member 'Ctrl_PlayerResultRow_C_OnUpdateUI_ProfileCard::K2Node_DynamicCast_AsProfile_Card_Common' has a wrong offset!");
static_assert(offsetof(Ctrl_PlayerResultRow_C_OnUpdateUI_ProfileCard, K2Node_DynamicCast_bSuccess) == 0x000008, "Member 'Ctrl_PlayerResultRow_C_OnUpdateUI_ProfileCard::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Ctrl_PlayerResultRow_C_OnUpdateUI_ProfileCard, CallFunc_GetTierDefine_ReturnValue) == 0x000010, "Member 'Ctrl_PlayerResultRow_C_OnUpdateUI_ProfileCard::CallFunc_GetTierDefine_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ctrl_PlayerResultRow_C_OnUpdateUI_ProfileCard, CallFunc_ToText_ReturnValue) == 0x0000E8, "Member 'Ctrl_PlayerResultRow_C_OnUpdateUI_ProfileCard::CallFunc_ToText_ReturnValue' has a wrong offset!");

// Function Ctrl_PlayerResultRow.Ctrl_PlayerResultRow_C.SendUserReport
// 0x00F8 (0x00F8 - 0x0000)
struct Ctrl_PlayerResultRow_C_SendUserReport final
{
public:
	class AMatchServicedPlayerState*              Ps;                                                // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EResultCode _rcode, struct FACK_GetUserReportJWT& _ack)> K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUI_TeamResultItem*                     K2Node_DynamicCast_AsUI_Team_Result_Item;          // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39FF[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-69 ])
	struct FBattleDecisionDetail                  CallFunc_GetResult_ReturnValue;                    // 0x0028(0x00D0)()
};
static_assert(alignof(Ctrl_PlayerResultRow_C_SendUserReport) == 0x000008, "Wrong alignment on Ctrl_PlayerResultRow_C_SendUserReport");
static_assert(sizeof(Ctrl_PlayerResultRow_C_SendUserReport) == 0x0000F8, "Wrong size on Ctrl_PlayerResultRow_C_SendUserReport");
static_assert(offsetof(Ctrl_PlayerResultRow_C_SendUserReport, Ps) == 0x000000, "Member 'Ctrl_PlayerResultRow_C_SendUserReport::Ps' has a wrong offset!");
static_assert(offsetof(Ctrl_PlayerResultRow_C_SendUserReport, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'Ctrl_PlayerResultRow_C_SendUserReport::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(Ctrl_PlayerResultRow_C_SendUserReport, K2Node_DynamicCast_AsUI_Team_Result_Item) == 0x000018, "Member 'Ctrl_PlayerResultRow_C_SendUserReport::K2Node_DynamicCast_AsUI_Team_Result_Item' has a wrong offset!");
static_assert(offsetof(Ctrl_PlayerResultRow_C_SendUserReport, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'Ctrl_PlayerResultRow_C_SendUserReport::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Ctrl_PlayerResultRow_C_SendUserReport, CallFunc_GetResult_ReturnValue) == 0x000028, "Member 'Ctrl_PlayerResultRow_C_SendUserReport::CallFunc_GetResult_ReturnValue' has a wrong offset!");

}

