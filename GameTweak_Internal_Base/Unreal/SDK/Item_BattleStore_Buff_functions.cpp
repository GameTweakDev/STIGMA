#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: Item_BattleStore_Buff

#include "Basic.hpp"

#include "Item_BattleStore_Buff_classes.hpp"
#include "Item_BattleStore_Buff_parameters.hpp"


namespace SDK
{

// Function Item_BattleStore_Buff.Item_BattleStore_Buff_C.InitWidget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBattleStore_BuffStack           BuffStack                                              (BlueprintVisible, BlueprintReadOnly, Parm)

void UItem_BattleStore_Buff_C::InitWidget(const struct FBattleStore_BuffStack& BuffStack)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Item_BattleStore_Buff_C", "InitWidget");

	Params::Item_BattleStore_Buff_C_InitWidget Parms{};

	Parms.BuffStack = std::move(BuffStack);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Item_BattleStore_Buff.Item_BattleStore_Buff_C.OnHoveredItem__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Is_hover                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UItem_BattleStore_Buff_C*         Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UItem_BattleStore_Buff_C::OnHoveredItem__DelegateSignature(bool Is_hover, class UItem_BattleStore_Buff_C* Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Item_BattleStore_Buff_C", "OnHoveredItem__DelegateSignature");

	Params::Item_BattleStore_Buff_C_OnHoveredItem__DelegateSignature Parms{};

	Parms.Is_hover = Is_hover;
	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Item_BattleStore_Buff.Item_BattleStore_Buff_C.UpdateHover
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Is_hover                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItem_BattleStore_Buff_C::UpdateHover(bool Is_hover)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Item_BattleStore_Buff_C", "UpdateHover");

	Params::Item_BattleStore_Buff_C_UpdateHover Parms{};

	Parms.Is_hover = Is_hover;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Item_BattleStore_Buff.Item_BattleStore_Buff_C.UpdateSwitcher
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBattleStore_BuffStack           BuffStack                                              (BlueprintVisible, BlueprintReadOnly, Parm)

void UItem_BattleStore_Buff_C::UpdateSwitcher(const struct FBattleStore_BuffStack& BuffStack)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Item_BattleStore_Buff_C", "UpdateSwitcher");

	Params::Item_BattleStore_Buff_C_UpdateSwitcher Parms{};

	Parms.BuffStack = std::move(BuffStack);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Item_BattleStore_Buff.Item_BattleStore_Buff_C.CanPurchase
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FBattleStore_BuffStack           BuffStack                                              (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    Can_purchase                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItem_BattleStore_Buff_C::CanPurchase(const struct FBattleStore_BuffStack& BuffStack, bool* Can_purchase) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Item_BattleStore_Buff_C", "CanPurchase");

	Params::Item_BattleStore_Buff_C_CanPurchase Parms{};

	Parms.BuffStack = std::move(BuffStack);

	UObject::ProcessEvent(Func, &Parms);

	if (Can_purchase != nullptr)
		*Can_purchase = Parms.Can_purchase;
}


// Function Item_BattleStore_Buff.Item_BattleStore_Buff_C.GetBuffPrice
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FBattleStore_BuffStack           BuffStack                                              (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                                   Price                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItem_BattleStore_Buff_C::GetBuffPrice(const struct FBattleStore_BuffStack& BuffStack, int32* Price) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Item_BattleStore_Buff_C", "GetBuffPrice");

	Params::Item_BattleStore_Buff_C_GetBuffPrice Parms{};

	Parms.BuffStack = std::move(BuffStack);

	UObject::ProcessEvent(Func, &Parms);

	if (Price != nullptr)
		*Price = Parms.Price;
}


// Function Item_BattleStore_Buff.Item_BattleStore_Buff_C.GetBuffStacks
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FBattleStore_BuffStack           BuffStack                                              (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                                   Curr                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Max                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItem_BattleStore_Buff_C::GetBuffStacks(const struct FBattleStore_BuffStack& BuffStack, int32* Curr, int32* Max) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Item_BattleStore_Buff_C", "GetBuffStacks");

	Params::Item_BattleStore_Buff_C_GetBuffStacks Parms{};

	Parms.BuffStack = std::move(BuffStack);

	UObject::ProcessEvent(Func, &Parms);

	if (Curr != nullptr)
		*Curr = Parms.Curr;

	if (Max != nullptr)
		*Max = Parms.Max;
}


// Function Item_BattleStore_Buff.Item_BattleStore_Buff_C.IsMaxStack
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FBattleStore_BuffStack           BuffStack                                              (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    Is_max                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItem_BattleStore_Buff_C::IsMaxStack(const struct FBattleStore_BuffStack& BuffStack, bool* Is_max) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Item_BattleStore_Buff_C", "IsMaxStack");

	Params::Item_BattleStore_Buff_C_IsMaxStack Parms{};

	Parms.BuffStack = std::move(BuffStack);

	UObject::ProcessEvent(Func, &Parms);

	if (Is_max != nullptr)
		*Is_max = Parms.Is_max;
}

}

