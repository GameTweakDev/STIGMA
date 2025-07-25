#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: UI_Question_Text

#include "Basic.hpp"

#include "Stigma_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_Question_Text.UI_Question_Text_C
// 0x0008 (0x0578 - 0x0570)
class UUI_Question_Text_C final : public UCtrl_QuestionBase
{
public:
	class UEditableTextBox*                       ED_Text;                                           // 0x0570(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetQuestion(struct FSurveyQuestion& _question);
	struct FSurveyAnswer OnGetAnswer();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_Question_Text_C">();
	}
	static class UUI_Question_Text_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_Question_Text_C>();
	}
};
static_assert(alignof(UUI_Question_Text_C) == 0x000008, "Wrong alignment on UUI_Question_Text_C");
static_assert(sizeof(UUI_Question_Text_C) == 0x000578, "Wrong size on UUI_Question_Text_C");
static_assert(offsetof(UUI_Question_Text_C, ED_Text) == 0x000570, "Member 'UUI_Question_Text_C::ED_Text' has a wrong offset!");

}

