#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: Ctrl_ItemDetailDesc

#include "Basic.hpp"

#include "Stigma_structs.hpp"
#include "BPGLib_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Ctrl_ItemDetailDesc.Ctrl_ItemDetailDesc_C
// 0x0058 (0x0548 - 0x04F0)
class UCtrl_ItemDetailDesc_C final : public UPreviewableWidget
{
public:
	class UTextBlock*                             TXT_Desc;                                          // 0x04F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Txt_Title;                                         // 0x04F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox;                                       // 0x0500(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   Title;                                             // 0x0508(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   Desc;                                              // 0x0520(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FItemID                                Item_ID;                                           // 0x0538(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void Init(const class FText& _Title, const class FText& _Desc);
	bool OnSynchronizeProperties();
	void UpdateUI();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Ctrl_ItemDetailDesc_C">();
	}
	static class UCtrl_ItemDetailDesc_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCtrl_ItemDetailDesc_C>();
	}
};
static_assert(alignof(UCtrl_ItemDetailDesc_C) == 0x000008, "Wrong alignment on UCtrl_ItemDetailDesc_C");
static_assert(sizeof(UCtrl_ItemDetailDesc_C) == 0x000548, "Wrong size on UCtrl_ItemDetailDesc_C");
static_assert(offsetof(UCtrl_ItemDetailDesc_C, TXT_Desc) == 0x0004F0, "Member 'UCtrl_ItemDetailDesc_C::TXT_Desc' has a wrong offset!");
static_assert(offsetof(UCtrl_ItemDetailDesc_C, Txt_Title) == 0x0004F8, "Member 'UCtrl_ItemDetailDesc_C::Txt_Title' has a wrong offset!");
static_assert(offsetof(UCtrl_ItemDetailDesc_C, VerticalBox) == 0x000500, "Member 'UCtrl_ItemDetailDesc_C::VerticalBox' has a wrong offset!");
static_assert(offsetof(UCtrl_ItemDetailDesc_C, Title) == 0x000508, "Member 'UCtrl_ItemDetailDesc_C::Title' has a wrong offset!");
static_assert(offsetof(UCtrl_ItemDetailDesc_C, Desc) == 0x000520, "Member 'UCtrl_ItemDetailDesc_C::Desc' has a wrong offset!");
static_assert(offsetof(UCtrl_ItemDetailDesc_C, Item_ID) == 0x000538, "Member 'UCtrl_ItemDetailDesc_C::Item_ID' has a wrong offset!");

}

