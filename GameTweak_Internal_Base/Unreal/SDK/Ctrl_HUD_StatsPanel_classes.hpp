#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: Ctrl_HUD_StatsPanel

#include "Basic.hpp"

#include "BPGLib_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Ctrl_HUD_StatsPanel.Ctrl_HUD_StatsPanel_C
// 0x0040 (0x0530 - 0x04F0)
class UCtrl_HUD_StatsPanel_C final : public UPreviewableWidget
{
public:
	class UImage*                                 Icon_Img;                                          // 0x04F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_32;                                          // 0x04F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Stats_Background_Img;                              // 0x0500(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TXT_Stats;                                         // 0x0508(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTexture2D*                             IconTexture;                                       // 0x0510(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FText                                   PostFix;                                           // 0x0518(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)

public:
	bool OnSynchronizeProperties();
	void SetStatVariable(double Variable);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Ctrl_HUD_StatsPanel_C">();
	}
	static class UCtrl_HUD_StatsPanel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCtrl_HUD_StatsPanel_C>();
	}
};
static_assert(alignof(UCtrl_HUD_StatsPanel_C) == 0x000008, "Wrong alignment on UCtrl_HUD_StatsPanel_C");
static_assert(sizeof(UCtrl_HUD_StatsPanel_C) == 0x000530, "Wrong size on UCtrl_HUD_StatsPanel_C");
static_assert(offsetof(UCtrl_HUD_StatsPanel_C, Icon_Img) == 0x0004F0, "Member 'UCtrl_HUD_StatsPanel_C::Icon_Img' has a wrong offset!");
static_assert(offsetof(UCtrl_HUD_StatsPanel_C, Image_32) == 0x0004F8, "Member 'UCtrl_HUD_StatsPanel_C::Image_32' has a wrong offset!");
static_assert(offsetof(UCtrl_HUD_StatsPanel_C, Stats_Background_Img) == 0x000500, "Member 'UCtrl_HUD_StatsPanel_C::Stats_Background_Img' has a wrong offset!");
static_assert(offsetof(UCtrl_HUD_StatsPanel_C, TXT_Stats) == 0x000508, "Member 'UCtrl_HUD_StatsPanel_C::TXT_Stats' has a wrong offset!");
static_assert(offsetof(UCtrl_HUD_StatsPanel_C, IconTexture) == 0x000510, "Member 'UCtrl_HUD_StatsPanel_C::IconTexture' has a wrong offset!");
static_assert(offsetof(UCtrl_HUD_StatsPanel_C, PostFix) == 0x000518, "Member 'UCtrl_HUD_StatsPanel_C::PostFix' has a wrong offset!");

}

