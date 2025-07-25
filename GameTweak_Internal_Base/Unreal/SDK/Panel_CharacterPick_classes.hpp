#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: Panel_CharacterPick

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"
#include "Stigma_structs.hpp"
#include "Stigma_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Panel_CharacterPick.Panel_CharacterPick_C
// 0x0180 (0x0780 - 0x0600)
class UPanel_CharacterPick_C final : public UUI_WaitingRoom_CharacterPick
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0600(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       UI_OnHide;                                         // 0x0608(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       UI_OnShow;                                         // 0x0610(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Message_Anim;                                      // 0x0618(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UButton*                                BTN_RandomMaster;                                  // 0x0620(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UComboBoxString*                        CB_Map;                                            // 0x0628(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UComboBoxString*                        CB_Mode;                                           // 0x0630(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCtrl_MasterChange_C*                   Ctrl_MasterChange;                                 // 0x0638(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CV_GameAndMode;                                    // 0x0640(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           DevOnly;                                           // 0x0648(0x0008)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGNB_WaitingRoom_C*                     GNB_WaitingRoom;                                   // 0x0650(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_117;                                         // 0x0658(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Message_Txt;                                       // 0x0660(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Ovl_SelectMaster;                                  // 0x0668(0x0008)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPANEL_Booster_C*                       PANEL_Booster;                                     // 0x0670(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPanel_Characters_C*                    Panel_Characters;                                  // 0x0678(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Panel_Main;                                        // 0x0680(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPANEL_Master_ActiveSkill_C*            PANEL_Master_ActiveSkill;                          // 0x0688(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPANEL_MasterSettingBrief_InGame_C*     PANEL_MasterSettingBrief_InGame;                   // 0x0690(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_PlayerReadyStateContainer_C*        PlayerReadyStateContainer;                         // 0x0698(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TXT_ChangeInfo;                                    // 0x06A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TXT_CustomGame;                                    // 0x06A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TXT_MasterChange;                                  // 0x06B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TXT_Seconds;                                       // 0x06B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_MasterMissionBrief_C*               UI_MasterMissionBrief;                             // 0x06C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_TextDialogue_Mission_C*             UI_TextDialogue_Mission;                           // 0x06C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VERT_AllyCoaches;                                  // 0x06D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VERT_AllyPlayers;                                  // 0x06D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWIDGET_CharacterTitle_C*               WIDGET_CharacterTitle_0;                           // 0x06E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWIDGET_CharacterTitle_C*               WIDGET_CharacterTitle_1;                           // 0x06E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWIDGET_CharacterTitle_C*               WIDGET_CharacterTitle_2;                           // 0x06F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWIDGET_ModeAndMap_C*                   WIDGET_ModeAndMap;                                 // 0x06F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWIDGET_PickedCharacter_C*              WIDGET_PickedCharacter_0;                          // 0x0700(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWIDGET_PickedCharacter_C*              WIDGET_PickedCharacter_1;                          // 0x0708(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWIDGET_PickedCharacter_C*              WIDGET_PickedCharacter_2;                          // 0x0710(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FString                                 LastMapName;                                       // 0x0718(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	EGameMode                                     LastGameMode;                                      // 0x0728(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3DAB[0x7];                                     // 0x0729(0x0007)(Fixing Size After Last Property [ Dumper-69 ])
	class UPopup_Armory_C*                        Popup_Armory;                                      // 0x0730(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClickReady;                                      // 0x0738(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class AMatchServicedPlayerState*              LocalPlayerState;                                  // 0x0748(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          ShowDevMenu;                                       // 0x0750(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ModeForChangingMaster;                             // 0x0751(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          HasStartedBattle;                                  // 0x0752(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3DAC[0x1];                                     // 0x0753(0x0001)(Fixing Size After Last Property [ Dumper-69 ])
	int32                                         LastSeconds;                                       // 0x0754(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClickClose;                                      // 0x0758(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	ECharaType                                    SelectChara;                                       // 0x0768(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3DAD[0x7];                                     // 0x0769(0x0007)(Fixing Size After Last Property [ Dumper-69 ])
	FMulticastInlineDelegateProperty_             OnUpdateMannequin;                                 // 0x0770(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void AddDuplicatedCharacterWarning();
	void AddMessage(const class FText& Text, bool _force);
	ESlateVisibility BIND_Get_MasterSelect_Visibility();
	ESlateVisibility BIND_Visibility_ActiveSkills();
	ESlateVisibility BIND_Visibility_BTN_ActiveSkills();
	ESlateVisibility BIND_Visibility_CharaPalette();
	ESlateVisibility BIND_Visibility_ReadyButton();
	ESlateVisibility BIND_Visibility_Teams();
	ESlateVisibility BIND_Visibility_TopCharaName();
	void BindConfirmEvent();
	void BindUpdateMannequinEvent();
	void BndEvt__Panel_CharacterPick_BTN_RandomMaster_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Panel_CharacterPick_BTN_Ready_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
	void BndEvt__Panel_CharacterPick_GNB_WaitingRoom_K2Node_ComponentBoundEvent_16_OnClickESC__DelegateSignature();
	void BndEvt__Panel_CharacterPick_PANEL_MasterSettingBrief_InGame_K2Node_ComponentBoundEvent_5_OnOpenPopup__DelegateSignature();
	void BndEvt__Panel_CharacterPick_PANEL_MasterSettingBrief_InGame_K2Node_ComponentBoundEvent_8_OnClosePopup__DelegateSignature();
	void BndEvt__Panel_CharacterPick_WIDGET_PickedCharacter_0_K2Node_ComponentBoundEvent_11_OnSelect__DelegateSignature();
	void BndEvt__Panel_CharacterPick_WIDGET_PickedCharacter_0_K2Node_ComponentBoundEvent_17_OnOpenPopup__DelegateSignature();
	void BndEvt__Panel_CharacterPick_WIDGET_PickedCharacter_0_K2Node_ComponentBoundEvent_18_OnClosePopup__DelegateSignature();
	void BndEvt__Panel_CharacterPick_WIDGET_PickedCharacter_0_K2Node_ComponentBoundEvent_2_OnMoveDown__DelegateSignature();
	void BndEvt__Panel_CharacterPick_WIDGET_PickedCharacter_1_K2Node_ComponentBoundEvent_12_OnSelect__DelegateSignature();
	void BndEvt__Panel_CharacterPick_WIDGET_PickedCharacter_1_K2Node_ComponentBoundEvent_19_OnOpenPopup__DelegateSignature();
	void BndEvt__Panel_CharacterPick_WIDGET_PickedCharacter_1_K2Node_ComponentBoundEvent_20_OnClosePopup__DelegateSignature();
	void BndEvt__Panel_CharacterPick_WIDGET_PickedCharacter_1_K2Node_ComponentBoundEvent_3_OnMoveUp__DelegateSignature();
	void BndEvt__Panel_CharacterPick_WIDGET_PickedCharacter_1_K2Node_ComponentBoundEvent_9_OnMoveDown__DelegateSignature();
	void BndEvt__Panel_CharacterPick_WIDGET_PickedCharacter_2_K2Node_ComponentBoundEvent_10_OnMoveUp__DelegateSignature();
	void BndEvt__Panel_CharacterPick_WIDGET_PickedCharacter_2_K2Node_ComponentBoundEvent_13_OnSelect__DelegateSignature();
	void BndEvt__Panel_CharacterPick_WIDGET_PickedCharacter_2_K2Node_ComponentBoundEvent_21_OnOpenPopup__DelegateSignature();
	void BndEvt__Panel_CharacterPick_WIDGET_PickedCharacter_2_K2Node_ComponentBoundEvent_22_OnClosePopup__DelegateSignature();
	void BndEvt__UI_WaitingRoom_CB_Map_K2Node_ComponentBoundEvent_6_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType);
	void BndEvt__UI_WaitingRoom_CB_Mode_K2Node_ComponentBoundEvent_7_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType);
	void BndEvt__UI_WaitingRoom_Panel_Characters_K2Node_ComponentBoundEvent_0_OnCharacterSelected__DelegateSignature(ECharaType _chara_type);
	void CheckAndUpdateMapAndMode();
	void CheckMasterMissionBrief();
	void ClearMessage();
	void Construct();
	void CreatePlayerWidget(class AMatchServicedPlayerState* _ps);
	void Destruct();
	void DEV_BuildModeAndMapCombo();
	void DEV_SelectMode(EGameMode _mode, bool _notify);
	void DriveDuplicatedCharaText();
	void ExecuteUbergraph_Panel_CharacterPick(int32 EntryPoint);
	ESlateVisibility Get_Visibility_Dev_Panel();
	void GetCharacterTitleByIndex(int32 _zidx, class UWIDGET_CharacterTitle_C** _widget);
	void GetCurrentPickedCharaType(ECharaType* Char_Type);
	class UWidget* GetToolTip_MasterRandomBtn();
	void Init();
	void InitReadyButton();
	void InpActEvt_Delete_K2Node_InputKeyEvent_0(const struct FKey& Key);
	void On_Select_Character(ECharaType _chara_type);
	void On_Start_Battle();
	bool OnChange_CanReady(bool _can_ready);
	bool OnChange_PickedCharacter();
	void OnClick_ReadyButton();
	void OnClickClose__DelegateSignature();
	void OnClickReady__DelegateSignature();
	void OnConfirm_ACK(EConfirmResponse Response);
	void OnDestroy();
	void OnDestruct();
	void OnEndWaiting();
	void OnFailure_B3762E494CFECE25D8C84FB38DAC6C74(class APlayerController* PlayerController);
	bool OnLOCAL_ChangeCharacterSetting(class AMatchServicedPlayerState* _ps);
	bool OnPlayerJoin(class AMatchServicedPlayerState* _ps);
	bool OnPlayerLeaved(class AMatchServicedPlayerState* _ps);
	bool OnPlayerUpdate(class AMatchServicedPlayerState* _ps);
	void OnSuccess_B3762E494CFECE25D8C84FB38DAC6C74(class APlayerController* PlayerController);
	struct FNetReply OnUpdateGunType(EResultCode _rcode, const struct FApiResult& _ack);
	void OnUpdateLocalPlayerContext(EUserEvent _event);
	void OnUpdateMannequin__DelegateSignature();
	void OnUserCommitTeamChat(struct FChatMsg& _chat_msg);
	void PickRandomMaster();
	void SetCharacterSetting(const struct FItemID& _item_id, int32 _slot_zidx);
	void SetReadyButtonState(bool _is_ready_to_fight);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ToggleDevMenus();
	void Update_Game_Mode_And_Map();
	void Update_Left_Seconds();
	void UpdateCharacterSelect();
	void UpdateCharaInfo(class AWaitingRoomPlayerState* _player_state);
	void UpdateLocalPlayer_Character();
	bool UpdatePlayerInfo(class AMatchServicedPlayerState* _player_state);

	void DEV_GetSelectedMap(class FString* _map) const;
	void DEV_GetSelectedMode(EGameMode* _mode) const;
	void GameState(class AMatchServicedGameState** _game_state) const;
	void GetCurrentCharaType(ECharaType* _chara_type) const;
	void GetPlayerState(bool NewParam, class AMatchServicedPlayerState** _player_state) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Panel_CharacterPick_C">();
	}
	static class UPanel_CharacterPick_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPanel_CharacterPick_C>();
	}
};
static_assert(alignof(UPanel_CharacterPick_C) == 0x000010, "Wrong alignment on UPanel_CharacterPick_C");
static_assert(sizeof(UPanel_CharacterPick_C) == 0x000780, "Wrong size on UPanel_CharacterPick_C");
static_assert(offsetof(UPanel_CharacterPick_C, UberGraphFrame) == 0x000600, "Member 'UPanel_CharacterPick_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPanel_CharacterPick_C, UI_OnHide) == 0x000608, "Member 'UPanel_CharacterPick_C::UI_OnHide' has a wrong offset!");
static_assert(offsetof(UPanel_CharacterPick_C, UI_OnShow) == 0x000610, "Member 'UPanel_CharacterPick_C::UI_OnShow' has a wrong offset!");
static_assert(offsetof(UPanel_CharacterPick_C, Message_Anim) == 0x000618, "Member 'UPanel_CharacterPick_C::Message_Anim' has a wrong offset!");
static_assert(offsetof(UPanel_CharacterPick_C, BTN_RandomMaster) == 0x000620, "Member 'UPanel_CharacterPick_C::BTN_RandomMaster' has a wrong offset!");
static_assert(offsetof(UPanel_CharacterPick_C, CB_Map) == 0x000628, "Member 'UPanel_CharacterPick_C::CB_Map' has a wrong offset!");
static_assert(offsetof(UPanel_CharacterPick_C, CB_Mode) == 0x000630, "Member 'UPanel_CharacterPick_C::CB_Mode' has a wrong offset!");
static_assert(offsetof(UPanel_CharacterPick_C, Ctrl_MasterChange) == 0x000638, "Member 'UPanel_CharacterPick_C::Ctrl_MasterChange' has a wrong offset!");
static_assert(offsetof(UPanel_CharacterPick_C, CV_GameAndMode) == 0x000640, "Member 'UPanel_CharacterPick_C::CV_GameAndMode' has a wrong offset!");
static_assert(offsetof(UPanel_CharacterPick_C, DevOnly) == 0x000648, "Member 'UPanel_CharacterPick_C::DevOnly' has a wrong offset!");
static_assert(offsetof(UPanel_CharacterPick_C, GNB_WaitingRoom) == 0x000650, "Member 'UPanel_CharacterPick_C::GNB_WaitingRoom' has a wrong offset!");
static_assert(offsetof(UPanel_CharacterPick_C, Image_117) == 0x000658, "Member 'UPanel_CharacterPick_C::Image_117' has a wrong offset!");
static_assert(offsetof(UPanel_CharacterPick_C, Message_Txt) == 0x000660, "Member 'UPanel_CharacterPick_C::Message_Txt' has a wrong offset!");
static_assert(offsetof(UPanel_CharacterPick_C, Ovl_SelectMaster) == 0x000668, "Member 'UPanel_CharacterPick_C::Ovl_SelectMaster' has a wrong offset!");
static_assert(offsetof(UPanel_CharacterPick_C, PANEL_Booster) == 0x000670, "Member 'UPanel_CharacterPick_C::PANEL_Booster' has a wrong offset!");
static_assert(offsetof(UPanel_CharacterPick_C, Panel_Characters) == 0x000678, "Member 'UPanel_CharacterPick_C::Panel_Characters' has a wrong offset!");
static_assert(offsetof(UPanel_CharacterPick_C, Panel_Main) == 0x000680, "Member 'UPanel_CharacterPick_C::Panel_Main' has a wrong offset!");
static_assert(offsetof(UPanel_CharacterPick_C, PANEL_Master_ActiveSkill) == 0x000688, "Member 'UPanel_CharacterPick_C::PANEL_Master_ActiveSkill' has a wrong offset!");
static_assert(offsetof(UPanel_CharacterPick_C, PANEL_MasterSettingBrief_InGame) == 0x000690, "Member 'UPanel_CharacterPick_C::PANEL_MasterSettingBrief_InGame' has a wrong offset!");
static_assert(offsetof(UPanel_CharacterPick_C, PlayerReadyStateContainer) == 0x000698, "Member 'UPanel_CharacterPick_C::PlayerReadyStateContainer' has a wrong offset!");
static_assert(offsetof(UPanel_CharacterPick_C, TXT_ChangeInfo) == 0x0006A0, "Member 'UPanel_CharacterPick_C::TXT_ChangeInfo' has a wrong offset!");
static_assert(offsetof(UPanel_CharacterPick_C, TXT_CustomGame) == 0x0006A8, "Member 'UPanel_CharacterPick_C::TXT_CustomGame' has a wrong offset!");
static_assert(offsetof(UPanel_CharacterPick_C, TXT_MasterChange) == 0x0006B0, "Member 'UPanel_CharacterPick_C::TXT_MasterChange' has a wrong offset!");
static_assert(offsetof(UPanel_CharacterPick_C, TXT_Seconds) == 0x0006B8, "Member 'UPanel_CharacterPick_C::TXT_Seconds' has a wrong offset!");
static_assert(offsetof(UPanel_CharacterPick_C, UI_MasterMissionBrief) == 0x0006C0, "Member 'UPanel_CharacterPick_C::UI_MasterMissionBrief' has a wrong offset!");
static_assert(offsetof(UPanel_CharacterPick_C, UI_TextDialogue_Mission) == 0x0006C8, "Member 'UPanel_CharacterPick_C::UI_TextDialogue_Mission' has a wrong offset!");
static_assert(offsetof(UPanel_CharacterPick_C, VERT_AllyCoaches) == 0x0006D0, "Member 'UPanel_CharacterPick_C::VERT_AllyCoaches' has a wrong offset!");
static_assert(offsetof(UPanel_CharacterPick_C, VERT_AllyPlayers) == 0x0006D8, "Member 'UPanel_CharacterPick_C::VERT_AllyPlayers' has a wrong offset!");
static_assert(offsetof(UPanel_CharacterPick_C, WIDGET_CharacterTitle_0) == 0x0006E0, "Member 'UPanel_CharacterPick_C::WIDGET_CharacterTitle_0' has a wrong offset!");
static_assert(offsetof(UPanel_CharacterPick_C, WIDGET_CharacterTitle_1) == 0x0006E8, "Member 'UPanel_CharacterPick_C::WIDGET_CharacterTitle_1' has a wrong offset!");
static_assert(offsetof(UPanel_CharacterPick_C, WIDGET_CharacterTitle_2) == 0x0006F0, "Member 'UPanel_CharacterPick_C::WIDGET_CharacterTitle_2' has a wrong offset!");
static_assert(offsetof(UPanel_CharacterPick_C, WIDGET_ModeAndMap) == 0x0006F8, "Member 'UPanel_CharacterPick_C::WIDGET_ModeAndMap' has a wrong offset!");
static_assert(offsetof(UPanel_CharacterPick_C, WIDGET_PickedCharacter_0) == 0x000700, "Member 'UPanel_CharacterPick_C::WIDGET_PickedCharacter_0' has a wrong offset!");
static_assert(offsetof(UPanel_CharacterPick_C, WIDGET_PickedCharacter_1) == 0x000708, "Member 'UPanel_CharacterPick_C::WIDGET_PickedCharacter_1' has a wrong offset!");
static_assert(offsetof(UPanel_CharacterPick_C, WIDGET_PickedCharacter_2) == 0x000710, "Member 'UPanel_CharacterPick_C::WIDGET_PickedCharacter_2' has a wrong offset!");
static_assert(offsetof(UPanel_CharacterPick_C, LastMapName) == 0x000718, "Member 'UPanel_CharacterPick_C::LastMapName' has a wrong offset!");
static_assert(offsetof(UPanel_CharacterPick_C, LastGameMode) == 0x000728, "Member 'UPanel_CharacterPick_C::LastGameMode' has a wrong offset!");
static_assert(offsetof(UPanel_CharacterPick_C, Popup_Armory) == 0x000730, "Member 'UPanel_CharacterPick_C::Popup_Armory' has a wrong offset!");
static_assert(offsetof(UPanel_CharacterPick_C, OnClickReady) == 0x000738, "Member 'UPanel_CharacterPick_C::OnClickReady' has a wrong offset!");
static_assert(offsetof(UPanel_CharacterPick_C, LocalPlayerState) == 0x000748, "Member 'UPanel_CharacterPick_C::LocalPlayerState' has a wrong offset!");
static_assert(offsetof(UPanel_CharacterPick_C, ShowDevMenu) == 0x000750, "Member 'UPanel_CharacterPick_C::ShowDevMenu' has a wrong offset!");
static_assert(offsetof(UPanel_CharacterPick_C, ModeForChangingMaster) == 0x000751, "Member 'UPanel_CharacterPick_C::ModeForChangingMaster' has a wrong offset!");
static_assert(offsetof(UPanel_CharacterPick_C, HasStartedBattle) == 0x000752, "Member 'UPanel_CharacterPick_C::HasStartedBattle' has a wrong offset!");
static_assert(offsetof(UPanel_CharacterPick_C, LastSeconds) == 0x000754, "Member 'UPanel_CharacterPick_C::LastSeconds' has a wrong offset!");
static_assert(offsetof(UPanel_CharacterPick_C, OnClickClose) == 0x000758, "Member 'UPanel_CharacterPick_C::OnClickClose' has a wrong offset!");
static_assert(offsetof(UPanel_CharacterPick_C, SelectChara) == 0x000768, "Member 'UPanel_CharacterPick_C::SelectChara' has a wrong offset!");
static_assert(offsetof(UPanel_CharacterPick_C, OnUpdateMannequin) == 0x000770, "Member 'UPanel_CharacterPick_C::OnUpdateMannequin' has a wrong offset!");

}

