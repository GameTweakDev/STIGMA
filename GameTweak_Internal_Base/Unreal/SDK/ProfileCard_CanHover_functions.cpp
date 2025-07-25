#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: ProfileCard_CanHover

#include "Basic.hpp"

#include "ProfileCard_CanHover_classes.hpp"
#include "ProfileCard_CanHover_parameters.hpp"


namespace SDK
{

// Function ProfileCard_CanHover.ProfileCard_CanHover_C.GetTooltipWidget
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UProfileCard_CanHover_C::GetTooltipWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProfileCard_CanHover_C", "GetTooltipWidget");

	Params::ProfileCard_CanHover_C_GetTooltipWidget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function ProfileCard_CanHover.ProfileCard_CanHover_C.IsActive
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    _is_active                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProfileCard_CanHover_C::IsActive(bool* _is_active)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProfileCard_CanHover_C", "IsActive");

	Params::ProfileCard_CanHover_C_IsActive Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (_is_active != nullptr)
		*_is_active = Parms._is_active;
}


// Function ProfileCard_CanHover.ProfileCard_CanHover_C.OnAck_AboutFriend__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           _toast_msg                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UProfileCard_CanHover_C::OnAck_AboutFriend__DelegateSignature(const class FString& _toast_msg)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProfileCard_CanHover_C", "OnAck_AboutFriend__DelegateSignature");

	Params::ProfileCard_CanHover_C_OnAck_AboutFriend__DelegateSignature Parms{};

	Parms._toast_msg = std::move(_toast_msg);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ProfileCard_CanHover.ProfileCard_CanHover_C.OnACK_AskedFriend
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EResultCode                             _rcode                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FACK_FriendUpdate                _ack                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FNetReply                        ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FNetReply UProfileCard_CanHover_C::OnACK_AskedFriend(EResultCode _rcode, const struct FACK_FriendUpdate& _ack)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProfileCard_CanHover_C", "OnACK_AskedFriend");

	Params::ProfileCard_CanHover_C_OnACK_AskedFriend Parms{};

	Parms._rcode = _rcode;
	Parms._ack = std::move(_ack);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function ProfileCard_CanHover.ProfileCard_CanHover_C.OnAck_AskFriend
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EResultCode                             _rcode                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FACK_Friend                      _ack                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// struct FNetReply                        ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FNetReply UProfileCard_CanHover_C::OnAck_AskFriend(EResultCode _rcode, const struct FACK_Friend& _ack)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProfileCard_CanHover_C", "OnAck_AskFriend");

	Params::ProfileCard_CanHover_C_OnAck_AskFriend Parms{};

	Parms._rcode = _rcode;
	Parms._ack = std::move(_ack);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function ProfileCard_CanHover.ProfileCard_CanHover_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent                        InKeyEvent                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UProfileCard_CanHover_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProfileCard_CanHover_C", "OnKeyUp");

	Params::ProfileCard_CanHover_C_OnKeyUp Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InKeyEvent = std::move(InKeyEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function ProfileCard_CanHover.ProfileCard_CanHover_C.OnMouseButtonUp
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UProfileCard_CanHover_C::OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProfileCard_CanHover_C", "OnMouseButtonUp");

	Params::ProfileCard_CanHover_C_OnMouseButtonUp Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function ProfileCard_CanHover.ProfileCard_CanHover_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UProfileCard_CanHover_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProfileCard_CanHover_C", "OnMouseEnter");

	Params::ProfileCard_CanHover_C_OnMouseEnter Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ProfileCard_CanHover.ProfileCard_CanHover_C.OnProcAskFriendClick
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UProfileCard_CanHover_C::OnProcAskFriendClick()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProfileCard_CanHover_C", "OnProcAskFriendClick");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ProfileCard_CanHover.ProfileCard_CanHover_C.OnProcShowProfile
// (Public, BlueprintCallable, BlueprintEvent)

void UProfileCard_CanHover_C::OnProcShowProfile()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProfileCard_CanHover_C", "OnProcShowProfile");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ProfileCard_CanHover.ProfileCard_CanHover_C.SetTooltipInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUserID                          _user_id                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUserName                        _nickname                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// ETier                                   _tier                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   _level                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemID                          _profile_card                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FItemID                          Param_Emblem                                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UProfileCard_CanHover_C::SetTooltipInfo(const struct FUserID& _user_id, const struct FUserName& _nickname, ETier _tier, int32 _level, const struct FItemID& _profile_card, const struct FItemID& Param_Emblem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProfileCard_CanHover_C", "SetTooltipInfo");

	Params::ProfileCard_CanHover_C_SetTooltipInfo Parms{};

	Parms._user_id = std::move(_user_id);
	Parms._nickname = std::move(_nickname);
	Parms._tier = _tier;
	Parms._level = _level;
	Parms._profile_card = std::move(_profile_card);
	Parms.Param_Emblem = std::move(Param_Emblem);

	UObject::ProcessEvent(Func, &Parms);
}

}

