#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: Ctrl_ItemTag

#include "Basic.hpp"

#include "Stigma_structs.hpp"


namespace SDK::Params
{

// Function Ctrl_ItemTag.Ctrl_ItemTag_C.ExecuteUbergraph_Ctrl_ItemTag
// 0x0100 (0x0100 - 0x0000)
struct Ctrl_ItemTag_C_ExecuteUbergraph_Ctrl_ItemTag final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3D0C[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-69 ])
	class UOverlay*                               K2Node_CustomEvent_Overlay_88;                     // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FItemTagConfig                         K2Node_Event__style;                               // 0x0010(0x00F0)(ConstParm)
};
static_assert(alignof(Ctrl_ItemTag_C_ExecuteUbergraph_Ctrl_ItemTag) == 0x000010, "Wrong alignment on Ctrl_ItemTag_C_ExecuteUbergraph_Ctrl_ItemTag");
static_assert(sizeof(Ctrl_ItemTag_C_ExecuteUbergraph_Ctrl_ItemTag) == 0x000100, "Wrong size on Ctrl_ItemTag_C_ExecuteUbergraph_Ctrl_ItemTag");
static_assert(offsetof(Ctrl_ItemTag_C_ExecuteUbergraph_Ctrl_ItemTag, EntryPoint) == 0x000000, "Member 'Ctrl_ItemTag_C_ExecuteUbergraph_Ctrl_ItemTag::EntryPoint' has a wrong offset!");
static_assert(offsetof(Ctrl_ItemTag_C_ExecuteUbergraph_Ctrl_ItemTag, K2Node_CustomEvent_Overlay_88) == 0x000008, "Member 'Ctrl_ItemTag_C_ExecuteUbergraph_Ctrl_ItemTag::K2Node_CustomEvent_Overlay_88' has a wrong offset!");
static_assert(offsetof(Ctrl_ItemTag_C_ExecuteUbergraph_Ctrl_ItemTag, K2Node_Event__style) == 0x000010, "Member 'Ctrl_ItemTag_C_ExecuteUbergraph_Ctrl_ItemTag::K2Node_Event__style' has a wrong offset!");

// Function Ctrl_ItemTag.Ctrl_ItemTag_C.Overlay_88_Event
// 0x0008 (0x0008 - 0x0000)
struct Ctrl_ItemTag_C_Overlay_88_Event final
{
public:
	class UOverlay*                               Overlay_88;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Ctrl_ItemTag_C_Overlay_88_Event) == 0x000008, "Wrong alignment on Ctrl_ItemTag_C_Overlay_88_Event");
static_assert(sizeof(Ctrl_ItemTag_C_Overlay_88_Event) == 0x000008, "Wrong size on Ctrl_ItemTag_C_Overlay_88_Event");
static_assert(offsetof(Ctrl_ItemTag_C_Overlay_88_Event, Overlay_88) == 0x000000, "Member 'Ctrl_ItemTag_C_Overlay_88_Event::Overlay_88' has a wrong offset!");

// Function Ctrl_ItemTag.Ctrl_ItemTag_C.SequenceEvent__ENTRYPOINTCtrl_ItemTag
// 0x0008 (0x0008 - 0x0000)
struct Ctrl_ItemTag_C_SequenceEvent__ENTRYPOINTCtrl_ItemTag final
{
public:
	class UOverlay*                               Overlay_88;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Ctrl_ItemTag_C_SequenceEvent__ENTRYPOINTCtrl_ItemTag) == 0x000008, "Wrong alignment on Ctrl_ItemTag_C_SequenceEvent__ENTRYPOINTCtrl_ItemTag");
static_assert(sizeof(Ctrl_ItemTag_C_SequenceEvent__ENTRYPOINTCtrl_ItemTag) == 0x000008, "Wrong size on Ctrl_ItemTag_C_SequenceEvent__ENTRYPOINTCtrl_ItemTag");
static_assert(offsetof(Ctrl_ItemTag_C_SequenceEvent__ENTRYPOINTCtrl_ItemTag, Overlay_88) == 0x000000, "Member 'Ctrl_ItemTag_C_SequenceEvent__ENTRYPOINTCtrl_ItemTag::Overlay_88' has a wrong offset!");

// Function Ctrl_ItemTag.Ctrl_ItemTag_C.SetTagStyle
// 0x00F0 (0x00F0 - 0x0000)
struct Ctrl_ItemTag_C_SetTagStyle final
{
public:
	struct FItemTagConfig                         _style;                                            // 0x0000(0x00F0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(Ctrl_ItemTag_C_SetTagStyle) == 0x000010, "Wrong alignment on Ctrl_ItemTag_C_SetTagStyle");
static_assert(sizeof(Ctrl_ItemTag_C_SetTagStyle) == 0x0000F0, "Wrong size on Ctrl_ItemTag_C_SetTagStyle");
static_assert(offsetof(Ctrl_ItemTag_C_SetTagStyle, _style) == 0x000000, "Member 'Ctrl_ItemTag_C_SetTagStyle::_style' has a wrong offset!");

}

