#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: GTA_Result

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Stigma_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass GTA_Result.GTA_Result_C
// 0x0130 (0x06B8 - 0x0588)
class UGTA_Result_C final : public UUI_RoundResultBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0588(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Result_3rd;                                        // 0x0590(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Result_2nd;                                        // 0x0598(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Result_1st;                                        // 0x05A0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                           CP_ScoreBoard;                                     // 0x05A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_Mode;                                         // 0x05B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IMG_Bg;                                            // 0x05B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Glow;                                          // 0x05C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IMG_Rank;                                          // 0x05C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Rank_Bg;                                       // 0x05D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Ray;                                           // 0x05D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Score_bg;                                      // 0x05E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_SubTitle_Bg;                                   // 0x05E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Particle_Effect;                                   // 0x05F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             SubTitle_Txt;                                      // 0x05F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCtrl_DynamicNumber_Common_C*           TXT_Score;                                         // 0x0600(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                         Txt_Title;                                         // 0x0608(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         Rank;                                              // 0x0610(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_36E1[0x4];                                     // 0x0614(0x0004)(Fixing Size After Last Property [ Dumper-69 ])
	TMap<int32, TSoftObjectPtr<class UTexture2D>> UI_ResultBG;                                       // 0x0618(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<int32, TSoftObjectPtr<class UTexture2D>> UI_RankImg;                                        // 0x0668(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_GTA_Result(int32 EntryPoint);
	int32 Get_Ally_Team_Score();
	void InitWidget(const struct FRoundResult& _result, float _override_life_time);
	void PlayAnim();
	void UpdateBG();
	void UpdateText();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GTA_Result_C">();
	}
	static class UGTA_Result_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGTA_Result_C>();
	}
};
static_assert(alignof(UGTA_Result_C) == 0x000008, "Wrong alignment on UGTA_Result_C");
static_assert(sizeof(UGTA_Result_C) == 0x0006B8, "Wrong size on UGTA_Result_C");
static_assert(offsetof(UGTA_Result_C, UberGraphFrame) == 0x000588, "Member 'UGTA_Result_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGTA_Result_C, Result_3rd) == 0x000590, "Member 'UGTA_Result_C::Result_3rd' has a wrong offset!");
static_assert(offsetof(UGTA_Result_C, Result_2nd) == 0x000598, "Member 'UGTA_Result_C::Result_2nd' has a wrong offset!");
static_assert(offsetof(UGTA_Result_C, Result_1st) == 0x0005A0, "Member 'UGTA_Result_C::Result_1st' has a wrong offset!");
static_assert(offsetof(UGTA_Result_C, CP_ScoreBoard) == 0x0005A8, "Member 'UGTA_Result_C::CP_ScoreBoard' has a wrong offset!");
static_assert(offsetof(UGTA_Result_C, Icon_Mode) == 0x0005B0, "Member 'UGTA_Result_C::Icon_Mode' has a wrong offset!");
static_assert(offsetof(UGTA_Result_C, IMG_Bg) == 0x0005B8, "Member 'UGTA_Result_C::IMG_Bg' has a wrong offset!");
static_assert(offsetof(UGTA_Result_C, Img_Glow) == 0x0005C0, "Member 'UGTA_Result_C::Img_Glow' has a wrong offset!");
static_assert(offsetof(UGTA_Result_C, IMG_Rank) == 0x0005C8, "Member 'UGTA_Result_C::IMG_Rank' has a wrong offset!");
static_assert(offsetof(UGTA_Result_C, Img_Rank_Bg) == 0x0005D0, "Member 'UGTA_Result_C::Img_Rank_Bg' has a wrong offset!");
static_assert(offsetof(UGTA_Result_C, Img_Ray) == 0x0005D8, "Member 'UGTA_Result_C::Img_Ray' has a wrong offset!");
static_assert(offsetof(UGTA_Result_C, Img_Score_bg) == 0x0005E0, "Member 'UGTA_Result_C::Img_Score_bg' has a wrong offset!");
static_assert(offsetof(UGTA_Result_C, Img_SubTitle_Bg) == 0x0005E8, "Member 'UGTA_Result_C::Img_SubTitle_Bg' has a wrong offset!");
static_assert(offsetof(UGTA_Result_C, Particle_Effect) == 0x0005F0, "Member 'UGTA_Result_C::Particle_Effect' has a wrong offset!");
static_assert(offsetof(UGTA_Result_C, SubTitle_Txt) == 0x0005F8, "Member 'UGTA_Result_C::SubTitle_Txt' has a wrong offset!");
static_assert(offsetof(UGTA_Result_C, TXT_Score) == 0x000600, "Member 'UGTA_Result_C::TXT_Score' has a wrong offset!");
static_assert(offsetof(UGTA_Result_C, Txt_Title) == 0x000608, "Member 'UGTA_Result_C::Txt_Title' has a wrong offset!");
static_assert(offsetof(UGTA_Result_C, Rank) == 0x000610, "Member 'UGTA_Result_C::Rank' has a wrong offset!");
static_assert(offsetof(UGTA_Result_C, UI_ResultBG) == 0x000618, "Member 'UGTA_Result_C::UI_ResultBG' has a wrong offset!");
static_assert(offsetof(UGTA_Result_C, UI_RankImg) == 0x000668, "Member 'UGTA_Result_C::UI_RankImg' has a wrong offset!");

}

