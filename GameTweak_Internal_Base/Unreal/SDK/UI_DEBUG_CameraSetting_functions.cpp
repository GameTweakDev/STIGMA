#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: UI_DEBUG_CameraSetting

#include "Basic.hpp"

#include "UI_DEBUG_CameraSetting_classes.hpp"
#include "UI_DEBUG_CameraSetting_parameters.hpp"


namespace SDK
{

// Function UI_DEBUG_CameraSetting.UI_DEBUG_CameraSetting_C.Adjust1PVMeshOffset
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_DEBUG_CameraSetting_C::Adjust1PVMeshOffset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_DEBUG_CameraSetting_C", "Adjust1PVMeshOffset");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_DEBUG_CameraSetting.UI_DEBUG_CameraSetting_C.BIND_Adjust1PVMeshOffset_Visibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UUI_DEBUG_CameraSetting_C::BIND_Adjust1PVMeshOffset_Visibility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_DEBUG_CameraSetting_C", "BIND_Adjust1PVMeshOffset_Visibility");

	Params::UI_DEBUG_CameraSetting_C_BIND_Adjust1PVMeshOffset_Visibility Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function UI_DEBUG_CameraSetting.UI_DEBUG_CameraSetting_C.BndEvt__UI_DEBUG_CameraSetting_BTN_Adjust1PVMeshOffset_K2Node_ComponentBoundEvent_3_DM_OnSelectEnd__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UAnimatableWidget*                _widget                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                                    _select                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_DEBUG_CameraSetting_C::BndEvt__UI_DEBUG_CameraSetting_BTN_Adjust1PVMeshOffset_K2Node_ComponentBoundEvent_3_DM_OnSelectEnd__DelegateSignature(class UAnimatableWidget* _widget, bool _select)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_DEBUG_CameraSetting_C", "BndEvt__UI_DEBUG_CameraSetting_BTN_Adjust1PVMeshOffset_K2Node_ComponentBoundEvent_3_DM_OnSelectEnd__DelegateSignature");

	Params::UI_DEBUG_CameraSetting_C_BndEvt__UI_DEBUG_CameraSetting_BTN_Adjust1PVMeshOffset_K2Node_ComponentBoundEvent_3_DM_OnSelectEnd__DelegateSignature Parms{};

	Parms._widget = _widget;
	Parms._select = _select;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_DEBUG_CameraSetting.UI_DEBUG_CameraSetting_C.BndEvt__UI_DEBUG_CameraSetting_BTN_Close_K2Node_ComponentBoundEvent_0_DM_OnSelectEnd__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UAnimatableWidget*                _widget                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                                    _select                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_DEBUG_CameraSetting_C::BndEvt__UI_DEBUG_CameraSetting_BTN_Close_K2Node_ComponentBoundEvent_0_DM_OnSelectEnd__DelegateSignature(class UAnimatableWidget* _widget, bool _select)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_DEBUG_CameraSetting_C", "BndEvt__UI_DEBUG_CameraSetting_BTN_Close_K2Node_ComponentBoundEvent_0_DM_OnSelectEnd__DelegateSignature");

	Params::UI_DEBUG_CameraSetting_C_BndEvt__UI_DEBUG_CameraSetting_BTN_Close_K2Node_ComponentBoundEvent_0_DM_OnSelectEnd__DelegateSignature Parms{};

	Parms._widget = _widget;
	Parms._select = _select;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_DEBUG_CameraSetting.UI_DEBUG_CameraSetting_C.ChangeFOV
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  _offset                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_DEBUG_CameraSetting_C::ChangeFOV(double _offset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_DEBUG_CameraSetting_C", "ChangeFOV");

	Params::UI_DEBUG_CameraSetting_C_ChangeFOV Parms{};

	Parms._offset = _offset;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_DEBUG_CameraSetting.UI_DEBUG_CameraSetting_C.ExecuteUbergraph_UI_DEBUG_CameraSetting
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_DEBUG_CameraSetting_C::ExecuteUbergraph_UI_DEBUG_CameraSetting(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_DEBUG_CameraSetting_C", "ExecuteUbergraph_UI_DEBUG_CameraSetting");

	Params::UI_DEBUG_CameraSetting_C_ExecuteUbergraph_UI_DEBUG_CameraSetting Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_DEBUG_CameraSetting.UI_DEBUG_CameraSetting_C.Move
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                        _offset                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_DEBUG_CameraSetting_C::Move(const struct FVector2D& _offset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_DEBUG_CameraSetting_C", "Move");

	Params::UI_DEBUG_CameraSetting_C_Move Parms{};

	Parms._offset = std::move(_offset);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_DEBUG_CameraSetting.UI_DEBUG_CameraSetting_C.OnHidePopup
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UUI_DEBUG_CameraSetting_C::OnHidePopup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_DEBUG_CameraSetting_C", "OnHidePopup");

	Params::UI_DEBUG_CameraSetting_C_OnHidePopup Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function UI_DEBUG_CameraSetting.UI_DEBUG_CameraSetting_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent                        InKeyEvent                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UUI_DEBUG_CameraSetting_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_DEBUG_CameraSetting_C", "OnKeyDown");

	Params::UI_DEBUG_CameraSetting_C_OnKeyDown Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InKeyEvent = std::move(InKeyEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function UI_DEBUG_CameraSetting.UI_DEBUG_CameraSetting_C.OnShowPopup
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UUI_DEBUG_CameraSetting_C::OnShowPopup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_DEBUG_CameraSetting_C", "OnShowPopup");

	Params::UI_DEBUG_CameraSetting_C_OnShowPopup Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function UI_DEBUG_CameraSetting.UI_DEBUG_CameraSetting_C.OnTick
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  _delta                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_DEBUG_CameraSetting_C::OnTick(double _delta)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_DEBUG_CameraSetting_C", "OnTick");

	Params::UI_DEBUG_CameraSetting_C_OnTick Parms{};

	Parms._delta = _delta;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_DEBUG_CameraSetting.UI_DEBUG_CameraSetting_C.Save
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_DEBUG_CameraSetting_C::Save()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_DEBUG_CameraSetting_C", "Save");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_DEBUG_CameraSetting.UI_DEBUG_CameraSetting_C.SetCurrentDistance
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  _new_dist                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_DEBUG_CameraSetting_C::SetCurrentDistance(double _new_dist)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_DEBUG_CameraSetting_C", "SetCurrentDistance");

	Params::UI_DEBUG_CameraSetting_C_SetCurrentDistance Parms{};

	Parms._new_dist = _new_dist;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_DEBUG_CameraSetting.UI_DEBUG_CameraSetting_C.SetCurrentFOV
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  _new_fov                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_DEBUG_CameraSetting_C::SetCurrentFOV(double _new_fov)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_DEBUG_CameraSetting_C", "SetCurrentFOV");

	Params::UI_DEBUG_CameraSetting_C_SetCurrentFOV Parms{};

	Parms._new_fov = _new_fov;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_DEBUG_CameraSetting.UI_DEBUG_CameraSetting_C.SetCurrentLocation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          _new_value                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_DEBUG_CameraSetting_C::SetCurrentLocation(const struct FVector& _new_value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_DEBUG_CameraSetting_C", "SetCurrentLocation");

	Params::UI_DEBUG_CameraSetting_C_SetCurrentLocation Parms{};

	Parms._new_value = std::move(_new_value);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_DEBUG_CameraSetting.UI_DEBUG_CameraSetting_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_DEBUG_CameraSetting_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_DEBUG_CameraSetting_C", "Tick");

	Params::UI_DEBUG_CameraSetting_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_DEBUG_CameraSetting.UI_DEBUG_CameraSetting_C.ToggleMode
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_DEBUG_CameraSetting_C::ToggleMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_DEBUG_CameraSetting_C", "ToggleMode");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_DEBUG_CameraSetting.UI_DEBUG_CameraSetting_C.ToggleTarget
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_DEBUG_CameraSetting_C::ToggleTarget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_DEBUG_CameraSetting_C", "ToggleTarget");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_DEBUG_CameraSetting.UI_DEBUG_CameraSetting_C.UpdateInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_DEBUG_CameraSetting_C::UpdateInfo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_DEBUG_CameraSetting_C", "UpdateInfo");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_DEBUG_CameraSetting.UI_DEBUG_CameraSetting_C.Zoom
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Offset                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_DEBUG_CameraSetting_C::Zoom(double Offset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_DEBUG_CameraSetting_C", "Zoom");

	Params::UI_DEBUG_CameraSetting_C_Zoom Parms{};

	Parms.Offset = Offset;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_DEBUG_CameraSetting.UI_DEBUG_CameraSetting_C.GetChara
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ACharaBase*                       _chara                                                 (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UUI_DEBUG_CameraSetting_C::GetChara(class ACharaBase** _chara) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_DEBUG_CameraSetting_C", "GetChara");

	Params::UI_DEBUG_CameraSetting_C_GetChara Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (_chara != nullptr)
		*_chara = Parms._chara;
}


// Function UI_DEBUG_CameraSetting.UI_DEBUG_CameraSetting_C.GetConfig
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FConfig_Camera                   _Config                                                (Parm, OutParm)

void UUI_DEBUG_CameraSetting_C::GetConfig(struct FConfig_Camera* _Config) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_DEBUG_CameraSetting_C", "GetConfig");

	Params::UI_DEBUG_CameraSetting_C_GetConfig Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (_Config != nullptr)
		*_Config = std::move(Parms._Config);
}


// Function UI_DEBUG_CameraSetting.UI_DEBUG_CameraSetting_C.GetCurrentDistance
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// double                                  _dist                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_DEBUG_CameraSetting_C::GetCurrentDistance(double* _dist) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_DEBUG_CameraSetting_C", "GetCurrentDistance");

	Params::UI_DEBUG_CameraSetting_C_GetCurrentDistance Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (_dist != nullptr)
		*_dist = Parms._dist;
}


// Function UI_DEBUG_CameraSetting.UI_DEBUG_CameraSetting_C.GetCurrentFOV
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// double                                  _FOV                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_DEBUG_CameraSetting_C::GetCurrentFOV(double* _FOV) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_DEBUG_CameraSetting_C", "GetCurrentFOV");

	Params::UI_DEBUG_CameraSetting_C_GetCurrentFOV Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (_FOV != nullptr)
		*_FOV = Parms._FOV;
}


// Function UI_DEBUG_CameraSetting.UI_DEBUG_CameraSetting_C.GetCurrentLocation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                          _loc                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_DEBUG_CameraSetting_C::GetCurrentLocation(struct FVector* _loc) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_DEBUG_CameraSetting_C", "GetCurrentLocation");

	Params::UI_DEBUG_CameraSetting_C_GetCurrentLocation Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (_loc != nullptr)
		*_loc = std::move(Parms._loc);
}


// Function UI_DEBUG_CameraSetting.UI_DEBUG_CameraSetting_C.GetGun
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AGunBase*                         _gun                                                   (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UUI_DEBUG_CameraSetting_C::GetGun(class AGunBase** _gun) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_DEBUG_CameraSetting_C", "GetGun");

	Params::UI_DEBUG_CameraSetting_C_GetGun Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (_gun != nullptr)
		*_gun = Parms._gun;
}

}

