#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: HUD_ScopePanel

#include "Basic.hpp"

#include "Stigma_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass HUD_ScopePanel.HUD_ScopePanel_C
// 0x0000 (0x0510 - 0x0510)
class UHUD_ScopePanel_C final : public UHUD_ScopePanel
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"HUD_ScopePanel_C">();
	}
	static class UHUD_ScopePanel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHUD_ScopePanel_C>();
	}
};
static_assert(alignof(UHUD_ScopePanel_C) == 0x000008, "Wrong alignment on UHUD_ScopePanel_C");
static_assert(sizeof(UHUD_ScopePanel_C) == 0x000510, "Wrong size on UHUD_ScopePanel_C");

}

