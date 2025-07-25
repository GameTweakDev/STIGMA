#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: UI_RadioChat

#include "Basic.hpp"

#include "UI_RadioChat_classes.hpp"
#include "UI_RadioChat_parameters.hpp"


namespace SDK
{

// Function UI_RadioChat.UI_RadioChat_C.BuildCategoryList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_RadioChat_C::BuildCategoryList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_RadioChat_C", "BuildCategoryList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_RadioChat.UI_RadioChat_C.BuildRadioChatList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_RadioChat_C::BuildRadioChatList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_RadioChat_C", "BuildRadioChatList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_RadioChat.UI_RadioChat_C.ChatCategoryToDisplayName
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// ERadioChatCategory                      _radio_chat_category                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             Txt                                                    (Parm, OutParm)

void UUI_RadioChat_C::ChatCategoryToDisplayName(ERadioChatCategory _radio_chat_category, class FText* Txt)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_RadioChat_C", "ChatCategoryToDisplayName");

	Params::UI_RadioChat_C_ChatCategoryToDisplayName Parms{};

	Parms._radio_chat_category = _radio_chat_category;

	UObject::ProcessEvent(Func, &Parms);

	if (Txt != nullptr)
		*Txt = std::move(Parms.Txt);
}


// Function UI_RadioChat.UI_RadioChat_C.ExecuteUbergraph_UI_RadioChat
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_RadioChat_C::ExecuteUbergraph_UI_RadioChat(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_RadioChat_C", "ExecuteUbergraph_UI_RadioChat");

	Params::UI_RadioChat_C_ExecuteUbergraph_UI_RadioChat Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_RadioChat.UI_RadioChat_C.IntToKey
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   _int                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                             _Key                                                   (Parm, OutParm, HasGetValueTypeHash)

void UUI_RadioChat_C::IntToKey(int32 _int, struct FKey* _Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_RadioChat_C", "IntToKey");

	Params::UI_RadioChat_C_IntToKey Parms{};

	Parms._int = _int;

	UObject::ProcessEvent(Func, &Parms);

	if (_Key != nullptr)
		*_Key = std::move(Parms._Key);
}


// Function UI_RadioChat.UI_RadioChat_C.OnSynchronizeProperties
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UUI_RadioChat_C::OnSynchronizeProperties()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_RadioChat_C", "OnSynchronizeProperties");

	Params::UI_RadioChat_C_OnSynchronizeProperties Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function UI_RadioChat.UI_RadioChat_C.OnUpdate
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_RadioChat_C::OnUpdate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_RadioChat_C", "OnUpdate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_RadioChat.UI_RadioChat_C.Update
// (Event, Public, BlueprintEvent)

void UUI_RadioChat_C::Update()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_RadioChat_C", "Update");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_RadioChat.UI_RadioChat_C.UpdateTitle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_RadioChat_C::UpdateTitle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_RadioChat_C", "UpdateTitle");

	UObject::ProcessEvent(Func, nullptr);
}

}

