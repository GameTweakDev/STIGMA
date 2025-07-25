#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: Ctrl_DynamicNumber_Common

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"
#include "Slate_structs.hpp"
#include "BPGLib_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Ctrl_DynamicNumber_Common.Ctrl_DynamicNumber_Common_C
// 0x0100 (0x05F0 - 0x04F0)
class UCtrl_DynamicNumber_Common_C final : public UPreviewableWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x04F0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                             Txt_Number;                                        // 0x04F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	double                                        CurrentValue;                                      // 0x0500(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TargetValue;                                       // 0x0508(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B6C[0x4];                                     // 0x050C(0x0004)(Fixing Size After Last Property [ Dumper-69 ])
	class FText                                   UI_PreivewText;                                    // 0x0510(0x0018)(Edit, BlueprintVisible)
	struct FSlateColor                            UI_FontColor;                                      // 0x0528(0x0014)(Edit, BlueprintVisible)
	uint8                                         Pad_3B6D[0x4];                                     // 0x053C(0x0004)(Fixing Size After Last Property [ Dumper-69 ])
	struct FSlateFontInfo                         UI_Font;                                           // 0x0540(0x0058)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FVector2D                              UI_ShadowOffset;                                   // 0x0598(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           UI_ShadowColor;                                    // 0x05A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETextJustify                                  UI_Justification;                                  // 0x05B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UI_UseGrouping;                                    // 0x05B9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EEasingFunc                                   InterpolationType;                                 // 0x05BA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B6E[0x5];                                     // 0x05BB(0x0005)(Fixing Size After Last Property [ Dumper-69 ])
	double                                        Speed;                                             // 0x05C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Error_Tolerance;                                   // 0x05C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Blend_Exp;                                         // 0x05D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Steps;                                             // 0x05D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UI_UseSign;                                        // 0x05DC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsInterpolating;                                   // 0x05DD(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B6F[0x2];                                     // 0x05DE(0x0002)(Fixing Size After Last Property [ Dumper-69 ])
	class USoundBase*                             InterpolatingSound;                                // 0x05E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Interpolating_Audio_Comp;                          // 0x05E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

public:
	void Construct();
	void Destruct();
	void ExecuteUbergraph_Ctrl_DynamicNumber_Common(int32 EntryPoint);
	void Init_Interpolating_Sound();
	bool OnSynchronizeProperties();
	void SetTargetValue(int32 _new_target_value, bool _set_instance);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Update_Current_Value(double Delta);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Ctrl_DynamicNumber_Common_C">();
	}
	static class UCtrl_DynamicNumber_Common_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCtrl_DynamicNumber_Common_C>();
	}
};
static_assert(alignof(UCtrl_DynamicNumber_Common_C) == 0x000008, "Wrong alignment on UCtrl_DynamicNumber_Common_C");
static_assert(sizeof(UCtrl_DynamicNumber_Common_C) == 0x0005F0, "Wrong size on UCtrl_DynamicNumber_Common_C");
static_assert(offsetof(UCtrl_DynamicNumber_Common_C, UberGraphFrame) == 0x0004F0, "Member 'UCtrl_DynamicNumber_Common_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCtrl_DynamicNumber_Common_C, Txt_Number) == 0x0004F8, "Member 'UCtrl_DynamicNumber_Common_C::Txt_Number' has a wrong offset!");
static_assert(offsetof(UCtrl_DynamicNumber_Common_C, CurrentValue) == 0x000500, "Member 'UCtrl_DynamicNumber_Common_C::CurrentValue' has a wrong offset!");
static_assert(offsetof(UCtrl_DynamicNumber_Common_C, TargetValue) == 0x000508, "Member 'UCtrl_DynamicNumber_Common_C::TargetValue' has a wrong offset!");
static_assert(offsetof(UCtrl_DynamicNumber_Common_C, UI_PreivewText) == 0x000510, "Member 'UCtrl_DynamicNumber_Common_C::UI_PreivewText' has a wrong offset!");
static_assert(offsetof(UCtrl_DynamicNumber_Common_C, UI_FontColor) == 0x000528, "Member 'UCtrl_DynamicNumber_Common_C::UI_FontColor' has a wrong offset!");
static_assert(offsetof(UCtrl_DynamicNumber_Common_C, UI_Font) == 0x000540, "Member 'UCtrl_DynamicNumber_Common_C::UI_Font' has a wrong offset!");
static_assert(offsetof(UCtrl_DynamicNumber_Common_C, UI_ShadowOffset) == 0x000598, "Member 'UCtrl_DynamicNumber_Common_C::UI_ShadowOffset' has a wrong offset!");
static_assert(offsetof(UCtrl_DynamicNumber_Common_C, UI_ShadowColor) == 0x0005A8, "Member 'UCtrl_DynamicNumber_Common_C::UI_ShadowColor' has a wrong offset!");
static_assert(offsetof(UCtrl_DynamicNumber_Common_C, UI_Justification) == 0x0005B8, "Member 'UCtrl_DynamicNumber_Common_C::UI_Justification' has a wrong offset!");
static_assert(offsetof(UCtrl_DynamicNumber_Common_C, UI_UseGrouping) == 0x0005B9, "Member 'UCtrl_DynamicNumber_Common_C::UI_UseGrouping' has a wrong offset!");
static_assert(offsetof(UCtrl_DynamicNumber_Common_C, InterpolationType) == 0x0005BA, "Member 'UCtrl_DynamicNumber_Common_C::InterpolationType' has a wrong offset!");
static_assert(offsetof(UCtrl_DynamicNumber_Common_C, Speed) == 0x0005C0, "Member 'UCtrl_DynamicNumber_Common_C::Speed' has a wrong offset!");
static_assert(offsetof(UCtrl_DynamicNumber_Common_C, Error_Tolerance) == 0x0005C8, "Member 'UCtrl_DynamicNumber_Common_C::Error_Tolerance' has a wrong offset!");
static_assert(offsetof(UCtrl_DynamicNumber_Common_C, Blend_Exp) == 0x0005D0, "Member 'UCtrl_DynamicNumber_Common_C::Blend_Exp' has a wrong offset!");
static_assert(offsetof(UCtrl_DynamicNumber_Common_C, Steps) == 0x0005D8, "Member 'UCtrl_DynamicNumber_Common_C::Steps' has a wrong offset!");
static_assert(offsetof(UCtrl_DynamicNumber_Common_C, UI_UseSign) == 0x0005DC, "Member 'UCtrl_DynamicNumber_Common_C::UI_UseSign' has a wrong offset!");
static_assert(offsetof(UCtrl_DynamicNumber_Common_C, IsInterpolating) == 0x0005DD, "Member 'UCtrl_DynamicNumber_Common_C::IsInterpolating' has a wrong offset!");
static_assert(offsetof(UCtrl_DynamicNumber_Common_C, InterpolatingSound) == 0x0005E0, "Member 'UCtrl_DynamicNumber_Common_C::InterpolatingSound' has a wrong offset!");
static_assert(offsetof(UCtrl_DynamicNumber_Common_C, Interpolating_Audio_Comp) == 0x0005E8, "Member 'UCtrl_DynamicNumber_Common_C::Interpolating_Audio_Comp' has a wrong offset!");

}

