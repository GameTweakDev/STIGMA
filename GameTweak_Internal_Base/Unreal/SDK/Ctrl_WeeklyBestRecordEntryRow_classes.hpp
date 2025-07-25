#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: Ctrl_WeeklyBestRecordEntryRow

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "Stigma_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Ctrl_WeeklyBestRecordEntryRow.Ctrl_WeeklyBestRecordEntryRow_C
// 0x0040 (0x0300 - 0x02C0)
class UCtrl_WeeklyBestRecordEntryRow_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 IMG_Tier;                                          // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IMG_TierNameText;                                  // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SWITCHER_Record;                                   // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SWITCHER_Value;                                    // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TXT_RankerTier;                                    // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TXT_RankPoint;                                     // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TXT_Week;                                          // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void WeeklyBestRecordTypeToIndex(EWeeklyBestRecordType _type, int32* Idx);
	void OnListItemObjectSet(class UObject* ListItemObject);
	void Init(EWeeklyBestRecordType _weekly_best_record_type, int32 _week, int32 _value, double _score, ERankingType _cur_ranking_type);
	void ExecuteUbergraph_Ctrl_WeeklyBestRecordEntryRow(int32 EntryPoint);
	void BP_OnItemSelectionChanged(bool bIsSelected);
	void BP_OnItemExpansionChanged(bool bIsExpanded);
	void BP_OnEntryReleased();
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Ctrl_WeeklyBestRecordEntryRow_C">();
	}
	static class UCtrl_WeeklyBestRecordEntryRow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCtrl_WeeklyBestRecordEntryRow_C>();
	}
};
static_assert(alignof(UCtrl_WeeklyBestRecordEntryRow_C) == 0x000008, "Wrong alignment on UCtrl_WeeklyBestRecordEntryRow_C");
static_assert(sizeof(UCtrl_WeeklyBestRecordEntryRow_C) == 0x000300, "Wrong size on UCtrl_WeeklyBestRecordEntryRow_C");
static_assert(offsetof(UCtrl_WeeklyBestRecordEntryRow_C, UberGraphFrame) == 0x0002C0, "Member 'UCtrl_WeeklyBestRecordEntryRow_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCtrl_WeeklyBestRecordEntryRow_C, IMG_Tier) == 0x0002C8, "Member 'UCtrl_WeeklyBestRecordEntryRow_C::IMG_Tier' has a wrong offset!");
static_assert(offsetof(UCtrl_WeeklyBestRecordEntryRow_C, IMG_TierNameText) == 0x0002D0, "Member 'UCtrl_WeeklyBestRecordEntryRow_C::IMG_TierNameText' has a wrong offset!");
static_assert(offsetof(UCtrl_WeeklyBestRecordEntryRow_C, SWITCHER_Record) == 0x0002D8, "Member 'UCtrl_WeeklyBestRecordEntryRow_C::SWITCHER_Record' has a wrong offset!");
static_assert(offsetof(UCtrl_WeeklyBestRecordEntryRow_C, SWITCHER_Value) == 0x0002E0, "Member 'UCtrl_WeeklyBestRecordEntryRow_C::SWITCHER_Value' has a wrong offset!");
static_assert(offsetof(UCtrl_WeeklyBestRecordEntryRow_C, TXT_RankerTier) == 0x0002E8, "Member 'UCtrl_WeeklyBestRecordEntryRow_C::TXT_RankerTier' has a wrong offset!");
static_assert(offsetof(UCtrl_WeeklyBestRecordEntryRow_C, TXT_RankPoint) == 0x0002F0, "Member 'UCtrl_WeeklyBestRecordEntryRow_C::TXT_RankPoint' has a wrong offset!");
static_assert(offsetof(UCtrl_WeeklyBestRecordEntryRow_C, TXT_Week) == 0x0002F8, "Member 'UCtrl_WeeklyBestRecordEntryRow_C::TXT_Week' has a wrong offset!");

}

