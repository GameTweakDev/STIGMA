#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: UI_Announcement

#include "Basic.hpp"

#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function UI_Announcement.UI_Announcement_C.OnGetVisibility
// 0x0002 (0x0002 - 0x0000)
struct UI_Announcement_C_OnGetVisibility final
{
public:
	ESlateVisibility                              ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsShowing_ReturnValue;                    // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Announcement_C_OnGetVisibility) == 0x000001, "Wrong alignment on UI_Announcement_C_OnGetVisibility");
static_assert(sizeof(UI_Announcement_C_OnGetVisibility) == 0x000002, "Wrong size on UI_Announcement_C_OnGetVisibility");
static_assert(offsetof(UI_Announcement_C_OnGetVisibility, ReturnValue) == 0x000000, "Member 'UI_Announcement_C_OnGetVisibility::ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Announcement_C_OnGetVisibility, CallFunc_IsShowing_ReturnValue) == 0x000001, "Member 'UI_Announcement_C_OnGetVisibility::CallFunc_IsShowing_ReturnValue' has a wrong offset!");

}

