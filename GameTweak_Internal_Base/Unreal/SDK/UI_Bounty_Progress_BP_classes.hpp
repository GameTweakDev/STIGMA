#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: UI_Bounty_Progress_BP

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"
#include "Stigma_structs.hpp"
#include "Stigma_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_Bounty_Progress_BP.UI_Bounty_Progress_BP_C
// 0x02D8 (0x0800 - 0x0528)
class UUI_Bounty_Progress_BP_C final : public UUI_Bounty_Progress
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0528(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       UI_FadeOut;                                        // 0x0530(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       UI_Apper;                                          // 0x0538(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                                Border_SafeFx;                                     // 0x0540(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_88;                                          // 0x0548(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Focus;                                         // 0x0550(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Icon;                                          // 0x0558(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IMG_Sending;                                       // 0x0560(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           PROGRESS_Time;                                     // 0x0568(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TXT_Interation;                                    // 0x0570(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Txt_Time;                                          // 0x0578(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSlateBrush                            UI_Brush_Gettering;                                // 0x0580(0x00D0)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrush                            UI_Brush_Transfer;                                 // 0x0650(0x00D0)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrush                            UI_Brush_Hacking;                                  // 0x0720(0x00D0)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         _GatheredGold;                                     // 0x07F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         _LastMaxGold;                                      // 0x07F4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         _LastGatheredGold;                                 // 0x07F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void CancelTimer(EBountyActionType _bounty_action_type, const bool _hide_widget);
	void DriveTimer(float _delta);
	void ExecuteUbergraph_UI_Bounty_Progress_BP(int32 EntryPoint);
	void ForceTimer(double Current_time, double Max_time);
	struct FSlateBrush Get_IMG_Icon_Brush();
	class FText Get_TXT_Interation_Text();
	struct FSlateBrush GetSafeFX();
	bool OnSynchronizeProperties();
	void OnTick(double _delta);
	void PreConstruct(bool IsDesignTime);
	void SetGettering(int32 _Amount);
	void StartTimer(EBountyActionType _bounty_action_type, float _start_time, float _max_time, bool _reverse, const TDelegate<void(bool _end_success)>& _proc);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void UpdateGatheringInfo();
	void UpdateProgressColor();
	void UpdateWidget();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_Bounty_Progress_BP_C">();
	}
	static class UUI_Bounty_Progress_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_Bounty_Progress_BP_C>();
	}
};
static_assert(alignof(UUI_Bounty_Progress_BP_C) == 0x000010, "Wrong alignment on UUI_Bounty_Progress_BP_C");
static_assert(sizeof(UUI_Bounty_Progress_BP_C) == 0x000800, "Wrong size on UUI_Bounty_Progress_BP_C");
static_assert(offsetof(UUI_Bounty_Progress_BP_C, UberGraphFrame) == 0x000528, "Member 'UUI_Bounty_Progress_BP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_Bounty_Progress_BP_C, UI_FadeOut) == 0x000530, "Member 'UUI_Bounty_Progress_BP_C::UI_FadeOut' has a wrong offset!");
static_assert(offsetof(UUI_Bounty_Progress_BP_C, UI_Apper) == 0x000538, "Member 'UUI_Bounty_Progress_BP_C::UI_Apper' has a wrong offset!");
static_assert(offsetof(UUI_Bounty_Progress_BP_C, Border_SafeFx) == 0x000540, "Member 'UUI_Bounty_Progress_BP_C::Border_SafeFx' has a wrong offset!");
static_assert(offsetof(UUI_Bounty_Progress_BP_C, Image_88) == 0x000548, "Member 'UUI_Bounty_Progress_BP_C::Image_88' has a wrong offset!");
static_assert(offsetof(UUI_Bounty_Progress_BP_C, Img_Focus) == 0x000550, "Member 'UUI_Bounty_Progress_BP_C::Img_Focus' has a wrong offset!");
static_assert(offsetof(UUI_Bounty_Progress_BP_C, Img_Icon) == 0x000558, "Member 'UUI_Bounty_Progress_BP_C::Img_Icon' has a wrong offset!");
static_assert(offsetof(UUI_Bounty_Progress_BP_C, IMG_Sending) == 0x000560, "Member 'UUI_Bounty_Progress_BP_C::IMG_Sending' has a wrong offset!");
static_assert(offsetof(UUI_Bounty_Progress_BP_C, PROGRESS_Time) == 0x000568, "Member 'UUI_Bounty_Progress_BP_C::PROGRESS_Time' has a wrong offset!");
static_assert(offsetof(UUI_Bounty_Progress_BP_C, TXT_Interation) == 0x000570, "Member 'UUI_Bounty_Progress_BP_C::TXT_Interation' has a wrong offset!");
static_assert(offsetof(UUI_Bounty_Progress_BP_C, Txt_Time) == 0x000578, "Member 'UUI_Bounty_Progress_BP_C::Txt_Time' has a wrong offset!");
static_assert(offsetof(UUI_Bounty_Progress_BP_C, UI_Brush_Gettering) == 0x000580, "Member 'UUI_Bounty_Progress_BP_C::UI_Brush_Gettering' has a wrong offset!");
static_assert(offsetof(UUI_Bounty_Progress_BP_C, UI_Brush_Transfer) == 0x000650, "Member 'UUI_Bounty_Progress_BP_C::UI_Brush_Transfer' has a wrong offset!");
static_assert(offsetof(UUI_Bounty_Progress_BP_C, UI_Brush_Hacking) == 0x000720, "Member 'UUI_Bounty_Progress_BP_C::UI_Brush_Hacking' has a wrong offset!");
static_assert(offsetof(UUI_Bounty_Progress_BP_C, _GatheredGold) == 0x0007F0, "Member 'UUI_Bounty_Progress_BP_C::_GatheredGold' has a wrong offset!");
static_assert(offsetof(UUI_Bounty_Progress_BP_C, _LastMaxGold) == 0x0007F4, "Member 'UUI_Bounty_Progress_BP_C::_LastMaxGold' has a wrong offset!");
static_assert(offsetof(UUI_Bounty_Progress_BP_C, _LastGatheredGold) == 0x0007F8, "Member 'UUI_Bounty_Progress_BP_C::_LastGatheredGold' has a wrong offset!");

}

