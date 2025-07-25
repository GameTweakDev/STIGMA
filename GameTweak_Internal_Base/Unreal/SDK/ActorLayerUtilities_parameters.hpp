#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: ActorLayerUtilities

#include "Basic.hpp"

#include "ActorLayerUtilities_structs.hpp"


namespace SDK::Params
{

// Function ActorLayerUtilities.LayersBlueprintLibrary.AddActorToLayer
// 0x0010 (0x0010 - 0x0000)
struct LayersBlueprintLibrary_AddActorToLayer final
{
public:
	class AActor*                                 InActor;                                           // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FActorLayer                            Layer;                                             // 0x0008(0x0008)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(LayersBlueprintLibrary_AddActorToLayer) == 0x000008, "Wrong alignment on LayersBlueprintLibrary_AddActorToLayer");
static_assert(sizeof(LayersBlueprintLibrary_AddActorToLayer) == 0x000010, "Wrong size on LayersBlueprintLibrary_AddActorToLayer");
static_assert(offsetof(LayersBlueprintLibrary_AddActorToLayer, InActor) == 0x000000, "Member 'LayersBlueprintLibrary_AddActorToLayer::InActor' has a wrong offset!");
static_assert(offsetof(LayersBlueprintLibrary_AddActorToLayer, Layer) == 0x000008, "Member 'LayersBlueprintLibrary_AddActorToLayer::Layer' has a wrong offset!");

// Function ActorLayerUtilities.LayersBlueprintLibrary.GetActors
// 0x0020 (0x0020 - 0x0000)
struct LayersBlueprintLibrary_GetActors final
{
public:
	class UObject*                                WorldContextObject;                                // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FActorLayer                            ActorLayer;                                        // 0x0008(0x0008)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	TArray<class AActor*>                         ReturnValue;                                       // 0x0010(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(LayersBlueprintLibrary_GetActors) == 0x000008, "Wrong alignment on LayersBlueprintLibrary_GetActors");
static_assert(sizeof(LayersBlueprintLibrary_GetActors) == 0x000020, "Wrong size on LayersBlueprintLibrary_GetActors");
static_assert(offsetof(LayersBlueprintLibrary_GetActors, WorldContextObject) == 0x000000, "Member 'LayersBlueprintLibrary_GetActors::WorldContextObject' has a wrong offset!");
static_assert(offsetof(LayersBlueprintLibrary_GetActors, ActorLayer) == 0x000008, "Member 'LayersBlueprintLibrary_GetActors::ActorLayer' has a wrong offset!");
static_assert(offsetof(LayersBlueprintLibrary_GetActors, ReturnValue) == 0x000010, "Member 'LayersBlueprintLibrary_GetActors::ReturnValue' has a wrong offset!");

// Function ActorLayerUtilities.LayersBlueprintLibrary.RemoveActorFromLayer
// 0x0010 (0x0010 - 0x0000)
struct LayersBlueprintLibrary_RemoveActorFromLayer final
{
public:
	class AActor*                                 InActor;                                           // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FActorLayer                            Layer;                                             // 0x0008(0x0008)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(LayersBlueprintLibrary_RemoveActorFromLayer) == 0x000008, "Wrong alignment on LayersBlueprintLibrary_RemoveActorFromLayer");
static_assert(sizeof(LayersBlueprintLibrary_RemoveActorFromLayer) == 0x000010, "Wrong size on LayersBlueprintLibrary_RemoveActorFromLayer");
static_assert(offsetof(LayersBlueprintLibrary_RemoveActorFromLayer, InActor) == 0x000000, "Member 'LayersBlueprintLibrary_RemoveActorFromLayer::InActor' has a wrong offset!");
static_assert(offsetof(LayersBlueprintLibrary_RemoveActorFromLayer, Layer) == 0x000008, "Member 'LayersBlueprintLibrary_RemoveActorFromLayer::Layer' has a wrong offset!");

}

