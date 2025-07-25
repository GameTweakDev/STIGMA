#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: Ctrl_HUD_ChallengeScorePanel

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Stigma_structs.hpp"
#include "Stigma_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Ctrl_HUD_ChallengeScorePanel.Ctrl_HUD_ChallengeScorePanel_C
// 0x00B0 (0x05B8 - 0x0508)
class UCtrl_HUD_ChallengeScorePanel_C final : public UHUD_TeamScorePanel
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0508(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCtrl_HUD_PlayerSlot_C*                 Ctrl_HUD_PlayerSlot_C_0;                           // 0x0510(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCtrl_HUD_PlayerSlot_C*                 Ctrl_HUD_PlayerSlot_C_1;                           // 0x0518(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCtrl_HUD_PlayerSlot_C*                 Ctrl_HUD_PlayerSlot_C_2;                           // 0x0520(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCtrl_HUD_PlayerSlot_C*                 Ctrl_HUD_PlayerSlot_C_3;                           // 0x0528(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCtrl_HUD_PlayerSlot_C*                 Ctrl_HUD_PlayerSlot_C_4;                           // 0x0530(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCtrl_HUD_StatsPanel_C*                 Ctrl_HUD_StatsPanel_Armor;                         // 0x0538(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCtrl_HUD_StatsPanel_C*                 Ctrl_HUD_StatsPanel_BlackCoin;                     // 0x0540(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCtrl_HUD_StatsPanel_C*                 Ctrl_HUD_StatsPanel_Gold;                          // 0x0548(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IMG_BlueTeamOutLine;                               // 0x0550(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IMG_RedTeamOutLine;                                // 0x0558(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IMG_RoundBg;                                       // 0x0560(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IMG_ScoreBg;                                       // 0x0568(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IMG_TeamBoxFrameStart;                             // 0x0570(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IMG_TeamBoxFrameStart_1;                           // 0x0578(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IMG_TeamBoxFrameStart_2;                           // 0x0580(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         RedTeamBoxInside;                                  // 0x0588(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         RedTeamBoxInside_1;                                // 0x0590(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TXT_Round;                                         // 0x0598(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Txt_Time;                                          // 0x05A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	ETeams                                        My_player_team;                                    // 0x05A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2819[0x3];                                     // 0x05A9(0x0003)(Fixing Size After Last Property [ Dumper-69 ])
	int32                                         LastWaveIndex;                                     // 0x05AC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         RemainSec;                                         // 0x05B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ClearPlayers();
	void Construct();
	void ExecuteUbergraph_Ctrl_HUD_ChallengeScorePanel(int32 EntryPoint);
	class FText Get_TXT_Round_Text_0();
	class FText Get_TXT_Time_Text_0();
	void GetTimeText(class FText* Text);
	void Reset();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void UdpateVariable();
	void UpdateNextWaves();
	void UpdatePlayer();
	void UpdatePlayer_to_Team_Panel();

	void GetRoundText(class FText* Text) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Ctrl_HUD_ChallengeScorePanel_C">();
	}
	static class UCtrl_HUD_ChallengeScorePanel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCtrl_HUD_ChallengeScorePanel_C>();
	}
};
static_assert(alignof(UCtrl_HUD_ChallengeScorePanel_C) == 0x000008, "Wrong alignment on UCtrl_HUD_ChallengeScorePanel_C");
static_assert(sizeof(UCtrl_HUD_ChallengeScorePanel_C) == 0x0005B8, "Wrong size on UCtrl_HUD_ChallengeScorePanel_C");
static_assert(offsetof(UCtrl_HUD_ChallengeScorePanel_C, UberGraphFrame) == 0x000508, "Member 'UCtrl_HUD_ChallengeScorePanel_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCtrl_HUD_ChallengeScorePanel_C, Ctrl_HUD_PlayerSlot_C_0) == 0x000510, "Member 'UCtrl_HUD_ChallengeScorePanel_C::Ctrl_HUD_PlayerSlot_C_0' has a wrong offset!");
static_assert(offsetof(UCtrl_HUD_ChallengeScorePanel_C, Ctrl_HUD_PlayerSlot_C_1) == 0x000518, "Member 'UCtrl_HUD_ChallengeScorePanel_C::Ctrl_HUD_PlayerSlot_C_1' has a wrong offset!");
static_assert(offsetof(UCtrl_HUD_ChallengeScorePanel_C, Ctrl_HUD_PlayerSlot_C_2) == 0x000520, "Member 'UCtrl_HUD_ChallengeScorePanel_C::Ctrl_HUD_PlayerSlot_C_2' has a wrong offset!");
static_assert(offsetof(UCtrl_HUD_ChallengeScorePanel_C, Ctrl_HUD_PlayerSlot_C_3) == 0x000528, "Member 'UCtrl_HUD_ChallengeScorePanel_C::Ctrl_HUD_PlayerSlot_C_3' has a wrong offset!");
static_assert(offsetof(UCtrl_HUD_ChallengeScorePanel_C, Ctrl_HUD_PlayerSlot_C_4) == 0x000530, "Member 'UCtrl_HUD_ChallengeScorePanel_C::Ctrl_HUD_PlayerSlot_C_4' has a wrong offset!");
static_assert(offsetof(UCtrl_HUD_ChallengeScorePanel_C, Ctrl_HUD_StatsPanel_Armor) == 0x000538, "Member 'UCtrl_HUD_ChallengeScorePanel_C::Ctrl_HUD_StatsPanel_Armor' has a wrong offset!");
static_assert(offsetof(UCtrl_HUD_ChallengeScorePanel_C, Ctrl_HUD_StatsPanel_BlackCoin) == 0x000540, "Member 'UCtrl_HUD_ChallengeScorePanel_C::Ctrl_HUD_StatsPanel_BlackCoin' has a wrong offset!");
static_assert(offsetof(UCtrl_HUD_ChallengeScorePanel_C, Ctrl_HUD_StatsPanel_Gold) == 0x000548, "Member 'UCtrl_HUD_ChallengeScorePanel_C::Ctrl_HUD_StatsPanel_Gold' has a wrong offset!");
static_assert(offsetof(UCtrl_HUD_ChallengeScorePanel_C, IMG_BlueTeamOutLine) == 0x000550, "Member 'UCtrl_HUD_ChallengeScorePanel_C::IMG_BlueTeamOutLine' has a wrong offset!");
static_assert(offsetof(UCtrl_HUD_ChallengeScorePanel_C, IMG_RedTeamOutLine) == 0x000558, "Member 'UCtrl_HUD_ChallengeScorePanel_C::IMG_RedTeamOutLine' has a wrong offset!");
static_assert(offsetof(UCtrl_HUD_ChallengeScorePanel_C, IMG_RoundBg) == 0x000560, "Member 'UCtrl_HUD_ChallengeScorePanel_C::IMG_RoundBg' has a wrong offset!");
static_assert(offsetof(UCtrl_HUD_ChallengeScorePanel_C, IMG_ScoreBg) == 0x000568, "Member 'UCtrl_HUD_ChallengeScorePanel_C::IMG_ScoreBg' has a wrong offset!");
static_assert(offsetof(UCtrl_HUD_ChallengeScorePanel_C, IMG_TeamBoxFrameStart) == 0x000570, "Member 'UCtrl_HUD_ChallengeScorePanel_C::IMG_TeamBoxFrameStart' has a wrong offset!");
static_assert(offsetof(UCtrl_HUD_ChallengeScorePanel_C, IMG_TeamBoxFrameStart_1) == 0x000578, "Member 'UCtrl_HUD_ChallengeScorePanel_C::IMG_TeamBoxFrameStart_1' has a wrong offset!");
static_assert(offsetof(UCtrl_HUD_ChallengeScorePanel_C, IMG_TeamBoxFrameStart_2) == 0x000580, "Member 'UCtrl_HUD_ChallengeScorePanel_C::IMG_TeamBoxFrameStart_2' has a wrong offset!");
static_assert(offsetof(UCtrl_HUD_ChallengeScorePanel_C, RedTeamBoxInside) == 0x000588, "Member 'UCtrl_HUD_ChallengeScorePanel_C::RedTeamBoxInside' has a wrong offset!");
static_assert(offsetof(UCtrl_HUD_ChallengeScorePanel_C, RedTeamBoxInside_1) == 0x000590, "Member 'UCtrl_HUD_ChallengeScorePanel_C::RedTeamBoxInside_1' has a wrong offset!");
static_assert(offsetof(UCtrl_HUD_ChallengeScorePanel_C, TXT_Round) == 0x000598, "Member 'UCtrl_HUD_ChallengeScorePanel_C::TXT_Round' has a wrong offset!");
static_assert(offsetof(UCtrl_HUD_ChallengeScorePanel_C, Txt_Time) == 0x0005A0, "Member 'UCtrl_HUD_ChallengeScorePanel_C::Txt_Time' has a wrong offset!");
static_assert(offsetof(UCtrl_HUD_ChallengeScorePanel_C, My_player_team) == 0x0005A8, "Member 'UCtrl_HUD_ChallengeScorePanel_C::My_player_team' has a wrong offset!");
static_assert(offsetof(UCtrl_HUD_ChallengeScorePanel_C, LastWaveIndex) == 0x0005AC, "Member 'UCtrl_HUD_ChallengeScorePanel_C::LastWaveIndex' has a wrong offset!");
static_assert(offsetof(UCtrl_HUD_ChallengeScorePanel_C, RemainSec) == 0x0005B0, "Member 'UCtrl_HUD_ChallengeScorePanel_C::RemainSec' has a wrong offset!");

}

