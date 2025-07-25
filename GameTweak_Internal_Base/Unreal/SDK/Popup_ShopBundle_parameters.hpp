#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: Popup_ShopBundle

#include "Basic.hpp"

#include "Stigma_structs.hpp"


namespace SDK::Params
{

// Function Popup_ShopBundle.Popup_ShopBundle_C.BndEvt__Popup_Shop_Bundle_UI_Button_Buy_K2Node_ComponentBoundEvent_7_OnAckBuy__DelegateSignature
// 0x0050 (0x0050 - 0x0000)
struct Popup_ShopBundle_C_BndEvt__Popup_Shop_Bundle_UI_Button_Buy_K2Node_ComponentBoundEvent_7_OnAckBuy__DelegateSignature final
{
public:
	EResultCode                                   _code;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3CB0[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-69 ])
	struct FACK_BuyGoods                          _ack;                                              // 0x0008(0x0048)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(Popup_ShopBundle_C_BndEvt__Popup_Shop_Bundle_UI_Button_Buy_K2Node_ComponentBoundEvent_7_OnAckBuy__DelegateSignature) == 0x000008, "Wrong alignment on Popup_ShopBundle_C_BndEvt__Popup_Shop_Bundle_UI_Button_Buy_K2Node_ComponentBoundEvent_7_OnAckBuy__DelegateSignature");
static_assert(sizeof(Popup_ShopBundle_C_BndEvt__Popup_Shop_Bundle_UI_Button_Buy_K2Node_ComponentBoundEvent_7_OnAckBuy__DelegateSignature) == 0x000050, "Wrong size on Popup_ShopBundle_C_BndEvt__Popup_Shop_Bundle_UI_Button_Buy_K2Node_ComponentBoundEvent_7_OnAckBuy__DelegateSignature");
static_assert(offsetof(Popup_ShopBundle_C_BndEvt__Popup_Shop_Bundle_UI_Button_Buy_K2Node_ComponentBoundEvent_7_OnAckBuy__DelegateSignature, _code) == 0x000000, "Member 'Popup_ShopBundle_C_BndEvt__Popup_Shop_Bundle_UI_Button_Buy_K2Node_ComponentBoundEvent_7_OnAckBuy__DelegateSignature::_code' has a wrong offset!");
static_assert(offsetof(Popup_ShopBundle_C_BndEvt__Popup_Shop_Bundle_UI_Button_Buy_K2Node_ComponentBoundEvent_7_OnAckBuy__DelegateSignature, _ack) == 0x000008, "Member 'Popup_ShopBundle_C_BndEvt__Popup_Shop_Bundle_UI_Button_Buy_K2Node_ComponentBoundEvent_7_OnAckBuy__DelegateSignature::_ack' has a wrong offset!");

// Function Popup_ShopBundle.Popup_ShopBundle_C.ExecuteUbergraph_Popup_ShopBundle
// 0x0300 (0x0300 - 0x0000)
struct Popup_ShopBundle_C_ExecuteUbergraph_Popup_ShopBundle final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EResultCode                                   K2Node_ComponentBoundEvent__code;                  // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3CB1[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-69 ])
	struct FACK_BuyGoods                          K2Node_ComponentBoundEvent__ack;                   // 0x0008(0x0048)()
	EBuyLimitType                                 K2Node_Event__limit_type;                          // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3CB2[0x3];                                     // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-69 ])
	int32                                         K2Node_Event__current_count;                       // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event__max_count;                           // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3CB3[0x4];                                     // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-69 ])
	class UGoodsObject*                           K2Node_Event__goods_obj;                           // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FConfig_Goods                          K2Node_Event__goods_def;                           // 0x0068(0x01F0)(ConstParm)
	bool                                          K2Node_Event__set_enabled;                         // 0x0258(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3CB4[0x7];                                     // 0x0259(0x0007)(Fixing Size After Last Property [ Dumper-69 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0260(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x0278(0x0018)()
	class FText                                   CallFunc_GetLimitTypeText_out;                     // 0x0290(0x0018)()
	class FText                                   CallFunc_AppendText_ReturnValue;                   // 0x02A8(0x0018)()
	class FText                                   CallFunc_AppendText_ReturnValue_1;                 // 0x02C0(0x0018)()
	int32                                         K2Node_Event__slider_max_value;                    // 0x02D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3CB5[0x4];                                     // 0x02DC(0x0004)(Fixing Size After Last Property [ Dumper-69 ])
	class UUI_Slider_BuySlider_H_C*               K2Node_DynamicCast_AsUI_Slider_Buy_Slider_H;       // 0x02E0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x02E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3CB6[0x7];                                     // 0x02E9(0x0007)(Fixing Size After Last Property [ Dumper-69 ])
	double                                        CallFunc_Conv_IntToDouble_ReturnValue;             // 0x02F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event__buy_count;                           // 0x02F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_InitWidget__Max_Value_ImplicitCast;       // 0x02FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Popup_ShopBundle_C_ExecuteUbergraph_Popup_ShopBundle) == 0x000008, "Wrong alignment on Popup_ShopBundle_C_ExecuteUbergraph_Popup_ShopBundle");
static_assert(sizeof(Popup_ShopBundle_C_ExecuteUbergraph_Popup_ShopBundle) == 0x000300, "Wrong size on Popup_ShopBundle_C_ExecuteUbergraph_Popup_ShopBundle");
static_assert(offsetof(Popup_ShopBundle_C_ExecuteUbergraph_Popup_ShopBundle, EntryPoint) == 0x000000, "Member 'Popup_ShopBundle_C_ExecuteUbergraph_Popup_ShopBundle::EntryPoint' has a wrong offset!");
static_assert(offsetof(Popup_ShopBundle_C_ExecuteUbergraph_Popup_ShopBundle, K2Node_ComponentBoundEvent__code) == 0x000004, "Member 'Popup_ShopBundle_C_ExecuteUbergraph_Popup_ShopBundle::K2Node_ComponentBoundEvent__code' has a wrong offset!");
static_assert(offsetof(Popup_ShopBundle_C_ExecuteUbergraph_Popup_ShopBundle, K2Node_ComponentBoundEvent__ack) == 0x000008, "Member 'Popup_ShopBundle_C_ExecuteUbergraph_Popup_ShopBundle::K2Node_ComponentBoundEvent__ack' has a wrong offset!");
static_assert(offsetof(Popup_ShopBundle_C_ExecuteUbergraph_Popup_ShopBundle, K2Node_Event__limit_type) == 0x000050, "Member 'Popup_ShopBundle_C_ExecuteUbergraph_Popup_ShopBundle::K2Node_Event__limit_type' has a wrong offset!");
static_assert(offsetof(Popup_ShopBundle_C_ExecuteUbergraph_Popup_ShopBundle, K2Node_Event__current_count) == 0x000054, "Member 'Popup_ShopBundle_C_ExecuteUbergraph_Popup_ShopBundle::K2Node_Event__current_count' has a wrong offset!");
static_assert(offsetof(Popup_ShopBundle_C_ExecuteUbergraph_Popup_ShopBundle, K2Node_Event__max_count) == 0x000058, "Member 'Popup_ShopBundle_C_ExecuteUbergraph_Popup_ShopBundle::K2Node_Event__max_count' has a wrong offset!");
static_assert(offsetof(Popup_ShopBundle_C_ExecuteUbergraph_Popup_ShopBundle, K2Node_Event__goods_obj) == 0x000060, "Member 'Popup_ShopBundle_C_ExecuteUbergraph_Popup_ShopBundle::K2Node_Event__goods_obj' has a wrong offset!");
static_assert(offsetof(Popup_ShopBundle_C_ExecuteUbergraph_Popup_ShopBundle, K2Node_Event__goods_def) == 0x000068, "Member 'Popup_ShopBundle_C_ExecuteUbergraph_Popup_ShopBundle::K2Node_Event__goods_def' has a wrong offset!");
static_assert(offsetof(Popup_ShopBundle_C_ExecuteUbergraph_Popup_ShopBundle, K2Node_Event__set_enabled) == 0x000258, "Member 'Popup_ShopBundle_C_ExecuteUbergraph_Popup_ShopBundle::K2Node_Event__set_enabled' has a wrong offset!");
static_assert(offsetof(Popup_ShopBundle_C_ExecuteUbergraph_Popup_ShopBundle, CallFunc_Conv_IntToText_ReturnValue) == 0x000260, "Member 'Popup_ShopBundle_C_ExecuteUbergraph_Popup_ShopBundle::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(Popup_ShopBundle_C_ExecuteUbergraph_Popup_ShopBundle, CallFunc_Conv_IntToText_ReturnValue_1) == 0x000278, "Member 'Popup_ShopBundle_C_ExecuteUbergraph_Popup_ShopBundle::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Popup_ShopBundle_C_ExecuteUbergraph_Popup_ShopBundle, CallFunc_GetLimitTypeText_out) == 0x000290, "Member 'Popup_ShopBundle_C_ExecuteUbergraph_Popup_ShopBundle::CallFunc_GetLimitTypeText_out' has a wrong offset!");
static_assert(offsetof(Popup_ShopBundle_C_ExecuteUbergraph_Popup_ShopBundle, CallFunc_AppendText_ReturnValue) == 0x0002A8, "Member 'Popup_ShopBundle_C_ExecuteUbergraph_Popup_ShopBundle::CallFunc_AppendText_ReturnValue' has a wrong offset!");
static_assert(offsetof(Popup_ShopBundle_C_ExecuteUbergraph_Popup_ShopBundle, CallFunc_AppendText_ReturnValue_1) == 0x0002C0, "Member 'Popup_ShopBundle_C_ExecuteUbergraph_Popup_ShopBundle::CallFunc_AppendText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Popup_ShopBundle_C_ExecuteUbergraph_Popup_ShopBundle, K2Node_Event__slider_max_value) == 0x0002D8, "Member 'Popup_ShopBundle_C_ExecuteUbergraph_Popup_ShopBundle::K2Node_Event__slider_max_value' has a wrong offset!");
static_assert(offsetof(Popup_ShopBundle_C_ExecuteUbergraph_Popup_ShopBundle, K2Node_DynamicCast_AsUI_Slider_Buy_Slider_H) == 0x0002E0, "Member 'Popup_ShopBundle_C_ExecuteUbergraph_Popup_ShopBundle::K2Node_DynamicCast_AsUI_Slider_Buy_Slider_H' has a wrong offset!");
static_assert(offsetof(Popup_ShopBundle_C_ExecuteUbergraph_Popup_ShopBundle, K2Node_DynamicCast_bSuccess) == 0x0002E8, "Member 'Popup_ShopBundle_C_ExecuteUbergraph_Popup_ShopBundle::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Popup_ShopBundle_C_ExecuteUbergraph_Popup_ShopBundle, CallFunc_Conv_IntToDouble_ReturnValue) == 0x0002F0, "Member 'Popup_ShopBundle_C_ExecuteUbergraph_Popup_ShopBundle::CallFunc_Conv_IntToDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(Popup_ShopBundle_C_ExecuteUbergraph_Popup_ShopBundle, K2Node_Event__buy_count) == 0x0002F8, "Member 'Popup_ShopBundle_C_ExecuteUbergraph_Popup_ShopBundle::K2Node_Event__buy_count' has a wrong offset!");
static_assert(offsetof(Popup_ShopBundle_C_ExecuteUbergraph_Popup_ShopBundle, CallFunc_InitWidget__Max_Value_ImplicitCast) == 0x0002FC, "Member 'Popup_ShopBundle_C_ExecuteUbergraph_Popup_ShopBundle::CallFunc_InitWidget__Max_Value_ImplicitCast' has a wrong offset!");

// Function Popup_ShopBundle.Popup_ShopBundle_C.InitBuySlider
// 0x0004 (0x0004 - 0x0000)
struct Popup_ShopBundle_C_InitBuySlider final
{
public:
	int32                                         _slider_max_value;                                 // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Popup_ShopBundle_C_InitBuySlider) == 0x000004, "Wrong alignment on Popup_ShopBundle_C_InitBuySlider");
static_assert(sizeof(Popup_ShopBundle_C_InitBuySlider) == 0x000004, "Wrong size on Popup_ShopBundle_C_InitBuySlider");
static_assert(offsetof(Popup_ShopBundle_C_InitBuySlider, _slider_max_value) == 0x000000, "Member 'Popup_ShopBundle_C_InitBuySlider::_slider_max_value' has a wrong offset!");

// Function Popup_ShopBundle.Popup_ShopBundle_C.InitPriceBtn
// 0x0200 (0x0200 - 0x0000)
struct Popup_ShopBundle_C_InitPriceBtn final
{
public:
	class UGoodsObject*                           _goods_obj;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FConfig_Goods                          _goods_def;                                        // 0x0008(0x01F0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          _set_enabled;                                      // 0x01F8(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Popup_ShopBundle_C_InitPriceBtn) == 0x000008, "Wrong alignment on Popup_ShopBundle_C_InitPriceBtn");
static_assert(sizeof(Popup_ShopBundle_C_InitPriceBtn) == 0x000200, "Wrong size on Popup_ShopBundle_C_InitPriceBtn");
static_assert(offsetof(Popup_ShopBundle_C_InitPriceBtn, _goods_obj) == 0x000000, "Member 'Popup_ShopBundle_C_InitPriceBtn::_goods_obj' has a wrong offset!");
static_assert(offsetof(Popup_ShopBundle_C_InitPriceBtn, _goods_def) == 0x000008, "Member 'Popup_ShopBundle_C_InitPriceBtn::_goods_def' has a wrong offset!");
static_assert(offsetof(Popup_ShopBundle_C_InitPriceBtn, _set_enabled) == 0x0001F8, "Member 'Popup_ShopBundle_C_InitPriceBtn::_set_enabled' has a wrong offset!");

// Function Popup_ShopBundle.Popup_ShopBundle_C.SetBuyLimitText
// 0x000C (0x000C - 0x0000)
struct Popup_ShopBundle_C_SetBuyLimitText final
{
public:
	EBuyLimitType                                 _limit_type;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3CB7[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-69 ])
	int32                                         _current_count;                                    // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         _max_count;                                        // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Popup_ShopBundle_C_SetBuyLimitText) == 0x000004, "Wrong alignment on Popup_ShopBundle_C_SetBuyLimitText");
static_assert(sizeof(Popup_ShopBundle_C_SetBuyLimitText) == 0x00000C, "Wrong size on Popup_ShopBundle_C_SetBuyLimitText");
static_assert(offsetof(Popup_ShopBundle_C_SetBuyLimitText, _limit_type) == 0x000000, "Member 'Popup_ShopBundle_C_SetBuyLimitText::_limit_type' has a wrong offset!");
static_assert(offsetof(Popup_ShopBundle_C_SetBuyLimitText, _current_count) == 0x000004, "Member 'Popup_ShopBundle_C_SetBuyLimitText::_current_count' has a wrong offset!");
static_assert(offsetof(Popup_ShopBundle_C_SetBuyLimitText, _max_count) == 0x000008, "Member 'Popup_ShopBundle_C_SetBuyLimitText::_max_count' has a wrong offset!");

// Function Popup_ShopBundle.Popup_ShopBundle_C.UpdatePriceBtnByCount
// 0x0004 (0x0004 - 0x0000)
struct Popup_ShopBundle_C_UpdatePriceBtnByCount final
{
public:
	int32                                         _buy_count;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Popup_ShopBundle_C_UpdatePriceBtnByCount) == 0x000004, "Wrong alignment on Popup_ShopBundle_C_UpdatePriceBtnByCount");
static_assert(sizeof(Popup_ShopBundle_C_UpdatePriceBtnByCount) == 0x000004, "Wrong size on Popup_ShopBundle_C_UpdatePriceBtnByCount");
static_assert(offsetof(Popup_ShopBundle_C_UpdatePriceBtnByCount, _buy_count) == 0x000000, "Member 'Popup_ShopBundle_C_UpdatePriceBtnByCount::_buy_count' has a wrong offset!");

}

