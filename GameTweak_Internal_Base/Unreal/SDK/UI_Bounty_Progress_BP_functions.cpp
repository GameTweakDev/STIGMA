#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: UI_Bounty_Progress_BP

#include "Basic.hpp"

#include "UI_Bounty_Progress_BP_classes.hpp"
#include "UI_Bounty_Progress_BP_parameters.hpp"


namespace SDK
{

// Function UI_Bounty_Progress_BP.UI_Bounty_Progress_BP_C.CancelTimer
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EBountyActionType                       _bounty_action_type                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    _hide_widget                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Bounty_Progress_BP_C::CancelTimer(EBountyActionType _bounty_action_type, const bool _hide_widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Bounty_Progress_BP_C", "CancelTimer");

	Params::UI_Bounty_Progress_BP_C_CancelTimer Parms{};

	Parms._bounty_action_type = _bounty_action_type;
	Parms._hide_widget = _hide_widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Bounty_Progress_BP.UI_Bounty_Progress_BP_C.DriveTimer
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   _delta                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Bounty_Progress_BP_C::DriveTimer(float _delta)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Bounty_Progress_BP_C", "DriveTimer");

	Params::UI_Bounty_Progress_BP_C_DriveTimer Parms{};

	Parms._delta = _delta;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Bounty_Progress_BP.UI_Bounty_Progress_BP_C.ExecuteUbergraph_UI_Bounty_Progress_BP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Bounty_Progress_BP_C::ExecuteUbergraph_UI_Bounty_Progress_BP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Bounty_Progress_BP_C", "ExecuteUbergraph_UI_Bounty_Progress_BP");

	Params::UI_Bounty_Progress_BP_C_ExecuteUbergraph_UI_Bounty_Progress_BP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Bounty_Progress_BP.UI_Bounty_Progress_BP_C.ForceTimer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Current_time                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Max_time                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Bounty_Progress_BP_C::ForceTimer(double Current_time, double Max_time)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Bounty_Progress_BP_C", "ForceTimer");

	Params::UI_Bounty_Progress_BP_C_ForceTimer Parms{};

	Parms.Current_time = Current_time;
	Parms.Max_time = Max_time;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Bounty_Progress_BP.UI_Bounty_Progress_BP_C.Get_IMG_Icon_Brush
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FSlateBrush UUI_Bounty_Progress_BP_C::Get_IMG_Icon_Brush()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Bounty_Progress_BP_C", "Get_IMG_Icon_Brush");

	Params::UI_Bounty_Progress_BP_C_Get_IMG_Icon_Brush Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function UI_Bounty_Progress_BP.UI_Bounty_Progress_BP_C.Get_TXT_Interation_Text
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UUI_Bounty_Progress_BP_C::Get_TXT_Interation_Text()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Bounty_Progress_BP_C", "Get_TXT_Interation_Text");

	Params::UI_Bounty_Progress_BP_C_Get_TXT_Interation_Text Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function UI_Bounty_Progress_BP.UI_Bounty_Progress_BP_C.GetSafeFX
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FSlateBrush UUI_Bounty_Progress_BP_C::GetSafeFX()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Bounty_Progress_BP_C", "GetSafeFX");

	Params::UI_Bounty_Progress_BP_C_GetSafeFX Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function UI_Bounty_Progress_BP.UI_Bounty_Progress_BP_C.OnSynchronizeProperties
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UUI_Bounty_Progress_BP_C::OnSynchronizeProperties()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Bounty_Progress_BP_C", "OnSynchronizeProperties");

	Params::UI_Bounty_Progress_BP_C_OnSynchronizeProperties Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function UI_Bounty_Progress_BP.UI_Bounty_Progress_BP_C.OnTick
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  _delta                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Bounty_Progress_BP_C::OnTick(double _delta)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Bounty_Progress_BP_C", "OnTick");

	Params::UI_Bounty_Progress_BP_C_OnTick Parms{};

	Parms._delta = _delta;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Bounty_Progress_BP.UI_Bounty_Progress_BP_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Bounty_Progress_BP_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Bounty_Progress_BP_C", "PreConstruct");

	Params::UI_Bounty_Progress_BP_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Bounty_Progress_BP.UI_Bounty_Progress_BP_C.SetGettering
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   _Amount                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Bounty_Progress_BP_C::SetGettering(int32 _Amount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Bounty_Progress_BP_C", "SetGettering");

	Params::UI_Bounty_Progress_BP_C_SetGettering Parms{};

	Parms._Amount = _Amount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Bounty_Progress_BP.UI_Bounty_Progress_BP_C.StartTimer
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EBountyActionType                       _bounty_action_type                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   _start_time                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   _max_time                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    _reverse                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TDelegate<void(bool _end_success)>      _proc                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)

void UUI_Bounty_Progress_BP_C::StartTimer(EBountyActionType _bounty_action_type, float _start_time, float _max_time, bool _reverse, const TDelegate<void(bool _end_success)>& _proc)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Bounty_Progress_BP_C", "StartTimer");

	Params::UI_Bounty_Progress_BP_C_StartTimer Parms{};

	Parms._bounty_action_type = _bounty_action_type;
	Parms._start_time = _start_time;
	Parms._max_time = _max_time;
	Parms._reverse = _reverse;
	Parms._proc = _proc;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Bounty_Progress_BP.UI_Bounty_Progress_BP_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Bounty_Progress_BP_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Bounty_Progress_BP_C", "Tick");

	Params::UI_Bounty_Progress_BP_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Bounty_Progress_BP.UI_Bounty_Progress_BP_C.UpdateGatheringInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_Bounty_Progress_BP_C::UpdateGatheringInfo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Bounty_Progress_BP_C", "UpdateGatheringInfo");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Bounty_Progress_BP.UI_Bounty_Progress_BP_C.UpdateProgressColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_Bounty_Progress_BP_C::UpdateProgressColor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Bounty_Progress_BP_C", "UpdateProgressColor");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Bounty_Progress_BP.UI_Bounty_Progress_BP_C.UpdateWidget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_Bounty_Progress_BP_C::UpdateWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Bounty_Progress_BP_C", "UpdateWidget");

	UObject::ProcessEvent(Func, nullptr);
}

}

