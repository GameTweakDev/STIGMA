#pragma once

/*
* SDK generated by Dumper-69
*
* https://github.com/Encryqed/Dumper-69
*/

// Package: UI_GameResult_Total

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Stigma_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_GameResult_Total.UI_GameResult_Total_C
// 0x0008 (0x0748 - 0x0740)
class UUI_GameResult_Total_C final : public UUI_ResultBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0740(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void Construct();
	void ExecuteUbergraph_UI_GameResult_Total(int32 EntryPoint);
	void ShowMockup();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_GameResult_Total_C">();
	}
	static class UUI_GameResult_Total_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_GameResult_Total_C>();
	}
};
static_assert(alignof(UUI_GameResult_Total_C) == 0x000008, "Wrong alignment on UUI_GameResult_Total_C");
static_assert(sizeof(UUI_GameResult_Total_C) == 0x000748, "Wrong size on UUI_GameResult_Total_C");
static_assert(offsetof(UUI_GameResult_Total_C, UberGraphFrame) == 0x000740, "Member 'UUI_GameResult_Total_C::UberGraphFrame' has a wrong offset!");

}

