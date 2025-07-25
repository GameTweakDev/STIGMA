#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: Annihilation_RoundResult

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Stigma_structs.hpp"
#include "Stigma_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Annihilation_RoundResult.Annihilation_RoundResult_C
// 0x0108 (0x0690 - 0x0588)
class UAnnihilation_RoundResult_C final : public UUI_RoundResultBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0588(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Result_Draw;                                       // 0x0590(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Result_Defeat;                                     // 0x0598(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Result_Win;                                        // 0x05A0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       FactionChangeAnim;                                 // 0x05A8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 blue_background_img;                               // 0x05B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CP_ScoreBoard;                                     // 0x05B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Faction_Change_Text;                               // 0x05C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_Mode;                                         // 0x05C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IMG_Bg;                                            // 0x05D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Glow;                                          // 0x05D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Power_Blue_01;                                 // 0x05E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Power_Red_01;                                  // 0x05E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_SubTitle_Bg;                                   // 0x05F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 M_Light;                                           // 0x05F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 M_Light_Bg;                                        // 0x0600(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 M_Particle;                                        // 0x0608(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Red_background_img;                                // 0x0610(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             SubTitle_Txt;                                      // 0x0618(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                         Title_Txt;                                         // 0x0620(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TXT_BlueScore;                                     // 0x0628(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TXT_RedScore;                                      // 0x0630(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TXT_Round;                                         // 0x0638(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMap<ERoundResult, TSoftObjectPtr<class UTexture2D>> UI_ResultBG;                                       // 0x0640(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void blue_background_img_Event_0(class UImage* Param_blue_background_img, class UTexture2D* Texture, bool bMatchSize);
	void ChangeFactionVoice();
	void ExecuteUbergraph_Annihilation_RoundResult(int32 EntryPoint);
	class FText GetRoundText();
	void InitWidget(const struct FRoundResult& _result, float _override_life_time);
	void OnAnimationFinished(const class UWidgetAnimation* Animation);
	void Red_background_img_Event_0(class UImage* Param_Red_background_img, class UTexture2D* Texture, bool bMatchSize);
	void SequenceEvent();
	void SequenceEvent__ENTRYPOINTAnnihilation_RoundResult();
	void SequenceEvent__ENTRYPOINTAnnihilation_RoundResult_0();
	void ShowAnim();
	void UpdateBG();
	void UpdateText();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Annihilation_RoundResult_C">();
	}
	static class UAnnihilation_RoundResult_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnnihilation_RoundResult_C>();
	}
};
static_assert(alignof(UAnnihilation_RoundResult_C) == 0x000008, "Wrong alignment on UAnnihilation_RoundResult_C");
static_assert(sizeof(UAnnihilation_RoundResult_C) == 0x000690, "Wrong size on UAnnihilation_RoundResult_C");
static_assert(offsetof(UAnnihilation_RoundResult_C, UberGraphFrame) == 0x000588, "Member 'UAnnihilation_RoundResult_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAnnihilation_RoundResult_C, Result_Draw) == 0x000590, "Member 'UAnnihilation_RoundResult_C::Result_Draw' has a wrong offset!");
static_assert(offsetof(UAnnihilation_RoundResult_C, Result_Defeat) == 0x000598, "Member 'UAnnihilation_RoundResult_C::Result_Defeat' has a wrong offset!");
static_assert(offsetof(UAnnihilation_RoundResult_C, Result_Win) == 0x0005A0, "Member 'UAnnihilation_RoundResult_C::Result_Win' has a wrong offset!");
static_assert(offsetof(UAnnihilation_RoundResult_C, FactionChangeAnim) == 0x0005A8, "Member 'UAnnihilation_RoundResult_C::FactionChangeAnim' has a wrong offset!");
static_assert(offsetof(UAnnihilation_RoundResult_C, blue_background_img) == 0x0005B0, "Member 'UAnnihilation_RoundResult_C::blue_background_img' has a wrong offset!");
static_assert(offsetof(UAnnihilation_RoundResult_C, CP_ScoreBoard) == 0x0005B8, "Member 'UAnnihilation_RoundResult_C::CP_ScoreBoard' has a wrong offset!");
static_assert(offsetof(UAnnihilation_RoundResult_C, Faction_Change_Text) == 0x0005C0, "Member 'UAnnihilation_RoundResult_C::Faction_Change_Text' has a wrong offset!");
static_assert(offsetof(UAnnihilation_RoundResult_C, Icon_Mode) == 0x0005C8, "Member 'UAnnihilation_RoundResult_C::Icon_Mode' has a wrong offset!");
static_assert(offsetof(UAnnihilation_RoundResult_C, IMG_Bg) == 0x0005D0, "Member 'UAnnihilation_RoundResult_C::IMG_Bg' has a wrong offset!");
static_assert(offsetof(UAnnihilation_RoundResult_C, Img_Glow) == 0x0005D8, "Member 'UAnnihilation_RoundResult_C::Img_Glow' has a wrong offset!");
static_assert(offsetof(UAnnihilation_RoundResult_C, Img_Power_Blue_01) == 0x0005E0, "Member 'UAnnihilation_RoundResult_C::Img_Power_Blue_01' has a wrong offset!");
static_assert(offsetof(UAnnihilation_RoundResult_C, Img_Power_Red_01) == 0x0005E8, "Member 'UAnnihilation_RoundResult_C::Img_Power_Red_01' has a wrong offset!");
static_assert(offsetof(UAnnihilation_RoundResult_C, Img_SubTitle_Bg) == 0x0005F0, "Member 'UAnnihilation_RoundResult_C::Img_SubTitle_Bg' has a wrong offset!");
static_assert(offsetof(UAnnihilation_RoundResult_C, M_Light) == 0x0005F8, "Member 'UAnnihilation_RoundResult_C::M_Light' has a wrong offset!");
static_assert(offsetof(UAnnihilation_RoundResult_C, M_Light_Bg) == 0x000600, "Member 'UAnnihilation_RoundResult_C::M_Light_Bg' has a wrong offset!");
static_assert(offsetof(UAnnihilation_RoundResult_C, M_Particle) == 0x000608, "Member 'UAnnihilation_RoundResult_C::M_Particle' has a wrong offset!");
static_assert(offsetof(UAnnihilation_RoundResult_C, Red_background_img) == 0x000610, "Member 'UAnnihilation_RoundResult_C::Red_background_img' has a wrong offset!");
static_assert(offsetof(UAnnihilation_RoundResult_C, SubTitle_Txt) == 0x000618, "Member 'UAnnihilation_RoundResult_C::SubTitle_Txt' has a wrong offset!");
static_assert(offsetof(UAnnihilation_RoundResult_C, Title_Txt) == 0x000620, "Member 'UAnnihilation_RoundResult_C::Title_Txt' has a wrong offset!");
static_assert(offsetof(UAnnihilation_RoundResult_C, TXT_BlueScore) == 0x000628, "Member 'UAnnihilation_RoundResult_C::TXT_BlueScore' has a wrong offset!");
static_assert(offsetof(UAnnihilation_RoundResult_C, TXT_RedScore) == 0x000630, "Member 'UAnnihilation_RoundResult_C::TXT_RedScore' has a wrong offset!");
static_assert(offsetof(UAnnihilation_RoundResult_C, TXT_Round) == 0x000638, "Member 'UAnnihilation_RoundResult_C::TXT_Round' has a wrong offset!");
static_assert(offsetof(UAnnihilation_RoundResult_C, UI_ResultBG) == 0x000640, "Member 'UAnnihilation_RoundResult_C::UI_ResultBG' has a wrong offset!");

}

