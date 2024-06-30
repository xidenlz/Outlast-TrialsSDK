#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BrightnessCalibrationMenu

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "OPP_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BrightnessCalibrationMenu.BrightnessCalibrationMenu_C
// 0x0048 (0x0370 - 0x0328)
class UBrightnessCalibrationMenu_C final : public URBMenuBrightnessCalibration
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0328(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UOptionsEntry_C*                        BrightnessEntry;                                   // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             CalibrationTitleText;                              // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                         DescriptionText;                                   // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URBMenuButton_C*                        ExitBtn;                                           // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptionsEntry_C*                        HDRPaperwhiteEntry;                                // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptionsEntry_C*                        HDRUserInterfaceEntry;                             // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                HoveringDetection;                                 // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URBMenuButton_C*                        ResetDefaultsBtn;                                  // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BrightnessCalibrationMenu(int32 EntryPoint);
	void BndEvt__BrightnessCalibrationMenu_HoveringDetection_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__BrightnessCalibrationMenu_BrightnessEntry_K2Node_ComponentBoundEvent_7_OnOptionValueChanged__DelegateSignature(class URBMenuOptionsEntry* OptionEntry);
	void BndEvt__BrightnessCalibrationMenu_HDRUserInterfaceEntry_K2Node_ComponentBoundEvent_6_OnOptionValueChanged__DelegateSignature(class URBMenuOptionsEntry* OptionEntry);
	void BndEvt__BrightnessCalibrationMenu_HDRPaperwhiteEntry_K2Node_ComponentBoundEvent_4_OnOptionValueChanged__DelegateSignature(class URBMenuOptionsEntry* OptionEntry);
	void Event_SetToDefaults();
	void BndEvt__BrightnessCalibrationMenu_ResetDefaultsBtn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(class URBMenuButton_C* Button);
	void Event_OnPop();
	void Event_OnPush();
	void BndEvt__BrightnessCalibrationMenu_ExitBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class URBMenuButton_C* Button);
	void Construct();
	void RefreshSliders();
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BrightnessCalibrationMenu_C">();
	}
	static class UBrightnessCalibrationMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBrightnessCalibrationMenu_C>();
	}
};
static_assert(alignof(UBrightnessCalibrationMenu_C) == 0x000008, "Wrong alignment on UBrightnessCalibrationMenu_C");
static_assert(sizeof(UBrightnessCalibrationMenu_C) == 0x000370, "Wrong size on UBrightnessCalibrationMenu_C");
static_assert(offsetof(UBrightnessCalibrationMenu_C, UberGraphFrame) == 0x000328, "Member 'UBrightnessCalibrationMenu_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBrightnessCalibrationMenu_C, BrightnessEntry) == 0x000330, "Member 'UBrightnessCalibrationMenu_C::BrightnessEntry' has a wrong offset!");
static_assert(offsetof(UBrightnessCalibrationMenu_C, CalibrationTitleText) == 0x000338, "Member 'UBrightnessCalibrationMenu_C::CalibrationTitleText' has a wrong offset!");
static_assert(offsetof(UBrightnessCalibrationMenu_C, DescriptionText) == 0x000340, "Member 'UBrightnessCalibrationMenu_C::DescriptionText' has a wrong offset!");
static_assert(offsetof(UBrightnessCalibrationMenu_C, ExitBtn) == 0x000348, "Member 'UBrightnessCalibrationMenu_C::ExitBtn' has a wrong offset!");
static_assert(offsetof(UBrightnessCalibrationMenu_C, HDRPaperwhiteEntry) == 0x000350, "Member 'UBrightnessCalibrationMenu_C::HDRPaperwhiteEntry' has a wrong offset!");
static_assert(offsetof(UBrightnessCalibrationMenu_C, HDRUserInterfaceEntry) == 0x000358, "Member 'UBrightnessCalibrationMenu_C::HDRUserInterfaceEntry' has a wrong offset!");
static_assert(offsetof(UBrightnessCalibrationMenu_C, HoveringDetection) == 0x000360, "Member 'UBrightnessCalibrationMenu_C::HoveringDetection' has a wrong offset!");
static_assert(offsetof(UBrightnessCalibrationMenu_C, ResetDefaultsBtn) == 0x000368, "Member 'UBrightnessCalibrationMenu_C::ResetDefaultsBtn' has a wrong offset!");

}

