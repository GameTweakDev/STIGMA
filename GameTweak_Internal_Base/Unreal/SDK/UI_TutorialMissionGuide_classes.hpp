#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: UI_TutorialMissionGuide

#include "Basic.hpp"

#include "Stigma_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_TutorialMissionGuide.UI_TutorialMissionGuide_C
// 0x0010 (0x0540 - 0x0530)
class UUI_TutorialMissionGuide_C final : public UUI_TutorialMissionGuide
{
public:
	class UCanvasPanel*                           CanvasPanel;                                       // 0x0530(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_203;                                         // 0x0538(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_TutorialMissionGuide_C">();
	}
	static class UUI_TutorialMissionGuide_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_TutorialMissionGuide_C>();
	}
};
static_assert(alignof(UUI_TutorialMissionGuide_C) == 0x000008, "Wrong alignment on UUI_TutorialMissionGuide_C");
static_assert(sizeof(UUI_TutorialMissionGuide_C) == 0x000540, "Wrong size on UUI_TutorialMissionGuide_C");
static_assert(offsetof(UUI_TutorialMissionGuide_C, CanvasPanel) == 0x000530, "Member 'UUI_TutorialMissionGuide_C::CanvasPanel' has a wrong offset!");
static_assert(offsetof(UUI_TutorialMissionGuide_C, Image_203) == 0x000538, "Member 'UUI_TutorialMissionGuide_C::Image_203' has a wrong offset!");

}

