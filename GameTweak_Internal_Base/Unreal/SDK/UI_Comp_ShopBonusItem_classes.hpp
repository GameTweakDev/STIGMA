#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: UI_Comp_ShopBonusItem

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Stigma_structs.hpp"
#include "BPGLib_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_Comp_ShopBonusItem.UI_Comp_ShopBonusItem_C
// 0x0090 (0x0580 - 0x04F0)
class UUI_Comp_ShopBonusItem_C final : public UPreviewableWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x04F0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                                Border_Background;                                 // 0x04F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_BoxCompleted;                                  // 0x0500(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Glow;                                          // 0x0508(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Reward;                                        // 0x0510(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_Padding;                                   // 0x0518(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_Widget;                                    // 0x0520(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Txt_RewardCount;                                   // 0x0528(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         RewardCount;                                       // 0x0530(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         UI_In_Width_Override;                              // 0x0534(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         UI_In_Height_Override;                             // 0x0538(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         UI_CountFontSize;                                  // 0x053C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          UI_ShowBackGround;                                 // 0x0540(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_3CBE[0x3];                                     // 0x0541(0x0003)(Fixing Size After Last Property [ Dumper-69 ])
	float                                         UI_ImagePadding;                                   // 0x0544(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          ShowTooltip;                                       // 0x0548(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          UI_IsModifyImageAlignment;                         // 0x0549(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3CBF[0x6];                                     // 0x054A(0x0006)(Fixing Size After Last Property [ Dumper-69 ])
	struct FVector2D                              UI_ImageSize;                                      // 0x0550(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FReward                                Bonus_Rewards;                                     // 0x0560(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FItemID                                ItemID;                                            // 0x0570(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void Clear();
	void Create_Tooltip(class UUI_Tooltip** _tooltip_widget);
	void ExecuteUbergraph_UI_Comp_ShopBonusItem(int32 EntryPoint);
	class UWidget* Get_Reward_Icon_Tool_Tip_Widget();
	void InitWidget(const struct FReward& BonusRewards, bool* Result);
	void PreConstruct(bool IsDesignTime);
	void SetCurrency(const struct FRewardItem& RewardCurrency);
	void SetItem(const struct FRewardItem& RewardItem);
	void SetRewardBattlePassExp(int32 BattlePassExp);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_Comp_ShopBonusItem_C">();
	}
	static class UUI_Comp_ShopBonusItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_Comp_ShopBonusItem_C>();
	}
};
static_assert(alignof(UUI_Comp_ShopBonusItem_C) == 0x000008, "Wrong alignment on UUI_Comp_ShopBonusItem_C");
static_assert(sizeof(UUI_Comp_ShopBonusItem_C) == 0x000580, "Wrong size on UUI_Comp_ShopBonusItem_C");
static_assert(offsetof(UUI_Comp_ShopBonusItem_C, UberGraphFrame) == 0x0004F0, "Member 'UUI_Comp_ShopBonusItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_Comp_ShopBonusItem_C, Border_Background) == 0x0004F8, "Member 'UUI_Comp_ShopBonusItem_C::Border_Background' has a wrong offset!");
static_assert(offsetof(UUI_Comp_ShopBonusItem_C, Img_BoxCompleted) == 0x000500, "Member 'UUI_Comp_ShopBonusItem_C::Img_BoxCompleted' has a wrong offset!");
static_assert(offsetof(UUI_Comp_ShopBonusItem_C, Img_Glow) == 0x000508, "Member 'UUI_Comp_ShopBonusItem_C::Img_Glow' has a wrong offset!");
static_assert(offsetof(UUI_Comp_ShopBonusItem_C, Img_Reward) == 0x000510, "Member 'UUI_Comp_ShopBonusItem_C::Img_Reward' has a wrong offset!");
static_assert(offsetof(UUI_Comp_ShopBonusItem_C, Overlay_Padding) == 0x000518, "Member 'UUI_Comp_ShopBonusItem_C::Overlay_Padding' has a wrong offset!");
static_assert(offsetof(UUI_Comp_ShopBonusItem_C, SizeBox_Widget) == 0x000520, "Member 'UUI_Comp_ShopBonusItem_C::SizeBox_Widget' has a wrong offset!");
static_assert(offsetof(UUI_Comp_ShopBonusItem_C, Txt_RewardCount) == 0x000528, "Member 'UUI_Comp_ShopBonusItem_C::Txt_RewardCount' has a wrong offset!");
static_assert(offsetof(UUI_Comp_ShopBonusItem_C, RewardCount) == 0x000530, "Member 'UUI_Comp_ShopBonusItem_C::RewardCount' has a wrong offset!");
static_assert(offsetof(UUI_Comp_ShopBonusItem_C, UI_In_Width_Override) == 0x000534, "Member 'UUI_Comp_ShopBonusItem_C::UI_In_Width_Override' has a wrong offset!");
static_assert(offsetof(UUI_Comp_ShopBonusItem_C, UI_In_Height_Override) == 0x000538, "Member 'UUI_Comp_ShopBonusItem_C::UI_In_Height_Override' has a wrong offset!");
static_assert(offsetof(UUI_Comp_ShopBonusItem_C, UI_CountFontSize) == 0x00053C, "Member 'UUI_Comp_ShopBonusItem_C::UI_CountFontSize' has a wrong offset!");
static_assert(offsetof(UUI_Comp_ShopBonusItem_C, UI_ShowBackGround) == 0x000540, "Member 'UUI_Comp_ShopBonusItem_C::UI_ShowBackGround' has a wrong offset!");
static_assert(offsetof(UUI_Comp_ShopBonusItem_C, UI_ImagePadding) == 0x000544, "Member 'UUI_Comp_ShopBonusItem_C::UI_ImagePadding' has a wrong offset!");
static_assert(offsetof(UUI_Comp_ShopBonusItem_C, ShowTooltip) == 0x000548, "Member 'UUI_Comp_ShopBonusItem_C::ShowTooltip' has a wrong offset!");
static_assert(offsetof(UUI_Comp_ShopBonusItem_C, UI_IsModifyImageAlignment) == 0x000549, "Member 'UUI_Comp_ShopBonusItem_C::UI_IsModifyImageAlignment' has a wrong offset!");
static_assert(offsetof(UUI_Comp_ShopBonusItem_C, UI_ImageSize) == 0x000550, "Member 'UUI_Comp_ShopBonusItem_C::UI_ImageSize' has a wrong offset!");
static_assert(offsetof(UUI_Comp_ShopBonusItem_C, Bonus_Rewards) == 0x000560, "Member 'UUI_Comp_ShopBonusItem_C::Bonus_Rewards' has a wrong offset!");
static_assert(offsetof(UUI_Comp_ShopBonusItem_C, ItemID) == 0x000570, "Member 'UUI_Comp_ShopBonusItem_C::ItemID' has a wrong offset!");

}

