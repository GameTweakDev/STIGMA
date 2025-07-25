#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: Ctrl_PlayersRow

#include "Basic.hpp"

#include "Stigma_structs.hpp"
#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"
#include "BPGLib_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Ctrl_PlayersRow.Ctrl_PlayersRow_C
// 0x00D0 (0x05C0 - 0x04F0)
class UCtrl_PlayersRow_C final : public UPreviewableWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x04F0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Bg_All;                                            // 0x04F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCtrl_HUD_Armor_C*                      Ctrl_HUD_Armor;                                    // 0x0500(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Equip_Bullet;                                      // 0x0508(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Equip_Gun;                                         // 0x0510(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image;                                             // 0x0518(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_218;                                         // 0x0520(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IMG_ArmorBg;                                       // 0x0528(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IMG_Ping;                                          // 0x0530(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IMG_TeamColor_0;                                   // 0x0538(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IMG_TeamColor_1;                                   // 0x0540(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IMG_TeamColor_2;                                   // 0x0548(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IMG_TeamFrame;                                     // 0x0550(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProfileCard_Common_C*                  ProfileCard;                                       // 0x0558(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TXT_Assist;                                        // 0x0560(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TXT_Death;                                         // 0x0568(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TXT_Kill;                                          // 0x0570(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TXT_Revive;                                        // 0x0578(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TXT_Transfer;                                      // 0x0580(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ACharaBase*                             _TargetChara;                                      // 0x0588(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        _UpdateElapsed;                                    // 0x0590(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               Material_Ping;                                     // 0x0598(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	EPingQuality                                  LastPingQuality;                                   // 0x05A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3817[0x3];                                     // 0x05A1(0x0003)(Fixing Size After Last Property [ Dumper-69 ])
	struct FSlateColor                            _TeamColor;                                        // 0x05A4(0x0014)(Edit, BlueprintVisible, DisableEditOnInstance)
	class ABattlePlayerState*                     _PlayerState;                                      // 0x05B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void BindChara(class APlayerState* _player_state);
	void Construct();
	void ExecuteUbergraph_Ctrl_PlayersRow(int32 EntryPoint);
	ESlateVisibility Get_TXT_Revive_Visibility();
	class FText Get_TXT_Transfer_Text();
	ESlateVisibility Get_TXT_Transfer_Visibility();
	bool OnSynchronizeProperties();
	void OnTick(double _delta);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void UnboundChara();
	void UpdateBackground();
	void UpdateEquips();
	void UpdateKDA();
	void UpdateNameAndIcon();
	void UpdatePing();
	void ValidatePingMaterial();

	void GetTeamColor(struct FLinearColor* Color) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Ctrl_PlayersRow_C">();
	}
	static class UCtrl_PlayersRow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCtrl_PlayersRow_C>();
	}
};
static_assert(alignof(UCtrl_PlayersRow_C) == 0x000008, "Wrong alignment on UCtrl_PlayersRow_C");
static_assert(sizeof(UCtrl_PlayersRow_C) == 0x0005C0, "Wrong size on UCtrl_PlayersRow_C");
static_assert(offsetof(UCtrl_PlayersRow_C, UberGraphFrame) == 0x0004F0, "Member 'UCtrl_PlayersRow_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCtrl_PlayersRow_C, Bg_All) == 0x0004F8, "Member 'UCtrl_PlayersRow_C::Bg_All' has a wrong offset!");
static_assert(offsetof(UCtrl_PlayersRow_C, Ctrl_HUD_Armor) == 0x000500, "Member 'UCtrl_PlayersRow_C::Ctrl_HUD_Armor' has a wrong offset!");
static_assert(offsetof(UCtrl_PlayersRow_C, Equip_Bullet) == 0x000508, "Member 'UCtrl_PlayersRow_C::Equip_Bullet' has a wrong offset!");
static_assert(offsetof(UCtrl_PlayersRow_C, Equip_Gun) == 0x000510, "Member 'UCtrl_PlayersRow_C::Equip_Gun' has a wrong offset!");
static_assert(offsetof(UCtrl_PlayersRow_C, Image) == 0x000518, "Member 'UCtrl_PlayersRow_C::Image' has a wrong offset!");
static_assert(offsetof(UCtrl_PlayersRow_C, Image_218) == 0x000520, "Member 'UCtrl_PlayersRow_C::Image_218' has a wrong offset!");
static_assert(offsetof(UCtrl_PlayersRow_C, IMG_ArmorBg) == 0x000528, "Member 'UCtrl_PlayersRow_C::IMG_ArmorBg' has a wrong offset!");
static_assert(offsetof(UCtrl_PlayersRow_C, IMG_Ping) == 0x000530, "Member 'UCtrl_PlayersRow_C::IMG_Ping' has a wrong offset!");
static_assert(offsetof(UCtrl_PlayersRow_C, IMG_TeamColor_0) == 0x000538, "Member 'UCtrl_PlayersRow_C::IMG_TeamColor_0' has a wrong offset!");
static_assert(offsetof(UCtrl_PlayersRow_C, IMG_TeamColor_1) == 0x000540, "Member 'UCtrl_PlayersRow_C::IMG_TeamColor_1' has a wrong offset!");
static_assert(offsetof(UCtrl_PlayersRow_C, IMG_TeamColor_2) == 0x000548, "Member 'UCtrl_PlayersRow_C::IMG_TeamColor_2' has a wrong offset!");
static_assert(offsetof(UCtrl_PlayersRow_C, IMG_TeamFrame) == 0x000550, "Member 'UCtrl_PlayersRow_C::IMG_TeamFrame' has a wrong offset!");
static_assert(offsetof(UCtrl_PlayersRow_C, ProfileCard) == 0x000558, "Member 'UCtrl_PlayersRow_C::ProfileCard' has a wrong offset!");
static_assert(offsetof(UCtrl_PlayersRow_C, TXT_Assist) == 0x000560, "Member 'UCtrl_PlayersRow_C::TXT_Assist' has a wrong offset!");
static_assert(offsetof(UCtrl_PlayersRow_C, TXT_Death) == 0x000568, "Member 'UCtrl_PlayersRow_C::TXT_Death' has a wrong offset!");
static_assert(offsetof(UCtrl_PlayersRow_C, TXT_Kill) == 0x000570, "Member 'UCtrl_PlayersRow_C::TXT_Kill' has a wrong offset!");
static_assert(offsetof(UCtrl_PlayersRow_C, TXT_Revive) == 0x000578, "Member 'UCtrl_PlayersRow_C::TXT_Revive' has a wrong offset!");
static_assert(offsetof(UCtrl_PlayersRow_C, TXT_Transfer) == 0x000580, "Member 'UCtrl_PlayersRow_C::TXT_Transfer' has a wrong offset!");
static_assert(offsetof(UCtrl_PlayersRow_C, _TargetChara) == 0x000588, "Member 'UCtrl_PlayersRow_C::_TargetChara' has a wrong offset!");
static_assert(offsetof(UCtrl_PlayersRow_C, _UpdateElapsed) == 0x000590, "Member 'UCtrl_PlayersRow_C::_UpdateElapsed' has a wrong offset!");
static_assert(offsetof(UCtrl_PlayersRow_C, Material_Ping) == 0x000598, "Member 'UCtrl_PlayersRow_C::Material_Ping' has a wrong offset!");
static_assert(offsetof(UCtrl_PlayersRow_C, LastPingQuality) == 0x0005A0, "Member 'UCtrl_PlayersRow_C::LastPingQuality' has a wrong offset!");
static_assert(offsetof(UCtrl_PlayersRow_C, _TeamColor) == 0x0005A4, "Member 'UCtrl_PlayersRow_C::_TeamColor' has a wrong offset!");
static_assert(offsetof(UCtrl_PlayersRow_C, _PlayerState) == 0x0005B8, "Member 'UCtrl_PlayersRow_C::_PlayerState' has a wrong offset!");

}

