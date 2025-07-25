#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: Challenge_MissionPopup

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BPGLib_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Challenge_MissionPopup.Challenge_MissionPopup_C
// 0x0058 (0x05C8 - 0x0570)
class UChallenge_MissionPopup_C final : public UPopupBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0570(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       StartAnim;                                         // 0x0578(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Background_Outline;                                // 0x0580(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Bakcground_Img;                                    // 0x0588(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Bakcground_Img_Reward;                             // 0x0590(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCtrl_KeyIcon_C*                        Ctrl_KeyIcon;                                      // 0x0598(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_254;                                         // 0x05A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line_Img;                                          // 0x05A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Title_Text;                                        // 0x05B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VertcialBox_Missions;                              // 0x05B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          IsClosing;                                         // 0x05C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CanClose;                                          // 0x05C1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void CheckCanClose(bool Force);
	void ClosePopup();
	void Construct();
	void DelayClose();
	void Destruct();
	void ExecuteUbergraph_Challenge_MissionPopup(int32 EntryPoint);
	void InitializeMissions();
	void InitWidget();
	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	void SetTitle();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Challenge_MissionPopup_C">();
	}
	static class UChallenge_MissionPopup_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UChallenge_MissionPopup_C>();
	}
};
static_assert(alignof(UChallenge_MissionPopup_C) == 0x000008, "Wrong alignment on UChallenge_MissionPopup_C");
static_assert(sizeof(UChallenge_MissionPopup_C) == 0x0005C8, "Wrong size on UChallenge_MissionPopup_C");
static_assert(offsetof(UChallenge_MissionPopup_C, UberGraphFrame) == 0x000570, "Member 'UChallenge_MissionPopup_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UChallenge_MissionPopup_C, StartAnim) == 0x000578, "Member 'UChallenge_MissionPopup_C::StartAnim' has a wrong offset!");
static_assert(offsetof(UChallenge_MissionPopup_C, Background_Outline) == 0x000580, "Member 'UChallenge_MissionPopup_C::Background_Outline' has a wrong offset!");
static_assert(offsetof(UChallenge_MissionPopup_C, Bakcground_Img) == 0x000588, "Member 'UChallenge_MissionPopup_C::Bakcground_Img' has a wrong offset!");
static_assert(offsetof(UChallenge_MissionPopup_C, Bakcground_Img_Reward) == 0x000590, "Member 'UChallenge_MissionPopup_C::Bakcground_Img_Reward' has a wrong offset!");
static_assert(offsetof(UChallenge_MissionPopup_C, Ctrl_KeyIcon) == 0x000598, "Member 'UChallenge_MissionPopup_C::Ctrl_KeyIcon' has a wrong offset!");
static_assert(offsetof(UChallenge_MissionPopup_C, Image_254) == 0x0005A0, "Member 'UChallenge_MissionPopup_C::Image_254' has a wrong offset!");
static_assert(offsetof(UChallenge_MissionPopup_C, Line_Img) == 0x0005A8, "Member 'UChallenge_MissionPopup_C::Line_Img' has a wrong offset!");
static_assert(offsetof(UChallenge_MissionPopup_C, Title_Text) == 0x0005B0, "Member 'UChallenge_MissionPopup_C::Title_Text' has a wrong offset!");
static_assert(offsetof(UChallenge_MissionPopup_C, VertcialBox_Missions) == 0x0005B8, "Member 'UChallenge_MissionPopup_C::VertcialBox_Missions' has a wrong offset!");
static_assert(offsetof(UChallenge_MissionPopup_C, IsClosing) == 0x0005C0, "Member 'UChallenge_MissionPopup_C::IsClosing' has a wrong offset!");
static_assert(offsetof(UChallenge_MissionPopup_C, CanClose) == 0x0005C1, "Member 'UChallenge_MissionPopup_C::CanClose' has a wrong offset!");

}

