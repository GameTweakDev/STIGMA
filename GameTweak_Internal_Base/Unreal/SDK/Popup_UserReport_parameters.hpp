#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: Popup_UserReport

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BPGLib_structs.hpp"
#include "Stigma_structs.hpp"


namespace SDK::Params
{

// Function Popup_UserReport.Popup_UserReport_C.ExecuteUbergraph_Popup_UserReport
// 0x0004 (0x0004 - 0x0000)
struct Popup_UserReport_C_ExecuteUbergraph_Popup_UserReport final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Popup_UserReport_C_ExecuteUbergraph_Popup_UserReport) == 0x000004, "Wrong alignment on Popup_UserReport_C_ExecuteUbergraph_Popup_UserReport");
static_assert(sizeof(Popup_UserReport_C_ExecuteUbergraph_Popup_UserReport) == 0x000004, "Wrong size on Popup_UserReport_C_ExecuteUbergraph_Popup_UserReport");
static_assert(offsetof(Popup_UserReport_C_ExecuteUbergraph_Popup_UserReport, EntryPoint) == 0x000000, "Member 'Popup_UserReport_C_ExecuteUbergraph_Popup_UserReport::EntryPoint' has a wrong offset!");

// Function Popup_UserReport.Popup_UserReport_C.Init
// 0x0160 (0x0160 - 0x0000)
struct Popup_UserReport_C_Init final
{
public:
	class FString                                 _url;                                              // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FUserName                              _reported_user_name;                               // 0x0010(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class FText                                   CallFunc_MakeLiteralText_ReturnValue;              // 0x0028(0x0018)()
	class FText                                   CallFunc_ToText_ReturnValue;                       // 0x0040(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0058(0x0050)(HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x00A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimer_ReturnValue;                  // 0x00B8(0x0008)(NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00C0(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x00D8(0x0050)(HasGetValueTypeHash)
	TDelegate<void(const class FString& Message, const class FString& Source, int32 Line)> K2Node_CreateDelegate_OutputDelegate;              // 0x0128(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0138(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0148(0x0018)()
};
static_assert(alignof(Popup_UserReport_C_Init) == 0x000008, "Wrong alignment on Popup_UserReport_C_Init");
static_assert(sizeof(Popup_UserReport_C_Init) == 0x000160, "Wrong size on Popup_UserReport_C_Init");
static_assert(offsetof(Popup_UserReport_C_Init, _url) == 0x000000, "Member 'Popup_UserReport_C_Init::_url' has a wrong offset!");
static_assert(offsetof(Popup_UserReport_C_Init, _reported_user_name) == 0x000010, "Member 'Popup_UserReport_C_Init::_reported_user_name' has a wrong offset!");
static_assert(offsetof(Popup_UserReport_C_Init, CallFunc_MakeLiteralText_ReturnValue) == 0x000028, "Member 'Popup_UserReport_C_Init::CallFunc_MakeLiteralText_ReturnValue' has a wrong offset!");
static_assert(offsetof(Popup_UserReport_C_Init, CallFunc_ToText_ReturnValue) == 0x000040, "Member 'Popup_UserReport_C_Init::CallFunc_ToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(Popup_UserReport_C_Init, K2Node_MakeStruct_FormatArgumentData) == 0x000058, "Member 'Popup_UserReport_C_Init::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(Popup_UserReport_C_Init, CallFunc_Conv_TextToString_ReturnValue) == 0x0000A8, "Member 'Popup_UserReport_C_Init::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(Popup_UserReport_C_Init, CallFunc_K2_SetTimer_ReturnValue) == 0x0000B8, "Member 'Popup_UserReport_C_Init::CallFunc_K2_SetTimer_ReturnValue' has a wrong offset!");
static_assert(offsetof(Popup_UserReport_C_Init, CallFunc_Conv_StringToText_ReturnValue) == 0x0000C0, "Member 'Popup_UserReport_C_Init::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(Popup_UserReport_C_Init, K2Node_MakeStruct_FormatArgumentData_1) == 0x0000D8, "Member 'Popup_UserReport_C_Init::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(Popup_UserReport_C_Init, K2Node_CreateDelegate_OutputDelegate) == 0x000128, "Member 'Popup_UserReport_C_Init::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(Popup_UserReport_C_Init, K2Node_MakeArray_Array) == 0x000138, "Member 'Popup_UserReport_C_Init::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(Popup_UserReport_C_Init, CallFunc_Format_ReturnValue) == 0x000148, "Member 'Popup_UserReport_C_Init::CallFunc_Format_ReturnValue' has a wrong offset!");

// Function Popup_UserReport.Popup_UserReport_C.OnACK_ConsoleMessage
// 0x00E0 (0x00E0 - 0x0000)
struct Popup_UserReport_C_OnACK_ConsoleMessage final
{
public:
	class FString                                 Message;                                           // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Source;                                            // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         Line;                                              // 0x0020(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_35FE[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-69 ])
	class FText                                   Language_id;                                       // 0x0028(0x0018)(Edit, BlueprintVisible)
	bool                                          K2Node_SwitchString_CmpSuccess;                    // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_35FF[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-69 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0048(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0098(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00A8(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x00C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UUserOption*                            CallFunc_GetUserOptionSubSystem_ReturnValue;       // 0x00D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EOptionLanguage                               CallFunc_GetCurrentLanguage_ReturnValue;           // 0x00D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x00DA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Popup_UserReport_C_OnACK_ConsoleMessage) == 0x000008, "Wrong alignment on Popup_UserReport_C_OnACK_ConsoleMessage");
static_assert(sizeof(Popup_UserReport_C_OnACK_ConsoleMessage) == 0x0000E0, "Wrong size on Popup_UserReport_C_OnACK_ConsoleMessage");
static_assert(offsetof(Popup_UserReport_C_OnACK_ConsoleMessage, Message) == 0x000000, "Member 'Popup_UserReport_C_OnACK_ConsoleMessage::Message' has a wrong offset!");
static_assert(offsetof(Popup_UserReport_C_OnACK_ConsoleMessage, Source) == 0x000010, "Member 'Popup_UserReport_C_OnACK_ConsoleMessage::Source' has a wrong offset!");
static_assert(offsetof(Popup_UserReport_C_OnACK_ConsoleMessage, Line) == 0x000020, "Member 'Popup_UserReport_C_OnACK_ConsoleMessage::Line' has a wrong offset!");
static_assert(offsetof(Popup_UserReport_C_OnACK_ConsoleMessage, Language_id) == 0x000028, "Member 'Popup_UserReport_C_OnACK_ConsoleMessage::Language_id' has a wrong offset!");
static_assert(offsetof(Popup_UserReport_C_OnACK_ConsoleMessage, K2Node_SwitchString_CmpSuccess) == 0x000040, "Member 'Popup_UserReport_C_OnACK_ConsoleMessage::K2Node_SwitchString_CmpSuccess' has a wrong offset!");
static_assert(offsetof(Popup_UserReport_C_OnACK_ConsoleMessage, K2Node_MakeStruct_FormatArgumentData) == 0x000048, "Member 'Popup_UserReport_C_OnACK_ConsoleMessage::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(Popup_UserReport_C_OnACK_ConsoleMessage, K2Node_MakeArray_Array) == 0x000098, "Member 'Popup_UserReport_C_OnACK_ConsoleMessage::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(Popup_UserReport_C_OnACK_ConsoleMessage, CallFunc_Format_ReturnValue) == 0x0000A8, "Member 'Popup_UserReport_C_OnACK_ConsoleMessage::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(Popup_UserReport_C_OnACK_ConsoleMessage, CallFunc_Conv_TextToString_ReturnValue) == 0x0000C0, "Member 'Popup_UserReport_C_OnACK_ConsoleMessage::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(Popup_UserReport_C_OnACK_ConsoleMessage, CallFunc_GetUserOptionSubSystem_ReturnValue) == 0x0000D0, "Member 'Popup_UserReport_C_OnACK_ConsoleMessage::CallFunc_GetUserOptionSubSystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(Popup_UserReport_C_OnACK_ConsoleMessage, CallFunc_IsValid_ReturnValue) == 0x0000D8, "Member 'Popup_UserReport_C_OnACK_ConsoleMessage::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Popup_UserReport_C_OnACK_ConsoleMessage, CallFunc_GetCurrentLanguage_ReturnValue) == 0x0000D9, "Member 'Popup_UserReport_C_OnACK_ConsoleMessage::CallFunc_GetCurrentLanguage_ReturnValue' has a wrong offset!");
static_assert(offsetof(Popup_UserReport_C_OnACK_ConsoleMessage, K2Node_SwitchEnum_CmpSuccess) == 0x0000DA, "Member 'Popup_UserReport_C_OnACK_ConsoleMessage::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

}

