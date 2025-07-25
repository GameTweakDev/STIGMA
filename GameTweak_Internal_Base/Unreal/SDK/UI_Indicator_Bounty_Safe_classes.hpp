#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: UI_Indicator_Bounty_Safe

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Stigma_structs.hpp"
#include "BPGLib_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_Indicator_Bounty_Safe.UI_Indicator_Bounty_Safe_C
// 0x00A0 (0x0638 - 0x0598)
class UUI_Indicator_Bounty_Safe_C final : public UIndicatorBaseWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0598(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       UI_OnIdle_Selected;                                // 0x05A0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       UI_OnShow;                                         // 0x05A8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                           CP_Mt;                                             // 0x05B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IMG_Arrow;                                         // 0x05B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IMG_Background;                                    // 0x05C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IMG_GlowRing_01;                                   // 0x05C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IMG_GlowRing_02;                                   // 0x05D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IMG_Progress;                                      // 0x05D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Team;                                          // 0x05E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           MainPanel;                                         // 0x05E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               OVL_Arrow;                                         // 0x05F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               Progress_Material;                                 // 0x05F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	ETeams                                        Team;                                              // 0x0600(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_379E[0x7];                                     // 0x0601(0x0007)(Fixing Size After Last Property [ Dumper-69 ])
	class UAudioComponent*                        HackingSoundComp;                                  // 0x0608(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           _COLOR_Base;                                       // 0x0610(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsOnHacking;                                       // 0x0620(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_379F[0x7];                                     // 0x0621(0x0007)(Fixing Size After Last Property [ Dumper-69 ])
	double                                        HackingSoundDelay;                                 // 0x0628(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        HackingSoundDelayTimer;                            // 0x0630(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void CheckOnHacking(bool* On_hacked);
	void Construct();
	void CreateProgressMaterial();
	void Destruct();
	void DriveHacking(double _delta);
	void ExecuteUbergraph_UI_Indicator_Bounty_Safe(int32 EntryPoint);
	void GetHackingColor(struct FLinearColor* _color);
	struct FLinearColor GetInteractionTeamColor();
	struct FLinearColor GetOwnTeamColor();
	void GetPlayerTeam(ETeams* _Team);
	void InitializeHackingSound();
	void OnInitIndicator();
	void OnUpdateLocation(bool _is_clipped, float _angle);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void UpdateBaseTeamColor();
	void UpdateProgress();

	void GetInvolverTeam(ETeams* Param_Team) const;
	void GetMyTeam(ETeams* Param_Team) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_Indicator_Bounty_Safe_C">();
	}
	static class UUI_Indicator_Bounty_Safe_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_Indicator_Bounty_Safe_C>();
	}
};
static_assert(alignof(UUI_Indicator_Bounty_Safe_C) == 0x000008, "Wrong alignment on UUI_Indicator_Bounty_Safe_C");
static_assert(sizeof(UUI_Indicator_Bounty_Safe_C) == 0x000638, "Wrong size on UUI_Indicator_Bounty_Safe_C");
static_assert(offsetof(UUI_Indicator_Bounty_Safe_C, UberGraphFrame) == 0x000598, "Member 'UUI_Indicator_Bounty_Safe_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_Indicator_Bounty_Safe_C, UI_OnIdle_Selected) == 0x0005A0, "Member 'UUI_Indicator_Bounty_Safe_C::UI_OnIdle_Selected' has a wrong offset!");
static_assert(offsetof(UUI_Indicator_Bounty_Safe_C, UI_OnShow) == 0x0005A8, "Member 'UUI_Indicator_Bounty_Safe_C::UI_OnShow' has a wrong offset!");
static_assert(offsetof(UUI_Indicator_Bounty_Safe_C, CP_Mt) == 0x0005B0, "Member 'UUI_Indicator_Bounty_Safe_C::CP_Mt' has a wrong offset!");
static_assert(offsetof(UUI_Indicator_Bounty_Safe_C, IMG_Arrow) == 0x0005B8, "Member 'UUI_Indicator_Bounty_Safe_C::IMG_Arrow' has a wrong offset!");
static_assert(offsetof(UUI_Indicator_Bounty_Safe_C, IMG_Background) == 0x0005C0, "Member 'UUI_Indicator_Bounty_Safe_C::IMG_Background' has a wrong offset!");
static_assert(offsetof(UUI_Indicator_Bounty_Safe_C, IMG_GlowRing_01) == 0x0005C8, "Member 'UUI_Indicator_Bounty_Safe_C::IMG_GlowRing_01' has a wrong offset!");
static_assert(offsetof(UUI_Indicator_Bounty_Safe_C, IMG_GlowRing_02) == 0x0005D0, "Member 'UUI_Indicator_Bounty_Safe_C::IMG_GlowRing_02' has a wrong offset!");
static_assert(offsetof(UUI_Indicator_Bounty_Safe_C, IMG_Progress) == 0x0005D8, "Member 'UUI_Indicator_Bounty_Safe_C::IMG_Progress' has a wrong offset!");
static_assert(offsetof(UUI_Indicator_Bounty_Safe_C, Img_Team) == 0x0005E0, "Member 'UUI_Indicator_Bounty_Safe_C::Img_Team' has a wrong offset!");
static_assert(offsetof(UUI_Indicator_Bounty_Safe_C, MainPanel) == 0x0005E8, "Member 'UUI_Indicator_Bounty_Safe_C::MainPanel' has a wrong offset!");
static_assert(offsetof(UUI_Indicator_Bounty_Safe_C, OVL_Arrow) == 0x0005F0, "Member 'UUI_Indicator_Bounty_Safe_C::OVL_Arrow' has a wrong offset!");
static_assert(offsetof(UUI_Indicator_Bounty_Safe_C, Progress_Material) == 0x0005F8, "Member 'UUI_Indicator_Bounty_Safe_C::Progress_Material' has a wrong offset!");
static_assert(offsetof(UUI_Indicator_Bounty_Safe_C, Team) == 0x000600, "Member 'UUI_Indicator_Bounty_Safe_C::Team' has a wrong offset!");
static_assert(offsetof(UUI_Indicator_Bounty_Safe_C, HackingSoundComp) == 0x000608, "Member 'UUI_Indicator_Bounty_Safe_C::HackingSoundComp' has a wrong offset!");
static_assert(offsetof(UUI_Indicator_Bounty_Safe_C, _COLOR_Base) == 0x000610, "Member 'UUI_Indicator_Bounty_Safe_C::_COLOR_Base' has a wrong offset!");
static_assert(offsetof(UUI_Indicator_Bounty_Safe_C, IsOnHacking) == 0x000620, "Member 'UUI_Indicator_Bounty_Safe_C::IsOnHacking' has a wrong offset!");
static_assert(offsetof(UUI_Indicator_Bounty_Safe_C, HackingSoundDelay) == 0x000628, "Member 'UUI_Indicator_Bounty_Safe_C::HackingSoundDelay' has a wrong offset!");
static_assert(offsetof(UUI_Indicator_Bounty_Safe_C, HackingSoundDelayTimer) == 0x000630, "Member 'UUI_Indicator_Bounty_Safe_C::HackingSoundDelayTimer' has a wrong offset!");

}

