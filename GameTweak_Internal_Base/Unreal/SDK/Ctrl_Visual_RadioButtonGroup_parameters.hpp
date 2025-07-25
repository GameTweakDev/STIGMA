#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: Ctrl_Visual_RadioButtonGroup

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "Stigma_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function Ctrl_Visual_RadioButtonGroup.Ctrl_Visual_RadioButtonGroup_C.DoSelectOnlyMatchedID
// 0x0068 (0x0068 - 0x0000)
struct Ctrl_Visual_RadioButtonGroup_C_DoSelectOnlyMatchedID final
{
public:
	class FName                                   _id_selected;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Invoke_callback;                                   // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_367B[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-69 ])
	class FName                                   ID;                                                // 0x000C(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_367C[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-69 ])
	class UCtrl_Visual_RadioButton_C*             Button;                                            // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_367D[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-69 ])
	TArray<class UWidget*>                        CallFunc_GetAllChildren_ReturnValue;               // 0x0030(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_367E[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-69 ])
	class UWidget*                                CallFunc_Array_Get_Item;                           // 0x0048(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_367F[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-69 ])
	class UCtrl_Visual_RadioButton_C*             K2Node_DynamicCast_AsCtrl_Visual_Radio_Button;     // 0x0058(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Ctrl_Visual_RadioButtonGroup_C_DoSelectOnlyMatchedID) == 0x000008, "Wrong alignment on Ctrl_Visual_RadioButtonGroup_C_DoSelectOnlyMatchedID");
static_assert(sizeof(Ctrl_Visual_RadioButtonGroup_C_DoSelectOnlyMatchedID) == 0x000068, "Wrong size on Ctrl_Visual_RadioButtonGroup_C_DoSelectOnlyMatchedID");
static_assert(offsetof(Ctrl_Visual_RadioButtonGroup_C_DoSelectOnlyMatchedID, _id_selected) == 0x000000, "Member 'Ctrl_Visual_RadioButtonGroup_C_DoSelectOnlyMatchedID::_id_selected' has a wrong offset!");
static_assert(offsetof(Ctrl_Visual_RadioButtonGroup_C_DoSelectOnlyMatchedID, Invoke_callback) == 0x000008, "Member 'Ctrl_Visual_RadioButtonGroup_C_DoSelectOnlyMatchedID::Invoke_callback' has a wrong offset!");
static_assert(offsetof(Ctrl_Visual_RadioButtonGroup_C_DoSelectOnlyMatchedID, ID) == 0x00000C, "Member 'Ctrl_Visual_RadioButtonGroup_C_DoSelectOnlyMatchedID::ID' has a wrong offset!");
static_assert(offsetof(Ctrl_Visual_RadioButtonGroup_C_DoSelectOnlyMatchedID, Button) == 0x000018, "Member 'Ctrl_Visual_RadioButtonGroup_C_DoSelectOnlyMatchedID::Button' has a wrong offset!");
static_assert(offsetof(Ctrl_Visual_RadioButtonGroup_C_DoSelectOnlyMatchedID, Temp_int_Array_Index_Variable) == 0x000020, "Member 'Ctrl_Visual_RadioButtonGroup_C_DoSelectOnlyMatchedID::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(Ctrl_Visual_RadioButtonGroup_C_DoSelectOnlyMatchedID, Temp_int_Loop_Counter_Variable) == 0x000024, "Member 'Ctrl_Visual_RadioButtonGroup_C_DoSelectOnlyMatchedID::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(Ctrl_Visual_RadioButtonGroup_C_DoSelectOnlyMatchedID, CallFunc_Add_IntInt_ReturnValue) == 0x000028, "Member 'Ctrl_Visual_RadioButtonGroup_C_DoSelectOnlyMatchedID::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ctrl_Visual_RadioButtonGroup_C_DoSelectOnlyMatchedID, CallFunc_GetAllChildren_ReturnValue) == 0x000030, "Member 'Ctrl_Visual_RadioButtonGroup_C_DoSelectOnlyMatchedID::CallFunc_GetAllChildren_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ctrl_Visual_RadioButtonGroup_C_DoSelectOnlyMatchedID, CallFunc_Array_Length_ReturnValue) == 0x000040, "Member 'Ctrl_Visual_RadioButtonGroup_C_DoSelectOnlyMatchedID::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ctrl_Visual_RadioButtonGroup_C_DoSelectOnlyMatchedID, CallFunc_Array_Get_Item) == 0x000048, "Member 'Ctrl_Visual_RadioButtonGroup_C_DoSelectOnlyMatchedID::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Ctrl_Visual_RadioButtonGroup_C_DoSelectOnlyMatchedID, CallFunc_Less_IntInt_ReturnValue) == 0x000050, "Member 'Ctrl_Visual_RadioButtonGroup_C_DoSelectOnlyMatchedID::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ctrl_Visual_RadioButtonGroup_C_DoSelectOnlyMatchedID, K2Node_DynamicCast_AsCtrl_Visual_Radio_Button) == 0x000058, "Member 'Ctrl_Visual_RadioButtonGroup_C_DoSelectOnlyMatchedID::K2Node_DynamicCast_AsCtrl_Visual_Radio_Button' has a wrong offset!");
static_assert(offsetof(Ctrl_Visual_RadioButtonGroup_C_DoSelectOnlyMatchedID, K2Node_DynamicCast_bSuccess) == 0x000060, "Member 'Ctrl_Visual_RadioButtonGroup_C_DoSelectOnlyMatchedID::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function Ctrl_Visual_RadioButtonGroup.Ctrl_Visual_RadioButtonGroup_C.ExecuteUbergraph_Ctrl_Visual_RadioButtonGroup
// 0x0018 (0x0018 - 0x0000)
struct Ctrl_Visual_RadioButtonGroup_C_ExecuteUbergraph_Ctrl_Visual_RadioButtonGroup final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_Event__id_selected;                         // 0x0004(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event__invoke_callback;                     // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3680[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-69 ])
	class FName                                   K2Node_Event__id_selected_1;                       // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Ctrl_Visual_RadioButtonGroup_C_ExecuteUbergraph_Ctrl_Visual_RadioButtonGroup) == 0x000004, "Wrong alignment on Ctrl_Visual_RadioButtonGroup_C_ExecuteUbergraph_Ctrl_Visual_RadioButtonGroup");
static_assert(sizeof(Ctrl_Visual_RadioButtonGroup_C_ExecuteUbergraph_Ctrl_Visual_RadioButtonGroup) == 0x000018, "Wrong size on Ctrl_Visual_RadioButtonGroup_C_ExecuteUbergraph_Ctrl_Visual_RadioButtonGroup");
static_assert(offsetof(Ctrl_Visual_RadioButtonGroup_C_ExecuteUbergraph_Ctrl_Visual_RadioButtonGroup, EntryPoint) == 0x000000, "Member 'Ctrl_Visual_RadioButtonGroup_C_ExecuteUbergraph_Ctrl_Visual_RadioButtonGroup::EntryPoint' has a wrong offset!");
static_assert(offsetof(Ctrl_Visual_RadioButtonGroup_C_ExecuteUbergraph_Ctrl_Visual_RadioButtonGroup, K2Node_Event__id_selected) == 0x000004, "Member 'Ctrl_Visual_RadioButtonGroup_C_ExecuteUbergraph_Ctrl_Visual_RadioButtonGroup::K2Node_Event__id_selected' has a wrong offset!");
static_assert(offsetof(Ctrl_Visual_RadioButtonGroup_C_ExecuteUbergraph_Ctrl_Visual_RadioButtonGroup, K2Node_Event__invoke_callback) == 0x00000C, "Member 'Ctrl_Visual_RadioButtonGroup_C_ExecuteUbergraph_Ctrl_Visual_RadioButtonGroup::K2Node_Event__invoke_callback' has a wrong offset!");
static_assert(offsetof(Ctrl_Visual_RadioButtonGroup_C_ExecuteUbergraph_Ctrl_Visual_RadioButtonGroup, K2Node_Event__id_selected_1) == 0x000010, "Member 'Ctrl_Visual_RadioButtonGroup_C_ExecuteUbergraph_Ctrl_Visual_RadioButtonGroup::K2Node_Event__id_selected_1' has a wrong offset!");

// Function Ctrl_Visual_RadioButtonGroup.Ctrl_Visual_RadioButtonGroup_C.GetSelectedID
// 0x0008 (0x0008 - 0x0000)
struct Ctrl_Visual_RadioButtonGroup_C_GetSelectedID final
{
public:
	class FName                                   ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Ctrl_Visual_RadioButtonGroup_C_GetSelectedID) == 0x000004, "Wrong alignment on Ctrl_Visual_RadioButtonGroup_C_GetSelectedID");
static_assert(sizeof(Ctrl_Visual_RadioButtonGroup_C_GetSelectedID) == 0x000008, "Wrong size on Ctrl_Visual_RadioButtonGroup_C_GetSelectedID");
static_assert(offsetof(Ctrl_Visual_RadioButtonGroup_C_GetSelectedID, ReturnValue) == 0x000000, "Member 'Ctrl_Visual_RadioButtonGroup_C_GetSelectedID::ReturnValue' has a wrong offset!");

// Function Ctrl_Visual_RadioButtonGroup.Ctrl_Visual_RadioButtonGroup_C.OnClickButton
// 0x0008 (0x0008 - 0x0000)
struct Ctrl_Visual_RadioButtonGroup_C_OnClickButton final
{
public:
	class FName                                   _id;                                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Ctrl_Visual_RadioButtonGroup_C_OnClickButton) == 0x000004, "Wrong alignment on Ctrl_Visual_RadioButtonGroup_C_OnClickButton");
static_assert(sizeof(Ctrl_Visual_RadioButtonGroup_C_OnClickButton) == 0x000008, "Wrong size on Ctrl_Visual_RadioButtonGroup_C_OnClickButton");
static_assert(offsetof(Ctrl_Visual_RadioButtonGroup_C_OnClickButton, _id) == 0x000000, "Member 'Ctrl_Visual_RadioButtonGroup_C_OnClickButton::_id' has a wrong offset!");

// Function Ctrl_Visual_RadioButtonGroup.Ctrl_Visual_RadioButtonGroup_C.OnClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct Ctrl_Visual_RadioButtonGroup_C_OnClicked__DelegateSignature final
{
public:
	class FName                                   _id;                                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Ctrl_Visual_RadioButtonGroup_C_OnClicked__DelegateSignature) == 0x000004, "Wrong alignment on Ctrl_Visual_RadioButtonGroup_C_OnClicked__DelegateSignature");
static_assert(sizeof(Ctrl_Visual_RadioButtonGroup_C_OnClicked__DelegateSignature) == 0x000008, "Wrong size on Ctrl_Visual_RadioButtonGroup_C_OnClicked__DelegateSignature");
static_assert(offsetof(Ctrl_Visual_RadioButtonGroup_C_OnClicked__DelegateSignature, _id) == 0x000000, "Member 'Ctrl_Visual_RadioButtonGroup_C_OnClicked__DelegateSignature::_id' has a wrong offset!");

// Function Ctrl_Visual_RadioButtonGroup.Ctrl_Visual_RadioButtonGroup_C.OnSelectedChanged__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct Ctrl_Visual_RadioButtonGroup_C_OnSelectedChanged__DelegateSignature final
{
public:
	class FName                                   _prev_id;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   _cur_id;                                           // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Ctrl_Visual_RadioButtonGroup_C_OnSelectedChanged__DelegateSignature) == 0x000004, "Wrong alignment on Ctrl_Visual_RadioButtonGroup_C_OnSelectedChanged__DelegateSignature");
static_assert(sizeof(Ctrl_Visual_RadioButtonGroup_C_OnSelectedChanged__DelegateSignature) == 0x000010, "Wrong size on Ctrl_Visual_RadioButtonGroup_C_OnSelectedChanged__DelegateSignature");
static_assert(offsetof(Ctrl_Visual_RadioButtonGroup_C_OnSelectedChanged__DelegateSignature, _prev_id) == 0x000000, "Member 'Ctrl_Visual_RadioButtonGroup_C_OnSelectedChanged__DelegateSignature::_prev_id' has a wrong offset!");
static_assert(offsetof(Ctrl_Visual_RadioButtonGroup_C_OnSelectedChanged__DelegateSignature, _cur_id) == 0x000008, "Member 'Ctrl_Visual_RadioButtonGroup_C_OnSelectedChanged__DelegateSignature::_cur_id' has a wrong offset!");

// Function Ctrl_Visual_RadioButtonGroup.Ctrl_Visual_RadioButtonGroup_C.OnSynchronizeProperties
// 0x0001 (0x0001 - 0x0000)
struct Ctrl_Visual_RadioButtonGroup_C_OnSynchronizeProperties final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Ctrl_Visual_RadioButtonGroup_C_OnSynchronizeProperties) == 0x000001, "Wrong alignment on Ctrl_Visual_RadioButtonGroup_C_OnSynchronizeProperties");
static_assert(sizeof(Ctrl_Visual_RadioButtonGroup_C_OnSynchronizeProperties) == 0x000001, "Wrong size on Ctrl_Visual_RadioButtonGroup_C_OnSynchronizeProperties");
static_assert(offsetof(Ctrl_Visual_RadioButtonGroup_C_OnSynchronizeProperties, ReturnValue) == 0x000000, "Member 'Ctrl_Visual_RadioButtonGroup_C_OnSynchronizeProperties::ReturnValue' has a wrong offset!");

// Function Ctrl_Visual_RadioButtonGroup.Ctrl_Visual_RadioButtonGroup_C.SelectOnlyMatchedID
// 0x0008 (0x0008 - 0x0000)
struct Ctrl_Visual_RadioButtonGroup_C_SelectOnlyMatchedID final
{
public:
	class FName                                   _id_selected;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Ctrl_Visual_RadioButtonGroup_C_SelectOnlyMatchedID) == 0x000004, "Wrong alignment on Ctrl_Visual_RadioButtonGroup_C_SelectOnlyMatchedID");
static_assert(sizeof(Ctrl_Visual_RadioButtonGroup_C_SelectOnlyMatchedID) == 0x000008, "Wrong size on Ctrl_Visual_RadioButtonGroup_C_SelectOnlyMatchedID");
static_assert(offsetof(Ctrl_Visual_RadioButtonGroup_C_SelectOnlyMatchedID, _id_selected) == 0x000000, "Member 'Ctrl_Visual_RadioButtonGroup_C_SelectOnlyMatchedID::_id_selected' has a wrong offset!");

// Function Ctrl_Visual_RadioButtonGroup.Ctrl_Visual_RadioButtonGroup_C.SelectOnlyMatchedIDEx
// 0x000C (0x000C - 0x0000)
struct Ctrl_Visual_RadioButtonGroup_C_SelectOnlyMatchedIDEx final
{
public:
	class FName                                   _id_selected;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          _invoke_callback;                                  // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Ctrl_Visual_RadioButtonGroup_C_SelectOnlyMatchedIDEx) == 0x000004, "Wrong alignment on Ctrl_Visual_RadioButtonGroup_C_SelectOnlyMatchedIDEx");
static_assert(sizeof(Ctrl_Visual_RadioButtonGroup_C_SelectOnlyMatchedIDEx) == 0x00000C, "Wrong size on Ctrl_Visual_RadioButtonGroup_C_SelectOnlyMatchedIDEx");
static_assert(offsetof(Ctrl_Visual_RadioButtonGroup_C_SelectOnlyMatchedIDEx, _id_selected) == 0x000000, "Member 'Ctrl_Visual_RadioButtonGroup_C_SelectOnlyMatchedIDEx::_id_selected' has a wrong offset!");
static_assert(offsetof(Ctrl_Visual_RadioButtonGroup_C_SelectOnlyMatchedIDEx, _invoke_callback) == 0x000008, "Member 'Ctrl_Visual_RadioButtonGroup_C_SelectOnlyMatchedIDEx::_invoke_callback' has a wrong offset!");

// Function Ctrl_Visual_RadioButtonGroup.Ctrl_Visual_RadioButtonGroup_C.UpdateButtons
// 0x00B0 (0x00B0 - 0x0000)
struct Ctrl_Visual_RadioButtonGroup_C_UpdateButtons final
{
public:
	class UHorizontalBoxSlot*                     Hslot;                                             // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCtrl_Visual_RadioButton_C*             Button;                                            // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVisualRadioButtonDefine               Def;                                               // 0x0010(0x0018)(Edit, BlueprintVisible, NoDestructor)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3681[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-69 ])
	class UCtrl_Visual_RadioButton_C*             CallFunc_Create_ReturnValue;                       // 0x0030(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVisualRadioButtonDefine               CallFunc_Array_Get_Item;                           // 0x0038(0x0018)(NoDestructor)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName _id)>              K2Node_CreateDelegate_OutputDelegate;              // 0x0058(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3682[0x3];                                     // 0x0069(0x0003)(Fixing Size After Last Property [ Dumper-69 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0070(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName _id)>              K2Node_CreateDelegate_OutputDelegate_2;            // 0x0080(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                       K2Node_DynamicCast_As________;                     // 0x0090(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3683[0x3];                                     // 0x0099(0x0003)(Fixing Size After Last Property [ Dumper-69 ])
	struct FSlateChildSize                        K2Node_MakeStruct_SlateChildSize;                  // 0x009C(0x0008)(NoDestructor)
	uint8                                         Pad_3684[0x4];                                     // 0x00A4(0x0004)(Fixing Size After Last Property [ Dumper-69 ])
	class UHorizontalBoxSlot*                     CallFunc_AddChildToHorizontalBox_ReturnValue;      // 0x00A8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Ctrl_Visual_RadioButtonGroup_C_UpdateButtons) == 0x000008, "Wrong alignment on Ctrl_Visual_RadioButtonGroup_C_UpdateButtons");
static_assert(sizeof(Ctrl_Visual_RadioButtonGroup_C_UpdateButtons) == 0x0000B0, "Wrong size on Ctrl_Visual_RadioButtonGroup_C_UpdateButtons");
static_assert(offsetof(Ctrl_Visual_RadioButtonGroup_C_UpdateButtons, Hslot) == 0x000000, "Member 'Ctrl_Visual_RadioButtonGroup_C_UpdateButtons::Hslot' has a wrong offset!");
static_assert(offsetof(Ctrl_Visual_RadioButtonGroup_C_UpdateButtons, Button) == 0x000008, "Member 'Ctrl_Visual_RadioButtonGroup_C_UpdateButtons::Button' has a wrong offset!");
static_assert(offsetof(Ctrl_Visual_RadioButtonGroup_C_UpdateButtons, Def) == 0x000010, "Member 'Ctrl_Visual_RadioButtonGroup_C_UpdateButtons::Def' has a wrong offset!");
static_assert(offsetof(Ctrl_Visual_RadioButtonGroup_C_UpdateButtons, Temp_int_Array_Index_Variable) == 0x000028, "Member 'Ctrl_Visual_RadioButtonGroup_C_UpdateButtons::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(Ctrl_Visual_RadioButtonGroup_C_UpdateButtons, CallFunc_Create_ReturnValue) == 0x000030, "Member 'Ctrl_Visual_RadioButtonGroup_C_UpdateButtons::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ctrl_Visual_RadioButtonGroup_C_UpdateButtons, CallFunc_Array_Get_Item) == 0x000038, "Member 'Ctrl_Visual_RadioButtonGroup_C_UpdateButtons::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Ctrl_Visual_RadioButtonGroup_C_UpdateButtons, CallFunc_Array_Length_ReturnValue) == 0x000050, "Member 'Ctrl_Visual_RadioButtonGroup_C_UpdateButtons::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ctrl_Visual_RadioButtonGroup_C_UpdateButtons, Temp_int_Loop_Counter_Variable) == 0x000054, "Member 'Ctrl_Visual_RadioButtonGroup_C_UpdateButtons::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(Ctrl_Visual_RadioButtonGroup_C_UpdateButtons, K2Node_CreateDelegate_OutputDelegate) == 0x000058, "Member 'Ctrl_Visual_RadioButtonGroup_C_UpdateButtons::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(Ctrl_Visual_RadioButtonGroup_C_UpdateButtons, CallFunc_Less_IntInt_ReturnValue) == 0x000068, "Member 'Ctrl_Visual_RadioButtonGroup_C_UpdateButtons::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ctrl_Visual_RadioButtonGroup_C_UpdateButtons, CallFunc_Add_IntInt_ReturnValue) == 0x00006C, "Member 'Ctrl_Visual_RadioButtonGroup_C_UpdateButtons::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ctrl_Visual_RadioButtonGroup_C_UpdateButtons, K2Node_CreateDelegate_OutputDelegate_1) == 0x000070, "Member 'Ctrl_Visual_RadioButtonGroup_C_UpdateButtons::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(Ctrl_Visual_RadioButtonGroup_C_UpdateButtons, K2Node_CreateDelegate_OutputDelegate_2) == 0x000080, "Member 'Ctrl_Visual_RadioButtonGroup_C_UpdateButtons::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(Ctrl_Visual_RadioButtonGroup_C_UpdateButtons, K2Node_DynamicCast_As________) == 0x000090, "Member 'Ctrl_Visual_RadioButtonGroup_C_UpdateButtons::K2Node_DynamicCast_As________' has a wrong offset!");
static_assert(offsetof(Ctrl_Visual_RadioButtonGroup_C_UpdateButtons, K2Node_DynamicCast_bSuccess) == 0x000098, "Member 'Ctrl_Visual_RadioButtonGroup_C_UpdateButtons::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Ctrl_Visual_RadioButtonGroup_C_UpdateButtons, K2Node_MakeStruct_SlateChildSize) == 0x00009C, "Member 'Ctrl_Visual_RadioButtonGroup_C_UpdateButtons::K2Node_MakeStruct_SlateChildSize' has a wrong offset!");
static_assert(offsetof(Ctrl_Visual_RadioButtonGroup_C_UpdateButtons, CallFunc_AddChildToHorizontalBox_ReturnValue) == 0x0000A8, "Member 'Ctrl_Visual_RadioButtonGroup_C_UpdateButtons::CallFunc_AddChildToHorizontalBox_ReturnValue' has a wrong offset!");

// Function Ctrl_Visual_RadioButtonGroup.Ctrl_Visual_RadioButtonGroup_C.UpdateTitle
// 0x0058 (0x0058 - 0x0000)
struct Ctrl_Visual_RadioButtonGroup_C_UpdateTitle final
{
public:
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x0000(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FMargin                                K2Node_MakeStruct_Margin_1;                        // 0x0010(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UVerticalBoxSlot*                       K2Node_DynamicCast_As________;                     // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3685[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-69 ])
	class UVerticalBoxSlot*                       K2Node_DynamicCast_As_________1;                   // 0x0030(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3686[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-69 ])
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Len_ReturnValue;                          // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Ctrl_Visual_RadioButtonGroup_C_UpdateTitle) == 0x000008, "Wrong alignment on Ctrl_Visual_RadioButtonGroup_C_UpdateTitle");
static_assert(sizeof(Ctrl_Visual_RadioButtonGroup_C_UpdateTitle) == 0x000058, "Wrong size on Ctrl_Visual_RadioButtonGroup_C_UpdateTitle");
static_assert(offsetof(Ctrl_Visual_RadioButtonGroup_C_UpdateTitle, K2Node_MakeStruct_Margin) == 0x000000, "Member 'Ctrl_Visual_RadioButtonGroup_C_UpdateTitle::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(Ctrl_Visual_RadioButtonGroup_C_UpdateTitle, K2Node_MakeStruct_Margin_1) == 0x000010, "Member 'Ctrl_Visual_RadioButtonGroup_C_UpdateTitle::K2Node_MakeStruct_Margin_1' has a wrong offset!");
static_assert(offsetof(Ctrl_Visual_RadioButtonGroup_C_UpdateTitle, K2Node_DynamicCast_As________) == 0x000020, "Member 'Ctrl_Visual_RadioButtonGroup_C_UpdateTitle::K2Node_DynamicCast_As________' has a wrong offset!");
static_assert(offsetof(Ctrl_Visual_RadioButtonGroup_C_UpdateTitle, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'Ctrl_Visual_RadioButtonGroup_C_UpdateTitle::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Ctrl_Visual_RadioButtonGroup_C_UpdateTitle, K2Node_DynamicCast_As_________1) == 0x000030, "Member 'Ctrl_Visual_RadioButtonGroup_C_UpdateTitle::K2Node_DynamicCast_As_________1' has a wrong offset!");
static_assert(offsetof(Ctrl_Visual_RadioButtonGroup_C_UpdateTitle, K2Node_DynamicCast_bSuccess_1) == 0x000038, "Member 'Ctrl_Visual_RadioButtonGroup_C_UpdateTitle::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(Ctrl_Visual_RadioButtonGroup_C_UpdateTitle, CallFunc_Conv_TextToString_ReturnValue) == 0x000040, "Member 'Ctrl_Visual_RadioButtonGroup_C_UpdateTitle::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ctrl_Visual_RadioButtonGroup_C_UpdateTitle, CallFunc_Len_ReturnValue) == 0x000050, "Member 'Ctrl_Visual_RadioButtonGroup_C_UpdateTitle::CallFunc_Len_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ctrl_Visual_RadioButtonGroup_C_UpdateTitle, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000054, "Member 'Ctrl_Visual_RadioButtonGroup_C_UpdateTitle::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");

}

