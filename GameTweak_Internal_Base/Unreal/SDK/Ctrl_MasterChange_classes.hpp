#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: Ctrl_MasterChange

#include "Basic.hpp"

#include "BPGLib_classes.hpp"
#include "Stigma_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Ctrl_MasterChange.Ctrl_MasterChange_C
// 0x0020 (0x0510 - 0x04F0)
class UCtrl_MasterChange_C final : public UPreviewableWidget
{
public:
	class UWidgetAnimation*                       UI_OnShow;                                         // 0x04F0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UItem_ChangeMaster_C*                   CurrentMaster;                                     // 0x04F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_106;                                         // 0x0500(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItem_ChangeMaster_C*                   SelectMaster;                                      // 0x0508(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void Init();
	void UpdateMaster(ECharaType _chara_type);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Ctrl_MasterChange_C">();
	}
	static class UCtrl_MasterChange_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCtrl_MasterChange_C>();
	}
};
static_assert(alignof(UCtrl_MasterChange_C) == 0x000008, "Wrong alignment on UCtrl_MasterChange_C");
static_assert(sizeof(UCtrl_MasterChange_C) == 0x000510, "Wrong size on UCtrl_MasterChange_C");
static_assert(offsetof(UCtrl_MasterChange_C, UI_OnShow) == 0x0004F0, "Member 'UCtrl_MasterChange_C::UI_OnShow' has a wrong offset!");
static_assert(offsetof(UCtrl_MasterChange_C, CurrentMaster) == 0x0004F8, "Member 'UCtrl_MasterChange_C::CurrentMaster' has a wrong offset!");
static_assert(offsetof(UCtrl_MasterChange_C, Image_106) == 0x000500, "Member 'UCtrl_MasterChange_C::Image_106' has a wrong offset!");
static_assert(offsetof(UCtrl_MasterChange_C, SelectMaster) == 0x000508, "Member 'UCtrl_MasterChange_C::SelectMaster' has a wrong offset!");

}

