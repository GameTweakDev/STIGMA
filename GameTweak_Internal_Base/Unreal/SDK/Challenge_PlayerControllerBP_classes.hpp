#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: Challenge_PlayerControllerBP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Stigma_structs.hpp"
#include "Stigma_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Challenge_PlayerControllerBP.Challenge_PlayerControllerBP_C
// 0x0068 (0x0EB8 - 0x0E50)
class AChallenge_PlayerControllerBP_C final : public AChallenge_PlayerController
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0E50(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UHUD_ChallengeMode_C*                   UI_HUD_ChallengeMode;                              // 0x0E58(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UChallenge_ResultPopup_C*               Challenge_Result_Popup;                            // 0x0E60(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UChallenge_MissionResultPopup_C*        Challenge_Mission_Result_Popup;                    // 0x0E68(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FChallengeResult                       PrevResult;                                        // 0x0E70(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FChallengeResult                       CurrentResult;                                     // 0x0E90(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class UChallenge_RankPopup_C*                 RankPopup;                                         // 0x0EB0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

public:
	void CleanUpBattleWidgetsAfterDelay();
	void CleanUpBattleWidgetsBeforeDelay();
	void ClosePopup();
	void Determine_Next_Phase();
	void ExecuteUbergraph_Challenge_PlayerControllerBP(int32 EntryPoint);
	void OnFinishRound(const struct FChallengeResult& _prev, const struct FChallengeResult& _result);
	void ShowChallengeResult(const TArray<struct FACK_ChallengeRead>& _top3, const TArray<struct FACK_ChallengeRead>& _rankers);
	void ShowMissionResult();
	void ShowRoundResult();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Challenge_PlayerControllerBP_C">();
	}
	static class AChallenge_PlayerControllerBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AChallenge_PlayerControllerBP_C>();
	}
};
static_assert(alignof(AChallenge_PlayerControllerBP_C) == 0x000008, "Wrong alignment on AChallenge_PlayerControllerBP_C");
static_assert(sizeof(AChallenge_PlayerControllerBP_C) == 0x000EB8, "Wrong size on AChallenge_PlayerControllerBP_C");
static_assert(offsetof(AChallenge_PlayerControllerBP_C, UberGraphFrame) == 0x000E50, "Member 'AChallenge_PlayerControllerBP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AChallenge_PlayerControllerBP_C, UI_HUD_ChallengeMode) == 0x000E58, "Member 'AChallenge_PlayerControllerBP_C::UI_HUD_ChallengeMode' has a wrong offset!");
static_assert(offsetof(AChallenge_PlayerControllerBP_C, Challenge_Result_Popup) == 0x000E60, "Member 'AChallenge_PlayerControllerBP_C::Challenge_Result_Popup' has a wrong offset!");
static_assert(offsetof(AChallenge_PlayerControllerBP_C, Challenge_Mission_Result_Popup) == 0x000E68, "Member 'AChallenge_PlayerControllerBP_C::Challenge_Mission_Result_Popup' has a wrong offset!");
static_assert(offsetof(AChallenge_PlayerControllerBP_C, PrevResult) == 0x000E70, "Member 'AChallenge_PlayerControllerBP_C::PrevResult' has a wrong offset!");
static_assert(offsetof(AChallenge_PlayerControllerBP_C, CurrentResult) == 0x000E90, "Member 'AChallenge_PlayerControllerBP_C::CurrentResult' has a wrong offset!");
static_assert(offsetof(AChallenge_PlayerControllerBP_C, RankPopup) == 0x000EB0, "Member 'AChallenge_PlayerControllerBP_C::RankPopup' has a wrong offset!");

}

