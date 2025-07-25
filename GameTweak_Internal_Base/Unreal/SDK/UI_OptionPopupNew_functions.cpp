#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: UI_OptionPopupNew

#include "Basic.hpp"

#include "UI_OptionPopupNew_classes.hpp"
#include "UI_OptionPopupNew_parameters.hpp"


namespace SDK
{

// Function UI_OptionPopupNew.UI_OptionPopupNew_C.BndEvt__UI_OptionPopupNew_BTN_Apply_K2Node_ComponentBoundEvent_2_DM_OnSelectEnd__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UAnimatableWidget*                _widget                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                                    _select                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_OptionPopupNew_C::BndEvt__UI_OptionPopupNew_BTN_Apply_K2Node_ComponentBoundEvent_2_DM_OnSelectEnd__DelegateSignature(class UAnimatableWidget* _widget, bool _select)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_OptionPopupNew_C", "BndEvt__UI_OptionPopupNew_BTN_Apply_K2Node_ComponentBoundEvent_2_DM_OnSelectEnd__DelegateSignature");

	Params::UI_OptionPopupNew_C_BndEvt__UI_OptionPopupNew_BTN_Apply_K2Node_ComponentBoundEvent_2_DM_OnSelectEnd__DelegateSignature Parms{};

	Parms._widget = _widget;
	Parms._select = _select;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_OptionPopupNew.UI_OptionPopupNew_C.BndEvt__UI_OptionPopupNew_BTN_Reset_K2Node_ComponentBoundEvent_5_DM_OnSelectEnd__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UAnimatableWidget*                _widget                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                                    _select                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_OptionPopupNew_C::BndEvt__UI_OptionPopupNew_BTN_Reset_K2Node_ComponentBoundEvent_5_DM_OnSelectEnd__DelegateSignature(class UAnimatableWidget* _widget, bool _select)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_OptionPopupNew_C", "BndEvt__UI_OptionPopupNew_BTN_Reset_K2Node_ComponentBoundEvent_5_DM_OnSelectEnd__DelegateSignature");

	Params::UI_OptionPopupNew_C_BndEvt__UI_OptionPopupNew_BTN_Reset_K2Node_ComponentBoundEvent_5_DM_OnSelectEnd__DelegateSignature Parms{};

	Parms._widget = _widget;
	Parms._select = _select;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_OptionPopupNew.UI_OptionPopupNew_C.BndEvt__UI_OptionPopupNew_Ctrl_OptionSelectTab_K2Node_ComponentBoundEvent_0_OnTabChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FName                             _id                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   _idx                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_OptionPopupNew_C::BndEvt__UI_OptionPopupNew_Ctrl_OptionSelectTab_K2Node_ComponentBoundEvent_0_OnTabChanged__DelegateSignature(class FName _id, int32 _idx)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_OptionPopupNew_C", "BndEvt__UI_OptionPopupNew_Ctrl_OptionSelectTab_K2Node_ComponentBoundEvent_0_OnTabChanged__DelegateSignature");

	Params::UI_OptionPopupNew_C_BndEvt__UI_OptionPopupNew_Ctrl_OptionSelectTab_K2Node_ComponentBoundEvent_0_OnTabChanged__DelegateSignature Parms{};

	Parms._id = _id;
	Parms._idx = _idx;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_OptionPopupNew.UI_OptionPopupNew_C.BndEvt__UI_OptionPopupNew_Ctrl_PopupTop_K2Node_ComponentBoundEvent_1_OnClickClose__DelegateSignature
// (BlueprintEvent)

void UUI_OptionPopupNew_C::BndEvt__UI_OptionPopupNew_Ctrl_PopupTop_K2Node_ComponentBoundEvent_1_OnClickClose__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_OptionPopupNew_C", "BndEvt__UI_OptionPopupNew_Ctrl_PopupTop_K2Node_ComponentBoundEvent_1_OnClickClose__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_OptionPopupNew.UI_OptionPopupNew_C.ClearOptionContext
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_OptionPopupNew_C::ClearOptionContext()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_OptionPopupNew_C", "ClearOptionContext");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_OptionPopupNew.UI_OptionPopupNew_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_OptionPopupNew_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_OptionPopupNew_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_OptionPopupNew.UI_OptionPopupNew_C.CreateOptionContextWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   _idx                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                      ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UUI_OptionPageBase*               _page                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UUserWidget* UUI_OptionPopupNew_C::CreateOptionContextWidget(int32 _idx, class UUI_OptionPageBase** _page)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_OptionPopupNew_C", "CreateOptionContextWidget");

	Params::UI_OptionPopupNew_C_CreateOptionContextWidget Parms{};

	Parms._idx = _idx;

	UObject::ProcessEvent(Func, &Parms);

	if (_page != nullptr)
		*_page = Parms._page;

	return Parms.ReturnValue;
}


// Function UI_OptionPopupNew.UI_OptionPopupNew_C.ExecuteUbergraph_UI_OptionPopupNew
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_OptionPopupNew_C::ExecuteUbergraph_UI_OptionPopupNew(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_OptionPopupNew_C", "ExecuteUbergraph_UI_OptionPopupNew");

	Params::UI_OptionPopupNew_C_ExecuteUbergraph_UI_OptionPopupNew Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_OptionPopupNew.UI_OptionPopupNew_C.Init
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_OptionPopupNew_C::Init()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_OptionPopupNew_C", "Init");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_OptionPopupNew.UI_OptionPopupNew_C.OnChangedControlMasterTab
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_OptionPopupNew_C::OnChangedControlMasterTab()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_OptionPopupNew_C", "OnChangedControlMasterTab");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_OptionPopupNew.UI_OptionPopupNew_C.OnCurrentPage_DataChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_OptionPageBase*               _page                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UUI_OptionPopupNew_C::OnCurrentPage_DataChanged(const class UUI_OptionPageBase* _page)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_OptionPopupNew_C", "OnCurrentPage_DataChanged");

	Params::UI_OptionPopupNew_C_OnCurrentPage_DataChanged Parms{};

	Parms._page = _page;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_OptionPopupNew.UI_OptionPopupNew_C.OnReset_Clicked
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPopupBase*                       _popup                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                             _ctrl_id                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_OptionPopupNew_C::OnReset_Clicked(const class UPopupBase* _popup, class FName _ctrl_id)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_OptionPopupNew_C", "OnReset_Clicked");

	Params::UI_OptionPopupNew_C_OnReset_Clicked Parms{};

	Parms._popup = _popup;
	Parms._ctrl_id = _ctrl_id;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_OptionPopupNew.UI_OptionPopupNew_C.OnSynchronizeProperties
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UUI_OptionPopupNew_C::OnSynchronizeProperties()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_OptionPopupNew_C", "OnSynchronizeProperties");

	Params::UI_OptionPopupNew_C_OnSynchronizeProperties Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function UI_OptionPopupNew.UI_OptionPopupNew_C.ProcUpdateOptionContext
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                                   _page_idx                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_OptionPopupNew_C::ProcUpdateOptionContext(int32 _page_idx)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_OptionPopupNew_C", "ProcUpdateOptionContext");

	Params::UI_OptionPopupNew_C_ProcUpdateOptionContext Parms{};

	Parms._page_idx = _page_idx;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_OptionPopupNew.UI_OptionPopupNew_C.UpdateOptionContext
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   _idx                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_OptionPopupNew_C::UpdateOptionContext(int32 _idx)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_OptionPopupNew_C", "UpdateOptionContext");

	Params::UI_OptionPopupNew_C_UpdateOptionContext Parms{};

	Parms._idx = _idx;

	UObject::ProcessEvent(Func, &Parms);
}

}

