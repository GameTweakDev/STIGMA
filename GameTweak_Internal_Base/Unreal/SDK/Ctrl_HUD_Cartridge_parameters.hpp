#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: Ctrl_HUD_Cartridge

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function Ctrl_HUD_Cartridge.Ctrl_HUD_Cartridge_C.BindChara
// 0x0010 (0x0010 - 0x0000)
struct Ctrl_HUD_Cartridge_C_BindChara final
{
public:
	class ACharaBase*                             _target_chara;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          _is_main_gun;                                      // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Ctrl_HUD_Cartridge_C_BindChara) == 0x000008, "Wrong alignment on Ctrl_HUD_Cartridge_C_BindChara");
static_assert(sizeof(Ctrl_HUD_Cartridge_C_BindChara) == 0x000010, "Wrong size on Ctrl_HUD_Cartridge_C_BindChara");
static_assert(offsetof(Ctrl_HUD_Cartridge_C_BindChara, _target_chara) == 0x000000, "Member 'Ctrl_HUD_Cartridge_C_BindChara::_target_chara' has a wrong offset!");
static_assert(offsetof(Ctrl_HUD_Cartridge_C_BindChara, _is_main_gun) == 0x000008, "Member 'Ctrl_HUD_Cartridge_C_BindChara::_is_main_gun' has a wrong offset!");
static_assert(offsetof(Ctrl_HUD_Cartridge_C_BindChara, CallFunc_IsValid_ReturnValue) == 0x000009, "Member 'Ctrl_HUD_Cartridge_C_BindChara::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ctrl_HUD_Cartridge_C_BindChara, CallFunc_IsValid_ReturnValue_1) == 0x00000A, "Member 'Ctrl_HUD_Cartridge_C_BindChara::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function Ctrl_HUD_Cartridge.Ctrl_HUD_Cartridge_C.ExecuteUbergraph_Ctrl_HUD_Cartridge
// 0x0048 (0x0048 - 0x0000)
struct Ctrl_HUD_Cartridge_C_ExecuteUbergraph_Ctrl_HUD_Cartridge final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0004(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Update__delta_ImplicitCast;               // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Ctrl_HUD_Cartridge_C_ExecuteUbergraph_Ctrl_HUD_Cartridge) == 0x000008, "Wrong alignment on Ctrl_HUD_Cartridge_C_ExecuteUbergraph_Ctrl_HUD_Cartridge");
static_assert(sizeof(Ctrl_HUD_Cartridge_C_ExecuteUbergraph_Ctrl_HUD_Cartridge) == 0x000048, "Wrong size on Ctrl_HUD_Cartridge_C_ExecuteUbergraph_Ctrl_HUD_Cartridge");
static_assert(offsetof(Ctrl_HUD_Cartridge_C_ExecuteUbergraph_Ctrl_HUD_Cartridge, EntryPoint) == 0x000000, "Member 'Ctrl_HUD_Cartridge_C_ExecuteUbergraph_Ctrl_HUD_Cartridge::EntryPoint' has a wrong offset!");
static_assert(offsetof(Ctrl_HUD_Cartridge_C_ExecuteUbergraph_Ctrl_HUD_Cartridge, K2Node_Event_MyGeometry) == 0x000004, "Member 'Ctrl_HUD_Cartridge_C_ExecuteUbergraph_Ctrl_HUD_Cartridge::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(Ctrl_HUD_Cartridge_C_ExecuteUbergraph_Ctrl_HUD_Cartridge, K2Node_Event_InDeltaTime) == 0x00003C, "Member 'Ctrl_HUD_Cartridge_C_ExecuteUbergraph_Ctrl_HUD_Cartridge::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(Ctrl_HUD_Cartridge_C_ExecuteUbergraph_Ctrl_HUD_Cartridge, CallFunc_Update__delta_ImplicitCast) == 0x000040, "Member 'Ctrl_HUD_Cartridge_C_ExecuteUbergraph_Ctrl_HUD_Cartridge::CallFunc_Update__delta_ImplicitCast' has a wrong offset!");

// Function Ctrl_HUD_Cartridge.Ctrl_HUD_Cartridge_C.Init
// 0x0010 (0x0010 - 0x0000)
struct Ctrl_HUD_Cartridge_C_Init final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_38A6[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-69 ])
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Ctrl_HUD_Cartridge_C_Init) == 0x000008, "Wrong alignment on Ctrl_HUD_Cartridge_C_Init");
static_assert(sizeof(Ctrl_HUD_Cartridge_C_Init) == 0x000010, "Wrong size on Ctrl_HUD_Cartridge_C_Init");
static_assert(offsetof(Ctrl_HUD_Cartridge_C_Init, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'Ctrl_HUD_Cartridge_C_Init::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ctrl_HUD_Cartridge_C_Init, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000008, "Member 'Ctrl_HUD_Cartridge_C_Init::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");

// Function Ctrl_HUD_Cartridge.Ctrl_HUD_Cartridge_C.OnFire
// 0x0008 (0x0008 - 0x0000)
struct Ctrl_HUD_Cartridge_C_OnFire final
{
public:
	class AGunBase*                               _gun;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Ctrl_HUD_Cartridge_C_OnFire) == 0x000008, "Wrong alignment on Ctrl_HUD_Cartridge_C_OnFire");
static_assert(sizeof(Ctrl_HUD_Cartridge_C_OnFire) == 0x000008, "Wrong size on Ctrl_HUD_Cartridge_C_OnFire");
static_assert(offsetof(Ctrl_HUD_Cartridge_C_OnFire, _gun) == 0x000000, "Member 'Ctrl_HUD_Cartridge_C_OnFire::_gun' has a wrong offset!");

// Function Ctrl_HUD_Cartridge.Ctrl_HUD_Cartridge_C.OnReloadEnd
// 0x0010 (0x0010 - 0x0000)
struct Ctrl_HUD_Cartridge_C_OnReloadEnd final
{
public:
	class AGunBase*                               _gun;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          _is_cancle;                                        // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Ctrl_HUD_Cartridge_C_OnReloadEnd) == 0x000008, "Wrong alignment on Ctrl_HUD_Cartridge_C_OnReloadEnd");
static_assert(sizeof(Ctrl_HUD_Cartridge_C_OnReloadEnd) == 0x000010, "Wrong size on Ctrl_HUD_Cartridge_C_OnReloadEnd");
static_assert(offsetof(Ctrl_HUD_Cartridge_C_OnReloadEnd, _gun) == 0x000000, "Member 'Ctrl_HUD_Cartridge_C_OnReloadEnd::_gun' has a wrong offset!");
static_assert(offsetof(Ctrl_HUD_Cartridge_C_OnReloadEnd, _is_cancle) == 0x000008, "Member 'Ctrl_HUD_Cartridge_C_OnReloadEnd::_is_cancle' has a wrong offset!");

// Function Ctrl_HUD_Cartridge.Ctrl_HUD_Cartridge_C.OnReloadStart
// 0x0008 (0x0008 - 0x0000)
struct Ctrl_HUD_Cartridge_C_OnReloadStart final
{
public:
	class AGunBase*                               _gun;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Ctrl_HUD_Cartridge_C_OnReloadStart) == 0x000008, "Wrong alignment on Ctrl_HUD_Cartridge_C_OnReloadStart");
static_assert(sizeof(Ctrl_HUD_Cartridge_C_OnReloadStart) == 0x000008, "Wrong size on Ctrl_HUD_Cartridge_C_OnReloadStart");
static_assert(offsetof(Ctrl_HUD_Cartridge_C_OnReloadStart, _gun) == 0x000000, "Member 'Ctrl_HUD_Cartridge_C_OnReloadStart::_gun' has a wrong offset!");

// Function Ctrl_HUD_Cartridge.Ctrl_HUD_Cartridge_C.OnSynchronizeProperties
// 0x0001 (0x0001 - 0x0000)
struct Ctrl_HUD_Cartridge_C_OnSynchronizeProperties final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Ctrl_HUD_Cartridge_C_OnSynchronizeProperties) == 0x000001, "Wrong alignment on Ctrl_HUD_Cartridge_C_OnSynchronizeProperties");
static_assert(sizeof(Ctrl_HUD_Cartridge_C_OnSynchronizeProperties) == 0x000001, "Wrong size on Ctrl_HUD_Cartridge_C_OnSynchronizeProperties");
static_assert(offsetof(Ctrl_HUD_Cartridge_C_OnSynchronizeProperties, ReturnValue) == 0x000000, "Member 'Ctrl_HUD_Cartridge_C_OnSynchronizeProperties::ReturnValue' has a wrong offset!");

// Function Ctrl_HUD_Cartridge.Ctrl_HUD_Cartridge_C.SetBulletCount
// 0x0008 (0x0008 - 0x0000)
struct Ctrl_HUD_Cartridge_C_SetBulletCount final
{
public:
	int32                                         _count;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         _max_count;                                        // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Ctrl_HUD_Cartridge_C_SetBulletCount) == 0x000004, "Wrong alignment on Ctrl_HUD_Cartridge_C_SetBulletCount");
static_assert(sizeof(Ctrl_HUD_Cartridge_C_SetBulletCount) == 0x000008, "Wrong size on Ctrl_HUD_Cartridge_C_SetBulletCount");
static_assert(offsetof(Ctrl_HUD_Cartridge_C_SetBulletCount, _count) == 0x000000, "Member 'Ctrl_HUD_Cartridge_C_SetBulletCount::_count' has a wrong offset!");
static_assert(offsetof(Ctrl_HUD_Cartridge_C_SetBulletCount, _max_count) == 0x000004, "Member 'Ctrl_HUD_Cartridge_C_SetBulletCount::_max_count' has a wrong offset!");

// Function Ctrl_HUD_Cartridge.Ctrl_HUD_Cartridge_C.Start Shot Animation
// 0x0078 (0x0078 - 0x0000)
struct Ctrl_HUD_Cartridge_C_Start_Shot_Animation final
{
public:
	int32                                         _shot_count;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_38A7[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-69 ])
	class ACharaBase*                             _target_chara;                                     // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              Shake_pos;                                         // 0x0010(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCtrl_HUD_FlyBullet_C*                  Temp_fly_bullet;                                   // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_38A8[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-69 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_RandomFloatInRange_ReturnValue;           // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_38A9[0x3];                                     // 0x003D(0x0003)(Fixing Size After Last Property [ Dumper-69 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_38AA[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-69 ])
	double                                        CallFunc_RandomFloatInRange_ReturnValue_1;         // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0050(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0058(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_RandomFloatInRange_ReturnValue_2;         // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_RandomFloatInRange_ReturnValue_3;         // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCtrl_HUD_FlyBullet_C*                  CallFunc_Create_ReturnValue;                       // 0x0070(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Ctrl_HUD_Cartridge_C_Start_Shot_Animation) == 0x000008, "Wrong alignment on Ctrl_HUD_Cartridge_C_Start_Shot_Animation");
static_assert(sizeof(Ctrl_HUD_Cartridge_C_Start_Shot_Animation) == 0x000078, "Wrong size on Ctrl_HUD_Cartridge_C_Start_Shot_Animation");
static_assert(offsetof(Ctrl_HUD_Cartridge_C_Start_Shot_Animation, _shot_count) == 0x000000, "Member 'Ctrl_HUD_Cartridge_C_Start_Shot_Animation::_shot_count' has a wrong offset!");
static_assert(offsetof(Ctrl_HUD_Cartridge_C_Start_Shot_Animation, _target_chara) == 0x000008, "Member 'Ctrl_HUD_Cartridge_C_Start_Shot_Animation::_target_chara' has a wrong offset!");
static_assert(offsetof(Ctrl_HUD_Cartridge_C_Start_Shot_Animation, Shake_pos) == 0x000010, "Member 'Ctrl_HUD_Cartridge_C_Start_Shot_Animation::Shake_pos' has a wrong offset!");
static_assert(offsetof(Ctrl_HUD_Cartridge_C_Start_Shot_Animation, Temp_fly_bullet) == 0x000020, "Member 'Ctrl_HUD_Cartridge_C_Start_Shot_Animation::Temp_fly_bullet' has a wrong offset!");
static_assert(offsetof(Ctrl_HUD_Cartridge_C_Start_Shot_Animation, CallFunc_Greater_IntInt_ReturnValue) == 0x000028, "Member 'Ctrl_HUD_Cartridge_C_Start_Shot_Animation::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ctrl_HUD_Cartridge_C_Start_Shot_Animation, CallFunc_Subtract_IntInt_ReturnValue) == 0x00002C, "Member 'Ctrl_HUD_Cartridge_C_Start_Shot_Animation::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ctrl_HUD_Cartridge_C_Start_Shot_Animation, CallFunc_RandomFloatInRange_ReturnValue) == 0x000030, "Member 'Ctrl_HUD_Cartridge_C_Start_Shot_Animation::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ctrl_HUD_Cartridge_C_Start_Shot_Animation, Temp_int_Variable) == 0x000038, "Member 'Ctrl_HUD_Cartridge_C_Start_Shot_Animation::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(Ctrl_HUD_Cartridge_C_Start_Shot_Animation, CallFunc_LessEqual_IntInt_ReturnValue) == 0x00003C, "Member 'Ctrl_HUD_Cartridge_C_Start_Shot_Animation::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ctrl_HUD_Cartridge_C_Start_Shot_Animation, CallFunc_Add_IntInt_ReturnValue) == 0x000040, "Member 'Ctrl_HUD_Cartridge_C_Start_Shot_Animation::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ctrl_HUD_Cartridge_C_Start_Shot_Animation, CallFunc_RandomFloatInRange_ReturnValue_1) == 0x000048, "Member 'Ctrl_HUD_Cartridge_C_Start_Shot_Animation::CallFunc_RandomFloatInRange_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Ctrl_HUD_Cartridge_C_Start_Shot_Animation, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000050, "Member 'Ctrl_HUD_Cartridge_C_Start_Shot_Animation::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ctrl_HUD_Cartridge_C_Start_Shot_Animation, CallFunc_AddChild_ReturnValue) == 0x000058, "Member 'Ctrl_HUD_Cartridge_C_Start_Shot_Animation::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ctrl_HUD_Cartridge_C_Start_Shot_Animation, CallFunc_RandomFloatInRange_ReturnValue_2) == 0x000060, "Member 'Ctrl_HUD_Cartridge_C_Start_Shot_Animation::CallFunc_RandomFloatInRange_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Ctrl_HUD_Cartridge_C_Start_Shot_Animation, CallFunc_RandomFloatInRange_ReturnValue_3) == 0x000068, "Member 'Ctrl_HUD_Cartridge_C_Start_Shot_Animation::CallFunc_RandomFloatInRange_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Ctrl_HUD_Cartridge_C_Start_Shot_Animation, CallFunc_Create_ReturnValue) == 0x000070, "Member 'Ctrl_HUD_Cartridge_C_Start_Shot_Animation::CallFunc_Create_ReturnValue' has a wrong offset!");

// Function Ctrl_HUD_Cartridge.Ctrl_HUD_Cartridge_C.Tick
// 0x003C (0x003C - 0x0000)
struct Ctrl_HUD_Cartridge_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Ctrl_HUD_Cartridge_C_Tick) == 0x000004, "Wrong alignment on Ctrl_HUD_Cartridge_C_Tick");
static_assert(sizeof(Ctrl_HUD_Cartridge_C_Tick) == 0x00003C, "Wrong size on Ctrl_HUD_Cartridge_C_Tick");
static_assert(offsetof(Ctrl_HUD_Cartridge_C_Tick, MyGeometry) == 0x000000, "Member 'Ctrl_HUD_Cartridge_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(Ctrl_HUD_Cartridge_C_Tick, InDeltaTime) == 0x000038, "Member 'Ctrl_HUD_Cartridge_C_Tick::InDeltaTime' has a wrong offset!");

// Function Ctrl_HUD_Cartridge.Ctrl_HUD_Cartridge_C.Update
// 0x0050 (0x0050 - 0x0000)
struct Ctrl_HUD_Cartridge_C_Update final
{
public:
	double                                        _delta;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Delta_time;                                        // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              Shot_shake_pos;                                    // 0x0010(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector2D_X;                          // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector2D_Y;                          // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_38AB[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-69 ])
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue;            // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Ctrl_HUD_Cartridge_C_Update) == 0x000008, "Wrong alignment on Ctrl_HUD_Cartridge_C_Update");
static_assert(sizeof(Ctrl_HUD_Cartridge_C_Update) == 0x000050, "Wrong size on Ctrl_HUD_Cartridge_C_Update");
static_assert(offsetof(Ctrl_HUD_Cartridge_C_Update, _delta) == 0x000000, "Member 'Ctrl_HUD_Cartridge_C_Update::_delta' has a wrong offset!");
static_assert(offsetof(Ctrl_HUD_Cartridge_C_Update, Delta_time) == 0x000008, "Member 'Ctrl_HUD_Cartridge_C_Update::Delta_time' has a wrong offset!");
static_assert(offsetof(Ctrl_HUD_Cartridge_C_Update, Shot_shake_pos) == 0x000010, "Member 'Ctrl_HUD_Cartridge_C_Update::Shot_shake_pos' has a wrong offset!");
static_assert(offsetof(Ctrl_HUD_Cartridge_C_Update, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000020, "Member 'Ctrl_HUD_Cartridge_C_Update::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ctrl_HUD_Cartridge_C_Update, CallFunc_BreakVector2D_X) == 0x000028, "Member 'Ctrl_HUD_Cartridge_C_Update::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(Ctrl_HUD_Cartridge_C_Update, CallFunc_BreakVector2D_Y) == 0x000030, "Member 'Ctrl_HUD_Cartridge_C_Update::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(Ctrl_HUD_Cartridge_C_Update, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000038, "Member 'Ctrl_HUD_Cartridge_C_Update::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ctrl_HUD_Cartridge_C_Update, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000040, "Member 'Ctrl_HUD_Cartridge_C_Update::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ctrl_HUD_Cartridge_C_Update, CallFunc_Less_DoubleDouble_ReturnValue) == 0x000048, "Member 'Ctrl_HUD_Cartridge_C_Update::CallFunc_Less_DoubleDouble_ReturnValue' has a wrong offset!");

// Function Ctrl_HUD_Cartridge.Ctrl_HUD_Cartridge_C.UpdateShiftAmount
// 0x0020 (0x0020 - 0x0000)
struct Ctrl_HUD_Cartridge_C_UpdateShiftAmount final
{
public:
	double                                        _delta;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Guide;                                             // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Param_Index;                                       // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 bullet_img;                                        // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_38AC[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-69 ])
	float                                         CallFunc_UpdateAnimationProgress__delta_ImplicitCast; // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Ctrl_HUD_Cartridge_C_UpdateShiftAmount) == 0x000008, "Wrong alignment on Ctrl_HUD_Cartridge_C_UpdateShiftAmount");
static_assert(sizeof(Ctrl_HUD_Cartridge_C_UpdateShiftAmount) == 0x000020, "Wrong size on Ctrl_HUD_Cartridge_C_UpdateShiftAmount");
static_assert(offsetof(Ctrl_HUD_Cartridge_C_UpdateShiftAmount, _delta) == 0x000000, "Member 'Ctrl_HUD_Cartridge_C_UpdateShiftAmount::_delta' has a wrong offset!");
static_assert(offsetof(Ctrl_HUD_Cartridge_C_UpdateShiftAmount, Guide) == 0x000008, "Member 'Ctrl_HUD_Cartridge_C_UpdateShiftAmount::Guide' has a wrong offset!");
static_assert(offsetof(Ctrl_HUD_Cartridge_C_UpdateShiftAmount, Param_Index) == 0x00000C, "Member 'Ctrl_HUD_Cartridge_C_UpdateShiftAmount::Param_Index' has a wrong offset!");
static_assert(offsetof(Ctrl_HUD_Cartridge_C_UpdateShiftAmount, bullet_img) == 0x000010, "Member 'Ctrl_HUD_Cartridge_C_UpdateShiftAmount::bullet_img' has a wrong offset!");
static_assert(offsetof(Ctrl_HUD_Cartridge_C_UpdateShiftAmount, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'Ctrl_HUD_Cartridge_C_UpdateShiftAmount::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ctrl_HUD_Cartridge_C_UpdateShiftAmount, CallFunc_UpdateAnimationProgress__delta_ImplicitCast) == 0x00001C, "Member 'Ctrl_HUD_Cartridge_C_UpdateShiftAmount::CallFunc_UpdateAnimationProgress__delta_ImplicitCast' has a wrong offset!");

}

