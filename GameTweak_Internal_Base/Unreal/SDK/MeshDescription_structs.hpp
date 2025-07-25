#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: MeshDescription

#include "Basic.hpp"


namespace SDK
{

// Enum MeshDescription.EComputeNTBsOptions
// NumValues: 0x0005
enum class EComputeNTBsOptions : uint8
{
	None                                     = 0,
	Normals                                  = 1,
	Tangents                                 = 2,
	WeightedNTBs                             = 4,
	EComputeNTBsOptions_MAX                  = 5,
};

// ScriptStruct MeshDescription.ElementID
// 0x0004 (0x0004 - 0x0000)
struct FElementID
{
public:
	int32                                         IDValue;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};
static_assert(alignof(FElementID) == 0x000004, "Wrong alignment on FElementID");
static_assert(sizeof(FElementID) == 0x000004, "Wrong size on FElementID");
static_assert(offsetof(FElementID, IDValue) == 0x000000, "Member 'FElementID::IDValue' has a wrong offset!");

// ScriptStruct MeshDescription.VertexID
// 0x0000 (0x0004 - 0x0004)
struct FVertexID final : public FElementID
{
};
static_assert(alignof(FVertexID) == 0x000004, "Wrong alignment on FVertexID");
static_assert(sizeof(FVertexID) == 0x000004, "Wrong size on FVertexID");

// ScriptStruct MeshDescription.VertexInstanceID
// 0x0000 (0x0004 - 0x0004)
struct FVertexInstanceID final : public FElementID
{
};
static_assert(alignof(FVertexInstanceID) == 0x000004, "Wrong alignment on FVertexInstanceID");
static_assert(sizeof(FVertexInstanceID) == 0x000004, "Wrong size on FVertexInstanceID");

// ScriptStruct MeshDescription.EdgeID
// 0x0000 (0x0004 - 0x0004)
struct FEdgeID final : public FElementID
{
};
static_assert(alignof(FEdgeID) == 0x000004, "Wrong alignment on FEdgeID");
static_assert(sizeof(FEdgeID) == 0x000004, "Wrong size on FEdgeID");

// ScriptStruct MeshDescription.UVID
// 0x0000 (0x0004 - 0x0004)
struct FUVID final : public FElementID
{
};
static_assert(alignof(FUVID) == 0x000004, "Wrong alignment on FUVID");
static_assert(sizeof(FUVID) == 0x000004, "Wrong size on FUVID");

// ScriptStruct MeshDescription.TriangleID
// 0x0000 (0x0004 - 0x0004)
struct FTriangleID final : public FElementID
{
};
static_assert(alignof(FTriangleID) == 0x000004, "Wrong alignment on FTriangleID");
static_assert(sizeof(FTriangleID) == 0x000004, "Wrong size on FTriangleID");

// ScriptStruct MeshDescription.PolygonGroupID
// 0x0000 (0x0004 - 0x0004)
struct FPolygonGroupID final : public FElementID
{
};
static_assert(alignof(FPolygonGroupID) == 0x000004, "Wrong alignment on FPolygonGroupID");
static_assert(sizeof(FPolygonGroupID) == 0x000004, "Wrong size on FPolygonGroupID");

// ScriptStruct MeshDescription.PolygonID
// 0x0000 (0x0004 - 0x0004)
struct FPolygonID final : public FElementID
{
};
static_assert(alignof(FPolygonID) == 0x000004, "Wrong alignment on FPolygonID");
static_assert(sizeof(FPolygonID) == 0x000004, "Wrong size on FPolygonID");

// ScriptStruct MeshDescription.BoneID
// 0x0000 (0x0004 - 0x0004)
struct FBoneID final : public FElementID
{
};
static_assert(alignof(FBoneID) == 0x000004, "Wrong alignment on FBoneID");
static_assert(sizeof(FBoneID) == 0x000004, "Wrong size on FBoneID");

}

