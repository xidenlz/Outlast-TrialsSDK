#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ActiveSkillButton

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"
#include "OPP_structs.hpp"


namespace SDK::Params
{

// Function ActiveSkillButton.ActiveSkillButton_C.OnFocusLost
// 0x0008 (0x0008 - 0x0000)
struct ActiveSkillButton_C_OnFocusLost final
{
public:
	struct FFocusEvent                            InFocusEvent;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};
static_assert(alignof(ActiveSkillButton_C_OnFocusLost) == 0x000004, "Wrong alignment on ActiveSkillButton_C_OnFocusLost");
static_assert(sizeof(ActiveSkillButton_C_OnFocusLost) == 0x000008, "Wrong size on ActiveSkillButton_C_OnFocusLost");
static_assert(offsetof(ActiveSkillButton_C_OnFocusLost, InFocusEvent) == 0x000000, "Member 'ActiveSkillButton_C_OnFocusLost::InFocusEvent' has a wrong offset!");

// Function ActiveSkillButton.ActiveSkillButton_C.OnFocusReceived
// 0x01D0 (0x01D0 - 0x0000)
struct ActiveSkillButton_C_OnFocusReceived final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FFocusEvent                            InFocusEvent;                                      // 0x0038(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FEventReply                            ReturnValue;                                       // 0x0040(0x00B8)(Parm, OutParm, ReturnParm)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x00F8(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0108(0x0010)(ZeroConstructor, NoDestructor)
	struct FEventReply                            CallFunc_Handled_ReturnValue;                      // 0x0118(0x00B8)()
};
static_assert(alignof(ActiveSkillButton_C_OnFocusReceived) == 0x000008, "Wrong alignment on ActiveSkillButton_C_OnFocusReceived");
static_assert(sizeof(ActiveSkillButton_C_OnFocusReceived) == 0x0001D0, "Wrong size on ActiveSkillButton_C_OnFocusReceived");
static_assert(offsetof(ActiveSkillButton_C_OnFocusReceived, MyGeometry) == 0x000000, "Member 'ActiveSkillButton_C_OnFocusReceived::MyGeometry' has a wrong offset!");
static_assert(offsetof(ActiveSkillButton_C_OnFocusReceived, InFocusEvent) == 0x000038, "Member 'ActiveSkillButton_C_OnFocusReceived::InFocusEvent' has a wrong offset!");
static_assert(offsetof(ActiveSkillButton_C_OnFocusReceived, ReturnValue) == 0x000040, "Member 'ActiveSkillButton_C_OnFocusReceived::ReturnValue' has a wrong offset!");
static_assert(offsetof(ActiveSkillButton_C_OnFocusReceived, K2Node_CreateDelegate_OutputDelegate) == 0x0000F8, "Member 'ActiveSkillButton_C_OnFocusReceived::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(ActiveSkillButton_C_OnFocusReceived, K2Node_CreateDelegate_OutputDelegate_1) == 0x000108, "Member 'ActiveSkillButton_C_OnFocusReceived::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(ActiveSkillButton_C_OnFocusReceived, CallFunc_Handled_ReturnValue) == 0x000118, "Member 'ActiveSkillButton_C_OnFocusReceived::CallFunc_Handled_ReturnValue' has a wrong offset!");

// Function ActiveSkillButton.ActiveSkillButton_C.SetHovered
// 0x0001 (0x0001 - 0x0000)
struct ActiveSkillButton_C_SetHovered final
{
public:
	bool                                          bInHovered;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ActiveSkillButton_C_SetHovered) == 0x000001, "Wrong alignment on ActiveSkillButton_C_SetHovered");
static_assert(sizeof(ActiveSkillButton_C_SetHovered) == 0x000001, "Wrong size on ActiveSkillButton_C_SetHovered");
static_assert(offsetof(ActiveSkillButton_C_SetHovered, bInHovered) == 0x000000, "Member 'ActiveSkillButton_C_SetHovered::bInHovered' has a wrong offset!");

// Function ActiveSkillButton.ActiveSkillButton_C.GetIsEquipped
// 0x0001 (0x0001 - 0x0000)
struct ActiveSkillButton_C_GetIsEquipped final
{
public:
	bool                                          IsEquipped;                                        // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ActiveSkillButton_C_GetIsEquipped) == 0x000001, "Wrong alignment on ActiveSkillButton_C_GetIsEquipped");
static_assert(sizeof(ActiveSkillButton_C_GetIsEquipped) == 0x000001, "Wrong size on ActiveSkillButton_C_GetIsEquipped");
static_assert(offsetof(ActiveSkillButton_C_GetIsEquipped, IsEquipped) == 0x000000, "Member 'ActiveSkillButton_C_GetIsEquipped::IsEquipped' has a wrong offset!");

// Function ActiveSkillButton.ActiveSkillButton_C.SetIsEquipped
// 0x0001 (0x0001 - 0x0000)
struct ActiveSkillButton_C_SetIsEquipped final
{
public:
	bool                                          IsEquipped;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ActiveSkillButton_C_SetIsEquipped) == 0x000001, "Wrong alignment on ActiveSkillButton_C_SetIsEquipped");
static_assert(sizeof(ActiveSkillButton_C_SetIsEquipped) == 0x000001, "Wrong size on ActiveSkillButton_C_SetIsEquipped");
static_assert(offsetof(ActiveSkillButton_C_SetIsEquipped, IsEquipped) == 0x000000, "Member 'ActiveSkillButton_C_SetIsEquipped::IsEquipped' has a wrong offset!");

// Function ActiveSkillButton.ActiveSkillButton_C.SetSelected
// 0x0001 (0x0001 - 0x0000)
struct ActiveSkillButton_C_SetSelected final
{
public:
	bool                                          Selected;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ActiveSkillButton_C_SetSelected) == 0x000001, "Wrong alignment on ActiveSkillButton_C_SetSelected");
static_assert(sizeof(ActiveSkillButton_C_SetSelected) == 0x000001, "Wrong size on ActiveSkillButton_C_SetSelected");
static_assert(offsetof(ActiveSkillButton_C_SetSelected, Selected) == 0x000000, "Member 'ActiveSkillButton_C_SetSelected::Selected' has a wrong offset!");

// Function ActiveSkillButton.ActiveSkillButton_C.Initialize Empty Slot
// 0x0028 (0x0028 - 0x0000)
struct ActiveSkillButton_C_Initialize_Empty_Slot final
{
public:
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0000(0x0028)()
};
static_assert(alignof(ActiveSkillButton_C_Initialize_Empty_Slot) == 0x000008, "Wrong alignment on ActiveSkillButton_C_Initialize_Empty_Slot");
static_assert(sizeof(ActiveSkillButton_C_Initialize_Empty_Slot) == 0x000028, "Wrong size on ActiveSkillButton_C_Initialize_Empty_Slot");
static_assert(offsetof(ActiveSkillButton_C_Initialize_Empty_Slot, K2Node_MakeStruct_SlateColor) == 0x000000, "Member 'ActiveSkillButton_C_Initialize_Empty_Slot::K2Node_MakeStruct_SlateColor' has a wrong offset!");

// Function ActiveSkillButton.ActiveSkillButton_C.Initialize
// 0x01D0 (0x01D0 - 0x0000)
struct ActiveSkillButton_C_Initialize final
{
public:
	struct FMenuUpgradeItemInfo                   Param_ItemInfo;                                    // 0x0000(0x0128)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          bInIsSlot;                                         // 0x0128(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_359C[0x7];                                     // 0x0129(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            CallFunc_GetActiveSkillColor_color;                // 0x0130(0x0028)()
	struct FActiveSkillCommonParams               CallFunc_GetActiveSkillCommonParams_ReturnValue;   // 0x0158(0x0078)(ConstParm)
};
static_assert(alignof(ActiveSkillButton_C_Initialize) == 0x000008, "Wrong alignment on ActiveSkillButton_C_Initialize");
static_assert(sizeof(ActiveSkillButton_C_Initialize) == 0x0001D0, "Wrong size on ActiveSkillButton_C_Initialize");
static_assert(offsetof(ActiveSkillButton_C_Initialize, Param_ItemInfo) == 0x000000, "Member 'ActiveSkillButton_C_Initialize::Param_ItemInfo' has a wrong offset!");
static_assert(offsetof(ActiveSkillButton_C_Initialize, bInIsSlot) == 0x000128, "Member 'ActiveSkillButton_C_Initialize::bInIsSlot' has a wrong offset!");
static_assert(offsetof(ActiveSkillButton_C_Initialize, CallFunc_GetActiveSkillColor_color) == 0x000130, "Member 'ActiveSkillButton_C_Initialize::CallFunc_GetActiveSkillColor_color' has a wrong offset!");
static_assert(offsetof(ActiveSkillButton_C_Initialize, CallFunc_GetActiveSkillCommonParams_ReturnValue) == 0x000158, "Member 'ActiveSkillButton_C_Initialize::CallFunc_GetActiveSkillCommonParams_ReturnValue' has a wrong offset!");

// Function ActiveSkillButton.ActiveSkillButton_C.ExecuteUbergraph_ActiveSkillButton
// 0x0028 (0x0028 - 0x0000)
struct ActiveSkillButton_C_ExecuteUbergraph_ActiveSkillButton final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_359D[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class URBMenuManager*                         CallFunc_GetMenuManager_ReturnValue;               // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class URBMenuManager*                         CallFunc_GetMenuManager_ReturnValue_1;             // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ActiveSkillButton_C_ExecuteUbergraph_ActiveSkillButton) == 0x000008, "Wrong alignment on ActiveSkillButton_C_ExecuteUbergraph_ActiveSkillButton");
static_assert(sizeof(ActiveSkillButton_C_ExecuteUbergraph_ActiveSkillButton) == 0x000028, "Wrong size on ActiveSkillButton_C_ExecuteUbergraph_ActiveSkillButton");
static_assert(offsetof(ActiveSkillButton_C_ExecuteUbergraph_ActiveSkillButton, EntryPoint) == 0x000000, "Member 'ActiveSkillButton_C_ExecuteUbergraph_ActiveSkillButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(ActiveSkillButton_C_ExecuteUbergraph_ActiveSkillButton, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'ActiveSkillButton_C_ExecuteUbergraph_ActiveSkillButton::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(ActiveSkillButton_C_ExecuteUbergraph_ActiveSkillButton, CallFunc_GetMenuManager_ReturnValue) == 0x000018, "Member 'ActiveSkillButton_C_ExecuteUbergraph_ActiveSkillButton::CallFunc_GetMenuManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(ActiveSkillButton_C_ExecuteUbergraph_ActiveSkillButton, CallFunc_GetMenuManager_ReturnValue_1) == 0x000020, "Member 'ActiveSkillButton_C_ExecuteUbergraph_ActiveSkillButton::CallFunc_GetMenuManager_ReturnValue_1' has a wrong offset!");

// Function ActiveSkillButton.ActiveSkillButton_C.OnReleasedEvent__DelegateSignature
// 0x0128 (0x0128 - 0x0000)
struct ActiveSkillButton_C_OnReleasedEvent__DelegateSignature final
{
public:
	struct FMenuUpgradeItemInfo                   Param_ItemInfo;                                    // 0x0000(0x0128)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(ActiveSkillButton_C_OnReleasedEvent__DelegateSignature) == 0x000008, "Wrong alignment on ActiveSkillButton_C_OnReleasedEvent__DelegateSignature");
static_assert(sizeof(ActiveSkillButton_C_OnReleasedEvent__DelegateSignature) == 0x000128, "Wrong size on ActiveSkillButton_C_OnReleasedEvent__DelegateSignature");
static_assert(offsetof(ActiveSkillButton_C_OnReleasedEvent__DelegateSignature, Param_ItemInfo) == 0x000000, "Member 'ActiveSkillButton_C_OnReleasedEvent__DelegateSignature::Param_ItemInfo' has a wrong offset!");

// Function ActiveSkillButton.ActiveSkillButton_C.OnPressedEvent__DelegateSignature
// 0x0128 (0x0128 - 0x0000)
struct ActiveSkillButton_C_OnPressedEvent__DelegateSignature final
{
public:
	struct FMenuUpgradeItemInfo                   Param_ItemInfo;                                    // 0x0000(0x0128)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(ActiveSkillButton_C_OnPressedEvent__DelegateSignature) == 0x000008, "Wrong alignment on ActiveSkillButton_C_OnPressedEvent__DelegateSignature");
static_assert(sizeof(ActiveSkillButton_C_OnPressedEvent__DelegateSignature) == 0x000128, "Wrong size on ActiveSkillButton_C_OnPressedEvent__DelegateSignature");
static_assert(offsetof(ActiveSkillButton_C_OnPressedEvent__DelegateSignature, Param_ItemInfo) == 0x000000, "Member 'ActiveSkillButton_C_OnPressedEvent__DelegateSignature::Param_ItemInfo' has a wrong offset!");

// Function ActiveSkillButton.ActiveSkillButton_C.OnUnhoveredEvent__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct ActiveSkillButton_C_OnUnhoveredEvent__DelegateSignature final
{
public:
	class UActiveSkillButton_C*                   Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ActiveSkillButton_C_OnUnhoveredEvent__DelegateSignature) == 0x000008, "Wrong alignment on ActiveSkillButton_C_OnUnhoveredEvent__DelegateSignature");
static_assert(sizeof(ActiveSkillButton_C_OnUnhoveredEvent__DelegateSignature) == 0x000008, "Wrong size on ActiveSkillButton_C_OnUnhoveredEvent__DelegateSignature");
static_assert(offsetof(ActiveSkillButton_C_OnUnhoveredEvent__DelegateSignature, Button) == 0x000000, "Member 'ActiveSkillButton_C_OnUnhoveredEvent__DelegateSignature::Button' has a wrong offset!");

// Function ActiveSkillButton.ActiveSkillButton_C.OnHoveredEvent__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct ActiveSkillButton_C_OnHoveredEvent__DelegateSignature final
{
public:
	class UActiveSkillButton_C*                   Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ActiveSkillButton_C_OnHoveredEvent__DelegateSignature) == 0x000008, "Wrong alignment on ActiveSkillButton_C_OnHoveredEvent__DelegateSignature");
static_assert(sizeof(ActiveSkillButton_C_OnHoveredEvent__DelegateSignature) == 0x000008, "Wrong size on ActiveSkillButton_C_OnHoveredEvent__DelegateSignature");
static_assert(offsetof(ActiveSkillButton_C_OnHoveredEvent__DelegateSignature, Button) == 0x000000, "Member 'ActiveSkillButton_C_OnHoveredEvent__DelegateSignature::Button' has a wrong offset!");

// Function ActiveSkillButton.ActiveSkillButton_C.OnClickedEvent__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct ActiveSkillButton_C_OnClickedEvent__DelegateSignature final
{
public:
	class UActiveSkillButton_C*                   Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ActiveSkillButton_C_OnClickedEvent__DelegateSignature) == 0x000008, "Wrong alignment on ActiveSkillButton_C_OnClickedEvent__DelegateSignature");
static_assert(sizeof(ActiveSkillButton_C_OnClickedEvent__DelegateSignature) == 0x000008, "Wrong size on ActiveSkillButton_C_OnClickedEvent__DelegateSignature");
static_assert(offsetof(ActiveSkillButton_C_OnClickedEvent__DelegateSignature, Button) == 0x000000, "Member 'ActiveSkillButton_C_OnClickedEvent__DelegateSignature::Button' has a wrong offset!");

}

