#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: StructUtilsEngine

#include "Basic.hpp"

#include "StructUtils_structs.hpp"
#include "StructUtilsEngine_structs.hpp"


namespace SDK::Params
{

// Function StructUtilsEngine.StructUtilsFunctionLibrary.EqualEqual_InstancedStruct
// 0x0028 (0x0028 - 0x0000)
struct StructUtilsFunctionLibrary_EqualEqual_InstancedStruct final
{
public:
	struct FInstancedStruct                       A;                                                 // 0x0000(0x0010)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FInstancedStruct                       B;                                                 // 0x0010(0x0010)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0020(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2FFD[0x7];                                     // 0x0021(0x0007)(Fixing Struct Size After Last Property [ Dumper-69 ])
};
static_assert(alignof(StructUtilsFunctionLibrary_EqualEqual_InstancedStruct) == 0x000008, "Wrong alignment on StructUtilsFunctionLibrary_EqualEqual_InstancedStruct");
static_assert(sizeof(StructUtilsFunctionLibrary_EqualEqual_InstancedStruct) == 0x000028, "Wrong size on StructUtilsFunctionLibrary_EqualEqual_InstancedStruct");
static_assert(offsetof(StructUtilsFunctionLibrary_EqualEqual_InstancedStruct, A) == 0x000000, "Member 'StructUtilsFunctionLibrary_EqualEqual_InstancedStruct::A' has a wrong offset!");
static_assert(offsetof(StructUtilsFunctionLibrary_EqualEqual_InstancedStruct, B) == 0x000010, "Member 'StructUtilsFunctionLibrary_EqualEqual_InstancedStruct::B' has a wrong offset!");
static_assert(offsetof(StructUtilsFunctionLibrary_EqualEqual_InstancedStruct, ReturnValue) == 0x000020, "Member 'StructUtilsFunctionLibrary_EqualEqual_InstancedStruct::ReturnValue' has a wrong offset!");

// Function StructUtilsEngine.StructUtilsFunctionLibrary.GetInstancedStructValue
// 0x0020 (0x0020 - 0x0000)
struct StructUtilsFunctionLibrary_GetInstancedStructValue final
{
public:
	EStructUtilsResult                            ExecResult;                                        // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2FFE[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-69 ])
	struct FInstancedStruct                       InstancedStruct;                                   // 0x0008(0x0010)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                         Value;                                             // 0x0018(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2FFF[0x4];                                     // 0x001C(0x0004)(Fixing Struct Size After Last Property [ Dumper-69 ])
};
static_assert(alignof(StructUtilsFunctionLibrary_GetInstancedStructValue) == 0x000008, "Wrong alignment on StructUtilsFunctionLibrary_GetInstancedStructValue");
static_assert(sizeof(StructUtilsFunctionLibrary_GetInstancedStructValue) == 0x000020, "Wrong size on StructUtilsFunctionLibrary_GetInstancedStructValue");
static_assert(offsetof(StructUtilsFunctionLibrary_GetInstancedStructValue, ExecResult) == 0x000000, "Member 'StructUtilsFunctionLibrary_GetInstancedStructValue::ExecResult' has a wrong offset!");
static_assert(offsetof(StructUtilsFunctionLibrary_GetInstancedStructValue, InstancedStruct) == 0x000008, "Member 'StructUtilsFunctionLibrary_GetInstancedStructValue::InstancedStruct' has a wrong offset!");
static_assert(offsetof(StructUtilsFunctionLibrary_GetInstancedStructValue, Value) == 0x000018, "Member 'StructUtilsFunctionLibrary_GetInstancedStructValue::Value' has a wrong offset!");

// Function StructUtilsEngine.StructUtilsFunctionLibrary.IsInstancedStructValid
// 0x0018 (0x0018 - 0x0000)
struct StructUtilsFunctionLibrary_IsInstancedStructValid final
{
public:
	struct FInstancedStruct                       InstancedStruct;                                   // 0x0000(0x0010)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	EStructUtilsResult                            ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3000[0x7];                                     // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-69 ])
};
static_assert(alignof(StructUtilsFunctionLibrary_IsInstancedStructValid) == 0x000008, "Wrong alignment on StructUtilsFunctionLibrary_IsInstancedStructValid");
static_assert(sizeof(StructUtilsFunctionLibrary_IsInstancedStructValid) == 0x000018, "Wrong size on StructUtilsFunctionLibrary_IsInstancedStructValid");
static_assert(offsetof(StructUtilsFunctionLibrary_IsInstancedStructValid, InstancedStruct) == 0x000000, "Member 'StructUtilsFunctionLibrary_IsInstancedStructValid::InstancedStruct' has a wrong offset!");
static_assert(offsetof(StructUtilsFunctionLibrary_IsInstancedStructValid, ReturnValue) == 0x000010, "Member 'StructUtilsFunctionLibrary_IsInstancedStructValid::ReturnValue' has a wrong offset!");

// Function StructUtilsEngine.StructUtilsFunctionLibrary.IsValid_InstancedStruct
// 0x0018 (0x0018 - 0x0000)
struct StructUtilsFunctionLibrary_IsValid_InstancedStruct final
{
public:
	struct FInstancedStruct                       InstancedStruct;                                   // 0x0000(0x0010)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3001[0x7];                                     // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-69 ])
};
static_assert(alignof(StructUtilsFunctionLibrary_IsValid_InstancedStruct) == 0x000008, "Wrong alignment on StructUtilsFunctionLibrary_IsValid_InstancedStruct");
static_assert(sizeof(StructUtilsFunctionLibrary_IsValid_InstancedStruct) == 0x000018, "Wrong size on StructUtilsFunctionLibrary_IsValid_InstancedStruct");
static_assert(offsetof(StructUtilsFunctionLibrary_IsValid_InstancedStruct, InstancedStruct) == 0x000000, "Member 'StructUtilsFunctionLibrary_IsValid_InstancedStruct::InstancedStruct' has a wrong offset!");
static_assert(offsetof(StructUtilsFunctionLibrary_IsValid_InstancedStruct, ReturnValue) == 0x000010, "Member 'StructUtilsFunctionLibrary_IsValid_InstancedStruct::ReturnValue' has a wrong offset!");

// Function StructUtilsEngine.StructUtilsFunctionLibrary.MakeInstancedStruct
// 0x0018 (0x0018 - 0x0000)
struct StructUtilsFunctionLibrary_MakeInstancedStruct final
{
public:
	int32                                         Value;                                             // 0x0000(0x0004)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3002[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-69 ])
	struct FInstancedStruct                       ReturnValue;                                       // 0x0008(0x0010)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(StructUtilsFunctionLibrary_MakeInstancedStruct) == 0x000008, "Wrong alignment on StructUtilsFunctionLibrary_MakeInstancedStruct");
static_assert(sizeof(StructUtilsFunctionLibrary_MakeInstancedStruct) == 0x000018, "Wrong size on StructUtilsFunctionLibrary_MakeInstancedStruct");
static_assert(offsetof(StructUtilsFunctionLibrary_MakeInstancedStruct, Value) == 0x000000, "Member 'StructUtilsFunctionLibrary_MakeInstancedStruct::Value' has a wrong offset!");
static_assert(offsetof(StructUtilsFunctionLibrary_MakeInstancedStruct, ReturnValue) == 0x000008, "Member 'StructUtilsFunctionLibrary_MakeInstancedStruct::ReturnValue' has a wrong offset!");

// Function StructUtilsEngine.StructUtilsFunctionLibrary.NotEqual_InstancedStruct
// 0x0028 (0x0028 - 0x0000)
struct StructUtilsFunctionLibrary_NotEqual_InstancedStruct final
{
public:
	struct FInstancedStruct                       A;                                                 // 0x0000(0x0010)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FInstancedStruct                       B;                                                 // 0x0010(0x0010)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0020(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3003[0x7];                                     // 0x0021(0x0007)(Fixing Struct Size After Last Property [ Dumper-69 ])
};
static_assert(alignof(StructUtilsFunctionLibrary_NotEqual_InstancedStruct) == 0x000008, "Wrong alignment on StructUtilsFunctionLibrary_NotEqual_InstancedStruct");
static_assert(sizeof(StructUtilsFunctionLibrary_NotEqual_InstancedStruct) == 0x000028, "Wrong size on StructUtilsFunctionLibrary_NotEqual_InstancedStruct");
static_assert(offsetof(StructUtilsFunctionLibrary_NotEqual_InstancedStruct, A) == 0x000000, "Member 'StructUtilsFunctionLibrary_NotEqual_InstancedStruct::A' has a wrong offset!");
static_assert(offsetof(StructUtilsFunctionLibrary_NotEqual_InstancedStruct, B) == 0x000010, "Member 'StructUtilsFunctionLibrary_NotEqual_InstancedStruct::B' has a wrong offset!");
static_assert(offsetof(StructUtilsFunctionLibrary_NotEqual_InstancedStruct, ReturnValue) == 0x000020, "Member 'StructUtilsFunctionLibrary_NotEqual_InstancedStruct::ReturnValue' has a wrong offset!");

// Function StructUtilsEngine.StructUtilsFunctionLibrary.Reset
// 0x0018 (0x0018 - 0x0000)
struct StructUtilsFunctionLibrary_Reset final
{
public:
	struct FInstancedStruct                       InstancedStruct;                                   // 0x0000(0x0010)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	const class UScriptStruct*                    StructType;                                        // 0x0010(0x0008)(ConstParm, Parm, ZeroConstructor, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(StructUtilsFunctionLibrary_Reset) == 0x000008, "Wrong alignment on StructUtilsFunctionLibrary_Reset");
static_assert(sizeof(StructUtilsFunctionLibrary_Reset) == 0x000018, "Wrong size on StructUtilsFunctionLibrary_Reset");
static_assert(offsetof(StructUtilsFunctionLibrary_Reset, InstancedStruct) == 0x000000, "Member 'StructUtilsFunctionLibrary_Reset::InstancedStruct' has a wrong offset!");
static_assert(offsetof(StructUtilsFunctionLibrary_Reset, StructType) == 0x000010, "Member 'StructUtilsFunctionLibrary_Reset::StructType' has a wrong offset!");

// Function StructUtilsEngine.StructUtilsFunctionLibrary.SetInstancedStructValue
// 0x0018 (0x0018 - 0x0000)
struct StructUtilsFunctionLibrary_SetInstancedStructValue final
{
public:
	struct FInstancedStruct                       InstancedStruct;                                   // 0x0000(0x0010)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                         Value;                                             // 0x0010(0x0004)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3004[0x4];                                     // 0x0014(0x0004)(Fixing Struct Size After Last Property [ Dumper-69 ])
};
static_assert(alignof(StructUtilsFunctionLibrary_SetInstancedStructValue) == 0x000008, "Wrong alignment on StructUtilsFunctionLibrary_SetInstancedStructValue");
static_assert(sizeof(StructUtilsFunctionLibrary_SetInstancedStructValue) == 0x000018, "Wrong size on StructUtilsFunctionLibrary_SetInstancedStructValue");
static_assert(offsetof(StructUtilsFunctionLibrary_SetInstancedStructValue, InstancedStruct) == 0x000000, "Member 'StructUtilsFunctionLibrary_SetInstancedStructValue::InstancedStruct' has a wrong offset!");
static_assert(offsetof(StructUtilsFunctionLibrary_SetInstancedStructValue, Value) == 0x000010, "Member 'StructUtilsFunctionLibrary_SetInstancedStructValue::Value' has a wrong offset!");

}

