#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: Ctrl_DebugStateRow_String

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "BPGLib_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Ctrl_DebugStateRow_String.Ctrl_DebugStateRow_String_C
// 0x0118 (0x0608 - 0x04F0)
class UCtrl_DebugStateRow_String_C final : public UPreviewableWidget
{
public:
	class UTextBlock*                             TXT_String;                                        // 0x04F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Txt_Title;                                         // 0x04F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   Title;                                             // 0x0500(0x0018)(Edit, BlueprintVisible)
	class FText                                   String;                                            // 0x0518(0x0018)(Edit, BlueprintVisible)
	struct FSlateFontInfo                         TitleFont;                                         // 0x0530(0x0058)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FSlateFontInfo                         StringFont;                                        // 0x0588(0x0058)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FSlateColor                            TitleColor;                                        // 0x05E0(0x0014)(Edit, BlueprintVisible)
	struct FSlateColor                            StringColor;                                       // 0x05F4(0x0014)(Edit, BlueprintVisible)

public:
	bool OnSynchronizeProperties();
	void SetString(const class FText& _text);
	void UpdateAll();
	void UpdateFont();
	void UpdateTitle();
	void UpdateValues();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Ctrl_DebugStateRow_String_C">();
	}
	static class UCtrl_DebugStateRow_String_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCtrl_DebugStateRow_String_C>();
	}
};
static_assert(alignof(UCtrl_DebugStateRow_String_C) == 0x000008, "Wrong alignment on UCtrl_DebugStateRow_String_C");
static_assert(sizeof(UCtrl_DebugStateRow_String_C) == 0x000608, "Wrong size on UCtrl_DebugStateRow_String_C");
static_assert(offsetof(UCtrl_DebugStateRow_String_C, TXT_String) == 0x0004F0, "Member 'UCtrl_DebugStateRow_String_C::TXT_String' has a wrong offset!");
static_assert(offsetof(UCtrl_DebugStateRow_String_C, Txt_Title) == 0x0004F8, "Member 'UCtrl_DebugStateRow_String_C::Txt_Title' has a wrong offset!");
static_assert(offsetof(UCtrl_DebugStateRow_String_C, Title) == 0x000500, "Member 'UCtrl_DebugStateRow_String_C::Title' has a wrong offset!");
static_assert(offsetof(UCtrl_DebugStateRow_String_C, String) == 0x000518, "Member 'UCtrl_DebugStateRow_String_C::String' has a wrong offset!");
static_assert(offsetof(UCtrl_DebugStateRow_String_C, TitleFont) == 0x000530, "Member 'UCtrl_DebugStateRow_String_C::TitleFont' has a wrong offset!");
static_assert(offsetof(UCtrl_DebugStateRow_String_C, StringFont) == 0x000588, "Member 'UCtrl_DebugStateRow_String_C::StringFont' has a wrong offset!");
static_assert(offsetof(UCtrl_DebugStateRow_String_C, TitleColor) == 0x0005E0, "Member 'UCtrl_DebugStateRow_String_C::TitleColor' has a wrong offset!");
static_assert(offsetof(UCtrl_DebugStateRow_String_C, StringColor) == 0x0005F4, "Member 'UCtrl_DebugStateRow_String_C::StringColor' has a wrong offset!");

}

