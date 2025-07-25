#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: UI_HUD_CrossHair

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Stigma_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_HUD_CrossHair.UI_HUD_CrossHair_C
// 0x0018 (0x05A0 - 0x0588)
class UUI_HUD_CrossHair_C final : public UHUD_CrossHair
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0588(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UUI_Crosshair_Hit_C*                    UI_Crosshair_Hit;                                  // 0x0590(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       Canvas_Slot;                                       // 0x0598(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

public:
	void Construct();
	void ExecuteUbergraph_UI_HUD_CrossHair(int32 EntryPoint);
	bool OnHit_Local(const struct FHitData& _hit_data);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_HUD_CrossHair_C">();
	}
	static class UUI_HUD_CrossHair_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_HUD_CrossHair_C>();
	}
};
static_assert(alignof(UUI_HUD_CrossHair_C) == 0x000008, "Wrong alignment on UUI_HUD_CrossHair_C");
static_assert(sizeof(UUI_HUD_CrossHair_C) == 0x0005A0, "Wrong size on UUI_HUD_CrossHair_C");
static_assert(offsetof(UUI_HUD_CrossHair_C, UberGraphFrame) == 0x000588, "Member 'UUI_HUD_CrossHair_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_HUD_CrossHair_C, UI_Crosshair_Hit) == 0x000590, "Member 'UUI_HUD_CrossHair_C::UI_Crosshair_Hit' has a wrong offset!");
static_assert(offsetof(UUI_HUD_CrossHair_C, Canvas_Slot) == 0x000598, "Member 'UUI_HUD_CrossHair_C::Canvas_Slot' has a wrong offset!");

}

