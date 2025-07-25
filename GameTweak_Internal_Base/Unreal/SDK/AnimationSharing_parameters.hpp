#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: AnimationSharing

#include "Basic.hpp"


namespace SDK::Params
{

// Function AnimationSharing.AnimationSharingStateProcessor.GetAnimationStateEnum
// 0x0008 (0x0008 - 0x0000)
struct AnimationSharingStateProcessor_GetAnimationStateEnum final
{
public:
	class UEnum*                                  ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AnimationSharingStateProcessor_GetAnimationStateEnum) == 0x000008, "Wrong alignment on AnimationSharingStateProcessor_GetAnimationStateEnum");
static_assert(sizeof(AnimationSharingStateProcessor_GetAnimationStateEnum) == 0x000008, "Wrong size on AnimationSharingStateProcessor_GetAnimationStateEnum");
static_assert(offsetof(AnimationSharingStateProcessor_GetAnimationStateEnum, ReturnValue) == 0x000000, "Member 'AnimationSharingStateProcessor_GetAnimationStateEnum::ReturnValue' has a wrong offset!");

// Function AnimationSharing.AnimationSharingStateProcessor.ProcessActorState
// 0x0018 (0x0018 - 0x0000)
struct AnimationSharingStateProcessor_ProcessActorState final
{
public:
	int32                                         OutState;                                          // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2EB3[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-69 ])
	class AActor*                                 InActor;                                           // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         CurrentState;                                      // 0x0010(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         OnDemandState;                                     // 0x0011(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bShouldProcess;                                    // 0x0012(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2EB4[0x5];                                     // 0x0013(0x0005)(Fixing Struct Size After Last Property [ Dumper-69 ])
};
static_assert(alignof(AnimationSharingStateProcessor_ProcessActorState) == 0x000008, "Wrong alignment on AnimationSharingStateProcessor_ProcessActorState");
static_assert(sizeof(AnimationSharingStateProcessor_ProcessActorState) == 0x000018, "Wrong size on AnimationSharingStateProcessor_ProcessActorState");
static_assert(offsetof(AnimationSharingStateProcessor_ProcessActorState, OutState) == 0x000000, "Member 'AnimationSharingStateProcessor_ProcessActorState::OutState' has a wrong offset!");
static_assert(offsetof(AnimationSharingStateProcessor_ProcessActorState, InActor) == 0x000008, "Member 'AnimationSharingStateProcessor_ProcessActorState::InActor' has a wrong offset!");
static_assert(offsetof(AnimationSharingStateProcessor_ProcessActorState, CurrentState) == 0x000010, "Member 'AnimationSharingStateProcessor_ProcessActorState::CurrentState' has a wrong offset!");
static_assert(offsetof(AnimationSharingStateProcessor_ProcessActorState, OnDemandState) == 0x000011, "Member 'AnimationSharingStateProcessor_ProcessActorState::OnDemandState' has a wrong offset!");
static_assert(offsetof(AnimationSharingStateProcessor_ProcessActorState, bShouldProcess) == 0x000012, "Member 'AnimationSharingStateProcessor_ProcessActorState::bShouldProcess' has a wrong offset!");

// Function AnimationSharing.AnimSharingStateInstance.GetInstancedActors
// 0x0010 (0x0010 - 0x0000)
struct AnimSharingStateInstance_GetInstancedActors final
{
public:
	TArray<class AActor*>                         Actors;                                            // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(AnimSharingStateInstance_GetInstancedActors) == 0x000008, "Wrong alignment on AnimSharingStateInstance_GetInstancedActors");
static_assert(sizeof(AnimSharingStateInstance_GetInstancedActors) == 0x000010, "Wrong size on AnimSharingStateInstance_GetInstancedActors");
static_assert(offsetof(AnimSharingStateInstance_GetInstancedActors, Actors) == 0x000000, "Member 'AnimSharingStateInstance_GetInstancedActors::Actors' has a wrong offset!");

// Function AnimationSharing.AnimationSharingManager.AnimationSharingEnabled
// 0x0001 (0x0001 - 0x0000)
struct AnimationSharingManager_AnimationSharingEnabled final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AnimationSharingManager_AnimationSharingEnabled) == 0x000001, "Wrong alignment on AnimationSharingManager_AnimationSharingEnabled");
static_assert(sizeof(AnimationSharingManager_AnimationSharingEnabled) == 0x000001, "Wrong size on AnimationSharingManager_AnimationSharingEnabled");
static_assert(offsetof(AnimationSharingManager_AnimationSharingEnabled, ReturnValue) == 0x000000, "Member 'AnimationSharingManager_AnimationSharingEnabled::ReturnValue' has a wrong offset!");

// Function AnimationSharing.AnimationSharingManager.CreateAnimationSharingManager
// 0x0018 (0x0018 - 0x0000)
struct AnimationSharingManager_CreateAnimationSharingManager final
{
public:
	class UObject*                                WorldContextObject;                                // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	const class UAnimationSharingSetup*           Setup;                                             // 0x0008(0x0008)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2EBE[0x7];                                     // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-69 ])
};
static_assert(alignof(AnimationSharingManager_CreateAnimationSharingManager) == 0x000008, "Wrong alignment on AnimationSharingManager_CreateAnimationSharingManager");
static_assert(sizeof(AnimationSharingManager_CreateAnimationSharingManager) == 0x000018, "Wrong size on AnimationSharingManager_CreateAnimationSharingManager");
static_assert(offsetof(AnimationSharingManager_CreateAnimationSharingManager, WorldContextObject) == 0x000000, "Member 'AnimationSharingManager_CreateAnimationSharingManager::WorldContextObject' has a wrong offset!");
static_assert(offsetof(AnimationSharingManager_CreateAnimationSharingManager, Setup) == 0x000008, "Member 'AnimationSharingManager_CreateAnimationSharingManager::Setup' has a wrong offset!");
static_assert(offsetof(AnimationSharingManager_CreateAnimationSharingManager, ReturnValue) == 0x000010, "Member 'AnimationSharingManager_CreateAnimationSharingManager::ReturnValue' has a wrong offset!");

// Function AnimationSharing.AnimationSharingManager.GetAnimationSharingManager
// 0x0010 (0x0010 - 0x0000)
struct AnimationSharingManager_GetAnimationSharingManager final
{
public:
	class UObject*                                WorldContextObject;                                // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimationSharingManager*               ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AnimationSharingManager_GetAnimationSharingManager) == 0x000008, "Wrong alignment on AnimationSharingManager_GetAnimationSharingManager");
static_assert(sizeof(AnimationSharingManager_GetAnimationSharingManager) == 0x000010, "Wrong size on AnimationSharingManager_GetAnimationSharingManager");
static_assert(offsetof(AnimationSharingManager_GetAnimationSharingManager, WorldContextObject) == 0x000000, "Member 'AnimationSharingManager_GetAnimationSharingManager::WorldContextObject' has a wrong offset!");
static_assert(offsetof(AnimationSharingManager_GetAnimationSharingManager, ReturnValue) == 0x000008, "Member 'AnimationSharingManager_GetAnimationSharingManager::ReturnValue' has a wrong offset!");

// Function AnimationSharing.AnimationSharingManager.RegisterActorWithSkeletonBP
// 0x0010 (0x0010 - 0x0000)
struct AnimationSharingManager_RegisterActorWithSkeletonBP final
{
public:
	class AActor*                                 InActor;                                           // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	const class USkeleton*                        SharingSkeleton;                                   // 0x0008(0x0008)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AnimationSharingManager_RegisterActorWithSkeletonBP) == 0x000008, "Wrong alignment on AnimationSharingManager_RegisterActorWithSkeletonBP");
static_assert(sizeof(AnimationSharingManager_RegisterActorWithSkeletonBP) == 0x000010, "Wrong size on AnimationSharingManager_RegisterActorWithSkeletonBP");
static_assert(offsetof(AnimationSharingManager_RegisterActorWithSkeletonBP, InActor) == 0x000000, "Member 'AnimationSharingManager_RegisterActorWithSkeletonBP::InActor' has a wrong offset!");
static_assert(offsetof(AnimationSharingManager_RegisterActorWithSkeletonBP, SharingSkeleton) == 0x000008, "Member 'AnimationSharingManager_RegisterActorWithSkeletonBP::SharingSkeleton' has a wrong offset!");

}

