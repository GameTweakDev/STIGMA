#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: RAC_RUNTIME_COMPONENT_SmearUpdater_BPG

#include "Basic.hpp"

#include "ST_BoneSmearData_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "ST_FloatArray_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass RAC_RUNTIME_COMPONENT_SmearUpdater_BPG.RAC_RUNTIME_COMPONENT_SmearUpdater_BPG_C
// 0x0208 (0x02A8 - 0x00A0)
class URAC_RUNTIME_COMPONENT_SmearUpdater_BPG_C final : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                         PointsPerBoneDefault;                              // 0x00A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3779[0x4];                                     // 0x00AC(0x0004)(Fixing Size After Last Property [ Dumper-69 ])
	TMap<class FName, int32>                      PointsPerBone;                                     // 0x00B0(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UTextureRenderTarget2D*                 SmearRenderTarget;                                 // 0x0100(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class USkinnedMeshComponent*                  SkinnedMesh;                                       // 0x0108(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TMap<class FName, double>                     BoneLengths;                                       // 0x0110(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<class FName, class FName>                BoneChildName;                                     // 0x0160(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>       MaterialInstances;                                 // 0x01B0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FST_BoneSmearData                      SmearData;                                         // 0x01C0(0x0068)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          Enabled;                                           // 0x0228(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          FadingOut;                                         // 0x0229(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_377A[0x6];                                     // 0x022A(0x0006)(Fixing Size After Last Property [ Dumper-69 ])
	class UAnimNotifyState*                       Owning_ANS;                                        // 0x0230(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                         ROW_CURRENT_BONE_POSITION;                         // 0x0238(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ROW_SMEAR_DIRECTION;                               // 0x023C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ROW_DATA_DENS_PULL_MID_SPIKE;                      // 0x0240(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ROW_DATA_DIST;                                     // 0x0244(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        TimeSinceFadeStarted;                              // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<class FName, struct FST_FloatArray>      DistancesBeforeFade;                               // 0x0250(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UAC_DynamicSmears_BPG_C*                Master_Smear_Component_BPG;                        // 0x02A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_RAC_RUNTIME_COMPONENT_SmearUpdater_BPG(int32 EntryPoint);
	void Fade_out();
	void GetBonePoints(class FName BoneName, TArray<struct FVector>* Points);
	void Initialize(class UAC_DynamicSmears_BPG_C* MasterSmearComponent_BPG, const class UAnimNotifyState*& Param_Owning_ANS, TArray<class UMaterialInstanceDynamic*>& Param_MaterialInstances, class USkinnedMeshComponent* Param_SkinnedMesh, class UTextureRenderTarget2D* Param_SmearRenderTarget, const struct FST_BoneSmearData& Param_SmearData, const TMap<class FName, int32>& Param_PointsPerBone, const TMap<class FName, double>& Param_BoneLengths, const TMap<class FName, class FName>& Param_BoneChildName, class URAC_RUNTIME_COMPONENT_SmearUpdater_BPG_C** Smear);
	struct FVector MoveSmearEndTorwardsPoint(const struct FVector& Smear_end, const class FName& Bone_name, int32 Bone_point_index, const struct FVector& Current_bone_point);
	void RecordSmearEndDistances();
	void Save_to_shared(const class FName& Bone_name, TArray<struct FVector>& UpdatedSmearEndLocations, TArray<struct FVector>& UpdatedPreviousLocations);
	void SaveDataToRenderTarget(class UCanvas* Canvas, int32 Pixel_X, int32 Pixel_Y, const struct FLinearColor& Data);
	void SendSettingsToRenderTarget(class UCanvas* Canvas);
	void Turn_off();
	void Update(class UCanvas* RenderTargetCanvas);
	void UpdateBoneSmearVectors(class UCanvas* RenderTargetCanvas, float SmearCatchupSpeedToUse);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"RAC_RUNTIME_COMPONENT_SmearUpdater_BPG_C">();
	}
	static class URAC_RUNTIME_COMPONENT_SmearUpdater_BPG_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<URAC_RUNTIME_COMPONENT_SmearUpdater_BPG_C>();
	}
};
static_assert(alignof(URAC_RUNTIME_COMPONENT_SmearUpdater_BPG_C) == 0x000008, "Wrong alignment on URAC_RUNTIME_COMPONENT_SmearUpdater_BPG_C");
static_assert(sizeof(URAC_RUNTIME_COMPONENT_SmearUpdater_BPG_C) == 0x0002A8, "Wrong size on URAC_RUNTIME_COMPONENT_SmearUpdater_BPG_C");
static_assert(offsetof(URAC_RUNTIME_COMPONENT_SmearUpdater_BPG_C, UberGraphFrame) == 0x0000A0, "Member 'URAC_RUNTIME_COMPONENT_SmearUpdater_BPG_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(URAC_RUNTIME_COMPONENT_SmearUpdater_BPG_C, PointsPerBoneDefault) == 0x0000A8, "Member 'URAC_RUNTIME_COMPONENT_SmearUpdater_BPG_C::PointsPerBoneDefault' has a wrong offset!");
static_assert(offsetof(URAC_RUNTIME_COMPONENT_SmearUpdater_BPG_C, PointsPerBone) == 0x0000B0, "Member 'URAC_RUNTIME_COMPONENT_SmearUpdater_BPG_C::PointsPerBone' has a wrong offset!");
static_assert(offsetof(URAC_RUNTIME_COMPONENT_SmearUpdater_BPG_C, SmearRenderTarget) == 0x000100, "Member 'URAC_RUNTIME_COMPONENT_SmearUpdater_BPG_C::SmearRenderTarget' has a wrong offset!");
static_assert(offsetof(URAC_RUNTIME_COMPONENT_SmearUpdater_BPG_C, SkinnedMesh) == 0x000108, "Member 'URAC_RUNTIME_COMPONENT_SmearUpdater_BPG_C::SkinnedMesh' has a wrong offset!");
static_assert(offsetof(URAC_RUNTIME_COMPONENT_SmearUpdater_BPG_C, BoneLengths) == 0x000110, "Member 'URAC_RUNTIME_COMPONENT_SmearUpdater_BPG_C::BoneLengths' has a wrong offset!");
static_assert(offsetof(URAC_RUNTIME_COMPONENT_SmearUpdater_BPG_C, BoneChildName) == 0x000160, "Member 'URAC_RUNTIME_COMPONENT_SmearUpdater_BPG_C::BoneChildName' has a wrong offset!");
static_assert(offsetof(URAC_RUNTIME_COMPONENT_SmearUpdater_BPG_C, MaterialInstances) == 0x0001B0, "Member 'URAC_RUNTIME_COMPONENT_SmearUpdater_BPG_C::MaterialInstances' has a wrong offset!");
static_assert(offsetof(URAC_RUNTIME_COMPONENT_SmearUpdater_BPG_C, SmearData) == 0x0001C0, "Member 'URAC_RUNTIME_COMPONENT_SmearUpdater_BPG_C::SmearData' has a wrong offset!");
static_assert(offsetof(URAC_RUNTIME_COMPONENT_SmearUpdater_BPG_C, Enabled) == 0x000228, "Member 'URAC_RUNTIME_COMPONENT_SmearUpdater_BPG_C::Enabled' has a wrong offset!");
static_assert(offsetof(URAC_RUNTIME_COMPONENT_SmearUpdater_BPG_C, FadingOut) == 0x000229, "Member 'URAC_RUNTIME_COMPONENT_SmearUpdater_BPG_C::FadingOut' has a wrong offset!");
static_assert(offsetof(URAC_RUNTIME_COMPONENT_SmearUpdater_BPG_C, Owning_ANS) == 0x000230, "Member 'URAC_RUNTIME_COMPONENT_SmearUpdater_BPG_C::Owning_ANS' has a wrong offset!");
static_assert(offsetof(URAC_RUNTIME_COMPONENT_SmearUpdater_BPG_C, ROW_CURRENT_BONE_POSITION) == 0x000238, "Member 'URAC_RUNTIME_COMPONENT_SmearUpdater_BPG_C::ROW_CURRENT_BONE_POSITION' has a wrong offset!");
static_assert(offsetof(URAC_RUNTIME_COMPONENT_SmearUpdater_BPG_C, ROW_SMEAR_DIRECTION) == 0x00023C, "Member 'URAC_RUNTIME_COMPONENT_SmearUpdater_BPG_C::ROW_SMEAR_DIRECTION' has a wrong offset!");
static_assert(offsetof(URAC_RUNTIME_COMPONENT_SmearUpdater_BPG_C, ROW_DATA_DENS_PULL_MID_SPIKE) == 0x000240, "Member 'URAC_RUNTIME_COMPONENT_SmearUpdater_BPG_C::ROW_DATA_DENS_PULL_MID_SPIKE' has a wrong offset!");
static_assert(offsetof(URAC_RUNTIME_COMPONENT_SmearUpdater_BPG_C, ROW_DATA_DIST) == 0x000244, "Member 'URAC_RUNTIME_COMPONENT_SmearUpdater_BPG_C::ROW_DATA_DIST' has a wrong offset!");
static_assert(offsetof(URAC_RUNTIME_COMPONENT_SmearUpdater_BPG_C, TimeSinceFadeStarted) == 0x000248, "Member 'URAC_RUNTIME_COMPONENT_SmearUpdater_BPG_C::TimeSinceFadeStarted' has a wrong offset!");
static_assert(offsetof(URAC_RUNTIME_COMPONENT_SmearUpdater_BPG_C, DistancesBeforeFade) == 0x000250, "Member 'URAC_RUNTIME_COMPONENT_SmearUpdater_BPG_C::DistancesBeforeFade' has a wrong offset!");
static_assert(offsetof(URAC_RUNTIME_COMPONENT_SmearUpdater_BPG_C, Master_Smear_Component_BPG) == 0x0002A0, "Member 'URAC_RUNTIME_COMPONENT_SmearUpdater_BPG_C::Master_Smear_Component_BPG' has a wrong offset!");

}

