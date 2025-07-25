#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: Ctrl_RadioButton

#include "Basic.hpp"

#include "Ctrl_RadioButton_classes.hpp"
#include "Ctrl_RadioButton_parameters.hpp"


namespace SDK
{

// Function Ctrl_RadioButton.Ctrl_RadioButton_C.BndEvt__Ctrl_RadioButton_BTN_Body_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UCtrl_RadioButton_C::BndEvt__Ctrl_RadioButton_BTN_Body_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Ctrl_RadioButton_C", "BndEvt__Ctrl_RadioButton_BTN_Body_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Ctrl_RadioButton.Ctrl_RadioButton_C.BndEvt__Ctrl_RadioButton_BTN_Body_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UCtrl_RadioButton_C::BndEvt__Ctrl_RadioButton_BTN_Body_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Ctrl_RadioButton_C", "BndEvt__Ctrl_RadioButton_BTN_Body_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Ctrl_RadioButton.Ctrl_RadioButton_C.Config
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             _id                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                      _selected_text_color                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FSlateColor                      _not_selected_text_color                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FText                             _text                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FVector2D                        _min_size                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TDelegate<void(class FName _id)>        _on_click                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)

void UCtrl_RadioButton_C::Config(class FName _id, struct FSlateColor& _selected_text_color, struct FSlateColor& _not_selected_text_color, const class FText& _text, const struct FVector2D& _min_size, const TDelegate<void(class FName _id)>& _on_click)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Ctrl_RadioButton_C", "Config");

	Params::Ctrl_RadioButton_C_Config Parms{};

	Parms._id = _id;
	Parms._selected_text_color = std::move(_selected_text_color);
	Parms._not_selected_text_color = std::move(_not_selected_text_color);
	Parms._text = std::move(_text);
	Parms._min_size = std::move(_min_size);
	Parms._on_click = _on_click;

	UObject::ProcessEvent(Func, &Parms);

	_selected_text_color = std::move(Parms._selected_text_color);
	_not_selected_text_color = std::move(Parms._not_selected_text_color);
}


// Function Ctrl_RadioButton.Ctrl_RadioButton_C.ExecuteUbergraph_Ctrl_RadioButton
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCtrl_RadioButton_C::ExecuteUbergraph_Ctrl_RadioButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Ctrl_RadioButton_C", "ExecuteUbergraph_Ctrl_RadioButton");

	Params::Ctrl_RadioButton_C_ExecuteUbergraph_Ctrl_RadioButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Ctrl_RadioButton.Ctrl_RadioButton_C.OnClick__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             _id                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCtrl_RadioButton_C::OnClick__DelegateSignature(class FName _id)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Ctrl_RadioButton_C", "OnClick__DelegateSignature");

	Params::Ctrl_RadioButton_C_OnClick__DelegateSignature Parms{};

	Parms._id = _id;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Ctrl_RadioButton.Ctrl_RadioButton_C.OnEVENT_Select_End
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    _selected                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCtrl_RadioButton_C::OnEVENT_Select_End(bool _selected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Ctrl_RadioButton_C", "OnEVENT_Select_End");

	Params::Ctrl_RadioButton_C_OnEVENT_Select_End Parms{};

	Parms._selected = _selected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Ctrl_RadioButton.Ctrl_RadioButton_C.OnHover__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UCtrl_RadioButton_C::OnHover__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Ctrl_RadioButton_C", "OnHover__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Ctrl_RadioButton.Ctrl_RadioButton_C.OnSynchronizeProperties
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UCtrl_RadioButton_C::OnSynchronizeProperties()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Ctrl_RadioButton_C", "OnSynchronizeProperties");

	Params::Ctrl_RadioButton_C_OnSynchronizeProperties Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function Ctrl_RadioButton.Ctrl_RadioButton_C.ProcOnClick
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             _id                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCtrl_RadioButton_C::ProcOnClick(class FName _id)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Ctrl_RadioButton_C", "ProcOnClick");

	Params::Ctrl_RadioButton_C_ProcOnClick Parms{};

	Parms._id = _id;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Ctrl_RadioButton.Ctrl_RadioButton_C.SelectIfMatchedID
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             _id                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCtrl_RadioButton_C::SelectIfMatchedID(class FName _id)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Ctrl_RadioButton_C", "SelectIfMatchedID");

	Params::Ctrl_RadioButton_C_SelectIfMatchedID Parms{};

	Parms._id = _id;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Ctrl_RadioButton.Ctrl_RadioButton_C.SetFont
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateFontInfo                   _Font                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

void UCtrl_RadioButton_C::SetFont(struct FSlateFontInfo& _Font)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Ctrl_RadioButton_C", "SetFont");

	Params::Ctrl_RadioButton_C_SetFont Parms{};

	Parms._Font = std::move(_Font);

	UObject::ProcessEvent(Func, &Parms);

	_Font = std::move(Parms._Font);
}


// Function Ctrl_RadioButton.Ctrl_RadioButton_C.UpdateTextColor
// (Public, BlueprintCallable, BlueprintEvent)

void UCtrl_RadioButton_C::UpdateTextColor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Ctrl_RadioButton_C", "UpdateTextColor");

	UObject::ProcessEvent(Func, nullptr);
}

}

