#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: Panel_Tab_Players

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "Stigma_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Panel_Tab_Players.Panel_Tab_Players_C
// 0x00A8 (0x0368 - 0x02C0)
class UPanel_Tab_Players_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                           BlueTeamContainer;                                 // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_Yellow;                                // 0x02D0(0x0008)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IMG_Ranking_Blue;                                  // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IMG_Ranking_Blue_BG;                               // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IMG_Ranking_Red;                                   // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IMG_Ranking_Red_BG;                                // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IMG_Ranking_Yellow;                                // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IMG_Ranking_Yellow_BG;                             // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           RedTeamContainer;                                  // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Revive;                                            // 0x0310(0x0008)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                              SB_Ranking_BlueTeam;                               // 0x0318(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                              SB_Ranking_RedTeam;                                // 0x0320(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                              SB_Ranking_YellowTeam;                             // 0x0328(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SB_RankingEmptyForBounty;                          // 0x0330(0x0008)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Transfer;                                          // 0x0338(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           YellowTeamContainer;                               // 0x0340(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UCtrl_PlayersRow_C*>             FreeRows;                                          // 0x0348(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UCtrl_PlayersRow_C*>             UsedRows;                                          // 0x0358(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

public:
	void AllocRow(class UCtrl_PlayersRow_C** _row);
	void Construct();
	void ExecuteUbergraph_Panel_Tab_Players(int32 EntryPoint);
	void FreeAllRows();
	ESlateVisibility Get_BountyTDM_Visibility();
	ESlateVisibility Get_Revive_Visibility_0();
	void UpdateAllPlayers();
	void UpdateTeamRanking(ETeams _Team, class UImage* _widget_img_team_ranking, class UImage* _widget_img_team_ranking_bg);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Panel_Tab_Players_C">();
	}
	static class UPanel_Tab_Players_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPanel_Tab_Players_C>();
	}
};
static_assert(alignof(UPanel_Tab_Players_C) == 0x000008, "Wrong alignment on UPanel_Tab_Players_C");
static_assert(sizeof(UPanel_Tab_Players_C) == 0x000368, "Wrong size on UPanel_Tab_Players_C");
static_assert(offsetof(UPanel_Tab_Players_C, UberGraphFrame) == 0x0002C0, "Member 'UPanel_Tab_Players_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPanel_Tab_Players_C, BlueTeamContainer) == 0x0002C8, "Member 'UPanel_Tab_Players_C::BlueTeamContainer' has a wrong offset!");
static_assert(offsetof(UPanel_Tab_Players_C, CanvasPanel_Yellow) == 0x0002D0, "Member 'UPanel_Tab_Players_C::CanvasPanel_Yellow' has a wrong offset!");
static_assert(offsetof(UPanel_Tab_Players_C, IMG_Ranking_Blue) == 0x0002D8, "Member 'UPanel_Tab_Players_C::IMG_Ranking_Blue' has a wrong offset!");
static_assert(offsetof(UPanel_Tab_Players_C, IMG_Ranking_Blue_BG) == 0x0002E0, "Member 'UPanel_Tab_Players_C::IMG_Ranking_Blue_BG' has a wrong offset!");
static_assert(offsetof(UPanel_Tab_Players_C, IMG_Ranking_Red) == 0x0002E8, "Member 'UPanel_Tab_Players_C::IMG_Ranking_Red' has a wrong offset!");
static_assert(offsetof(UPanel_Tab_Players_C, IMG_Ranking_Red_BG) == 0x0002F0, "Member 'UPanel_Tab_Players_C::IMG_Ranking_Red_BG' has a wrong offset!");
static_assert(offsetof(UPanel_Tab_Players_C, IMG_Ranking_Yellow) == 0x0002F8, "Member 'UPanel_Tab_Players_C::IMG_Ranking_Yellow' has a wrong offset!");
static_assert(offsetof(UPanel_Tab_Players_C, IMG_Ranking_Yellow_BG) == 0x000300, "Member 'UPanel_Tab_Players_C::IMG_Ranking_Yellow_BG' has a wrong offset!");
static_assert(offsetof(UPanel_Tab_Players_C, RedTeamContainer) == 0x000308, "Member 'UPanel_Tab_Players_C::RedTeamContainer' has a wrong offset!");
static_assert(offsetof(UPanel_Tab_Players_C, Revive) == 0x000310, "Member 'UPanel_Tab_Players_C::Revive' has a wrong offset!");
static_assert(offsetof(UPanel_Tab_Players_C, SB_Ranking_BlueTeam) == 0x000318, "Member 'UPanel_Tab_Players_C::SB_Ranking_BlueTeam' has a wrong offset!");
static_assert(offsetof(UPanel_Tab_Players_C, SB_Ranking_RedTeam) == 0x000320, "Member 'UPanel_Tab_Players_C::SB_Ranking_RedTeam' has a wrong offset!");
static_assert(offsetof(UPanel_Tab_Players_C, SB_Ranking_YellowTeam) == 0x000328, "Member 'UPanel_Tab_Players_C::SB_Ranking_YellowTeam' has a wrong offset!");
static_assert(offsetof(UPanel_Tab_Players_C, SB_RankingEmptyForBounty) == 0x000330, "Member 'UPanel_Tab_Players_C::SB_RankingEmptyForBounty' has a wrong offset!");
static_assert(offsetof(UPanel_Tab_Players_C, Transfer) == 0x000338, "Member 'UPanel_Tab_Players_C::Transfer' has a wrong offset!");
static_assert(offsetof(UPanel_Tab_Players_C, YellowTeamContainer) == 0x000340, "Member 'UPanel_Tab_Players_C::YellowTeamContainer' has a wrong offset!");
static_assert(offsetof(UPanel_Tab_Players_C, FreeRows) == 0x000348, "Member 'UPanel_Tab_Players_C::FreeRows' has a wrong offset!");
static_assert(offsetof(UPanel_Tab_Players_C, UsedRows) == 0x000358, "Member 'UPanel_Tab_Players_C::UsedRows' has a wrong offset!");

}

