#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: UI_HitRadar

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BPGLib_classes.hpp"
#include "Stigma_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_HitRadar.UI_HitRadar_C
// 0x0080 (0x0570 - 0x04F0)
class UUI_HitRadar_C final : public UPreviewableWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x04F0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                           HitContainer;                                      // 0x04F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IMG_HitRadar;                                      // 0x0500(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_HitRadar_Part_C*                    Part_Chest;                                        // 0x0508(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_HitRadar_Part_C*                    Part_Head;                                         // 0x0510(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_HitRadar_Part_C*                    Part_LowerArm_L;                                   // 0x0518(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_HitRadar_Part_C*                    Part_LowerArm_R;                                   // 0x0520(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_HitRadar_Part_C*                    Part_LowerLeg_L;                                   // 0x0528(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_HitRadar_Part_C*                    Part_LowerLeg_R;                                   // 0x0530(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_HitRadar_Part_C*                    Part_Pelvis;                                       // 0x0538(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_HitRadar_Part_C*                    Part_UpperArm_L;                                   // 0x0540(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_HitRadar_Part_C*                    Part_UpperArm_R;                                   // 0x0548(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_HitRadar_Part_C*                    Part_UpperLeg_L;                                   // 0x0550(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_HitRadar_Part_C*                    Part_UpperLeg_R;                                   // 0x0558(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	double                                        ShowTime;                                          // 0x0560(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharaBase*                             LastVictim;                                        // 0x0568(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void AddHit(const struct FHitData& _hit);
	void Construct();
	void EnableShow(bool _show);
	void ExecuteUbergraph_UI_HitRadar(int32 EntryPoint);
	void Init();
	bool OnSynchronizeProperties();
	void OnTick(double _delta);
	void Reset();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);

	void GetCtrls(struct FHitData& _hit, TArray<class UUI_HitRadar_Part_C*>* _ctrls) const;
	void GetPart(EBones _bones, class UUI_HitRadar_Part_C** _ui) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_HitRadar_C">();
	}
	static class UUI_HitRadar_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_HitRadar_C>();
	}
};
static_assert(alignof(UUI_HitRadar_C) == 0x000008, "Wrong alignment on UUI_HitRadar_C");
static_assert(sizeof(UUI_HitRadar_C) == 0x000570, "Wrong size on UUI_HitRadar_C");
static_assert(offsetof(UUI_HitRadar_C, UberGraphFrame) == 0x0004F0, "Member 'UUI_HitRadar_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_HitRadar_C, HitContainer) == 0x0004F8, "Member 'UUI_HitRadar_C::HitContainer' has a wrong offset!");
static_assert(offsetof(UUI_HitRadar_C, IMG_HitRadar) == 0x000500, "Member 'UUI_HitRadar_C::IMG_HitRadar' has a wrong offset!");
static_assert(offsetof(UUI_HitRadar_C, Part_Chest) == 0x000508, "Member 'UUI_HitRadar_C::Part_Chest' has a wrong offset!");
static_assert(offsetof(UUI_HitRadar_C, Part_Head) == 0x000510, "Member 'UUI_HitRadar_C::Part_Head' has a wrong offset!");
static_assert(offsetof(UUI_HitRadar_C, Part_LowerArm_L) == 0x000518, "Member 'UUI_HitRadar_C::Part_LowerArm_L' has a wrong offset!");
static_assert(offsetof(UUI_HitRadar_C, Part_LowerArm_R) == 0x000520, "Member 'UUI_HitRadar_C::Part_LowerArm_R' has a wrong offset!");
static_assert(offsetof(UUI_HitRadar_C, Part_LowerLeg_L) == 0x000528, "Member 'UUI_HitRadar_C::Part_LowerLeg_L' has a wrong offset!");
static_assert(offsetof(UUI_HitRadar_C, Part_LowerLeg_R) == 0x000530, "Member 'UUI_HitRadar_C::Part_LowerLeg_R' has a wrong offset!");
static_assert(offsetof(UUI_HitRadar_C, Part_Pelvis) == 0x000538, "Member 'UUI_HitRadar_C::Part_Pelvis' has a wrong offset!");
static_assert(offsetof(UUI_HitRadar_C, Part_UpperArm_L) == 0x000540, "Member 'UUI_HitRadar_C::Part_UpperArm_L' has a wrong offset!");
static_assert(offsetof(UUI_HitRadar_C, Part_UpperArm_R) == 0x000548, "Member 'UUI_HitRadar_C::Part_UpperArm_R' has a wrong offset!");
static_assert(offsetof(UUI_HitRadar_C, Part_UpperLeg_L) == 0x000550, "Member 'UUI_HitRadar_C::Part_UpperLeg_L' has a wrong offset!");
static_assert(offsetof(UUI_HitRadar_C, Part_UpperLeg_R) == 0x000558, "Member 'UUI_HitRadar_C::Part_UpperLeg_R' has a wrong offset!");
static_assert(offsetof(UUI_HitRadar_C, ShowTime) == 0x000560, "Member 'UUI_HitRadar_C::ShowTime' has a wrong offset!");
static_assert(offsetof(UUI_HitRadar_C, LastVictim) == 0x000568, "Member 'UUI_HitRadar_C::LastVictim' has a wrong offset!");

}

