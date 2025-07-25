#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: ST_BoneTrackingData

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// UserDefinedStruct ST_BoneTrackingData.ST_BoneTrackingData
// 0x0028 (0x0028 - 0x0000)
struct FST_BoneTrackingData final
{
public:
	TArray<struct FVector>                        SmearEndLocations_6_6A8B960742B0F7CC0359138C3B3AE52B; // 0x0000(0x0010)(Edit, BlueprintVisible)
	TArray<struct FVector>                        PreviousLocations_14_A712E9D64F59C6D327109693D9850A30; // 0x0010(0x0010)(Edit, BlueprintVisible)
	bool                                          Updated_10_41541C5442591EFFEF6C52877F60DB48;       // 0x0020(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FST_BoneTrackingData) == 0x000008, "Wrong alignment on FST_BoneTrackingData");
static_assert(sizeof(FST_BoneTrackingData) == 0x000028, "Wrong size on FST_BoneTrackingData");
static_assert(offsetof(FST_BoneTrackingData, SmearEndLocations_6_6A8B960742B0F7CC0359138C3B3AE52B) == 0x000000, "Member 'FST_BoneTrackingData::SmearEndLocations_6_6A8B960742B0F7CC0359138C3B3AE52B' has a wrong offset!");
static_assert(offsetof(FST_BoneTrackingData, PreviousLocations_14_A712E9D64F59C6D327109693D9850A30) == 0x000010, "Member 'FST_BoneTrackingData::PreviousLocations_14_A712E9D64F59C6D327109693D9850A30' has a wrong offset!");
static_assert(offsetof(FST_BoneTrackingData, Updated_10_41541C5442591EFFEF6C52877F60DB48) == 0x000020, "Member 'FST_BoneTrackingData::Updated_10_41541C5442591EFFEF6C52877F60DB48' has a wrong offset!");

}

