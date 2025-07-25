#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: UI_DEBUG_Chara_Movement

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_DEBUG_Chara_Movement.UI_DEBUG_Chara_Movement_C
// 0x0020 (0x02E0 - 0x02C0)
class UUI_DEBUG_Chara_Movement_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                             TXT_Movement;                                      // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TXT_NetRole;                                       // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ACharaBase*                             TargetChara;                                       // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void BindTarget(class ACharaBase* _chara);
	void ExecuteUbergraph_UI_DEBUG_Chara_Movement(int32 EntryPoint);
	void OnTick(double _delta);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void UpdateMovement();
	void UpdateRoles();

	void GetMovementComponent(class UBPMotionMovementComponent** _comp) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_DEBUG_Chara_Movement_C">();
	}
	static class UUI_DEBUG_Chara_Movement_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_DEBUG_Chara_Movement_C>();
	}
};
static_assert(alignof(UUI_DEBUG_Chara_Movement_C) == 0x000008, "Wrong alignment on UUI_DEBUG_Chara_Movement_C");
static_assert(sizeof(UUI_DEBUG_Chara_Movement_C) == 0x0002E0, "Wrong size on UUI_DEBUG_Chara_Movement_C");
static_assert(offsetof(UUI_DEBUG_Chara_Movement_C, UberGraphFrame) == 0x0002C0, "Member 'UUI_DEBUG_Chara_Movement_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_DEBUG_Chara_Movement_C, TXT_Movement) == 0x0002C8, "Member 'UUI_DEBUG_Chara_Movement_C::TXT_Movement' has a wrong offset!");
static_assert(offsetof(UUI_DEBUG_Chara_Movement_C, TXT_NetRole) == 0x0002D0, "Member 'UUI_DEBUG_Chara_Movement_C::TXT_NetRole' has a wrong offset!");
static_assert(offsetof(UUI_DEBUG_Chara_Movement_C, TargetChara) == 0x0002D8, "Member 'UUI_DEBUG_Chara_Movement_C::TargetChara' has a wrong offset!");

}

