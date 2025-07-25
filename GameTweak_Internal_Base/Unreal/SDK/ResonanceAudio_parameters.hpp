#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: ResonanceAudio

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "ResonanceAudio_structs.hpp"


namespace SDK::Params
{

// Function ResonanceAudio.ResonanceAudioBlueprintFunctionLibrary.GetGlobalReverbPreset
// 0x0008 (0x0008 - 0x0000)
struct ResonanceAudioBlueprintFunctionLibrary_GetGlobalReverbPreset final
{
public:
	class UResonanceAudioReverbPluginPreset*      ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ResonanceAudioBlueprintFunctionLibrary_GetGlobalReverbPreset) == 0x000008, "Wrong alignment on ResonanceAudioBlueprintFunctionLibrary_GetGlobalReverbPreset");
static_assert(sizeof(ResonanceAudioBlueprintFunctionLibrary_GetGlobalReverbPreset) == 0x000008, "Wrong size on ResonanceAudioBlueprintFunctionLibrary_GetGlobalReverbPreset");
static_assert(offsetof(ResonanceAudioBlueprintFunctionLibrary_GetGlobalReverbPreset, ReturnValue) == 0x000000, "Member 'ResonanceAudioBlueprintFunctionLibrary_GetGlobalReverbPreset::ReturnValue' has a wrong offset!");

// Function ResonanceAudio.ResonanceAudioBlueprintFunctionLibrary.SetGlobalReverbPreset
// 0x0008 (0x0008 - 0x0000)
struct ResonanceAudioBlueprintFunctionLibrary_SetGlobalReverbPreset final
{
public:
	class UResonanceAudioReverbPluginPreset*      InPreset;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ResonanceAudioBlueprintFunctionLibrary_SetGlobalReverbPreset) == 0x000008, "Wrong alignment on ResonanceAudioBlueprintFunctionLibrary_SetGlobalReverbPreset");
static_assert(sizeof(ResonanceAudioBlueprintFunctionLibrary_SetGlobalReverbPreset) == 0x000008, "Wrong size on ResonanceAudioBlueprintFunctionLibrary_SetGlobalReverbPreset");
static_assert(offsetof(ResonanceAudioBlueprintFunctionLibrary_SetGlobalReverbPreset, InPreset) == 0x000000, "Member 'ResonanceAudioBlueprintFunctionLibrary_SetGlobalReverbPreset::InPreset' has a wrong offset!");

// Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetEnableRoomEffects
// 0x0001 (0x0001 - 0x0000)
struct ResonanceAudioReverbPluginPreset_SetEnableRoomEffects final
{
public:
	bool                                          bInEnableRoomEffects;                              // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ResonanceAudioReverbPluginPreset_SetEnableRoomEffects) == 0x000001, "Wrong alignment on ResonanceAudioReverbPluginPreset_SetEnableRoomEffects");
static_assert(sizeof(ResonanceAudioReverbPluginPreset_SetEnableRoomEffects) == 0x000001, "Wrong size on ResonanceAudioReverbPluginPreset_SetEnableRoomEffects");
static_assert(offsetof(ResonanceAudioReverbPluginPreset_SetEnableRoomEffects, bInEnableRoomEffects) == 0x000000, "Member 'ResonanceAudioReverbPluginPreset_SetEnableRoomEffects::bInEnableRoomEffects' has a wrong offset!");

// Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetReflectionScalar
// 0x0004 (0x0004 - 0x0000)
struct ResonanceAudioReverbPluginPreset_SetReflectionScalar final
{
public:
	float                                         InReflectionScalar;                                // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ResonanceAudioReverbPluginPreset_SetReflectionScalar) == 0x000004, "Wrong alignment on ResonanceAudioReverbPluginPreset_SetReflectionScalar");
static_assert(sizeof(ResonanceAudioReverbPluginPreset_SetReflectionScalar) == 0x000004, "Wrong size on ResonanceAudioReverbPluginPreset_SetReflectionScalar");
static_assert(offsetof(ResonanceAudioReverbPluginPreset_SetReflectionScalar, InReflectionScalar) == 0x000000, "Member 'ResonanceAudioReverbPluginPreset_SetReflectionScalar::InReflectionScalar' has a wrong offset!");

// Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetReverbBrightness
// 0x0004 (0x0004 - 0x0000)
struct ResonanceAudioReverbPluginPreset_SetReverbBrightness final
{
public:
	float                                         InReverbBrightness;                                // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ResonanceAudioReverbPluginPreset_SetReverbBrightness) == 0x000004, "Wrong alignment on ResonanceAudioReverbPluginPreset_SetReverbBrightness");
static_assert(sizeof(ResonanceAudioReverbPluginPreset_SetReverbBrightness) == 0x000004, "Wrong size on ResonanceAudioReverbPluginPreset_SetReverbBrightness");
static_assert(offsetof(ResonanceAudioReverbPluginPreset_SetReverbBrightness, InReverbBrightness) == 0x000000, "Member 'ResonanceAudioReverbPluginPreset_SetReverbBrightness::InReverbBrightness' has a wrong offset!");

// Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetReverbGain
// 0x0004 (0x0004 - 0x0000)
struct ResonanceAudioReverbPluginPreset_SetReverbGain final
{
public:
	float                                         InReverbGain;                                      // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ResonanceAudioReverbPluginPreset_SetReverbGain) == 0x000004, "Wrong alignment on ResonanceAudioReverbPluginPreset_SetReverbGain");
static_assert(sizeof(ResonanceAudioReverbPluginPreset_SetReverbGain) == 0x000004, "Wrong size on ResonanceAudioReverbPluginPreset_SetReverbGain");
static_assert(offsetof(ResonanceAudioReverbPluginPreset_SetReverbGain, InReverbGain) == 0x000000, "Member 'ResonanceAudioReverbPluginPreset_SetReverbGain::InReverbGain' has a wrong offset!");

// Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetReverbTimeModifier
// 0x0004 (0x0004 - 0x0000)
struct ResonanceAudioReverbPluginPreset_SetReverbTimeModifier final
{
public:
	float                                         InReverbTimeModifier;                              // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ResonanceAudioReverbPluginPreset_SetReverbTimeModifier) == 0x000004, "Wrong alignment on ResonanceAudioReverbPluginPreset_SetReverbTimeModifier");
static_assert(sizeof(ResonanceAudioReverbPluginPreset_SetReverbTimeModifier) == 0x000004, "Wrong size on ResonanceAudioReverbPluginPreset_SetReverbTimeModifier");
static_assert(offsetof(ResonanceAudioReverbPluginPreset_SetReverbTimeModifier, InReverbTimeModifier) == 0x000000, "Member 'ResonanceAudioReverbPluginPreset_SetReverbTimeModifier::InReverbTimeModifier' has a wrong offset!");

// Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetRoomDimensions
// 0x0018 (0x0018 - 0x0000)
struct ResonanceAudioReverbPluginPreset_SetRoomDimensions final
{
public:
	struct FVector                                InDimensions;                                      // 0x0000(0x0018)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ResonanceAudioReverbPluginPreset_SetRoomDimensions) == 0x000008, "Wrong alignment on ResonanceAudioReverbPluginPreset_SetRoomDimensions");
static_assert(sizeof(ResonanceAudioReverbPluginPreset_SetRoomDimensions) == 0x000018, "Wrong size on ResonanceAudioReverbPluginPreset_SetRoomDimensions");
static_assert(offsetof(ResonanceAudioReverbPluginPreset_SetRoomDimensions, InDimensions) == 0x000000, "Member 'ResonanceAudioReverbPluginPreset_SetRoomDimensions::InDimensions' has a wrong offset!");

// Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetRoomMaterials
// 0x0010 (0x0010 - 0x0000)
struct ResonanceAudioReverbPluginPreset_SetRoomMaterials final
{
public:
	TArray<ERaMaterialName>                       InMaterials;                                       // 0x0000(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(ResonanceAudioReverbPluginPreset_SetRoomMaterials) == 0x000008, "Wrong alignment on ResonanceAudioReverbPluginPreset_SetRoomMaterials");
static_assert(sizeof(ResonanceAudioReverbPluginPreset_SetRoomMaterials) == 0x000010, "Wrong size on ResonanceAudioReverbPluginPreset_SetRoomMaterials");
static_assert(offsetof(ResonanceAudioReverbPluginPreset_SetRoomMaterials, InMaterials) == 0x000000, "Member 'ResonanceAudioReverbPluginPreset_SetRoomMaterials::InMaterials' has a wrong offset!");

// Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetRoomPosition
// 0x0018 (0x0018 - 0x0000)
struct ResonanceAudioReverbPluginPreset_SetRoomPosition final
{
public:
	struct FVector                                InPosition;                                        // 0x0000(0x0018)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ResonanceAudioReverbPluginPreset_SetRoomPosition) == 0x000008, "Wrong alignment on ResonanceAudioReverbPluginPreset_SetRoomPosition");
static_assert(sizeof(ResonanceAudioReverbPluginPreset_SetRoomPosition) == 0x000018, "Wrong size on ResonanceAudioReverbPluginPreset_SetRoomPosition");
static_assert(offsetof(ResonanceAudioReverbPluginPreset_SetRoomPosition, InPosition) == 0x000000, "Member 'ResonanceAudioReverbPluginPreset_SetRoomPosition::InPosition' has a wrong offset!");

// Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetRoomRotation
// 0x0020 (0x0020 - 0x0000)
struct ResonanceAudioReverbPluginPreset_SetRoomRotation final
{
public:
	struct FQuat                                  InRotation;                                        // 0x0000(0x0020)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ResonanceAudioReverbPluginPreset_SetRoomRotation) == 0x000010, "Wrong alignment on ResonanceAudioReverbPluginPreset_SetRoomRotation");
static_assert(sizeof(ResonanceAudioReverbPluginPreset_SetRoomRotation) == 0x000020, "Wrong size on ResonanceAudioReverbPluginPreset_SetRoomRotation");
static_assert(offsetof(ResonanceAudioReverbPluginPreset_SetRoomRotation, InRotation) == 0x000000, "Member 'ResonanceAudioReverbPluginPreset_SetRoomRotation::InRotation' has a wrong offset!");

// Function ResonanceAudio.ResonanceAudioSpatializationSourceSettings.SetSoundSourceDirectivity
// 0x0008 (0x0008 - 0x0000)
struct ResonanceAudioSpatializationSourceSettings_SetSoundSourceDirectivity final
{
public:
	float                                         InPattern;                                         // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         InSharpness;                                       // 0x0004(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ResonanceAudioSpatializationSourceSettings_SetSoundSourceDirectivity) == 0x000004, "Wrong alignment on ResonanceAudioSpatializationSourceSettings_SetSoundSourceDirectivity");
static_assert(sizeof(ResonanceAudioSpatializationSourceSettings_SetSoundSourceDirectivity) == 0x000008, "Wrong size on ResonanceAudioSpatializationSourceSettings_SetSoundSourceDirectivity");
static_assert(offsetof(ResonanceAudioSpatializationSourceSettings_SetSoundSourceDirectivity, InPattern) == 0x000000, "Member 'ResonanceAudioSpatializationSourceSettings_SetSoundSourceDirectivity::InPattern' has a wrong offset!");
static_assert(offsetof(ResonanceAudioSpatializationSourceSettings_SetSoundSourceDirectivity, InSharpness) == 0x000004, "Member 'ResonanceAudioSpatializationSourceSettings_SetSoundSourceDirectivity::InSharpness' has a wrong offset!");

// Function ResonanceAudio.ResonanceAudioSpatializationSourceSettings.SetSoundSourceSpread
// 0x0004 (0x0004 - 0x0000)
struct ResonanceAudioSpatializationSourceSettings_SetSoundSourceSpread final
{
public:
	float                                         InSpread;                                          // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ResonanceAudioSpatializationSourceSettings_SetSoundSourceSpread) == 0x000004, "Wrong alignment on ResonanceAudioSpatializationSourceSettings_SetSoundSourceSpread");
static_assert(sizeof(ResonanceAudioSpatializationSourceSettings_SetSoundSourceSpread) == 0x000004, "Wrong size on ResonanceAudioSpatializationSourceSettings_SetSoundSourceSpread");
static_assert(offsetof(ResonanceAudioSpatializationSourceSettings_SetSoundSourceSpread, InSpread) == 0x000000, "Member 'ResonanceAudioSpatializationSourceSettings_SetSoundSourceSpread::InSpread' has a wrong offset!");

}

