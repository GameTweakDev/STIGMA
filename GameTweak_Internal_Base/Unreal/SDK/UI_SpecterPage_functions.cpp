#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: UI_SpecterPage

#include "Basic.hpp"

#include "UI_SpecterPage_classes.hpp"
#include "UI_SpecterPage_parameters.hpp"


namespace SDK
{

// Function UI_SpecterPage.UI_SpecterPage_C.BndEvt__UI_SpecterPage_Panel_Characters_K2Node_ComponentBoundEvent_1_OnCharacterSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// ECharaType                              _chara_type                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_SpecterPage_C::BndEvt__UI_SpecterPage_Panel_Characters_K2Node_ComponentBoundEvent_1_OnCharacterSelected__DelegateSignature(ECharaType _chara_type)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_SpecterPage_C", "BndEvt__UI_SpecterPage_Panel_Characters_K2Node_ComponentBoundEvent_1_OnCharacterSelected__DelegateSignature");

	Params::UI_SpecterPage_C_BndEvt__UI_SpecterPage_Panel_Characters_K2Node_ComponentBoundEvent_1_OnCharacterSelected__DelegateSignature Parms{};

	Parms._chara_type = _chara_type;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_SpecterPage.UI_SpecterPage_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_SpecterPage_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_SpecterPage_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_SpecterPage.UI_SpecterPage_C.DeIntializeEvent
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_SpecterPage_C::DeIntializeEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_SpecterPage_C", "DeIntializeEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_SpecterPage.UI_SpecterPage_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_SpecterPage_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_SpecterPage_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_SpecterPage.UI_SpecterPage_C.ExecuteUbergraph_UI_SpecterPage
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_SpecterPage_C::ExecuteUbergraph_UI_SpecterPage(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_SpecterPage_C", "ExecuteUbergraph_UI_SpecterPage");

	Params::UI_SpecterPage_C_ExecuteUbergraph_UI_SpecterPage Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_SpecterPage.UI_SpecterPage_C.IntializeEvent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_SpecterPage_C::IntializeEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_SpecterPage_C", "IntializeEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_SpecterPage.UI_SpecterPage_C.OnClosePage
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// ELobbyPage                              _next_page                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UUI_SpecterPage_C::OnClosePage(ELobbyPage _next_page)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_SpecterPage_C", "OnClosePage");

	Params::UI_SpecterPage_C_OnClosePage Parms{};

	Parms._next_page = _next_page;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function UI_SpecterPage.UI_SpecterPage_C.OnEVENT_Select_End
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    _selected                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_SpecterPage_C::OnEVENT_Select_End(bool _selected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_SpecterPage_C", "OnEVENT_Select_End");

	Params::UI_SpecterPage_C_OnEVENT_Select_End Parms{};

	Parms._selected = _selected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_SpecterPage.UI_SpecterPage_C.OnEVENT_Show_Start
// (Event, Protected, BlueprintEvent)

void UUI_SpecterPage_C::OnEVENT_Show_Start()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_SpecterPage_C", "OnEVENT_Show_Start");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_SpecterPage.UI_SpecterPage_C.OnOpenPage
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EItemCategory                           _option                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ELobbyPage                              _prev_page                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UUI_SpecterPage_C::OnOpenPage(EItemCategory _option, ELobbyPage _prev_page)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_SpecterPage_C", "OnOpenPage");

	Params::UI_SpecterPage_C_OnOpenPage Parms{};

	Parms._option = _option;
	Parms._prev_page = _prev_page;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function UI_SpecterPage.UI_SpecterPage_C.OnPickChara
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ECharaType                              _chara_type                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_SpecterPage_C::OnPickChara(ECharaType _chara_type)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_SpecterPage_C", "OnPickChara");

	Params::UI_SpecterPage_C_OnPickChara Parms{};

	Parms._chara_type = _chara_type;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_SpecterPage.UI_SpecterPage_C.OnUpdateUser
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EUserEvent                              _event                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_SpecterPage_C::OnUpdateUser(EUserEvent _event)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_SpecterPage_C", "OnUpdateUser");

	Params::UI_SpecterPage_C_OnUpdateUser Parms{};

	Parms._event = _event;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_SpecterPage.UI_SpecterPage_C.SelectChara
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ECharaType                              Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    _only_update_ui                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_SpecterPage_C::SelectChara(ECharaType Item, bool _only_update_ui)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_SpecterPage_C", "SelectChara");

	Params::UI_SpecterPage_C_SelectChara Parms{};

	Parms.Item = Item;
	Parms._only_update_ui = _only_update_ui;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_SpecterPage.UI_SpecterPage_C.ShowZZIZIZIC
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Show                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_SpecterPage_C::ShowZZIZIZIC(bool Show)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_SpecterPage_C", "ShowZZIZIZIC");

	Params::UI_SpecterPage_C_ShowZZIZIZIC Parms{};

	Parms.Show = Show;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_SpecterPage.UI_SpecterPage_C.UpdateEquips
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_SpecterPage_C::UpdateEquips()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_SpecterPage_C", "UpdateEquips");

	UObject::ProcessEvent(Func, nullptr);
}

}

