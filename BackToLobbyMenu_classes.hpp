#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BackToLobbyMenu

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "OPP_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BackToLobbyMenu.BackToLobbyMenu_C
// 0x0058 (0x03A8 - 0x0350)
class UBackToLobbyMenu_C final : public URBBackToLobbyMenu
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0350(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       ShowWithParty;                                     // 0x0358(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class URBMenuButton_C*                        BackBtn;                                           // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Background_1;                                      // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGridPanel*                             ControlsGrid;                                      // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                GamepadFocusHandler;                               // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                LoadingContainer;                                  // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULoadingVideoWidget_C*                  LoadingVideoWidget;                                // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             WarningText;                                       // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URBMenuButton_C*                        WithoutPartyBtn;                                   // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URBMenuButton_C*                        WithPartyBtn;                                      // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BackToLobbyMenu(int32 EntryPoint);
	void Event_InputSourceChanged(bool bIsGamepad);
	void BndEvt__BackToLobbyMenu_GamepadFocusHandler_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__BackToLobbyMenu_BackBtn_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(class URBMenuButton_C* Button);
	void LeaveAlone();
	void LeaveWithParty();
	void BndEvt__RBMenuButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class URBMenuButton_C* Button);
	void Event_OnPop();
	void Event_OnPush();
	void Event_Refresh();
	void BndEvt__ReturnAloneBtn_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(class URBMenuButton_C* Button);
	bool AreButtonsEnabled();
	bool IsLeaveWithPartyEnabled();
	void GetWarningText(class FText* Text);
	void UpdateControlVisibility();
	void UpdateShowWithPartyVisibility();
	void UpdateLoadingWidgetVisibility();
	void UpdateWarningText();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BackToLobbyMenu_C">();
	}
	static class UBackToLobbyMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBackToLobbyMenu_C>();
	}
};
static_assert(alignof(UBackToLobbyMenu_C) == 0x000008, "Wrong alignment on UBackToLobbyMenu_C");
static_assert(sizeof(UBackToLobbyMenu_C) == 0x0003A8, "Wrong size on UBackToLobbyMenu_C");
static_assert(offsetof(UBackToLobbyMenu_C, UberGraphFrame) == 0x000350, "Member 'UBackToLobbyMenu_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBackToLobbyMenu_C, ShowWithParty) == 0x000358, "Member 'UBackToLobbyMenu_C::ShowWithParty' has a wrong offset!");
static_assert(offsetof(UBackToLobbyMenu_C, BackBtn) == 0x000360, "Member 'UBackToLobbyMenu_C::BackBtn' has a wrong offset!");
static_assert(offsetof(UBackToLobbyMenu_C, Background_1) == 0x000368, "Member 'UBackToLobbyMenu_C::Background_1' has a wrong offset!");
static_assert(offsetof(UBackToLobbyMenu_C, ControlsGrid) == 0x000370, "Member 'UBackToLobbyMenu_C::ControlsGrid' has a wrong offset!");
static_assert(offsetof(UBackToLobbyMenu_C, GamepadFocusHandler) == 0x000378, "Member 'UBackToLobbyMenu_C::GamepadFocusHandler' has a wrong offset!");
static_assert(offsetof(UBackToLobbyMenu_C, LoadingContainer) == 0x000380, "Member 'UBackToLobbyMenu_C::LoadingContainer' has a wrong offset!");
static_assert(offsetof(UBackToLobbyMenu_C, LoadingVideoWidget) == 0x000388, "Member 'UBackToLobbyMenu_C::LoadingVideoWidget' has a wrong offset!");
static_assert(offsetof(UBackToLobbyMenu_C, WarningText) == 0x000390, "Member 'UBackToLobbyMenu_C::WarningText' has a wrong offset!");
static_assert(offsetof(UBackToLobbyMenu_C, WithoutPartyBtn) == 0x000398, "Member 'UBackToLobbyMenu_C::WithoutPartyBtn' has a wrong offset!");
static_assert(offsetof(UBackToLobbyMenu_C, WithPartyBtn) == 0x0003A0, "Member 'UBackToLobbyMenu_C::WithPartyBtn' has a wrong offset!");

}

