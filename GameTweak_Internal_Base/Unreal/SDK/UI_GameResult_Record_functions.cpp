#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: UI_GameResult_Record

#include "Basic.hpp"

#include "UI_GameResult_Record_classes.hpp"
#include "UI_GameResult_Record_parameters.hpp"


namespace SDK
{

// Function UI_GameResult_Record.UI_GameResult_Record_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_GameResult_Record_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GameResult_Record_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_GameResult_Record.UI_GameResult_Record_C.ExecuteUbergraph_UI_GameResult_Record
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_GameResult_Record_C::ExecuteUbergraph_UI_GameResult_Record(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GameResult_Record_C", "ExecuteUbergraph_UI_GameResult_Record");

	Params::UI_GameResult_Record_C_ExecuteUbergraph_UI_GameResult_Record Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_GameResult_Record.UI_GameResult_Record_C.Get_ENTRY_LearningPoint_ToolTipWidget
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UUI_GameResult_Record_C::Get_ENTRY_LearningPoint_ToolTipWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GameResult_Record_C", "Get_ENTRY_LearningPoint_ToolTipWidget");

	Params::UI_GameResult_Record_C_Get_ENTRY_LearningPoint_ToolTipWidget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function UI_GameResult_Record.UI_GameResult_Record_C.Init
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBattleDecisionDetail            _result                                                (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FUserBattleResult                _my_result                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UUI_GameResult_Record_C::Init(const struct FBattleDecisionDetail& _result, const struct FUserBattleResult& _my_result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GameResult_Record_C", "Init");

	Params::UI_GameResult_Record_C_Init Parms{};

	Parms._result = std::move(_result);
	Parms._my_result = std::move(_my_result);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_GameResult_Record.UI_GameResult_Record_C.OnUpdateUser
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EUserEvent                              _event                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_GameResult_Record_C::OnUpdateUser(EUserEvent _event)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GameResult_Record_C", "OnUpdateUser");

	Params::UI_GameResult_Record_C_OnUpdateUser Parms{};

	Parms._event = _event;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_GameResult_Record.UI_GameResult_Record_C.SubscribeUpdateUser
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_GameResult_Record_C::SubscribeUpdateUser()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GameResult_Record_C", "SubscribeUpdateUser");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_GameResult_Record.UI_GameResult_Record_C.ToEXPText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                                  _exp_val                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             _exp_txt                                               (Parm, OutParm)

void UUI_GameResult_Record_C::ToEXPText(double _exp_val, class FText* _exp_txt)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GameResult_Record_C", "ToEXPText");

	Params::UI_GameResult_Record_C_ToEXPText Parms{};

	Parms._exp_val = _exp_val;

	UObject::ProcessEvent(Func, &Parms);

	if (_exp_txt != nullptr)
		*_exp_txt = std::move(Parms._exp_txt);
}


// Function UI_GameResult_Record.UI_GameResult_Record_C.UpdateEXP
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_GameResult_Record_C::UpdateEXP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GameResult_Record_C", "UpdateEXP");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_GameResult_Record.UI_GameResult_Record_C.UpdateMap
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_GameResult_Record_C::UpdateMap()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GameResult_Record_C", "UpdateMap");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_GameResult_Record.UI_GameResult_Record_C.UpdateRecord
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_GameResult_Record_C::UpdateRecord()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GameResult_Record_C", "UpdateRecord");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_GameResult_Record.UI_GameResult_Record_C.UpdateUI
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_GameResult_Record_C::UpdateUI()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GameResult_Record_C", "UpdateUI");

	UObject::ProcessEvent(Func, nullptr);
}

}

