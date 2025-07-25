#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: WIDGET_PickedMaster

#include "Basic.hpp"

#include "WIDGET_PickedMaster_classes.hpp"
#include "WIDGET_PickedMaster_parameters.hpp"


namespace SDK
{

// Function WIDGET_PickedMaster.WIDGET_PickedMaster_C.UpdateStatics
// (Public, BlueprintCallable, BlueprintEvent)

void UWIDGET_PickedMaster_C::UpdateStatics()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WIDGET_PickedMaster_C", "UpdateStatics");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WIDGET_PickedMaster.WIDGET_PickedMaster_C.UpdateCharacter
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWIDGET_PickedMaster_C::UpdateCharacter()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WIDGET_PickedMaster_C", "UpdateCharacter");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WIDGET_PickedMaster.WIDGET_PickedMaster_C.SetCharaType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ECharaType                              _chara_type                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWIDGET_PickedMaster_C::SetCharaType(ECharaType _chara_type)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WIDGET_PickedMaster_C", "SetCharaType");

	Params::WIDGET_PickedMaster_C_SetCharaType Parms{};

	Parms._chara_type = _chara_type;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WIDGET_PickedMaster.WIDGET_PickedMaster_C.OnSynchronizeProperties
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UWIDGET_PickedMaster_C::OnSynchronizeProperties()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WIDGET_PickedMaster_C", "OnSynchronizeProperties");

	Params::WIDGET_PickedMaster_C_OnSynchronizeProperties Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WIDGET_PickedMaster.WIDGET_PickedMaster_C.OnChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWIDGET_PickedMaster_C::OnChanged__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WIDGET_PickedMaster_C", "OnChanged__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WIDGET_PickedMaster.WIDGET_PickedMaster_C.IsPicked
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    _is_picked                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWIDGET_PickedMaster_C::IsPicked(bool* _is_picked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WIDGET_PickedMaster_C", "IsPicked");

	Params::WIDGET_PickedMaster_C_IsPicked Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (_is_picked != nullptr)
		*_is_picked = Parms._is_picked;
}


// Function WIDGET_PickedMaster.WIDGET_PickedMaster_C.GetCharaType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ECharaType                              _chara_type                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWIDGET_PickedMaster_C::GetCharaType(ECharaType* _chara_type)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WIDGET_PickedMaster_C", "GetCharaType");

	Params::WIDGET_PickedMaster_C_GetCharaType Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (_chara_type != nullptr)
		*_chara_type = Parms._chara_type;
}


// Function WIDGET_PickedMaster.WIDGET_PickedMaster_C.ExecuteUbergraph_WIDGET_PickedMaster
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWIDGET_PickedMaster_C::ExecuteUbergraph_WIDGET_PickedMaster(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WIDGET_PickedMaster_C", "ExecuteUbergraph_WIDGET_PickedMaster");

	Params::WIDGET_PickedMaster_C_ExecuteUbergraph_WIDGET_PickedMaster Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WIDGET_PickedMaster.WIDGET_PickedMaster_C.BndEvt__WIDGET_PickedMaster_BTN_Delete_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWIDGET_PickedMaster_C::BndEvt__WIDGET_PickedMaster_BTN_Delete_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WIDGET_PickedMaster_C", "BndEvt__WIDGET_PickedMaster_BTN_Delete_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}

}

