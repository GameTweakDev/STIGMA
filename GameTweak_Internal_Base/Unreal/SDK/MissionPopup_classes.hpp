#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: MissionPopup

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Stigma_structs.hpp"
#include "Stigma_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass MissionPopup.MissionPopup_C
// 0x0020 (0x0070 - 0x0050)
class UMissionPopup_C final : public UGoToWidgetDetailer
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0050(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UUI_MissionPopup*                       Popup;                                             // 0x0058(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FItemID                                TaskID;                                            // 0x0060(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_MissionPopup(int32 EntryPoint);
	void GetTaskID(struct FItemID* Task_id);
	void OpenMasterMission();
	void PlayDetailer(class UPreviewableWidget* _target_widget);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MissionPopup_C">();
	}
	static class UMissionPopup_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMissionPopup_C>();
	}
};
static_assert(alignof(UMissionPopup_C) == 0x000008, "Wrong alignment on UMissionPopup_C");
static_assert(sizeof(UMissionPopup_C) == 0x000070, "Wrong size on UMissionPopup_C");
static_assert(offsetof(UMissionPopup_C, UberGraphFrame) == 0x000050, "Member 'UMissionPopup_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMissionPopup_C, Popup) == 0x000058, "Member 'UMissionPopup_C::Popup' has a wrong offset!");
static_assert(offsetof(UMissionPopup_C, TaskID) == 0x000060, "Member 'UMissionPopup_C::TaskID' has a wrong offset!");

}

