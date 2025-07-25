#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: ProfileCard_Friend

#include "Basic.hpp"

#include "Stigma_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function ProfileCard_Friend.ProfileCard_Friend_C.SetSubDescText
// 0x0018 (0x0018 - 0x0000)
struct ProfileCard_Friend_C_SetSubDescText final
{
public:
	class FText                                   SubDescText;                                       // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(ProfileCard_Friend_C_SetSubDescText) == 0x000008, "Wrong alignment on ProfileCard_Friend_C_SetSubDescText");
static_assert(sizeof(ProfileCard_Friend_C_SetSubDescText) == 0x000018, "Wrong size on ProfileCard_Friend_C_SetSubDescText");
static_assert(offsetof(ProfileCard_Friend_C_SetSubDescText, SubDescText) == 0x000000, "Member 'ProfileCard_Friend_C_SetSubDescText::SubDescText' has a wrong offset!");

// Function ProfileCard_Friend.ProfileCard_Friend_C.SetSubDescTextColor
// 0x0014 (0x0014 - 0x0000)
struct ProfileCard_Friend_C_SetSubDescTextColor final
{
public:
	struct FSlateColor                            Color;                                             // 0x0000(0x0014)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(ProfileCard_Friend_C_SetSubDescTextColor) == 0x000004, "Wrong alignment on ProfileCard_Friend_C_SetSubDescTextColor");
static_assert(sizeof(ProfileCard_Friend_C_SetSubDescTextColor) == 0x000014, "Wrong size on ProfileCard_Friend_C_SetSubDescTextColor");
static_assert(offsetof(ProfileCard_Friend_C_SetSubDescTextColor, Color) == 0x000000, "Member 'ProfileCard_Friend_C_SetSubDescTextColor::Color' has a wrong offset!");

// Function ProfileCard_Friend.ProfileCard_Friend_C.SetIcon
// 0x0030 (0x0030 - 0x0000)
struct ProfileCard_Friend_C_SetIcon final
{
public:
	TSoftObjectPtr<class UTexture2D>              _Icon;                                             // 0x0000(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ProfileCard_Friend_C_SetIcon) == 0x000008, "Wrong alignment on ProfileCard_Friend_C_SetIcon");
static_assert(sizeof(ProfileCard_Friend_C_SetIcon) == 0x000030, "Wrong size on ProfileCard_Friend_C_SetIcon");
static_assert(offsetof(ProfileCard_Friend_C_SetIcon, _Icon) == 0x000000, "Member 'ProfileCard_Friend_C_SetIcon::_Icon' has a wrong offset!");
static_assert(offsetof(ProfileCard_Friend_C_SetIcon, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x000028, "Member 'ProfileCard_Friend_C_SetIcon::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");

// Function ProfileCard_Friend.ProfileCard_Friend_C.SetDescTextColor
// 0x0014 (0x0014 - 0x0000)
struct ProfileCard_Friend_C_SetDescTextColor final
{
public:
	struct FSlateColor                            Color;                                             // 0x0000(0x0014)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(ProfileCard_Friend_C_SetDescTextColor) == 0x000004, "Wrong alignment on ProfileCard_Friend_C_SetDescTextColor");
static_assert(sizeof(ProfileCard_Friend_C_SetDescTextColor) == 0x000014, "Wrong size on ProfileCard_Friend_C_SetDescTextColor");
static_assert(offsetof(ProfileCard_Friend_C_SetDescTextColor, Color) == 0x000000, "Member 'ProfileCard_Friend_C_SetDescTextColor::Color' has a wrong offset!");

// Function ProfileCard_Friend.ProfileCard_Friend_C.SetDescText
// 0x0018 (0x0018 - 0x0000)
struct ProfileCard_Friend_C_SetDescText final
{
public:
	class FText                                   DescText;                                          // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(ProfileCard_Friend_C_SetDescText) == 0x000008, "Wrong alignment on ProfileCard_Friend_C_SetDescText");
static_assert(sizeof(ProfileCard_Friend_C_SetDescText) == 0x000018, "Wrong size on ProfileCard_Friend_C_SetDescText");
static_assert(offsetof(ProfileCard_Friend_C_SetDescText, DescText) == 0x000000, "Member 'ProfileCard_Friend_C_SetDescText::DescText' has a wrong offset!");

// Function ProfileCard_Friend.ProfileCard_Friend_C.OnUpdateNicknameFX
// 0x0010 (0x0010 - 0x0000)
struct ProfileCard_Friend_C_OnUpdateNicknameFX final
{
public:
	struct FItemID                                _nickfx_id;                                        // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(ProfileCard_Friend_C_OnUpdateNicknameFX) == 0x000008, "Wrong alignment on ProfileCard_Friend_C_OnUpdateNicknameFX");
static_assert(sizeof(ProfileCard_Friend_C_OnUpdateNicknameFX) == 0x000010, "Wrong size on ProfileCard_Friend_C_OnUpdateNicknameFX");
static_assert(offsetof(ProfileCard_Friend_C_OnUpdateNicknameFX, _nickfx_id) == 0x000000, "Member 'ProfileCard_Friend_C_OnUpdateNicknameFX::_nickfx_id' has a wrong offset!");

// Function ProfileCard_Friend.ProfileCard_Friend_C.ExecuteUbergraph_ProfileCard_Friend
// 0x0004 (0x0004 - 0x0000)
struct ProfileCard_Friend_C_ExecuteUbergraph_ProfileCard_Friend final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ProfileCard_Friend_C_ExecuteUbergraph_ProfileCard_Friend) == 0x000004, "Wrong alignment on ProfileCard_Friend_C_ExecuteUbergraph_ProfileCard_Friend");
static_assert(sizeof(ProfileCard_Friend_C_ExecuteUbergraph_ProfileCard_Friend) == 0x000004, "Wrong size on ProfileCard_Friend_C_ExecuteUbergraph_ProfileCard_Friend");
static_assert(offsetof(ProfileCard_Friend_C_ExecuteUbergraph_ProfileCard_Friend, EntryPoint) == 0x000000, "Member 'ProfileCard_Friend_C_ExecuteUbergraph_ProfileCard_Friend::EntryPoint' has a wrong offset!");

}

