#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: UI_RewardContainer

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "Stigma_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_RewardContainer.UI_RewardContainer_C
// 0x0148 (0x0670 - 0x0528)
class UUI_RewardContainer_C final : public UUI_RewardContainer
{
public:
	class UUI_Comp_RewardItem_C*                  UI_Comp_RewardItem_Temp;                           // 0x0528(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Comp_RewardItem_C*                  UI_Comp_RewardItem_Temp_1;                         // 0x0530(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Comp_RewardItem_C*                  UI_Comp_RewardItem_Temp_2;                         // 0x0538(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Comp_RewardItem_C*                  UI_Comp_RewardItem_Temp_3;                         // 0x0540(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Comp_RewardItem_C*                  UI_Comp_RewardItem_Temp_4;                         // 0x0548(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          UI_ShowBackGround;                                 // 0x0550(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Show_Tool_Tip;                                     // 0x0551(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3563[0x6];                                     // 0x0552(0x0006)(Fixing Size After Last Property [ Dumper-69 ])
	double                                        UI_Width_Ratio;                                    // 0x0558(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        UI_Height_Ratio;                                   // 0x0560(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        UI_Text_Height_Ratio;                              // 0x0568(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                UI_Inner_Box_Padding;                              // 0x0570(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         UI_Count_Text_Right_Padding;                       // 0x0580(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3564[0xC];                                     // 0x0584(0x000C)(Fixing Size After Last Property [ Dumper-69 ])
	struct FSlateBrush                            UI_Brush_Background;                               // 0x0590(0x00D0)(Edit, BlueprintVisible)
	bool                                          UI_Show_Glow;                                      // 0x0660(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UI_Show_Back_Light;                                // 0x0661(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UI_Show_Out_Line;                                  // 0x0662(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	class UUI_RewardItem* CreateRewardWidget();
	bool OnSynchronizeProperties();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_RewardContainer_C">();
	}
	static class UUI_RewardContainer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_RewardContainer_C>();
	}
};
static_assert(alignof(UUI_RewardContainer_C) == 0x000010, "Wrong alignment on UUI_RewardContainer_C");
static_assert(sizeof(UUI_RewardContainer_C) == 0x000670, "Wrong size on UUI_RewardContainer_C");
static_assert(offsetof(UUI_RewardContainer_C, UI_Comp_RewardItem_Temp) == 0x000528, "Member 'UUI_RewardContainer_C::UI_Comp_RewardItem_Temp' has a wrong offset!");
static_assert(offsetof(UUI_RewardContainer_C, UI_Comp_RewardItem_Temp_1) == 0x000530, "Member 'UUI_RewardContainer_C::UI_Comp_RewardItem_Temp_1' has a wrong offset!");
static_assert(offsetof(UUI_RewardContainer_C, UI_Comp_RewardItem_Temp_2) == 0x000538, "Member 'UUI_RewardContainer_C::UI_Comp_RewardItem_Temp_2' has a wrong offset!");
static_assert(offsetof(UUI_RewardContainer_C, UI_Comp_RewardItem_Temp_3) == 0x000540, "Member 'UUI_RewardContainer_C::UI_Comp_RewardItem_Temp_3' has a wrong offset!");
static_assert(offsetof(UUI_RewardContainer_C, UI_Comp_RewardItem_Temp_4) == 0x000548, "Member 'UUI_RewardContainer_C::UI_Comp_RewardItem_Temp_4' has a wrong offset!");
static_assert(offsetof(UUI_RewardContainer_C, UI_ShowBackGround) == 0x000550, "Member 'UUI_RewardContainer_C::UI_ShowBackGround' has a wrong offset!");
static_assert(offsetof(UUI_RewardContainer_C, Show_Tool_Tip) == 0x000551, "Member 'UUI_RewardContainer_C::Show_Tool_Tip' has a wrong offset!");
static_assert(offsetof(UUI_RewardContainer_C, UI_Width_Ratio) == 0x000558, "Member 'UUI_RewardContainer_C::UI_Width_Ratio' has a wrong offset!");
static_assert(offsetof(UUI_RewardContainer_C, UI_Height_Ratio) == 0x000560, "Member 'UUI_RewardContainer_C::UI_Height_Ratio' has a wrong offset!");
static_assert(offsetof(UUI_RewardContainer_C, UI_Text_Height_Ratio) == 0x000568, "Member 'UUI_RewardContainer_C::UI_Text_Height_Ratio' has a wrong offset!");
static_assert(offsetof(UUI_RewardContainer_C, UI_Inner_Box_Padding) == 0x000570, "Member 'UUI_RewardContainer_C::UI_Inner_Box_Padding' has a wrong offset!");
static_assert(offsetof(UUI_RewardContainer_C, UI_Count_Text_Right_Padding) == 0x000580, "Member 'UUI_RewardContainer_C::UI_Count_Text_Right_Padding' has a wrong offset!");
static_assert(offsetof(UUI_RewardContainer_C, UI_Brush_Background) == 0x000590, "Member 'UUI_RewardContainer_C::UI_Brush_Background' has a wrong offset!");
static_assert(offsetof(UUI_RewardContainer_C, UI_Show_Glow) == 0x000660, "Member 'UUI_RewardContainer_C::UI_Show_Glow' has a wrong offset!");
static_assert(offsetof(UUI_RewardContainer_C, UI_Show_Back_Light) == 0x000661, "Member 'UUI_RewardContainer_C::UI_Show_Back_Light' has a wrong offset!");
static_assert(offsetof(UUI_RewardContainer_C, UI_Show_Out_Line) == 0x000662, "Member 'UUI_RewardContainer_C::UI_Show_Out_Line' has a wrong offset!");

}

