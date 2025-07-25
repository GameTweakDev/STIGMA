#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: Popup_Competition

#include "Basic.hpp"

#include "Popup_Competition_classes.hpp"
#include "Popup_Competition_parameters.hpp"


namespace SDK
{

// Function Popup_Competition.Popup_Competition_C.UpdateMyHistory
// (Public, BlueprintCallable, BlueprintEvent)

void UPopup_Competition_C::UpdateMyHistory()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Popup_Competition_C", "UpdateMyHistory");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Popup_Competition.Popup_Competition_C.UpdateFastStartDia
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UPopup_Competition_C::UpdateFastStartDia()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Popup_Competition_C", "UpdateFastStartDia");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Popup_Competition.Popup_Competition_C.UpdateCompetitionInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UPopup_Competition_C::UpdateCompetitionInfo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Popup_Competition_C", "UpdateCompetitionInfo");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Popup_Competition.Popup_Competition_C.Update
// (Public, BlueprintCallable, BlueprintEvent)

void UPopup_Competition_C::Update()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Popup_Competition_C", "Update");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Popup_Competition.Popup_Competition_C.ShowRanking_Rank
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ECompetitionType                        _competition_type                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPopup_Competition_C::ShowRanking_Rank(ECompetitionType _competition_type)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Popup_Competition_C", "ShowRanking_Rank");

	Params::Popup_Competition_C_ShowRanking_Rank Parms{};

	Parms._competition_type = _competition_type;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Popup_Competition.Popup_Competition_C.ShowRanking_Info
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ECompetitionType                        _competition_type                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPopup_Competition_C::ShowRanking_Info(ECompetitionType _competition_type)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Popup_Competition_C", "ShowRanking_Info");

	Params::Popup_Competition_C_ShowRanking_Info Parms{};

	Parms._competition_type = _competition_type;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Popup_Competition.Popup_Competition_C.ShowGuide
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UPopup_Competition_C::ShowGuide()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Popup_Competition_C", "ShowGuide");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Popup_Competition.Popup_Competition_C.SetVisibilityStatus
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   _cnt                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOverlay*                         _visible_widget                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UTextBlock*                       _text_widget                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                                    _force_visible                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPopup_Competition_C::SetVisibilityStatus(int32 _cnt, class UOverlay* _visible_widget, class UTextBlock* _text_widget, bool _force_visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Popup_Competition_C", "SetVisibilityStatus");

	Params::Popup_Competition_C_SetVisibilityStatus Parms{};

	Parms._cnt = _cnt;
	Parms._visible_widget = _visible_widget;
	Parms._text_widget = _text_widget;
	Parms._force_visible = _force_visible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Popup_Competition.Popup_Competition_C.InitWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UPopup_Competition_C::InitWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Popup_Competition_C", "InitWidget");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Popup_Competition.Popup_Competition_C.ExecuteUbergraph_Popup_Competition
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPopup_Competition_C::ExecuteUbergraph_Popup_Competition(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Popup_Competition_C", "ExecuteUbergraph_Popup_Competition");

	Params::Popup_Competition_C_ExecuteUbergraph_Popup_Competition Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Popup_Competition.Popup_Competition_C.CalcCurrency_OnFastStart
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCurrencyPlain                   Currency                                               (Parm, OutParm)

void UPopup_Competition_C::CalcCurrency_OnFastStart(struct FCurrencyPlain* Currency)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Popup_Competition_C", "CalcCurrency_OnFastStart");

	Params::Popup_Competition_C_CalcCurrency_OnFastStart Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Currency != nullptr)
		*Currency = std::move(Parms.Currency);
}


// Function Popup_Competition.Popup_Competition_C.BndEvt__Popup_Competition_WIDGET_PopupBase_K2Node_ComponentBoundEvent_2_OnClick_GoBack__DelegateSignature
// (BlueprintEvent)

void UPopup_Competition_C::BndEvt__Popup_Competition_WIDGET_PopupBase_K2Node_ComponentBoundEvent_2_OnClick_GoBack__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Popup_Competition_C", "BndEvt__Popup_Competition_WIDGET_PopupBase_K2Node_ComponentBoundEvent_2_OnClick_GoBack__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Popup_Competition.Popup_Competition_C.BndEvt__Popup_Competition_Tab_Hour_K2Node_ComponentBoundEvent_1_OnSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FName                             _id                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPopup_Competition_C::BndEvt__Popup_Competition_Tab_Hour_K2Node_ComponentBoundEvent_1_OnSelected__DelegateSignature(class FName _id)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Popup_Competition_C", "BndEvt__Popup_Competition_Tab_Hour_K2Node_ComponentBoundEvent_1_OnSelected__DelegateSignature");

	Params::Popup_Competition_C_BndEvt__Popup_Competition_Tab_Hour_K2Node_ComponentBoundEvent_1_OnSelected__DelegateSignature Parms{};

	Parms._id = _id;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Popup_Competition.Popup_Competition_C.BndEvt__Popup_Competition_Button_267_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UPopup_Competition_C::BndEvt__Popup_Competition_Button_267_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Popup_Competition_C", "BndEvt__Popup_Competition_Button_267_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Popup_Competition.Popup_Competition_C.BndEvt__Popup_Competition_BTN_Rank_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UPopup_Competition_C::BndEvt__Popup_Competition_BTN_Rank_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Popup_Competition_C", "BndEvt__Popup_Competition_BTN_Rank_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Popup_Competition.Popup_Competition_C.BndEvt__Popup_Competition_BTN_MyRank_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UPopup_Competition_C::BndEvt__Popup_Competition_BTN_MyRank_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Popup_Competition_C", "BndEvt__Popup_Competition_BTN_MyRank_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Popup_Competition.Popup_Competition_C.BndEvt__Popup_Competition_BTN_FastStart_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UPopup_Competition_C::BndEvt__Popup_Competition_BTN_FastStart_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Popup_Competition_C", "BndEvt__Popup_Competition_BTN_FastStart_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Popup_Competition.Popup_Competition_C.BndEvt__Popup_Competition_BTN_Before_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UPopup_Competition_C::BndEvt__Popup_Competition_BTN_Before_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Popup_Competition_C", "BndEvt__Popup_Competition_BTN_Before_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}

}

