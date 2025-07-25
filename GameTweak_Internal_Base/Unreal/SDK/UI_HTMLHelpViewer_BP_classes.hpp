#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: UI_HTMLHelpViewer_BP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Stigma_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_HTMLHelpViewer_BP.UI_HTMLHelpViewer_BP_C
// 0x0030 (0x05A0 - 0x0570)
class UUI_HTMLHelpViewer_BP_C final : public UUI_HTMLHelpViewer
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0570(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWebBrowser*                            _WebBrowser;                                       // 0x0578(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCtrl_PopupTop_C*                       Ctrl_PopupTop;                                     // 0x0580(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   URL;                                               // 0x0588(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)

public:
	void BndEvt__UI_HTMLHelpViewer_BP_Ctrl_PopupTop_K2Node_ComponentBoundEvent_1_OnClickClose__DelegateSignature();
	void Construct();
	void ExecuteUbergraph_UI_HTMLHelpViewer_BP(int32 EntryPoint);
	bool OpenHelp(const class FText& _url);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_HTMLHelpViewer_BP_C">();
	}
	static class UUI_HTMLHelpViewer_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_HTMLHelpViewer_BP_C>();
	}
};
static_assert(alignof(UUI_HTMLHelpViewer_BP_C) == 0x000008, "Wrong alignment on UUI_HTMLHelpViewer_BP_C");
static_assert(sizeof(UUI_HTMLHelpViewer_BP_C) == 0x0005A0, "Wrong size on UUI_HTMLHelpViewer_BP_C");
static_assert(offsetof(UUI_HTMLHelpViewer_BP_C, UberGraphFrame) == 0x000570, "Member 'UUI_HTMLHelpViewer_BP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_HTMLHelpViewer_BP_C, _WebBrowser) == 0x000578, "Member 'UUI_HTMLHelpViewer_BP_C::_WebBrowser' has a wrong offset!");
static_assert(offsetof(UUI_HTMLHelpViewer_BP_C, Ctrl_PopupTop) == 0x000580, "Member 'UUI_HTMLHelpViewer_BP_C::Ctrl_PopupTop' has a wrong offset!");
static_assert(offsetof(UUI_HTMLHelpViewer_BP_C, URL) == 0x000588, "Member 'UUI_HTMLHelpViewer_BP_C::URL' has a wrong offset!");

}

