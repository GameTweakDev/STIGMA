#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: Popup_BattleStore_New

#include "Basic.hpp"

#include "Popup_BattleStore_New_classes.hpp"
#include "Popup_BattleStore_New_parameters.hpp"


namespace SDK
{

// Function Popup_BattleStore_New.Popup_BattleStore_New_C.BndEvt__Popup_BattleStore_Temp_Ctrl_PopupTop_K2Node_ComponentBoundEvent_0_OnClickClose__DelegateSignature
// (BlueprintEvent)

void UPopup_BattleStore_New_C::BndEvt__Popup_BattleStore_Temp_Ctrl_PopupTop_K2Node_ComponentBoundEvent_0_OnClickClose__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Popup_BattleStore_New_C", "BndEvt__Popup_BattleStore_Temp_Ctrl_PopupTop_K2Node_ComponentBoundEvent_0_OnClickClose__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Popup_BattleStore_New.Popup_BattleStore_New_C.BndEvt__Popup_BattleStore_Temp_UI_BattleStore_Money_K2Node_ComponentBoundEvent_1_OnMoneyChanged__DelegateSignature
// (BlueprintEvent)

void UPopup_BattleStore_New_C::BndEvt__Popup_BattleStore_Temp_UI_BattleStore_Money_K2Node_ComponentBoundEvent_1_OnMoneyChanged__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Popup_BattleStore_New_C", "BndEvt__Popup_BattleStore_Temp_UI_BattleStore_Money_K2Node_ComponentBoundEvent_1_OnMoneyChanged__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Popup_BattleStore_New.Popup_BattleStore_New_C.ExecuteUbergraph_Popup_BattleStore_New
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPopup_BattleStore_New_C::ExecuteUbergraph_Popup_BattleStore_New(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Popup_BattleStore_New_C", "ExecuteUbergraph_Popup_BattleStore_New");

	Params::Popup_BattleStore_New_C_ExecuteUbergraph_Popup_BattleStore_New Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Popup_BattleStore_New.Popup_BattleStore_New_C.UpdateMasterDetail
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   _chara_idx                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGunPreset                       _gun_preset                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

void UPopup_BattleStore_New_C::UpdateMasterDetail(int32 _chara_idx, const struct FGunPreset& _gun_preset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Popup_BattleStore_New_C", "UpdateMasterDetail");

	Params::Popup_BattleStore_New_C_UpdateMasterDetail Parms{};

	Parms._chara_idx = _chara_idx;
	Parms._gun_preset = std::move(_gun_preset);

	UObject::ProcessEvent(Func, &Parms);
}

}

