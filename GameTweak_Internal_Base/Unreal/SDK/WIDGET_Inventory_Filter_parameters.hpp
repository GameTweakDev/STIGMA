#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: WIDGET_Inventory_Filter

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function WIDGET_Inventory_Filter.WIDGET_Inventory_Filter_C.BIND_BackgroundColor
// 0x0014 (0x0014 - 0x0000)
struct WIDGET_Inventory_Filter_C_BIND_BackgroundColor final
{
public:
	struct FLinearColor                           ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPressed_ReturnValue;                    // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsHovered_ReturnValue;                    // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WIDGET_Inventory_Filter_C_BIND_BackgroundColor) == 0x000004, "Wrong alignment on WIDGET_Inventory_Filter_C_BIND_BackgroundColor");
static_assert(sizeof(WIDGET_Inventory_Filter_C_BIND_BackgroundColor) == 0x000014, "Wrong size on WIDGET_Inventory_Filter_C_BIND_BackgroundColor");
static_assert(offsetof(WIDGET_Inventory_Filter_C_BIND_BackgroundColor, ReturnValue) == 0x000000, "Member 'WIDGET_Inventory_Filter_C_BIND_BackgroundColor::ReturnValue' has a wrong offset!");
static_assert(offsetof(WIDGET_Inventory_Filter_C_BIND_BackgroundColor, CallFunc_IsPressed_ReturnValue) == 0x000010, "Member 'WIDGET_Inventory_Filter_C_BIND_BackgroundColor::CallFunc_IsPressed_ReturnValue' has a wrong offset!");
static_assert(offsetof(WIDGET_Inventory_Filter_C_BIND_BackgroundColor, CallFunc_IsHovered_ReturnValue) == 0x000011, "Member 'WIDGET_Inventory_Filter_C_BIND_BackgroundColor::CallFunc_IsHovered_ReturnValue' has a wrong offset!");
static_assert(offsetof(WIDGET_Inventory_Filter_C_BIND_BackgroundColor, CallFunc_BooleanOR_ReturnValue) == 0x000012, "Member 'WIDGET_Inventory_Filter_C_BIND_BackgroundColor::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

// Function WIDGET_Inventory_Filter.WIDGET_Inventory_Filter_C.BndEvt__WIDGET_Inventory_Filter_CHK_Body_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct WIDGET_Inventory_Filter_C_BndEvt__WIDGET_Inventory_Filter_CHK_Body_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature final
{
public:
	bool                                          bIsChecked;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WIDGET_Inventory_Filter_C_BndEvt__WIDGET_Inventory_Filter_CHK_Body_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong alignment on WIDGET_Inventory_Filter_C_BndEvt__WIDGET_Inventory_Filter_CHK_Body_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(sizeof(WIDGET_Inventory_Filter_C_BndEvt__WIDGET_Inventory_Filter_CHK_Body_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong size on WIDGET_Inventory_Filter_C_BndEvt__WIDGET_Inventory_Filter_CHK_Body_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(offsetof(WIDGET_Inventory_Filter_C_BndEvt__WIDGET_Inventory_Filter_CHK_Body_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature, bIsChecked) == 0x000000, "Member 'WIDGET_Inventory_Filter_C_BndEvt__WIDGET_Inventory_Filter_CHK_Body_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature::bIsChecked' has a wrong offset!");

// Function WIDGET_Inventory_Filter.WIDGET_Inventory_Filter_C.ExecuteUbergraph_WIDGET_Inventory_Filter
// 0x0008 (0x0008 - 0x0000)
struct WIDGET_Inventory_Filter_C_ExecuteUbergraph_WIDGET_Inventory_Filter final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bIsChecked;             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WIDGET_Inventory_Filter_C_ExecuteUbergraph_WIDGET_Inventory_Filter) == 0x000004, "Wrong alignment on WIDGET_Inventory_Filter_C_ExecuteUbergraph_WIDGET_Inventory_Filter");
static_assert(sizeof(WIDGET_Inventory_Filter_C_ExecuteUbergraph_WIDGET_Inventory_Filter) == 0x000008, "Wrong size on WIDGET_Inventory_Filter_C_ExecuteUbergraph_WIDGET_Inventory_Filter");
static_assert(offsetof(WIDGET_Inventory_Filter_C_ExecuteUbergraph_WIDGET_Inventory_Filter, EntryPoint) == 0x000000, "Member 'WIDGET_Inventory_Filter_C_ExecuteUbergraph_WIDGET_Inventory_Filter::EntryPoint' has a wrong offset!");
static_assert(offsetof(WIDGET_Inventory_Filter_C_ExecuteUbergraph_WIDGET_Inventory_Filter, K2Node_ComponentBoundEvent_bIsChecked) == 0x000004, "Member 'WIDGET_Inventory_Filter_C_ExecuteUbergraph_WIDGET_Inventory_Filter::K2Node_ComponentBoundEvent_bIsChecked' has a wrong offset!");

// Function WIDGET_Inventory_Filter.WIDGET_Inventory_Filter_C.OnChangeChecked__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct WIDGET_Inventory_Filter_C_OnChangeChecked__DelegateSignature final
{
public:
	bool                                          Param__checked;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WIDGET_Inventory_Filter_C_OnChangeChecked__DelegateSignature) == 0x000001, "Wrong alignment on WIDGET_Inventory_Filter_C_OnChangeChecked__DelegateSignature");
static_assert(sizeof(WIDGET_Inventory_Filter_C_OnChangeChecked__DelegateSignature) == 0x000001, "Wrong size on WIDGET_Inventory_Filter_C_OnChangeChecked__DelegateSignature");
static_assert(offsetof(WIDGET_Inventory_Filter_C_OnChangeChecked__DelegateSignature, Param__checked) == 0x000000, "Member 'WIDGET_Inventory_Filter_C_OnChangeChecked__DelegateSignature::Param__checked' has a wrong offset!");

// Function WIDGET_Inventory_Filter.WIDGET_Inventory_Filter_C.OnSynchronizeProperties
// 0x0001 (0x0001 - 0x0000)
struct WIDGET_Inventory_Filter_C_OnSynchronizeProperties final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WIDGET_Inventory_Filter_C_OnSynchronizeProperties) == 0x000001, "Wrong alignment on WIDGET_Inventory_Filter_C_OnSynchronizeProperties");
static_assert(sizeof(WIDGET_Inventory_Filter_C_OnSynchronizeProperties) == 0x000001, "Wrong size on WIDGET_Inventory_Filter_C_OnSynchronizeProperties");
static_assert(offsetof(WIDGET_Inventory_Filter_C_OnSynchronizeProperties, ReturnValue) == 0x000000, "Member 'WIDGET_Inventory_Filter_C_OnSynchronizeProperties::ReturnValue' has a wrong offset!");

// Function WIDGET_Inventory_Filter.WIDGET_Inventory_Filter_C.SetChecked
// 0x0003 (0x0003 - 0x0000)
struct WIDGET_Inventory_Filter_C_SetChecked final
{
public:
	bool                                          Param__checked;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsChecked_ReturnValue;                    // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WIDGET_Inventory_Filter_C_SetChecked) == 0x000001, "Wrong alignment on WIDGET_Inventory_Filter_C_SetChecked");
static_assert(sizeof(WIDGET_Inventory_Filter_C_SetChecked) == 0x000003, "Wrong size on WIDGET_Inventory_Filter_C_SetChecked");
static_assert(offsetof(WIDGET_Inventory_Filter_C_SetChecked, Param__checked) == 0x000000, "Member 'WIDGET_Inventory_Filter_C_SetChecked::Param__checked' has a wrong offset!");
static_assert(offsetof(WIDGET_Inventory_Filter_C_SetChecked, CallFunc_IsChecked_ReturnValue) == 0x000001, "Member 'WIDGET_Inventory_Filter_C_SetChecked::CallFunc_IsChecked_ReturnValue' has a wrong offset!");
static_assert(offsetof(WIDGET_Inventory_Filter_C_SetChecked, CallFunc_NotEqual_BoolBool_ReturnValue) == 0x000002, "Member 'WIDGET_Inventory_Filter_C_SetChecked::CallFunc_NotEqual_BoolBool_ReturnValue' has a wrong offset!");

// Function WIDGET_Inventory_Filter.WIDGET_Inventory_Filter_C.IsChecked
// 0x0002 (0x0002 - 0x0000)
struct WIDGET_Inventory_Filter_C_IsChecked final
{
public:
	bool                                          Param__checked;                                    // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsChecked_ReturnValue;                    // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WIDGET_Inventory_Filter_C_IsChecked) == 0x000001, "Wrong alignment on WIDGET_Inventory_Filter_C_IsChecked");
static_assert(sizeof(WIDGET_Inventory_Filter_C_IsChecked) == 0x000002, "Wrong size on WIDGET_Inventory_Filter_C_IsChecked");
static_assert(offsetof(WIDGET_Inventory_Filter_C_IsChecked, Param__checked) == 0x000000, "Member 'WIDGET_Inventory_Filter_C_IsChecked::Param__checked' has a wrong offset!");
static_assert(offsetof(WIDGET_Inventory_Filter_C_IsChecked, CallFunc_IsChecked_ReturnValue) == 0x000001, "Member 'WIDGET_Inventory_Filter_C_IsChecked::CallFunc_IsChecked_ReturnValue' has a wrong offset!");

}

