#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: Popup_SelectRegion

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function Popup_SelectRegion.Popup_SelectRegion_C.Tick
// 0x003C (0x003C - 0x0000)
struct Popup_SelectRegion_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Popup_SelectRegion_C_Tick) == 0x000004, "Wrong alignment on Popup_SelectRegion_C_Tick");
static_assert(sizeof(Popup_SelectRegion_C_Tick) == 0x00003C, "Wrong size on Popup_SelectRegion_C_Tick");
static_assert(offsetof(Popup_SelectRegion_C_Tick, MyGeometry) == 0x000000, "Member 'Popup_SelectRegion_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(Popup_SelectRegion_C_Tick, InDeltaTime) == 0x000038, "Member 'Popup_SelectRegion_C_Tick::InDeltaTime' has a wrong offset!");

// Function Popup_SelectRegion.Popup_SelectRegion_C.OnTick
// 0x0030 (0x0030 - 0x0000)
struct Popup_SelectRegion_C_OnTick final
{
public:
	double                                        _delta;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_35AE[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-69 ])
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue_1;       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_35AF[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-69 ])
	double                                        CallFunc_FMax_ReturnValue;                         // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetOpacity_InOpacity_ImplicitCast;        // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Popup_SelectRegion_C_OnTick) == 0x000008, "Wrong alignment on Popup_SelectRegion_C_OnTick");
static_assert(sizeof(Popup_SelectRegion_C_OnTick) == 0x000030, "Wrong size on Popup_SelectRegion_C_OnTick");
static_assert(offsetof(Popup_SelectRegion_C_OnTick, _delta) == 0x000000, "Member 'Popup_SelectRegion_C_OnTick::_delta' has a wrong offset!");
static_assert(offsetof(Popup_SelectRegion_C_OnTick, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000008, "Member 'Popup_SelectRegion_C_OnTick::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(Popup_SelectRegion_C_OnTick, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000010, "Member 'Popup_SelectRegion_C_OnTick::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(Popup_SelectRegion_C_OnTick, CallFunc_Greater_DoubleDouble_ReturnValue_1) == 0x000018, "Member 'Popup_SelectRegion_C_OnTick::CallFunc_Greater_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Popup_SelectRegion_C_OnTick, CallFunc_FMax_ReturnValue) == 0x000020, "Member 'Popup_SelectRegion_C_OnTick::CallFunc_FMax_ReturnValue' has a wrong offset!");
static_assert(offsetof(Popup_SelectRegion_C_OnTick, CallFunc_SetOpacity_InOpacity_ImplicitCast) == 0x000028, "Member 'Popup_SelectRegion_C_OnTick::CallFunc_SetOpacity_InOpacity_ImplicitCast' has a wrong offset!");

// Function Popup_SelectRegion.Popup_SelectRegion_C.OnBeforeClose
// 0x0018 (0x0018 - 0x0000)
struct Popup_SelectRegion_C_OnBeforeClose final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_35B0[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-69 ])
	class UUserOption*                            CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetWishedRegionCount_ReturnValue;         // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Popup_SelectRegion_C_OnBeforeClose) == 0x000008, "Wrong alignment on Popup_SelectRegion_C_OnBeforeClose");
static_assert(sizeof(Popup_SelectRegion_C_OnBeforeClose) == 0x000018, "Wrong size on Popup_SelectRegion_C_OnBeforeClose");
static_assert(offsetof(Popup_SelectRegion_C_OnBeforeClose, ReturnValue) == 0x000000, "Member 'Popup_SelectRegion_C_OnBeforeClose::ReturnValue' has a wrong offset!");
static_assert(offsetof(Popup_SelectRegion_C_OnBeforeClose, CallFunc_GetGameInstanceSubsystem_ReturnValue) == 0x000008, "Member 'Popup_SelectRegion_C_OnBeforeClose::CallFunc_GetGameInstanceSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(Popup_SelectRegion_C_OnBeforeClose, CallFunc_GetWishedRegionCount_ReturnValue) == 0x000010, "Member 'Popup_SelectRegion_C_OnBeforeClose::CallFunc_GetWishedRegionCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(Popup_SelectRegion_C_OnBeforeClose, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000014, "Member 'Popup_SelectRegion_C_OnBeforeClose::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");

// Function Popup_SelectRegion.Popup_SelectRegion_C.Init
// 0x0080 (0x0080 - 0x0000)
struct Popup_SelectRegion_C_Init final
{
public:
	class UWrapBoxSlot*                           Param_Slot;                                        // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCtrl_Region_Row_C*                     Widget;                                            // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                         Regions;                                           // 0x0010(0x0010)(Edit, BlueprintVisible)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_35B1[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-69 ])
	class FString                                 CallFunc_Array_Get_Item;                           // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_35B2[0x3];                                     // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-69 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCtrl_Region_Row_C*                     CallFunc_Create_ReturnValue;                       // 0x0048(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWrapBoxSlot*                           CallFunc_AddChildToWrapBox_ReturnValue;            // 0x0058(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UStigmaGameInstance*                    K2Node_DynamicCast_AsStigma_Game_Instance;         // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_35B3[0x7];                                     // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-69 ])
	TArray<class FString>                         CallFunc_GetAllRegionCodes_ReturnValue;            // 0x0070(0x0010)(ReferenceParm)
};
static_assert(alignof(Popup_SelectRegion_C_Init) == 0x000008, "Wrong alignment on Popup_SelectRegion_C_Init");
static_assert(sizeof(Popup_SelectRegion_C_Init) == 0x000080, "Wrong size on Popup_SelectRegion_C_Init");
static_assert(offsetof(Popup_SelectRegion_C_Init, Param_Slot) == 0x000000, "Member 'Popup_SelectRegion_C_Init::Param_Slot' has a wrong offset!");
static_assert(offsetof(Popup_SelectRegion_C_Init, Widget) == 0x000008, "Member 'Popup_SelectRegion_C_Init::Widget' has a wrong offset!");
static_assert(offsetof(Popup_SelectRegion_C_Init, Regions) == 0x000010, "Member 'Popup_SelectRegion_C_Init::Regions' has a wrong offset!");
static_assert(offsetof(Popup_SelectRegion_C_Init, CallFunc_Array_Length_ReturnValue) == 0x000020, "Member 'Popup_SelectRegion_C_Init::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(Popup_SelectRegion_C_Init, Temp_int_Array_Index_Variable) == 0x000024, "Member 'Popup_SelectRegion_C_Init::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(Popup_SelectRegion_C_Init, Temp_int_Loop_Counter_Variable) == 0x000028, "Member 'Popup_SelectRegion_C_Init::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(Popup_SelectRegion_C_Init, CallFunc_Array_Get_Item) == 0x000030, "Member 'Popup_SelectRegion_C_Init::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Popup_SelectRegion_C_Init, CallFunc_Less_IntInt_ReturnValue) == 0x000040, "Member 'Popup_SelectRegion_C_Init::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Popup_SelectRegion_C_Init, CallFunc_Add_IntInt_ReturnValue) == 0x000044, "Member 'Popup_SelectRegion_C_Init::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Popup_SelectRegion_C_Init, CallFunc_Create_ReturnValue) == 0x000048, "Member 'Popup_SelectRegion_C_Init::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(Popup_SelectRegion_C_Init, CallFunc_GetGameInstance_ReturnValue) == 0x000050, "Member 'Popup_SelectRegion_C_Init::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(Popup_SelectRegion_C_Init, CallFunc_AddChildToWrapBox_ReturnValue) == 0x000058, "Member 'Popup_SelectRegion_C_Init::CallFunc_AddChildToWrapBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(Popup_SelectRegion_C_Init, K2Node_DynamicCast_AsStigma_Game_Instance) == 0x000060, "Member 'Popup_SelectRegion_C_Init::K2Node_DynamicCast_AsStigma_Game_Instance' has a wrong offset!");
static_assert(offsetof(Popup_SelectRegion_C_Init, K2Node_DynamicCast_bSuccess) == 0x000068, "Member 'Popup_SelectRegion_C_Init::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Popup_SelectRegion_C_Init, CallFunc_GetAllRegionCodes_ReturnValue) == 0x000070, "Member 'Popup_SelectRegion_C_Init::CallFunc_GetAllRegionCodes_ReturnValue' has a wrong offset!");

// Function Popup_SelectRegion.Popup_SelectRegion_C.ExecuteUbergraph_Popup_SelectRegion
// 0x0058 (0x0058 - 0x0000)
struct Popup_SelectRegion_C_ExecuteUbergraph_Popup_SelectRegion final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_35B4[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-69 ])
	class UAnimatableWidget*                      K2Node_ComponentBoundEvent__widget;                // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent__select;                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_35B5[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-69 ])
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0014(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_OnTick__delta_ImplicitCast;               // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Popup_SelectRegion_C_ExecuteUbergraph_Popup_SelectRegion) == 0x000008, "Wrong alignment on Popup_SelectRegion_C_ExecuteUbergraph_Popup_SelectRegion");
static_assert(sizeof(Popup_SelectRegion_C_ExecuteUbergraph_Popup_SelectRegion) == 0x000058, "Wrong size on Popup_SelectRegion_C_ExecuteUbergraph_Popup_SelectRegion");
static_assert(offsetof(Popup_SelectRegion_C_ExecuteUbergraph_Popup_SelectRegion, EntryPoint) == 0x000000, "Member 'Popup_SelectRegion_C_ExecuteUbergraph_Popup_SelectRegion::EntryPoint' has a wrong offset!");
static_assert(offsetof(Popup_SelectRegion_C_ExecuteUbergraph_Popup_SelectRegion, K2Node_ComponentBoundEvent__widget) == 0x000008, "Member 'Popup_SelectRegion_C_ExecuteUbergraph_Popup_SelectRegion::K2Node_ComponentBoundEvent__widget' has a wrong offset!");
static_assert(offsetof(Popup_SelectRegion_C_ExecuteUbergraph_Popup_SelectRegion, K2Node_ComponentBoundEvent__select) == 0x000010, "Member 'Popup_SelectRegion_C_ExecuteUbergraph_Popup_SelectRegion::K2Node_ComponentBoundEvent__select' has a wrong offset!");
static_assert(offsetof(Popup_SelectRegion_C_ExecuteUbergraph_Popup_SelectRegion, K2Node_Event_MyGeometry) == 0x000014, "Member 'Popup_SelectRegion_C_ExecuteUbergraph_Popup_SelectRegion::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(Popup_SelectRegion_C_ExecuteUbergraph_Popup_SelectRegion, K2Node_Event_InDeltaTime) == 0x00004C, "Member 'Popup_SelectRegion_C_ExecuteUbergraph_Popup_SelectRegion::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(Popup_SelectRegion_C_ExecuteUbergraph_Popup_SelectRegion, CallFunc_OnTick__delta_ImplicitCast) == 0x000050, "Member 'Popup_SelectRegion_C_ExecuteUbergraph_Popup_SelectRegion::CallFunc_OnTick__delta_ImplicitCast' has a wrong offset!");

// Function Popup_SelectRegion.Popup_SelectRegion_C.BndEvt__Popup_SelectRegion_BTN_Close_K2Node_ComponentBoundEvent_0_DM_OnSelectEnd__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct Popup_SelectRegion_C_BndEvt__Popup_SelectRegion_BTN_Close_K2Node_ComponentBoundEvent_0_DM_OnSelectEnd__DelegateSignature final
{
public:
	class UAnimatableWidget*                      _widget;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          _select;                                           // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Popup_SelectRegion_C_BndEvt__Popup_SelectRegion_BTN_Close_K2Node_ComponentBoundEvent_0_DM_OnSelectEnd__DelegateSignature) == 0x000008, "Wrong alignment on Popup_SelectRegion_C_BndEvt__Popup_SelectRegion_BTN_Close_K2Node_ComponentBoundEvent_0_DM_OnSelectEnd__DelegateSignature");
static_assert(sizeof(Popup_SelectRegion_C_BndEvt__Popup_SelectRegion_BTN_Close_K2Node_ComponentBoundEvent_0_DM_OnSelectEnd__DelegateSignature) == 0x000010, "Wrong size on Popup_SelectRegion_C_BndEvt__Popup_SelectRegion_BTN_Close_K2Node_ComponentBoundEvent_0_DM_OnSelectEnd__DelegateSignature");
static_assert(offsetof(Popup_SelectRegion_C_BndEvt__Popup_SelectRegion_BTN_Close_K2Node_ComponentBoundEvent_0_DM_OnSelectEnd__DelegateSignature, _widget) == 0x000000, "Member 'Popup_SelectRegion_C_BndEvt__Popup_SelectRegion_BTN_Close_K2Node_ComponentBoundEvent_0_DM_OnSelectEnd__DelegateSignature::_widget' has a wrong offset!");
static_assert(offsetof(Popup_SelectRegion_C_BndEvt__Popup_SelectRegion_BTN_Close_K2Node_ComponentBoundEvent_0_DM_OnSelectEnd__DelegateSignature, _select) == 0x000008, "Member 'Popup_SelectRegion_C_BndEvt__Popup_SelectRegion_BTN_Close_K2Node_ComponentBoundEvent_0_DM_OnSelectEnd__DelegateSignature::_select' has a wrong offset!");

}

