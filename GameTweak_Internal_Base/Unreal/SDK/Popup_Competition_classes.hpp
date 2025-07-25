#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: Popup_Competition

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Stigma_structs.hpp"
#include "Stigma_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Popup_Competition.Popup_Competition_C
// 0x0208 (0x0798 - 0x0590)
class UPopup_Competition_C final : public UPopup_Competition
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0590(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       UI_OnShow;                                         // 0x0598(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Background;                                        // 0x05A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_RemainDateTimer_C*                  BreakRemainTimer;                                  // 0x05A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Btn_FastStart;                                     // 0x05B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                BTN_Guide;                                         // 0x05B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Btn_Info;                                          // 0x05C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                BTN_Lock;                                          // 0x05C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                BTN_Rank;                                          // 0x05D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                BTN_RankSheet;                                     // 0x05D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCtrl_CompetitionRow_C*                 Ctrl_CompetitionRow_119;                           // 0x05E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_5;                                           // 0x05E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_18;                                          // 0x05F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_19;                                          // 0x05F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_20;                                          // 0x0600(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_21;                                          // 0x0608(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_22;                                          // 0x0610(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_23;                                          // 0x0618(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_24;                                          // 0x0620(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_105;                                         // 0x0628(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_182;                                         // 0x0630(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_214;                                         // 0x0638(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_299;                                         // 0x0640(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_414;                                         // 0x0648(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 M_Flip;                                            // 0x0650(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 M_GlowRing;                                        // 0x0658(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 M_Img_Bg;                                          // 0x0660(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 M_Master_Bg;                                       // 0x0668(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Ovl_Bottom;                                        // 0x0670(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Ovl_Competition_Guide;                             // 0x0678(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               OVL_Join;                                          // 0x0680(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               OVL_MyBestRanking;                                 // 0x0688(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               OVL_MyGetReward;                                   // 0x0690(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               OVL_MyWin1;                                        // 0x0698(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               OVL_MyWin2;                                        // 0x06A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 T_Icon_Trophy;                                     // 0x06A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCtrl_CompetitionTab_C*                 Tab_Hour;                                          // 0x06B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TXT_DiamondCnt;                                    // 0x06B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Txt_Info;                                          // 0x06C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TXT_InfoBreakTime;                                 // 0x06C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TXT_InfoCompetitionTime;                           // 0x06D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TXT_InfoPlayerNum;                                 // 0x06D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TXT_Lock;                                          // 0x06E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TXT_MyBestRanking;                                 // 0x06E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TXT_MyGetRewardCnt;                                // 0x06F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TXT_MyJoinCnt;                                     // 0x06F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TXT_MyWin1Cnt;                                     // 0x0700(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TXT_MyWin2Cnt;                                     // 0x0708(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TXT_RemainMention;                                 // 0x0710(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           V_ReweardByRank;                                   // 0x0718(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWIDGET_PopupBase_C*                    WIDGET_PopupBase;                                  // 0x0720(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        Ws_Bottom_Button;                                  // 0x0728(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WS_Contents;                                       // 0x0730(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WS_GuideBtn;                                       // 0x0738(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WS_Ranking;                                        // 0x0740(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TSet<EUserEvent>                              Events;                                            // 0x0748(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void UpdateMyHistory();
	void UpdateFastStartDia();
	void UpdateCompetitionInfo();
	void Update();
	void ShowRanking_Rank(ECompetitionType _competition_type);
	void ShowRanking_Info(ECompetitionType _competition_type);
	void ShowGuide();
	void SetVisibilityStatus(int32 _cnt, class UOverlay* _visible_widget, class UTextBlock* _text_widget, bool _force_visible);
	void InitWidget();
	void ExecuteUbergraph_Popup_Competition(int32 EntryPoint);
	void CalcCurrency_OnFastStart(struct FCurrencyPlain* Currency);
	void BndEvt__Popup_Competition_WIDGET_PopupBase_K2Node_ComponentBoundEvent_2_OnClick_GoBack__DelegateSignature();
	void BndEvt__Popup_Competition_Tab_Hour_K2Node_ComponentBoundEvent_1_OnSelected__DelegateSignature(class FName _id);
	void BndEvt__Popup_Competition_Button_267_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Popup_Competition_BTN_Rank_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Popup_Competition_BTN_MyRank_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Popup_Competition_BTN_FastStart_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Popup_Competition_BTN_Before_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Popup_Competition_C">();
	}
	static class UPopup_Competition_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPopup_Competition_C>();
	}
};
static_assert(alignof(UPopup_Competition_C) == 0x000008, "Wrong alignment on UPopup_Competition_C");
static_assert(sizeof(UPopup_Competition_C) == 0x000798, "Wrong size on UPopup_Competition_C");
static_assert(offsetof(UPopup_Competition_C, UberGraphFrame) == 0x000590, "Member 'UPopup_Competition_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPopup_Competition_C, UI_OnShow) == 0x000598, "Member 'UPopup_Competition_C::UI_OnShow' has a wrong offset!");
static_assert(offsetof(UPopup_Competition_C, Background) == 0x0005A0, "Member 'UPopup_Competition_C::Background' has a wrong offset!");
static_assert(offsetof(UPopup_Competition_C, BreakRemainTimer) == 0x0005A8, "Member 'UPopup_Competition_C::BreakRemainTimer' has a wrong offset!");
static_assert(offsetof(UPopup_Competition_C, Btn_FastStart) == 0x0005B0, "Member 'UPopup_Competition_C::Btn_FastStart' has a wrong offset!");
static_assert(offsetof(UPopup_Competition_C, BTN_Guide) == 0x0005B8, "Member 'UPopup_Competition_C::BTN_Guide' has a wrong offset!");
static_assert(offsetof(UPopup_Competition_C, Btn_Info) == 0x0005C0, "Member 'UPopup_Competition_C::Btn_Info' has a wrong offset!");
static_assert(offsetof(UPopup_Competition_C, BTN_Lock) == 0x0005C8, "Member 'UPopup_Competition_C::BTN_Lock' has a wrong offset!");
static_assert(offsetof(UPopup_Competition_C, BTN_Rank) == 0x0005D0, "Member 'UPopup_Competition_C::BTN_Rank' has a wrong offset!");
static_assert(offsetof(UPopup_Competition_C, BTN_RankSheet) == 0x0005D8, "Member 'UPopup_Competition_C::BTN_RankSheet' has a wrong offset!");
static_assert(offsetof(UPopup_Competition_C, Ctrl_CompetitionRow_119) == 0x0005E0, "Member 'UPopup_Competition_C::Ctrl_CompetitionRow_119' has a wrong offset!");
static_assert(offsetof(UPopup_Competition_C, Image_5) == 0x0005E8, "Member 'UPopup_Competition_C::Image_5' has a wrong offset!");
static_assert(offsetof(UPopup_Competition_C, Image_18) == 0x0005F0, "Member 'UPopup_Competition_C::Image_18' has a wrong offset!");
static_assert(offsetof(UPopup_Competition_C, Image_19) == 0x0005F8, "Member 'UPopup_Competition_C::Image_19' has a wrong offset!");
static_assert(offsetof(UPopup_Competition_C, Image_20) == 0x000600, "Member 'UPopup_Competition_C::Image_20' has a wrong offset!");
static_assert(offsetof(UPopup_Competition_C, Image_21) == 0x000608, "Member 'UPopup_Competition_C::Image_21' has a wrong offset!");
static_assert(offsetof(UPopup_Competition_C, Image_22) == 0x000610, "Member 'UPopup_Competition_C::Image_22' has a wrong offset!");
static_assert(offsetof(UPopup_Competition_C, Image_23) == 0x000618, "Member 'UPopup_Competition_C::Image_23' has a wrong offset!");
static_assert(offsetof(UPopup_Competition_C, Image_24) == 0x000620, "Member 'UPopup_Competition_C::Image_24' has a wrong offset!");
static_assert(offsetof(UPopup_Competition_C, Image_105) == 0x000628, "Member 'UPopup_Competition_C::Image_105' has a wrong offset!");
static_assert(offsetof(UPopup_Competition_C, Image_182) == 0x000630, "Member 'UPopup_Competition_C::Image_182' has a wrong offset!");
static_assert(offsetof(UPopup_Competition_C, Image_214) == 0x000638, "Member 'UPopup_Competition_C::Image_214' has a wrong offset!");
static_assert(offsetof(UPopup_Competition_C, Image_299) == 0x000640, "Member 'UPopup_Competition_C::Image_299' has a wrong offset!");
static_assert(offsetof(UPopup_Competition_C, Image_414) == 0x000648, "Member 'UPopup_Competition_C::Image_414' has a wrong offset!");
static_assert(offsetof(UPopup_Competition_C, M_Flip) == 0x000650, "Member 'UPopup_Competition_C::M_Flip' has a wrong offset!");
static_assert(offsetof(UPopup_Competition_C, M_GlowRing) == 0x000658, "Member 'UPopup_Competition_C::M_GlowRing' has a wrong offset!");
static_assert(offsetof(UPopup_Competition_C, M_Img_Bg) == 0x000660, "Member 'UPopup_Competition_C::M_Img_Bg' has a wrong offset!");
static_assert(offsetof(UPopup_Competition_C, M_Master_Bg) == 0x000668, "Member 'UPopup_Competition_C::M_Master_Bg' has a wrong offset!");
static_assert(offsetof(UPopup_Competition_C, Ovl_Bottom) == 0x000670, "Member 'UPopup_Competition_C::Ovl_Bottom' has a wrong offset!");
static_assert(offsetof(UPopup_Competition_C, Ovl_Competition_Guide) == 0x000678, "Member 'UPopup_Competition_C::Ovl_Competition_Guide' has a wrong offset!");
static_assert(offsetof(UPopup_Competition_C, OVL_Join) == 0x000680, "Member 'UPopup_Competition_C::OVL_Join' has a wrong offset!");
static_assert(offsetof(UPopup_Competition_C, OVL_MyBestRanking) == 0x000688, "Member 'UPopup_Competition_C::OVL_MyBestRanking' has a wrong offset!");
static_assert(offsetof(UPopup_Competition_C, OVL_MyGetReward) == 0x000690, "Member 'UPopup_Competition_C::OVL_MyGetReward' has a wrong offset!");
static_assert(offsetof(UPopup_Competition_C, OVL_MyWin1) == 0x000698, "Member 'UPopup_Competition_C::OVL_MyWin1' has a wrong offset!");
static_assert(offsetof(UPopup_Competition_C, OVL_MyWin2) == 0x0006A0, "Member 'UPopup_Competition_C::OVL_MyWin2' has a wrong offset!");
static_assert(offsetof(UPopup_Competition_C, T_Icon_Trophy) == 0x0006A8, "Member 'UPopup_Competition_C::T_Icon_Trophy' has a wrong offset!");
static_assert(offsetof(UPopup_Competition_C, Tab_Hour) == 0x0006B0, "Member 'UPopup_Competition_C::Tab_Hour' has a wrong offset!");
static_assert(offsetof(UPopup_Competition_C, TXT_DiamondCnt) == 0x0006B8, "Member 'UPopup_Competition_C::TXT_DiamondCnt' has a wrong offset!");
static_assert(offsetof(UPopup_Competition_C, Txt_Info) == 0x0006C0, "Member 'UPopup_Competition_C::Txt_Info' has a wrong offset!");
static_assert(offsetof(UPopup_Competition_C, TXT_InfoBreakTime) == 0x0006C8, "Member 'UPopup_Competition_C::TXT_InfoBreakTime' has a wrong offset!");
static_assert(offsetof(UPopup_Competition_C, TXT_InfoCompetitionTime) == 0x0006D0, "Member 'UPopup_Competition_C::TXT_InfoCompetitionTime' has a wrong offset!");
static_assert(offsetof(UPopup_Competition_C, TXT_InfoPlayerNum) == 0x0006D8, "Member 'UPopup_Competition_C::TXT_InfoPlayerNum' has a wrong offset!");
static_assert(offsetof(UPopup_Competition_C, TXT_Lock) == 0x0006E0, "Member 'UPopup_Competition_C::TXT_Lock' has a wrong offset!");
static_assert(offsetof(UPopup_Competition_C, TXT_MyBestRanking) == 0x0006E8, "Member 'UPopup_Competition_C::TXT_MyBestRanking' has a wrong offset!");
static_assert(offsetof(UPopup_Competition_C, TXT_MyGetRewardCnt) == 0x0006F0, "Member 'UPopup_Competition_C::TXT_MyGetRewardCnt' has a wrong offset!");
static_assert(offsetof(UPopup_Competition_C, TXT_MyJoinCnt) == 0x0006F8, "Member 'UPopup_Competition_C::TXT_MyJoinCnt' has a wrong offset!");
static_assert(offsetof(UPopup_Competition_C, TXT_MyWin1Cnt) == 0x000700, "Member 'UPopup_Competition_C::TXT_MyWin1Cnt' has a wrong offset!");
static_assert(offsetof(UPopup_Competition_C, TXT_MyWin2Cnt) == 0x000708, "Member 'UPopup_Competition_C::TXT_MyWin2Cnt' has a wrong offset!");
static_assert(offsetof(UPopup_Competition_C, TXT_RemainMention) == 0x000710, "Member 'UPopup_Competition_C::TXT_RemainMention' has a wrong offset!");
static_assert(offsetof(UPopup_Competition_C, V_ReweardByRank) == 0x000718, "Member 'UPopup_Competition_C::V_ReweardByRank' has a wrong offset!");
static_assert(offsetof(UPopup_Competition_C, WIDGET_PopupBase) == 0x000720, "Member 'UPopup_Competition_C::WIDGET_PopupBase' has a wrong offset!");
static_assert(offsetof(UPopup_Competition_C, Ws_Bottom_Button) == 0x000728, "Member 'UPopup_Competition_C::Ws_Bottom_Button' has a wrong offset!");
static_assert(offsetof(UPopup_Competition_C, WS_Contents) == 0x000730, "Member 'UPopup_Competition_C::WS_Contents' has a wrong offset!");
static_assert(offsetof(UPopup_Competition_C, WS_GuideBtn) == 0x000738, "Member 'UPopup_Competition_C::WS_GuideBtn' has a wrong offset!");
static_assert(offsetof(UPopup_Competition_C, WS_Ranking) == 0x000740, "Member 'UPopup_Competition_C::WS_Ranking' has a wrong offset!");
static_assert(offsetof(UPopup_Competition_C, Events) == 0x000748, "Member 'UPopup_Competition_C::Events' has a wrong offset!");

}

