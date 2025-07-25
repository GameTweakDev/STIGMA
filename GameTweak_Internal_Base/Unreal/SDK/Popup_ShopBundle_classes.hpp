#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: Popup_ShopBundle

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Stigma_structs.hpp"
#include "Stigma_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Popup_ShopBundle.Popup_ShopBundle_C
// 0x0048 (0x0610 - 0x05C8)
class UPopup_ShopBundle_C final : public UUI_ShopBundlePopup
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x05C8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Bg_Lower;                                          // 0x05D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Bg_Lower2;                                         // 0x05D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWIDGET_KeyButton_C*                    BTN_GoBack;                                        // 0x05E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image;                                             // 0x05E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1;                                           // 0x05F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_BG_Items;                                      // 0x05F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_BG_Items_1;                                    // 0x0600(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Button_Buy_C*                       UI_Button_Buy;                                     // 0x0608(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void BndEvt__Popup_Shop_Bundle_UI_Button_Buy_K2Node_ComponentBoundEvent_7_OnAckBuy__DelegateSignature(EResultCode _code, const struct FACK_BuyGoods& _ack);
	void BndEvt__Popup_ShopBundle_BTN_GoBack_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature();
	void ExecuteUbergraph_Popup_ShopBundle(int32 EntryPoint);
	void InitBuySlider(int32 _slider_max_value);
	void InitPriceBtn(class UGoodsObject* _goods_obj, const struct FConfig_Goods& _goods_def, bool _set_enabled);
	void SetBuyLimitText(EBuyLimitType _limit_type, int32 _current_count, int32 _max_count);
	void SetPriceBtnOwned();
	void SetPriceBtnPurchased();
	void UpdatePriceBtnByCount(int32 _buy_count);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Popup_ShopBundle_C">();
	}
	static class UPopup_ShopBundle_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPopup_ShopBundle_C>();
	}
};
static_assert(alignof(UPopup_ShopBundle_C) == 0x000008, "Wrong alignment on UPopup_ShopBundle_C");
static_assert(sizeof(UPopup_ShopBundle_C) == 0x000610, "Wrong size on UPopup_ShopBundle_C");
static_assert(offsetof(UPopup_ShopBundle_C, UberGraphFrame) == 0x0005C8, "Member 'UPopup_ShopBundle_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPopup_ShopBundle_C, Bg_Lower) == 0x0005D0, "Member 'UPopup_ShopBundle_C::Bg_Lower' has a wrong offset!");
static_assert(offsetof(UPopup_ShopBundle_C, Bg_Lower2) == 0x0005D8, "Member 'UPopup_ShopBundle_C::Bg_Lower2' has a wrong offset!");
static_assert(offsetof(UPopup_ShopBundle_C, BTN_GoBack) == 0x0005E0, "Member 'UPopup_ShopBundle_C::BTN_GoBack' has a wrong offset!");
static_assert(offsetof(UPopup_ShopBundle_C, Image) == 0x0005E8, "Member 'UPopup_ShopBundle_C::Image' has a wrong offset!");
static_assert(offsetof(UPopup_ShopBundle_C, Image_1) == 0x0005F0, "Member 'UPopup_ShopBundle_C::Image_1' has a wrong offset!");
static_assert(offsetof(UPopup_ShopBundle_C, Img_BG_Items) == 0x0005F8, "Member 'UPopup_ShopBundle_C::Img_BG_Items' has a wrong offset!");
static_assert(offsetof(UPopup_ShopBundle_C, Img_BG_Items_1) == 0x000600, "Member 'UPopup_ShopBundle_C::Img_BG_Items_1' has a wrong offset!");
static_assert(offsetof(UPopup_ShopBundle_C, UI_Button_Buy) == 0x000608, "Member 'UPopup_ShopBundle_C::UI_Button_Buy' has a wrong offset!");

}

