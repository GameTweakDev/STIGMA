#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: CommonInput

#include "Basic.hpp"

#include "CommonInput_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "DeveloperSettings_structs.hpp"
#include "DeveloperSettings_classes.hpp"


namespace SDK
{

// Class CommonInput.CommonInputActionDomain
// 0x0010 (0x0040 - 0x0030)
class UCommonInputActionDomain final : public UDataAsset
{
public:
	ECommonInputEventFlowBehavior                 Behavior;                                          // 0x0030(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ECommonInputEventFlowBehavior                 InnerBehavior;                                     // 0x0034(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUseActionDomainDesiredInputConfig;                // 0x0038(0x0001)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ECommonInputMode                              InputMode;                                         // 0x0039(0x0001)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EMouseCaptureMode                             MouseCaptureMode;                                  // 0x003A(0x0001)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_18E9[0x5];                                     // 0x003B(0x0005)(Fixing Struct Size After Last Property [ Dumper-69 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CommonInputActionDomain">();
	}
	static class UCommonInputActionDomain* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonInputActionDomain>();
	}
};
static_assert(alignof(UCommonInputActionDomain) == 0x000008, "Wrong alignment on UCommonInputActionDomain");
static_assert(sizeof(UCommonInputActionDomain) == 0x000040, "Wrong size on UCommonInputActionDomain");
static_assert(offsetof(UCommonInputActionDomain, Behavior) == 0x000030, "Member 'UCommonInputActionDomain::Behavior' has a wrong offset!");
static_assert(offsetof(UCommonInputActionDomain, InnerBehavior) == 0x000034, "Member 'UCommonInputActionDomain::InnerBehavior' has a wrong offset!");
static_assert(offsetof(UCommonInputActionDomain, bUseActionDomainDesiredInputConfig) == 0x000038, "Member 'UCommonInputActionDomain::bUseActionDomainDesiredInputConfig' has a wrong offset!");
static_assert(offsetof(UCommonInputActionDomain, InputMode) == 0x000039, "Member 'UCommonInputActionDomain::InputMode' has a wrong offset!");
static_assert(offsetof(UCommonInputActionDomain, MouseCaptureMode) == 0x00003A, "Member 'UCommonInputActionDomain::MouseCaptureMode' has a wrong offset!");

// Class CommonInput.CommonInputActionDomainTable
// 0x0018 (0x0048 - 0x0030)
class UCommonInputActionDomainTable final : public UDataAsset
{
public:
	TArray<class UCommonInputActionDomain*>       ActionDomains;                                     // 0x0030(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	ECommonInputMode                              InputMode;                                         // 0x0040(0x0001)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EMouseCaptureMode                             MouseCaptureMode;                                  // 0x0041(0x0001)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_18EA[0x6];                                     // 0x0042(0x0006)(Fixing Struct Size After Last Property [ Dumper-69 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CommonInputActionDomainTable">();
	}
	static class UCommonInputActionDomainTable* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonInputActionDomainTable>();
	}
};
static_assert(alignof(UCommonInputActionDomainTable) == 0x000008, "Wrong alignment on UCommonInputActionDomainTable");
static_assert(sizeof(UCommonInputActionDomainTable) == 0x000048, "Wrong size on UCommonInputActionDomainTable");
static_assert(offsetof(UCommonInputActionDomainTable, ActionDomains) == 0x000030, "Member 'UCommonInputActionDomainTable::ActionDomains' has a wrong offset!");
static_assert(offsetof(UCommonInputActionDomainTable, InputMode) == 0x000040, "Member 'UCommonInputActionDomainTable::InputMode' has a wrong offset!");
static_assert(offsetof(UCommonInputActionDomainTable, MouseCaptureMode) == 0x000041, "Member 'UCommonInputActionDomainTable::MouseCaptureMode' has a wrong offset!");

// Class CommonInput.CommonUIInputData
// 0x0058 (0x0080 - 0x0028)
class UCommonUIInputData final : public UObject
{
public:
	struct FDataTableRowHandle                    DefaultClickAction;                                // 0x0028(0x0010)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FDataTableRowHandle                    DefaultBackAction;                                 // 0x0038(0x0010)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UClass>                   DefaultHoldData;                                   // 0x0048(0x0028)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UInputAction*                           EnhancedInputClickAction;                          // 0x0070(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UInputAction*                           EnhancedInputBackAction;                           // 0x0078(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CommonUIInputData">();
	}
	static class UCommonUIInputData* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonUIInputData>();
	}
};
static_assert(alignof(UCommonUIInputData) == 0x000008, "Wrong alignment on UCommonUIInputData");
static_assert(sizeof(UCommonUIInputData) == 0x000080, "Wrong size on UCommonUIInputData");
static_assert(offsetof(UCommonUIInputData, DefaultClickAction) == 0x000028, "Member 'UCommonUIInputData::DefaultClickAction' has a wrong offset!");
static_assert(offsetof(UCommonUIInputData, DefaultBackAction) == 0x000038, "Member 'UCommonUIInputData::DefaultBackAction' has a wrong offset!");
static_assert(offsetof(UCommonUIInputData, DefaultHoldData) == 0x000048, "Member 'UCommonUIInputData::DefaultHoldData' has a wrong offset!");
static_assert(offsetof(UCommonUIInputData, EnhancedInputClickAction) == 0x000070, "Member 'UCommonUIInputData::EnhancedInputClickAction' has a wrong offset!");
static_assert(offsetof(UCommonUIInputData, EnhancedInputBackAction) == 0x000078, "Member 'UCommonUIInputData::EnhancedInputBackAction' has a wrong offset!");

// Class CommonInput.CommonUIHoldData
// 0x0018 (0x0040 - 0x0028)
class UCommonUIHoldData final : public UObject
{
public:
	struct FInputHoldData                         KeyboardAndMouse;                                  // 0x0028(0x0008)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FInputHoldData                         Gamepad;                                           // 0x0030(0x0008)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FInputHoldData                         Touch;                                             // 0x0038(0x0008)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CommonUIHoldData">();
	}
	static class UCommonUIHoldData* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonUIHoldData>();
	}
};
static_assert(alignof(UCommonUIHoldData) == 0x000008, "Wrong alignment on UCommonUIHoldData");
static_assert(sizeof(UCommonUIHoldData) == 0x000040, "Wrong size on UCommonUIHoldData");
static_assert(offsetof(UCommonUIHoldData, KeyboardAndMouse) == 0x000028, "Member 'UCommonUIHoldData::KeyboardAndMouse' has a wrong offset!");
static_assert(offsetof(UCommonUIHoldData, Gamepad) == 0x000030, "Member 'UCommonUIHoldData::Gamepad' has a wrong offset!");
static_assert(offsetof(UCommonUIHoldData, Touch) == 0x000038, "Member 'UCommonUIHoldData::Touch' has a wrong offset!");

// Class CommonInput.CommonInputBaseControllerData
// 0x00D8 (0x0100 - 0x0028)
class UCommonInputBaseControllerData final : public UObject
{
public:
	ECommonInputType                              InputType;                                         // 0x0028(0x0001)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_18EB[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-69 ])
	class FName                                   GamepadName;                                       // 0x002C(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_18EC[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-69 ])
	class FText                                   GamepadDisplayName;                                // 0x0038(0x0018)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class FText                                   GamepadCategory;                                   // 0x0050(0x0018)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class FText                                   GamepadPlatformName;                               // 0x0068(0x0018)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FInputDeviceIdentifierPair>     GamepadHardwareIdMapping;                          // 0x0080(0x0010)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>              ControllerTexture;                                 // 0x0090(0x0028)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>              ControllerButtonMaskTexture;                       // 0x00B8(0x0028)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FCommonInputKeyBrushConfiguration> InputBrushDataMap;                                 // 0x00E0(0x0010)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FCommonInputKeySetBrushConfiguration> InputBrushKeySets;                                 // 0x00F0(0x0010)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)

public:
	static const TArray<class FName> GetRegisteredGamepads();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CommonInputBaseControllerData">();
	}
	static class UCommonInputBaseControllerData* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonInputBaseControllerData>();
	}
};
static_assert(alignof(UCommonInputBaseControllerData) == 0x000008, "Wrong alignment on UCommonInputBaseControllerData");
static_assert(sizeof(UCommonInputBaseControllerData) == 0x000100, "Wrong size on UCommonInputBaseControllerData");
static_assert(offsetof(UCommonInputBaseControllerData, InputType) == 0x000028, "Member 'UCommonInputBaseControllerData::InputType' has a wrong offset!");
static_assert(offsetof(UCommonInputBaseControllerData, GamepadName) == 0x00002C, "Member 'UCommonInputBaseControllerData::GamepadName' has a wrong offset!");
static_assert(offsetof(UCommonInputBaseControllerData, GamepadDisplayName) == 0x000038, "Member 'UCommonInputBaseControllerData::GamepadDisplayName' has a wrong offset!");
static_assert(offsetof(UCommonInputBaseControllerData, GamepadCategory) == 0x000050, "Member 'UCommonInputBaseControllerData::GamepadCategory' has a wrong offset!");
static_assert(offsetof(UCommonInputBaseControllerData, GamepadPlatformName) == 0x000068, "Member 'UCommonInputBaseControllerData::GamepadPlatformName' has a wrong offset!");
static_assert(offsetof(UCommonInputBaseControllerData, GamepadHardwareIdMapping) == 0x000080, "Member 'UCommonInputBaseControllerData::GamepadHardwareIdMapping' has a wrong offset!");
static_assert(offsetof(UCommonInputBaseControllerData, ControllerTexture) == 0x000090, "Member 'UCommonInputBaseControllerData::ControllerTexture' has a wrong offset!");
static_assert(offsetof(UCommonInputBaseControllerData, ControllerButtonMaskTexture) == 0x0000B8, "Member 'UCommonInputBaseControllerData::ControllerButtonMaskTexture' has a wrong offset!");
static_assert(offsetof(UCommonInputBaseControllerData, InputBrushDataMap) == 0x0000E0, "Member 'UCommonInputBaseControllerData::InputBrushDataMap' has a wrong offset!");
static_assert(offsetof(UCommonInputBaseControllerData, InputBrushKeySets) == 0x0000F0, "Member 'UCommonInputBaseControllerData::InputBrushKeySets' has a wrong offset!");

// Class CommonInput.CommonInputPlatformSettings
// 0x0030 (0x0070 - 0x0040)
class UCommonInputPlatformSettings final : public UPlatformSettings
{
public:
	ECommonInputType                              DefaultInputType;                                  // 0x0040(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          bSupportsMouseAndKeyboard;                         // 0x0041(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          bSupportsTouch;                                    // 0x0042(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          bSupportsGamepad;                                  // 0x0043(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                   DefaultGamepadName;                                // 0x0044(0x0008)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          bCanChangeGamepadType;                             // 0x004C(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_18ED[0x3];                                     // 0x004D(0x0003)(Fixing Size After Last Property [ Dumper-69 ])
	TArray<TSoftClassPtr<class UClass>>           ControllerData;                                    // 0x0050(0x0010)(Edit, ZeroConstructor, Config, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<TSubclassOf<class UCommonInputBaseControllerData>> ControllerDataClasses;                             // 0x0060(0x0010)(ZeroConstructor, Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CommonInputPlatformSettings">();
	}
	static class UCommonInputPlatformSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonInputPlatformSettings>();
	}
};
static_assert(alignof(UCommonInputPlatformSettings) == 0x000008, "Wrong alignment on UCommonInputPlatformSettings");
static_assert(sizeof(UCommonInputPlatformSettings) == 0x000070, "Wrong size on UCommonInputPlatformSettings");
static_assert(offsetof(UCommonInputPlatformSettings, DefaultInputType) == 0x000040, "Member 'UCommonInputPlatformSettings::DefaultInputType' has a wrong offset!");
static_assert(offsetof(UCommonInputPlatformSettings, bSupportsMouseAndKeyboard) == 0x000041, "Member 'UCommonInputPlatformSettings::bSupportsMouseAndKeyboard' has a wrong offset!");
static_assert(offsetof(UCommonInputPlatformSettings, bSupportsTouch) == 0x000042, "Member 'UCommonInputPlatformSettings::bSupportsTouch' has a wrong offset!");
static_assert(offsetof(UCommonInputPlatformSettings, bSupportsGamepad) == 0x000043, "Member 'UCommonInputPlatformSettings::bSupportsGamepad' has a wrong offset!");
static_assert(offsetof(UCommonInputPlatformSettings, DefaultGamepadName) == 0x000044, "Member 'UCommonInputPlatformSettings::DefaultGamepadName' has a wrong offset!");
static_assert(offsetof(UCommonInputPlatformSettings, bCanChangeGamepadType) == 0x00004C, "Member 'UCommonInputPlatformSettings::bCanChangeGamepadType' has a wrong offset!");
static_assert(offsetof(UCommonInputPlatformSettings, ControllerData) == 0x000050, "Member 'UCommonInputPlatformSettings::ControllerData' has a wrong offset!");
static_assert(offsetof(UCommonInputPlatformSettings, ControllerDataClasses) == 0x000060, "Member 'UCommonInputPlatformSettings::ControllerDataClasses' has a wrong offset!");

// Class CommonInput.CommonInputSettings
// 0x00E8 (0x0120 - 0x0038)
class UCommonInputSettings final : public UDeveloperSettings
{
public:
	TSoftClassPtr<class UClass>                   InputData;                                         // 0x0038(0x0028)(Edit, Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FPerPlatformSettings                   PlatformInput;                                     // 0x0060(0x0010)(Edit, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TMap<class FName, struct FCommonInputPlatformBaseData> CommonInputPlatformData;                           // 0x0070(0x0050)(Config, Deprecated, NativeAccessSpecifierPrivate)
	bool                                          bEnableInputMethodThrashingProtection;             // 0x00C0(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_18EE[0x3];                                     // 0x00C1(0x0003)(Fixing Size After Last Property [ Dumper-69 ])
	int32                                         InputMethodThrashingLimit;                         // 0x00C4(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	double                                        InputMethodThrashingWindowInSeconds;               // 0x00C8(0x0008)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	double                                        InputMethodThrashingCooldownInSeconds;             // 0x00D0(0x0008)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                          bAllowOutOfFocusDeviceInput;                       // 0x00D8(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                          bEnableDefaultInputConfig;                         // 0x00D9(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                          bEnableEnhancedInputSupport;                       // 0x00DA(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_18EF[0x5];                                     // 0x00DB(0x0005)(Fixing Size After Last Property [ Dumper-69 ])
	TSoftObjectPtr<class UCommonInputActionDomainTable> ActionDomainTable;                                 // 0x00E0(0x0028)(Edit, Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_18F0[0x8];                                     // 0x0108(0x0008)(Fixing Size After Last Property [ Dumper-69 ])
	TSubclassOf<class UCommonUIInputData>         InputDataClass;                                    // 0x0110(0x0008)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonInputActionDomainTable*          ActionDomainTablePtr;                              // 0x0118(0x0008)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	static bool IsEnhancedInputSupportEnabled();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CommonInputSettings">();
	}
	static class UCommonInputSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonInputSettings>();
	}
};
static_assert(alignof(UCommonInputSettings) == 0x000008, "Wrong alignment on UCommonInputSettings");
static_assert(sizeof(UCommonInputSettings) == 0x000120, "Wrong size on UCommonInputSettings");
static_assert(offsetof(UCommonInputSettings, InputData) == 0x000038, "Member 'UCommonInputSettings::InputData' has a wrong offset!");
static_assert(offsetof(UCommonInputSettings, PlatformInput) == 0x000060, "Member 'UCommonInputSettings::PlatformInput' has a wrong offset!");
static_assert(offsetof(UCommonInputSettings, CommonInputPlatformData) == 0x000070, "Member 'UCommonInputSettings::CommonInputPlatformData' has a wrong offset!");
static_assert(offsetof(UCommonInputSettings, bEnableInputMethodThrashingProtection) == 0x0000C0, "Member 'UCommonInputSettings::bEnableInputMethodThrashingProtection' has a wrong offset!");
static_assert(offsetof(UCommonInputSettings, InputMethodThrashingLimit) == 0x0000C4, "Member 'UCommonInputSettings::InputMethodThrashingLimit' has a wrong offset!");
static_assert(offsetof(UCommonInputSettings, InputMethodThrashingWindowInSeconds) == 0x0000C8, "Member 'UCommonInputSettings::InputMethodThrashingWindowInSeconds' has a wrong offset!");
static_assert(offsetof(UCommonInputSettings, InputMethodThrashingCooldownInSeconds) == 0x0000D0, "Member 'UCommonInputSettings::InputMethodThrashingCooldownInSeconds' has a wrong offset!");
static_assert(offsetof(UCommonInputSettings, bAllowOutOfFocusDeviceInput) == 0x0000D8, "Member 'UCommonInputSettings::bAllowOutOfFocusDeviceInput' has a wrong offset!");
static_assert(offsetof(UCommonInputSettings, bEnableDefaultInputConfig) == 0x0000D9, "Member 'UCommonInputSettings::bEnableDefaultInputConfig' has a wrong offset!");
static_assert(offsetof(UCommonInputSettings, bEnableEnhancedInputSupport) == 0x0000DA, "Member 'UCommonInputSettings::bEnableEnhancedInputSupport' has a wrong offset!");
static_assert(offsetof(UCommonInputSettings, ActionDomainTable) == 0x0000E0, "Member 'UCommonInputSettings::ActionDomainTable' has a wrong offset!");
static_assert(offsetof(UCommonInputSettings, InputDataClass) == 0x000110, "Member 'UCommonInputSettings::InputDataClass' has a wrong offset!");
static_assert(offsetof(UCommonInputSettings, ActionDomainTablePtr) == 0x000118, "Member 'UCommonInputSettings::ActionDomainTablePtr' has a wrong offset!");

// Class CommonInput.CommonInputSubsystem
// 0x00E8 (0x0118 - 0x0030)
class UCommonInputSubsystem final : public ULocalPlayerSubsystem
{
public:
	uint8                                         Pad_18F1[0x38];                                    // 0x0030(0x0038)(Fixing Size After Last Property [ Dumper-69 ])
	FMulticastInlineDelegateProperty_             OnInputMethodChanged;                              // 0x0068(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	int32                                         NumberOfInputMethodChangesRecently;                // 0x0078(0x0004)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_18F2[0x4];                                     // 0x007C(0x0004)(Fixing Size After Last Property [ Dumper-69 ])
	double                                        LastInputMethodChangeTime;                         // 0x0080(0x0008)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	double                                        LastTimeInputMethodThrashingBegan;                 // 0x0088(0x0008)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	ECommonInputType                              LastInputType;                                     // 0x0090(0x0001)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	ECommonInputType                              CurrentInputType;                                  // 0x0091(0x0001)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_18F3[0x2];                                     // 0x0092(0x0002)(Fixing Size After Last Property [ Dumper-69 ])
	class FName                                   GamepadInputType;                                  // 0x0094(0x0008)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_18F4[0x4];                                     // 0x009C(0x0004)(Fixing Size After Last Property [ Dumper-69 ])
	TMap<class FName, ECommonInputType>           CurrentInputLocks;                                 // 0x00A0(0x0050)(Transient, NativeAccessSpecifierPrivate)
	uint8                                         Pad_18F5[0x8];                                     // 0x00F0(0x0008)(Fixing Size After Last Property [ Dumper-69 ])
	class UCommonInputActionDomainTable*          ActionDomainTable;                                 // 0x00F8(0x0008)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                          bIsGamepadSimulatedClick;                          // 0x0100(0x0001)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_18F6[0x17];                                    // 0x0101(0x0017)(Fixing Struct Size After Last Property [ Dumper-69 ])

public:
	void BroadcastInputMethodChanged();
	void SetCurrentInputType(ECommonInputType NewInputType);
	void SetGamepadInputType(const class FName InGamepadInputType);

	const class FName GetCurrentGamepadName() const;
	ECommonInputType GetCurrentInputType() const;
	ECommonInputType GetDefaultInputType() const;
	bool IsInputMethodActive(ECommonInputType InputMethod) const;
	bool IsUsingPointerInput() const;
	bool ShouldShowInputKeys() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CommonInputSubsystem">();
	}
	static class UCommonInputSubsystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonInputSubsystem>();
	}
};
static_assert(alignof(UCommonInputSubsystem) == 0x000008, "Wrong alignment on UCommonInputSubsystem");
static_assert(sizeof(UCommonInputSubsystem) == 0x000118, "Wrong size on UCommonInputSubsystem");
static_assert(offsetof(UCommonInputSubsystem, OnInputMethodChanged) == 0x000068, "Member 'UCommonInputSubsystem::OnInputMethodChanged' has a wrong offset!");
static_assert(offsetof(UCommonInputSubsystem, NumberOfInputMethodChangesRecently) == 0x000078, "Member 'UCommonInputSubsystem::NumberOfInputMethodChangesRecently' has a wrong offset!");
static_assert(offsetof(UCommonInputSubsystem, LastInputMethodChangeTime) == 0x000080, "Member 'UCommonInputSubsystem::LastInputMethodChangeTime' has a wrong offset!");
static_assert(offsetof(UCommonInputSubsystem, LastTimeInputMethodThrashingBegan) == 0x000088, "Member 'UCommonInputSubsystem::LastTimeInputMethodThrashingBegan' has a wrong offset!");
static_assert(offsetof(UCommonInputSubsystem, LastInputType) == 0x000090, "Member 'UCommonInputSubsystem::LastInputType' has a wrong offset!");
static_assert(offsetof(UCommonInputSubsystem, CurrentInputType) == 0x000091, "Member 'UCommonInputSubsystem::CurrentInputType' has a wrong offset!");
static_assert(offsetof(UCommonInputSubsystem, GamepadInputType) == 0x000094, "Member 'UCommonInputSubsystem::GamepadInputType' has a wrong offset!");
static_assert(offsetof(UCommonInputSubsystem, CurrentInputLocks) == 0x0000A0, "Member 'UCommonInputSubsystem::CurrentInputLocks' has a wrong offset!");
static_assert(offsetof(UCommonInputSubsystem, ActionDomainTable) == 0x0000F8, "Member 'UCommonInputSubsystem::ActionDomainTable' has a wrong offset!");
static_assert(offsetof(UCommonInputSubsystem, bIsGamepadSimulatedClick) == 0x000100, "Member 'UCommonInputSubsystem::bIsGamepadSimulatedClick' has a wrong offset!");

}

