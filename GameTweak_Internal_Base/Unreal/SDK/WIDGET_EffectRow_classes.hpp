#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: WIDGET_EffectRow

#include "Basic.hpp"

#include "Stigma_structs.hpp"
#include "BPGLib_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WIDGET_EffectRow.WIDGET_EffectRow_C
// 0x0038 (0x0528 - 0x04F0)
class UWIDGET_EffectRow_C final : public UPreviewableWidget
{
public:
	class UTextBlock*                             Txt_Title;                                         // 0x04F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Txt_Value;                                         // 0x04F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FEffectDetail                          Effect;                                            // 0x0500(0x0028)(Edit, BlueprintVisible, ExposeOnSpawn)

public:
	bool OnSynchronizeProperties();
	void Update();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WIDGET_EffectRow_C">();
	}
	static class UWIDGET_EffectRow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWIDGET_EffectRow_C>();
	}
};
static_assert(alignof(UWIDGET_EffectRow_C) == 0x000008, "Wrong alignment on UWIDGET_EffectRow_C");
static_assert(sizeof(UWIDGET_EffectRow_C) == 0x000528, "Wrong size on UWIDGET_EffectRow_C");
static_assert(offsetof(UWIDGET_EffectRow_C, Txt_Title) == 0x0004F0, "Member 'UWIDGET_EffectRow_C::Txt_Title' has a wrong offset!");
static_assert(offsetof(UWIDGET_EffectRow_C, Txt_Value) == 0x0004F8, "Member 'UWIDGET_EffectRow_C::Txt_Value' has a wrong offset!");
static_assert(offsetof(UWIDGET_EffectRow_C, Effect) == 0x000500, "Member 'UWIDGET_EffectRow_C::Effect' has a wrong offset!");

}

