#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: BPMotionCore

#include "Basic.hpp"


namespace SDK::Params
{

// Function BPMotionCore.BPMotionMovementComponent.SetGravityScaleInRootMotion
// 0x0004 (0x0004 - 0x0000)
struct BPMotionMovementComponent_SetGravityScaleInRootMotion final
{
public:
	float                                         _value;                                            // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(BPMotionMovementComponent_SetGravityScaleInRootMotion) == 0x000004, "Wrong alignment on BPMotionMovementComponent_SetGravityScaleInRootMotion");
static_assert(sizeof(BPMotionMovementComponent_SetGravityScaleInRootMotion) == 0x000004, "Wrong size on BPMotionMovementComponent_SetGravityScaleInRootMotion");
static_assert(offsetof(BPMotionMovementComponent_SetGravityScaleInRootMotion, _value) == 0x000000, "Member 'BPMotionMovementComponent_SetGravityScaleInRootMotion::_value' has a wrong offset!");

// Function BPMotionCore.BPMotionMovementComponent.GetCorrectionInfo
// 0x0010 (0x0010 - 0x0000)
struct BPMotionMovementComponent_GetCorrectionInfo final
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(BPMotionMovementComponent_GetCorrectionInfo) == 0x000008, "Wrong alignment on BPMotionMovementComponent_GetCorrectionInfo");
static_assert(sizeof(BPMotionMovementComponent_GetCorrectionInfo) == 0x000010, "Wrong size on BPMotionMovementComponent_GetCorrectionInfo");
static_assert(offsetof(BPMotionMovementComponent_GetCorrectionInfo, ReturnValue) == 0x000000, "Member 'BPMotionMovementComponent_GetCorrectionInfo::ReturnValue' has a wrong offset!");

// Function BPMotionCore.BPMotionMovementComponent.GetPendingMoveInfo
// 0x0010 (0x0010 - 0x0000)
struct BPMotionMovementComponent_GetPendingMoveInfo final
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(BPMotionMovementComponent_GetPendingMoveInfo) == 0x000008, "Wrong alignment on BPMotionMovementComponent_GetPendingMoveInfo");
static_assert(sizeof(BPMotionMovementComponent_GetPendingMoveInfo) == 0x000010, "Wrong size on BPMotionMovementComponent_GetPendingMoveInfo");
static_assert(offsetof(BPMotionMovementComponent_GetPendingMoveInfo, ReturnValue) == 0x000000, "Member 'BPMotionMovementComponent_GetPendingMoveInfo::ReturnValue' has a wrong offset!");

// Function BPMotionCore.BPMotionMovementComponent.GetRootMotionInfo
// 0x0010 (0x0010 - 0x0000)
struct BPMotionMovementComponent_GetRootMotionInfo final
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(BPMotionMovementComponent_GetRootMotionInfo) == 0x000008, "Wrong alignment on BPMotionMovementComponent_GetRootMotionInfo");
static_assert(sizeof(BPMotionMovementComponent_GetRootMotionInfo) == 0x000010, "Wrong size on BPMotionMovementComponent_GetRootMotionInfo");
static_assert(offsetof(BPMotionMovementComponent_GetRootMotionInfo, ReturnValue) == 0x000000, "Member 'BPMotionMovementComponent_GetRootMotionInfo::ReturnValue' has a wrong offset!");

// Function BPMotionCore.BPMotionMovementComponent.GetSmoothingInfo
// 0x0010 (0x0010 - 0x0000)
struct BPMotionMovementComponent_GetSmoothingInfo final
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(BPMotionMovementComponent_GetSmoothingInfo) == 0x000008, "Wrong alignment on BPMotionMovementComponent_GetSmoothingInfo");
static_assert(sizeof(BPMotionMovementComponent_GetSmoothingInfo) == 0x000010, "Wrong size on BPMotionMovementComponent_GetSmoothingInfo");
static_assert(offsetof(BPMotionMovementComponent_GetSmoothingInfo, ReturnValue) == 0x000000, "Member 'BPMotionMovementComponent_GetSmoothingInfo::ReturnValue' has a wrong offset!");

// Function BPMotionCore.MotionMatching.SetSkeleton
// 0x0008 (0x0008 - 0x0000)
struct MotionMatching_SetSkeleton final
{
public:
	class USkeleton*                              _skel;                                             // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MotionMatching_SetSkeleton) == 0x000008, "Wrong alignment on MotionMatching_SetSkeleton");
static_assert(sizeof(MotionMatching_SetSkeleton) == 0x000008, "Wrong size on MotionMatching_SetSkeleton");
static_assert(offsetof(MotionMatching_SetSkeleton, _skel) == 0x000000, "Member 'MotionMatching_SetSkeleton::_skel' has a wrong offset!");

// Function BPMotionCore.MotionMatching.GetIdles
// 0x0010 (0x0010 - 0x0000)
struct MotionMatching_GetIdles final
{
public:
	TArray<class UAnimSequence*>                  ReturnValue;                                       // 0x0000(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(MotionMatching_GetIdles) == 0x000008, "Wrong alignment on MotionMatching_GetIdles");
static_assert(sizeof(MotionMatching_GetIdles) == 0x000010, "Wrong size on MotionMatching_GetIdles");
static_assert(offsetof(MotionMatching_GetIdles, ReturnValue) == 0x000000, "Member 'MotionMatching_GetIdles::ReturnValue' has a wrong offset!");

// Function BPMotionCore.MotionMatching.GetSkeleton
// 0x0008 (0x0008 - 0x0000)
struct MotionMatching_GetSkeleton final
{
public:
	class USkeleton*                              ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MotionMatching_GetSkeleton) == 0x000008, "Wrong alignment on MotionMatching_GetSkeleton");
static_assert(sizeof(MotionMatching_GetSkeleton) == 0x000008, "Wrong size on MotionMatching_GetSkeleton");
static_assert(offsetof(MotionMatching_GetSkeleton, ReturnValue) == 0x000000, "Member 'MotionMatching_GetSkeleton::ReturnValue' has a wrong offset!");

// Function BPMotionCore.MotionMatching.GetSources
// 0x0010 (0x0010 - 0x0000)
struct MotionMatching_GetSources final
{
public:
	TArray<class UAnimSource*>                    ReturnValue;                                       // 0x0000(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(MotionMatching_GetSources) == 0x000008, "Wrong alignment on MotionMatching_GetSources");
static_assert(sizeof(MotionMatching_GetSources) == 0x000010, "Wrong size on MotionMatching_GetSources");
static_assert(offsetof(MotionMatching_GetSources, ReturnValue) == 0x000000, "Member 'MotionMatching_GetSources::ReturnValue' has a wrong offset!");

}

