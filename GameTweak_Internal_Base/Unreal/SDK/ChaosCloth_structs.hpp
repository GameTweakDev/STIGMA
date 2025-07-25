#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: ChaosCloth

#include "Basic.hpp"


namespace SDK
{

// Enum ChaosCloth.EChaosWeightMapTarget
// NumValues: 0x0010
enum class EChaosWeightMapTarget : uint8
{
	None                                     = 0,
	MaxDistance                              = 1,
	BackstopDistance                         = 2,
	BackstopRadius                           = 3,
	AnimDriveStiffness                       = 4,
	AnimDriveDamping                         = 5,
	TetherStiffness                          = 6,
	TetherScale                              = 7,
	Drag                                     = 8,
	Lift                                     = 9,
	EdgeStiffness                            = 10,
	BendingStiffness                         = 11,
	AreaStiffness                            = 12,
	BucklingStiffness                        = 13,
	Pressure                                 = 14,
	EChaosWeightMapTarget_MAX                = 15,
};

// Enum ChaosCloth.EChaosClothTetherMode
// NumValues: 0x0005
enum class EChaosClothTetherMode : uint8
{
	FastTetherFastLength                     = 0,
	AccurateTetherFastLength                 = 1,
	AccurateTetherAccurateLength             = 2,
	MaxChaosClothTetherMode                  = 3,
	EChaosClothTetherMode_MAX                = 4,
};

// ScriptStruct ChaosCloth.ChaosClothWeightedValue
// 0x0008 (0x0008 - 0x0000)
struct FChaosClothWeightedValue final
{
public:
	float                                         Low;                                               // 0x0000(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         High;                                              // 0x0004(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FChaosClothWeightedValue) == 0x000004, "Wrong alignment on FChaosClothWeightedValue");
static_assert(sizeof(FChaosClothWeightedValue) == 0x000008, "Wrong size on FChaosClothWeightedValue");
static_assert(offsetof(FChaosClothWeightedValue, Low) == 0x000000, "Member 'FChaosClothWeightedValue::Low' has a wrong offset!");
static_assert(offsetof(FChaosClothWeightedValue, High) == 0x000004, "Member 'FChaosClothWeightedValue::High' has a wrong offset!");

}

