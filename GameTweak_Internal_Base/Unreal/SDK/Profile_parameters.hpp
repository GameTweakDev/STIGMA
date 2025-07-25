#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: Profile

#include "Basic.hpp"

#include "Stigma_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function Profile.Profile_C.ExecuteUbergraph_Profile
// 0x0088 (0x0088 - 0x0000)
struct Profile_C_ExecuteUbergraph_Profile final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F55[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-69 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F56[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-69 ])
	class UPreviewableWidget*                     K2Node_Event__target_widget;                       // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Get_Tab_tab;                              // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPOPUP_Profile_C*                       K2Node_DynamicCast_AsPOPUP_Profile;                // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_NameName_ReturnValue;            // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F57[0x2];                                     // 0x002A(0x0002)(Fixing Size After Last Property [ Dumper-69 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInvenItem*                             CallFunc_Array_Get_Item;                           // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FItemID                                CallFunc_GetItemID_ReturnValue;                    // 0x0038(0x0010)(HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F58[0x3];                                     // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-69 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F59[0x4];                                     // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-69 ])
	struct FItemID                                CallFunc_GetItemID_Item_ID;                        // 0x0058(0x0010)(HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEqualItemID_ReturnValue;                // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x006A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F5A[0x1];                                     // 0x006B(0x0001)(Fixing Size After Last Property [ Dumper-69 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x006C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F5B[0x4];                                     // 0x007C(0x0004)(Fixing Size After Last Property [ Dumper-69 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0080(0x0008)(NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Profile_C_ExecuteUbergraph_Profile) == 0x000008, "Wrong alignment on Profile_C_ExecuteUbergraph_Profile");
static_assert(sizeof(Profile_C_ExecuteUbergraph_Profile) == 0x000088, "Wrong size on Profile_C_ExecuteUbergraph_Profile");
static_assert(offsetof(Profile_C_ExecuteUbergraph_Profile, EntryPoint) == 0x000000, "Member 'Profile_C_ExecuteUbergraph_Profile::EntryPoint' has a wrong offset!");
static_assert(offsetof(Profile_C_ExecuteUbergraph_Profile, Temp_bool_True_if_break_was_hit_Variable) == 0x000004, "Member 'Profile_C_ExecuteUbergraph_Profile::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(Profile_C_ExecuteUbergraph_Profile, Temp_int_Array_Index_Variable) == 0x000008, "Member 'Profile_C_ExecuteUbergraph_Profile::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(Profile_C_ExecuteUbergraph_Profile, CallFunc_Not_PreBool_ReturnValue) == 0x00000C, "Member 'Profile_C_ExecuteUbergraph_Profile::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(Profile_C_ExecuteUbergraph_Profile, K2Node_Event__target_widget) == 0x000010, "Member 'Profile_C_ExecuteUbergraph_Profile::K2Node_Event__target_widget' has a wrong offset!");
static_assert(offsetof(Profile_C_ExecuteUbergraph_Profile, CallFunc_Get_Tab_tab) == 0x000018, "Member 'Profile_C_ExecuteUbergraph_Profile::CallFunc_Get_Tab_tab' has a wrong offset!");
static_assert(offsetof(Profile_C_ExecuteUbergraph_Profile, K2Node_DynamicCast_AsPOPUP_Profile) == 0x000020, "Member 'Profile_C_ExecuteUbergraph_Profile::K2Node_DynamicCast_AsPOPUP_Profile' has a wrong offset!");
static_assert(offsetof(Profile_C_ExecuteUbergraph_Profile, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'Profile_C_ExecuteUbergraph_Profile::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Profile_C_ExecuteUbergraph_Profile, CallFunc_NotEqual_NameName_ReturnValue) == 0x000029, "Member 'Profile_C_ExecuteUbergraph_Profile::CallFunc_NotEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(Profile_C_ExecuteUbergraph_Profile, Temp_int_Loop_Counter_Variable) == 0x00002C, "Member 'Profile_C_ExecuteUbergraph_Profile::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(Profile_C_ExecuteUbergraph_Profile, CallFunc_Array_Get_Item) == 0x000030, "Member 'Profile_C_ExecuteUbergraph_Profile::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Profile_C_ExecuteUbergraph_Profile, CallFunc_GetItemID_ReturnValue) == 0x000038, "Member 'Profile_C_ExecuteUbergraph_Profile::CallFunc_GetItemID_ReturnValue' has a wrong offset!");
static_assert(offsetof(Profile_C_ExecuteUbergraph_Profile, CallFunc_IsValid_ReturnValue) == 0x000048, "Member 'Profile_C_ExecuteUbergraph_Profile::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Profile_C_ExecuteUbergraph_Profile, CallFunc_Add_IntInt_ReturnValue) == 0x00004C, "Member 'Profile_C_ExecuteUbergraph_Profile::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Profile_C_ExecuteUbergraph_Profile, CallFunc_Array_Length_ReturnValue) == 0x000050, "Member 'Profile_C_ExecuteUbergraph_Profile::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(Profile_C_ExecuteUbergraph_Profile, CallFunc_GetItemID_Item_ID) == 0x000058, "Member 'Profile_C_ExecuteUbergraph_Profile::CallFunc_GetItemID_Item_ID' has a wrong offset!");
static_assert(offsetof(Profile_C_ExecuteUbergraph_Profile, CallFunc_Less_IntInt_ReturnValue) == 0x000068, "Member 'Profile_C_ExecuteUbergraph_Profile::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Profile_C_ExecuteUbergraph_Profile, CallFunc_IsEqualItemID_ReturnValue) == 0x000069, "Member 'Profile_C_ExecuteUbergraph_Profile::CallFunc_IsEqualItemID_ReturnValue' has a wrong offset!");
static_assert(offsetof(Profile_C_ExecuteUbergraph_Profile, CallFunc_BooleanAND_ReturnValue) == 0x00006A, "Member 'Profile_C_ExecuteUbergraph_Profile::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(Profile_C_ExecuteUbergraph_Profile, K2Node_CreateDelegate_OutputDelegate) == 0x00006C, "Member 'Profile_C_ExecuteUbergraph_Profile::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(Profile_C_ExecuteUbergraph_Profile, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000080, "Member 'Profile_C_ExecuteUbergraph_Profile::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");

// Function Profile.Profile_C.Get Tab
// 0x0028 (0x0028 - 0x0000)
struct Profile_C_Get_Tab final
{
public:
	class FName                                   Tab;                                               // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Array_Get_Item;                           // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;           // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F5C[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-69 ])
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x001C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Profile_C_Get_Tab) == 0x000008, "Wrong alignment on Profile_C_Get_Tab");
static_assert(sizeof(Profile_C_Get_Tab) == 0x000028, "Wrong size on Profile_C_Get_Tab");
static_assert(offsetof(Profile_C_Get_Tab, Tab) == 0x000000, "Member 'Profile_C_Get_Tab::Tab' has a wrong offset!");
static_assert(offsetof(Profile_C_Get_Tab, CallFunc_Array_Get_Item) == 0x000008, "Member 'Profile_C_Get_Tab::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Profile_C_Get_Tab, CallFunc_Array_IsValidIndex_ReturnValue) == 0x000018, "Member 'Profile_C_Get_Tab::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(Profile_C_Get_Tab, CallFunc_Conv_StringToName_ReturnValue) == 0x00001C, "Member 'Profile_C_Get_Tab::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");

// Function Profile.Profile_C.GetItemID
// 0x0048 (0x0048 - 0x0000)
struct Profile_C_GetItemID final
{
public:
	struct FItemID                                Item_id;                                           // 0x0000(0x0010)(Parm, OutParm, HasGetValueTypeHash)
	struct FItemID                                CallFunc_MakeItemID_ReturnValue;                   // 0x0010(0x0010)(HasGetValueTypeHash)
	class FString                                 CallFunc_Array_Get_Item;                           // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;           // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F5D[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-69 ])
	int32                                         CallFunc_Conv_StringToInt_ReturnValue;             // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FItemID                                CallFunc_MakeItemID_ReturnValue_1;                 // 0x0038(0x0010)(HasGetValueTypeHash)
};
static_assert(alignof(Profile_C_GetItemID) == 0x000008, "Wrong alignment on Profile_C_GetItemID");
static_assert(sizeof(Profile_C_GetItemID) == 0x000048, "Wrong size on Profile_C_GetItemID");
static_assert(offsetof(Profile_C_GetItemID, Item_id) == 0x000000, "Member 'Profile_C_GetItemID::Item_id' has a wrong offset!");
static_assert(offsetof(Profile_C_GetItemID, CallFunc_MakeItemID_ReturnValue) == 0x000010, "Member 'Profile_C_GetItemID::CallFunc_MakeItemID_ReturnValue' has a wrong offset!");
static_assert(offsetof(Profile_C_GetItemID, CallFunc_Array_Get_Item) == 0x000020, "Member 'Profile_C_GetItemID::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Profile_C_GetItemID, CallFunc_Array_IsValidIndex_ReturnValue) == 0x000030, "Member 'Profile_C_GetItemID::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(Profile_C_GetItemID, CallFunc_Conv_StringToInt_ReturnValue) == 0x000034, "Member 'Profile_C_GetItemID::CallFunc_Conv_StringToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Profile_C_GetItemID, CallFunc_MakeItemID_ReturnValue_1) == 0x000038, "Member 'Profile_C_GetItemID::CallFunc_MakeItemID_ReturnValue_1' has a wrong offset!");

// Function Profile.Profile_C.PlayDetailer
// 0x0008 (0x0008 - 0x0000)
struct Profile_C_PlayDetailer final
{
public:
	class UPreviewableWidget*                     _target_widget;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Profile_C_PlayDetailer) == 0x000008, "Wrong alignment on Profile_C_PlayDetailer");
static_assert(sizeof(Profile_C_PlayDetailer) == 0x000008, "Wrong size on Profile_C_PlayDetailer");
static_assert(offsetof(Profile_C_PlayDetailer, _target_widget) == 0x000000, "Member 'Profile_C_PlayDetailer::_target_widget' has a wrong offset!");

}

