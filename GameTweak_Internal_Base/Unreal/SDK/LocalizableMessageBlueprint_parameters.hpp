#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: LocalizableMessageBlueprint

#include "Basic.hpp"

#include "LocalizableMessage_structs.hpp"


namespace SDK::Params
{

// Function LocalizableMessageBlueprint.LocalizableMessageLibrary.Conv_LocalizableMessageToText
// 0x0050 (0x0050 - 0x0000)
struct LocalizableMessageLibrary_Conv_LocalizableMessageToText final
{
public:
	class UObject*                                WorldContextObject;                                // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLocalizableMessage                    Message;                                           // 0x0008(0x0030)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FText                                   ReturnValue;                                       // 0x0038(0x0018)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(LocalizableMessageLibrary_Conv_LocalizableMessageToText) == 0x000008, "Wrong alignment on LocalizableMessageLibrary_Conv_LocalizableMessageToText");
static_assert(sizeof(LocalizableMessageLibrary_Conv_LocalizableMessageToText) == 0x000050, "Wrong size on LocalizableMessageLibrary_Conv_LocalizableMessageToText");
static_assert(offsetof(LocalizableMessageLibrary_Conv_LocalizableMessageToText, WorldContextObject) == 0x000000, "Member 'LocalizableMessageLibrary_Conv_LocalizableMessageToText::WorldContextObject' has a wrong offset!");
static_assert(offsetof(LocalizableMessageLibrary_Conv_LocalizableMessageToText, Message) == 0x000008, "Member 'LocalizableMessageLibrary_Conv_LocalizableMessageToText::Message' has a wrong offset!");
static_assert(offsetof(LocalizableMessageLibrary_Conv_LocalizableMessageToText, ReturnValue) == 0x000038, "Member 'LocalizableMessageLibrary_Conv_LocalizableMessageToText::ReturnValue' has a wrong offset!");

// Function LocalizableMessageBlueprint.LocalizableMessageLibrary.IsEmpty_LocalizableMessage
// 0x0038 (0x0038 - 0x0000)
struct LocalizableMessageLibrary_IsEmpty_LocalizableMessage final
{
public:
	struct FLocalizableMessage                    Message;                                           // 0x0000(0x0030)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0030(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2FFC[0x7];                                     // 0x0031(0x0007)(Fixing Struct Size After Last Property [ Dumper-69 ])
};
static_assert(alignof(LocalizableMessageLibrary_IsEmpty_LocalizableMessage) == 0x000008, "Wrong alignment on LocalizableMessageLibrary_IsEmpty_LocalizableMessage");
static_assert(sizeof(LocalizableMessageLibrary_IsEmpty_LocalizableMessage) == 0x000038, "Wrong size on LocalizableMessageLibrary_IsEmpty_LocalizableMessage");
static_assert(offsetof(LocalizableMessageLibrary_IsEmpty_LocalizableMessage, Message) == 0x000000, "Member 'LocalizableMessageLibrary_IsEmpty_LocalizableMessage::Message' has a wrong offset!");
static_assert(offsetof(LocalizableMessageLibrary_IsEmpty_LocalizableMessage, ReturnValue) == 0x000030, "Member 'LocalizableMessageLibrary_IsEmpty_LocalizableMessage::ReturnValue' has a wrong offset!");

// Function LocalizableMessageBlueprint.LocalizableMessageLibrary.Reset_LocalizableMessage
// 0x0030 (0x0030 - 0x0000)
struct LocalizableMessageLibrary_Reset_LocalizableMessage final
{
public:
	struct FLocalizableMessage                    Message;                                           // 0x0000(0x0030)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(LocalizableMessageLibrary_Reset_LocalizableMessage) == 0x000008, "Wrong alignment on LocalizableMessageLibrary_Reset_LocalizableMessage");
static_assert(sizeof(LocalizableMessageLibrary_Reset_LocalizableMessage) == 0x000030, "Wrong size on LocalizableMessageLibrary_Reset_LocalizableMessage");
static_assert(offsetof(LocalizableMessageLibrary_Reset_LocalizableMessage, Message) == 0x000000, "Member 'LocalizableMessageLibrary_Reset_LocalizableMessage::Message' has a wrong offset!");

}

