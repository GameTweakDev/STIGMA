#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: UI_BattleStore_Money

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BPGLib_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_BattleStore_Money.UI_BattleStore_Money_C
// 0x0040 (0x0530 - 0x04F0)
class UUI_BattleStore_Money_C final : public UPreviewableWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x04F0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                           GoldPanel;                                         // 0x04F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCtrl_DynamicNumber_Common_C*           Txt_Coin;                                          // 0x0500(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAudioComponent*                        CoinAudioComp;                                     // 0x0508(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         InGameMoney;                                       // 0x0510(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39D1[0x4];                                     // 0x0514(0x0004)(Fixing Size After Last Property [ Dumper-69 ])
	FMulticastInlineDelegateProperty_             OnMoneyChanged;                                    // 0x0518(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	double                                        AccumulatedDT;                                     // 0x0528(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UI_BattleStore_Money(int32 EntryPoint);
	void OnMoneyChanged__DelegateSignature();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void UpdateCoin();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_BattleStore_Money_C">();
	}
	static class UUI_BattleStore_Money_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_BattleStore_Money_C>();
	}
};
static_assert(alignof(UUI_BattleStore_Money_C) == 0x000008, "Wrong alignment on UUI_BattleStore_Money_C");
static_assert(sizeof(UUI_BattleStore_Money_C) == 0x000530, "Wrong size on UUI_BattleStore_Money_C");
static_assert(offsetof(UUI_BattleStore_Money_C, UberGraphFrame) == 0x0004F0, "Member 'UUI_BattleStore_Money_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_BattleStore_Money_C, GoldPanel) == 0x0004F8, "Member 'UUI_BattleStore_Money_C::GoldPanel' has a wrong offset!");
static_assert(offsetof(UUI_BattleStore_Money_C, Txt_Coin) == 0x000500, "Member 'UUI_BattleStore_Money_C::Txt_Coin' has a wrong offset!");
static_assert(offsetof(UUI_BattleStore_Money_C, CoinAudioComp) == 0x000508, "Member 'UUI_BattleStore_Money_C::CoinAudioComp' has a wrong offset!");
static_assert(offsetof(UUI_BattleStore_Money_C, InGameMoney) == 0x000510, "Member 'UUI_BattleStore_Money_C::InGameMoney' has a wrong offset!");
static_assert(offsetof(UUI_BattleStore_Money_C, OnMoneyChanged) == 0x000518, "Member 'UUI_BattleStore_Money_C::OnMoneyChanged' has a wrong offset!");
static_assert(offsetof(UUI_BattleStore_Money_C, AccumulatedDT) == 0x000528, "Member 'UUI_BattleStore_Money_C::AccumulatedDT' has a wrong offset!");

}

