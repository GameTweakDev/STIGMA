#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: CommonInput

#include "Basic.hpp"

#include "CommonInput_structs.hpp"


namespace SDK::Params
{

// Function CommonInput.CommonInputBaseControllerData.GetRegisteredGamepads
// 0x0010 (0x0010 - 0x0000)
struct CommonInputBaseControllerData_GetRegisteredGamepads final
{
public:
	TArray<class FName>                           ReturnValue;                                       // 0x0000(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(CommonInputBaseControllerData_GetRegisteredGamepads) == 0x000008, "Wrong alignment on CommonInputBaseControllerData_GetRegisteredGamepads");
static_assert(sizeof(CommonInputBaseControllerData_GetRegisteredGamepads) == 0x000010, "Wrong size on CommonInputBaseControllerData_GetRegisteredGamepads");
static_assert(offsetof(CommonInputBaseControllerData_GetRegisteredGamepads, ReturnValue) == 0x000000, "Member 'CommonInputBaseControllerData_GetRegisteredGamepads::ReturnValue' has a wrong offset!");

// Function CommonInput.CommonInputSettings.IsEnhancedInputSupportEnabled
// 0x0001 (0x0001 - 0x0000)
struct CommonInputSettings_IsEnhancedInputSupportEnabled final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(CommonInputSettings_IsEnhancedInputSupportEnabled) == 0x000001, "Wrong alignment on CommonInputSettings_IsEnhancedInputSupportEnabled");
static_assert(sizeof(CommonInputSettings_IsEnhancedInputSupportEnabled) == 0x000001, "Wrong size on CommonInputSettings_IsEnhancedInputSupportEnabled");
static_assert(offsetof(CommonInputSettings_IsEnhancedInputSupportEnabled, ReturnValue) == 0x000000, "Member 'CommonInputSettings_IsEnhancedInputSupportEnabled::ReturnValue' has a wrong offset!");

// Function CommonInput.CommonInputSubsystem.SetCurrentInputType
// 0x0001 (0x0001 - 0x0000)
struct CommonInputSubsystem_SetCurrentInputType final
{
public:
	ECommonInputType                              NewInputType;                                      // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(CommonInputSubsystem_SetCurrentInputType) == 0x000001, "Wrong alignment on CommonInputSubsystem_SetCurrentInputType");
static_assert(sizeof(CommonInputSubsystem_SetCurrentInputType) == 0x000001, "Wrong size on CommonInputSubsystem_SetCurrentInputType");
static_assert(offsetof(CommonInputSubsystem_SetCurrentInputType, NewInputType) == 0x000000, "Member 'CommonInputSubsystem_SetCurrentInputType::NewInputType' has a wrong offset!");

// Function CommonInput.CommonInputSubsystem.SetGamepadInputType
// 0x0008 (0x0008 - 0x0000)
struct CommonInputSubsystem_SetGamepadInputType final
{
public:
	class FName                                   InGamepadInputType;                                // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(CommonInputSubsystem_SetGamepadInputType) == 0x000004, "Wrong alignment on CommonInputSubsystem_SetGamepadInputType");
static_assert(sizeof(CommonInputSubsystem_SetGamepadInputType) == 0x000008, "Wrong size on CommonInputSubsystem_SetGamepadInputType");
static_assert(offsetof(CommonInputSubsystem_SetGamepadInputType, InGamepadInputType) == 0x000000, "Member 'CommonInputSubsystem_SetGamepadInputType::InGamepadInputType' has a wrong offset!");

// Function CommonInput.CommonInputSubsystem.GetCurrentGamepadName
// 0x0008 (0x0008 - 0x0000)
struct CommonInputSubsystem_GetCurrentGamepadName final
{
public:
	class FName                                   ReturnValue;                                       // 0x0000(0x0008)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(CommonInputSubsystem_GetCurrentGamepadName) == 0x000004, "Wrong alignment on CommonInputSubsystem_GetCurrentGamepadName");
static_assert(sizeof(CommonInputSubsystem_GetCurrentGamepadName) == 0x000008, "Wrong size on CommonInputSubsystem_GetCurrentGamepadName");
static_assert(offsetof(CommonInputSubsystem_GetCurrentGamepadName, ReturnValue) == 0x000000, "Member 'CommonInputSubsystem_GetCurrentGamepadName::ReturnValue' has a wrong offset!");

// Function CommonInput.CommonInputSubsystem.GetCurrentInputType
// 0x0001 (0x0001 - 0x0000)
struct CommonInputSubsystem_GetCurrentInputType final
{
public:
	ECommonInputType                              ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(CommonInputSubsystem_GetCurrentInputType) == 0x000001, "Wrong alignment on CommonInputSubsystem_GetCurrentInputType");
static_assert(sizeof(CommonInputSubsystem_GetCurrentInputType) == 0x000001, "Wrong size on CommonInputSubsystem_GetCurrentInputType");
static_assert(offsetof(CommonInputSubsystem_GetCurrentInputType, ReturnValue) == 0x000000, "Member 'CommonInputSubsystem_GetCurrentInputType::ReturnValue' has a wrong offset!");

// Function CommonInput.CommonInputSubsystem.GetDefaultInputType
// 0x0001 (0x0001 - 0x0000)
struct CommonInputSubsystem_GetDefaultInputType final
{
public:
	ECommonInputType                              ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(CommonInputSubsystem_GetDefaultInputType) == 0x000001, "Wrong alignment on CommonInputSubsystem_GetDefaultInputType");
static_assert(sizeof(CommonInputSubsystem_GetDefaultInputType) == 0x000001, "Wrong size on CommonInputSubsystem_GetDefaultInputType");
static_assert(offsetof(CommonInputSubsystem_GetDefaultInputType, ReturnValue) == 0x000000, "Member 'CommonInputSubsystem_GetDefaultInputType::ReturnValue' has a wrong offset!");

// Function CommonInput.CommonInputSubsystem.IsInputMethodActive
// 0x0002 (0x0002 - 0x0000)
struct CommonInputSubsystem_IsInputMethodActive final
{
public:
	ECommonInputType                              InputMethod;                                       // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(CommonInputSubsystem_IsInputMethodActive) == 0x000001, "Wrong alignment on CommonInputSubsystem_IsInputMethodActive");
static_assert(sizeof(CommonInputSubsystem_IsInputMethodActive) == 0x000002, "Wrong size on CommonInputSubsystem_IsInputMethodActive");
static_assert(offsetof(CommonInputSubsystem_IsInputMethodActive, InputMethod) == 0x000000, "Member 'CommonInputSubsystem_IsInputMethodActive::InputMethod' has a wrong offset!");
static_assert(offsetof(CommonInputSubsystem_IsInputMethodActive, ReturnValue) == 0x000001, "Member 'CommonInputSubsystem_IsInputMethodActive::ReturnValue' has a wrong offset!");

// Function CommonInput.CommonInputSubsystem.IsUsingPointerInput
// 0x0001 (0x0001 - 0x0000)
struct CommonInputSubsystem_IsUsingPointerInput final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(CommonInputSubsystem_IsUsingPointerInput) == 0x000001, "Wrong alignment on CommonInputSubsystem_IsUsingPointerInput");
static_assert(sizeof(CommonInputSubsystem_IsUsingPointerInput) == 0x000001, "Wrong size on CommonInputSubsystem_IsUsingPointerInput");
static_assert(offsetof(CommonInputSubsystem_IsUsingPointerInput, ReturnValue) == 0x000000, "Member 'CommonInputSubsystem_IsUsingPointerInput::ReturnValue' has a wrong offset!");

// Function CommonInput.CommonInputSubsystem.ShouldShowInputKeys
// 0x0001 (0x0001 - 0x0000)
struct CommonInputSubsystem_ShouldShowInputKeys final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(CommonInputSubsystem_ShouldShowInputKeys) == 0x000001, "Wrong alignment on CommonInputSubsystem_ShouldShowInputKeys");
static_assert(sizeof(CommonInputSubsystem_ShouldShowInputKeys) == 0x000001, "Wrong size on CommonInputSubsystem_ShouldShowInputKeys");
static_assert(offsetof(CommonInputSubsystem_ShouldShowInputKeys, ReturnValue) == 0x000000, "Member 'CommonInputSubsystem_ShouldShowInputKeys::ReturnValue' has a wrong offset!");

}

