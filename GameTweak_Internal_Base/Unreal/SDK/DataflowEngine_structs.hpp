#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: DataflowEngine

#include "Basic.hpp"


namespace SDK
{

// ScriptStruct DataflowEngine.StringValuePair
// 0x0020 (0x0020 - 0x0000)
struct FStringValuePair final
{
public:
	class FString                                 Key;                                               // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Value;                                             // 0x0010(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FStringValuePair) == 0x000008, "Wrong alignment on FStringValuePair");
static_assert(sizeof(FStringValuePair) == 0x000020, "Wrong size on FStringValuePair");
static_assert(offsetof(FStringValuePair, Key) == 0x000000, "Member 'FStringValuePair::Key' has a wrong offset!");
static_assert(offsetof(FStringValuePair, Value) == 0x000010, "Member 'FStringValuePair::Value' has a wrong offset!");

}

