#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: Ctrl_Print_Text

#include "Basic.hpp"

#include "Ctrl_Print_Text_classes.hpp"
#include "Ctrl_Print_Text_parameters.hpp"


namespace SDK
{

// Function Ctrl_Print_Text.Ctrl_Print_Text_C.OnSynchronizeProperties
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UCtrl_Print_Text_C::OnSynchronizeProperties()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Ctrl_Print_Text_C", "OnSynchronizeProperties");

	Params::Ctrl_Print_Text_C_OnSynchronizeProperties Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function Ctrl_Print_Text.Ctrl_Print_Text_C.SetText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             _text                                                  (BlueprintVisible, BlueprintReadOnly, Parm)

void UCtrl_Print_Text_C::SetText(const class FText& _text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Ctrl_Print_Text_C", "SetText");

	Params::Ctrl_Print_Text_C_SetText Parms{};

	Parms._text = std::move(_text);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Ctrl_Print_Text.Ctrl_Print_Text_C.SetTextFont
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateFontInfo                   _font_info                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UCtrl_Print_Text_C::SetTextFont(const struct FSlateFontInfo& _font_info)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Ctrl_Print_Text_C", "SetTextFont");

	Params::Ctrl_Print_Text_C_SetTextFont Parms{};

	Parms._font_info = std::move(_font_info);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Ctrl_Print_Text.Ctrl_Print_Text_C.SetTextFontSize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  _font_size                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCtrl_Print_Text_C::SetTextFontSize(double _font_size)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Ctrl_Print_Text_C", "SetTextFontSize");

	Params::Ctrl_Print_Text_C_SetTextFontSize Parms{};

	Parms._font_size = _font_size;

	UObject::ProcessEvent(Func, &Parms);
}

}

