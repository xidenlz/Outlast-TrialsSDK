#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CategoryButtonWidget

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"
#include "OPP_structs.hpp"


namespace SDK::Params
{

// Function CategoryButtonWidget.CategoryButtonWidget_C.ExecuteUbergraph_CategoryButtonWidget
// 0x0008 (0x0008 - 0x0000)
struct CategoryButtonWidget_C_ExecuteUbergraph_CategoryButtonWidget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CategoryButtonWidget_C_ExecuteUbergraph_CategoryButtonWidget) == 0x000004, "Wrong alignment on CategoryButtonWidget_C_ExecuteUbergraph_CategoryButtonWidget");
static_assert(sizeof(CategoryButtonWidget_C_ExecuteUbergraph_CategoryButtonWidget) == 0x000008, "Wrong size on CategoryButtonWidget_C_ExecuteUbergraph_CategoryButtonWidget");
static_assert(offsetof(CategoryButtonWidget_C_ExecuteUbergraph_CategoryButtonWidget, EntryPoint) == 0x000000, "Member 'CategoryButtonWidget_C_ExecuteUbergraph_CategoryButtonWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(CategoryButtonWidget_C_ExecuteUbergraph_CategoryButtonWidget, K2Node_Event_IsDesignTime) == 0x000004, "Member 'CategoryButtonWidget_C_ExecuteUbergraph_CategoryButtonWidget::K2Node_Event_IsDesignTime' has a wrong offset!");

// Function CategoryButtonWidget.CategoryButtonWidget_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct CategoryButtonWidget_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CategoryButtonWidget_C_PreConstruct) == 0x000001, "Wrong alignment on CategoryButtonWidget_C_PreConstruct");
static_assert(sizeof(CategoryButtonWidget_C_PreConstruct) == 0x000001, "Wrong size on CategoryButtonWidget_C_PreConstruct");
static_assert(offsetof(CategoryButtonWidget_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'CategoryButtonWidget_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function CategoryButtonWidget.CategoryButtonWidget_C.SetSelected
// 0x0001 (0x0001 - 0x0000)
struct CategoryButtonWidget_C_SetSelected final
{
public:
	bool                                          Param_IsSelected;                                  // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CategoryButtonWidget_C_SetSelected) == 0x000001, "Wrong alignment on CategoryButtonWidget_C_SetSelected");
static_assert(sizeof(CategoryButtonWidget_C_SetSelected) == 0x000001, "Wrong size on CategoryButtonWidget_C_SetSelected");
static_assert(offsetof(CategoryButtonWidget_C_SetSelected, Param_IsSelected) == 0x000000, "Member 'CategoryButtonWidget_C_SetSelected::Param_IsSelected' has a wrong offset!");

// Function CategoryButtonWidget.CategoryButtonWidget_C.SetState
// 0x0038 (0x0038 - 0x0000)
struct CategoryButtonWidget_C_SetState final
{
public:
	ECategoryButtonState                          Param_State;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECategoryButtonState                          PreviousState;                                     // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECategoryButtonState                          Temp_byte_Variable_2;                              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2EB6[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             Temp_object_Variable;                              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_1;                            // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_1;          // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2EB7[0x2];                                     // 0x001E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_3;        // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2EB8[0x5];                                     // 0x002B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             K2Node_Select_Default_1;                           // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CategoryButtonWidget_C_SetState) == 0x000008, "Wrong alignment on CategoryButtonWidget_C_SetState");
static_assert(sizeof(CategoryButtonWidget_C_SetState) == 0x000038, "Wrong size on CategoryButtonWidget_C_SetState");
static_assert(offsetof(CategoryButtonWidget_C_SetState, Param_State) == 0x000000, "Member 'CategoryButtonWidget_C_SetState::Param_State' has a wrong offset!");
static_assert(offsetof(CategoryButtonWidget_C_SetState, PreviousState) == 0x000001, "Member 'CategoryButtonWidget_C_SetState::PreviousState' has a wrong offset!");
static_assert(offsetof(CategoryButtonWidget_C_SetState, Temp_bool_Variable) == 0x000002, "Member 'CategoryButtonWidget_C_SetState::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CategoryButtonWidget_C_SetState, Temp_byte_Variable) == 0x000003, "Member 'CategoryButtonWidget_C_SetState::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(CategoryButtonWidget_C_SetState, Temp_byte_Variable_1) == 0x000004, "Member 'CategoryButtonWidget_C_SetState::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(CategoryButtonWidget_C_SetState, Temp_byte_Variable_2) == 0x000005, "Member 'CategoryButtonWidget_C_SetState::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(CategoryButtonWidget_C_SetState, Temp_object_Variable) == 0x000008, "Member 'CategoryButtonWidget_C_SetState::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(CategoryButtonWidget_C_SetState, Temp_object_Variable_1) == 0x000010, "Member 'CategoryButtonWidget_C_SetState::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(CategoryButtonWidget_C_SetState, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000018, "Member 'CategoryButtonWidget_C_SetState::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(CategoryButtonWidget_C_SetState, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000019, "Member 'CategoryButtonWidget_C_SetState::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CategoryButtonWidget_C_SetState, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x00001A, "Member 'CategoryButtonWidget_C_SetState::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(CategoryButtonWidget_C_SetState, CallFunc_NotEqual_ByteByte_ReturnValue_1) == 0x00001B, "Member 'CategoryButtonWidget_C_SetState::CallFunc_NotEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CategoryButtonWidget_C_SetState, CallFunc_BooleanAND_ReturnValue) == 0x00001C, "Member 'CategoryButtonWidget_C_SetState::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(CategoryButtonWidget_C_SetState, CallFunc_BooleanAND_ReturnValue_1) == 0x00001D, "Member 'CategoryButtonWidget_C_SetState::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CategoryButtonWidget_C_SetState, CallFunc_PlayAnimationForward_ReturnValue) == 0x000020, "Member 'CategoryButtonWidget_C_SetState::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(CategoryButtonWidget_C_SetState, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x000028, "Member 'CategoryButtonWidget_C_SetState::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CategoryButtonWidget_C_SetState, K2Node_Select_Default) == 0x000029, "Member 'CategoryButtonWidget_C_SetState::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(CategoryButtonWidget_C_SetState, CallFunc_EqualEqual_ByteByte_ReturnValue_3) == 0x00002A, "Member 'CategoryButtonWidget_C_SetState::CallFunc_EqualEqual_ByteByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CategoryButtonWidget_C_SetState, K2Node_Select_Default_1) == 0x000030, "Member 'CategoryButtonWidget_C_SetState::K2Node_Select_Default_1' has a wrong offset!");

// Function CategoryButtonWidget.CategoryButtonWidget_C.Set Icon
// 0x0010 (0x0010 - 0x0000)
struct CategoryButtonWidget_C_Set_Icon final
{
public:
	class UTexture2D*                             Param_Icon;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          MatchSize;                                         // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CategoryButtonWidget_C_Set_Icon) == 0x000008, "Wrong alignment on CategoryButtonWidget_C_Set_Icon");
static_assert(sizeof(CategoryButtonWidget_C_Set_Icon) == 0x000010, "Wrong size on CategoryButtonWidget_C_Set_Icon");
static_assert(offsetof(CategoryButtonWidget_C_Set_Icon, Param_Icon) == 0x000000, "Member 'CategoryButtonWidget_C_Set_Icon::Param_Icon' has a wrong offset!");
static_assert(offsetof(CategoryButtonWidget_C_Set_Icon, MatchSize) == 0x000008, "Member 'CategoryButtonWidget_C_Set_Icon::MatchSize' has a wrong offset!");
static_assert(offsetof(CategoryButtonWidget_C_Set_Icon, CallFunc_IsValid_ReturnValue) == 0x000009, "Member 'CategoryButtonWidget_C_Set_Icon::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function CategoryButtonWidget.CategoryButtonWidget_C.SetCanShowIcon
// 0x0007 (0x0007 - 0x0000)
struct CategoryButtonWidget_C_SetCanShowIcon final
{
public:
	bool                                          Param_CanShowIcon;                                 // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CategoryButtonWidget_C_SetCanShowIcon) == 0x000001, "Wrong alignment on CategoryButtonWidget_C_SetCanShowIcon");
static_assert(sizeof(CategoryButtonWidget_C_SetCanShowIcon) == 0x000007, "Wrong size on CategoryButtonWidget_C_SetCanShowIcon");
static_assert(offsetof(CategoryButtonWidget_C_SetCanShowIcon, Param_CanShowIcon) == 0x000000, "Member 'CategoryButtonWidget_C_SetCanShowIcon::Param_CanShowIcon' has a wrong offset!");
static_assert(offsetof(CategoryButtonWidget_C_SetCanShowIcon, Temp_bool_Variable) == 0x000001, "Member 'CategoryButtonWidget_C_SetCanShowIcon::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CategoryButtonWidget_C_SetCanShowIcon, Temp_byte_Variable) == 0x000002, "Member 'CategoryButtonWidget_C_SetCanShowIcon::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(CategoryButtonWidget_C_SetCanShowIcon, Temp_byte_Variable_1) == 0x000003, "Member 'CategoryButtonWidget_C_SetCanShowIcon::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(CategoryButtonWidget_C_SetCanShowIcon, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000004, "Member 'CategoryButtonWidget_C_SetCanShowIcon::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(CategoryButtonWidget_C_SetCanShowIcon, CallFunc_BooleanAND_ReturnValue) == 0x000005, "Member 'CategoryButtonWidget_C_SetCanShowIcon::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(CategoryButtonWidget_C_SetCanShowIcon, K2Node_Select_Default) == 0x000006, "Member 'CategoryButtonWidget_C_SetCanShowIcon::K2Node_Select_Default' has a wrong offset!");

// Function CategoryButtonWidget.CategoryButtonWidget_C.SetBaseColor
// 0x0028 (0x0028 - 0x0000)
struct CategoryButtonWidget_C_SetBaseColor final
{
public:
	struct FSlateColor                            Color;                                             // 0x0000(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(CategoryButtonWidget_C_SetBaseColor) == 0x000008, "Wrong alignment on CategoryButtonWidget_C_SetBaseColor");
static_assert(sizeof(CategoryButtonWidget_C_SetBaseColor) == 0x000028, "Wrong size on CategoryButtonWidget_C_SetBaseColor");
static_assert(offsetof(CategoryButtonWidget_C_SetBaseColor, Color) == 0x000000, "Member 'CategoryButtonWidget_C_SetBaseColor::Color' has a wrong offset!");

// Function CategoryButtonWidget.CategoryButtonWidget_C.Set Upgrade Item State
// 0x0014 (0x0014 - 0x0000)
struct CategoryButtonWidget_C_Set_Upgrade_Item_State final
{
public:
	EMenuUpgradeItemState                         UpgradeItemState;                                  // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EMenuUpgradeItemState                         Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECategoryButtonState                          Temp_byte_Variable_1;                              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECategoryButtonState                          Temp_byte_Variable_2;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECategoryButtonState                          Temp_byte_Variable_3;                              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECategoryButtonState                          Temp_byte_Variable_4;                              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECategoryButtonState                          Temp_byte_Variable_5;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECategoryButtonState                          Temp_byte_Variable_6;                              // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECategoryButtonState                          Temp_byte_Variable_7;                              // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECategoryButtonState                          Temp_byte_Variable_8;                              // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2EB9[0x2];                                     // 0x000A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_SelectFloat_ReturnValue;                  // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECategoryButtonState                          K2Node_Select_Default;                             // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CategoryButtonWidget_C_Set_Upgrade_Item_State) == 0x000004, "Wrong alignment on CategoryButtonWidget_C_Set_Upgrade_Item_State");
static_assert(sizeof(CategoryButtonWidget_C_Set_Upgrade_Item_State) == 0x000014, "Wrong size on CategoryButtonWidget_C_Set_Upgrade_Item_State");
static_assert(offsetof(CategoryButtonWidget_C_Set_Upgrade_Item_State, UpgradeItemState) == 0x000000, "Member 'CategoryButtonWidget_C_Set_Upgrade_Item_State::UpgradeItemState' has a wrong offset!");
static_assert(offsetof(CategoryButtonWidget_C_Set_Upgrade_Item_State, Temp_byte_Variable) == 0x000001, "Member 'CategoryButtonWidget_C_Set_Upgrade_Item_State::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(CategoryButtonWidget_C_Set_Upgrade_Item_State, Temp_byte_Variable_1) == 0x000002, "Member 'CategoryButtonWidget_C_Set_Upgrade_Item_State::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(CategoryButtonWidget_C_Set_Upgrade_Item_State, Temp_byte_Variable_2) == 0x000003, "Member 'CategoryButtonWidget_C_Set_Upgrade_Item_State::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(CategoryButtonWidget_C_Set_Upgrade_Item_State, Temp_byte_Variable_3) == 0x000004, "Member 'CategoryButtonWidget_C_Set_Upgrade_Item_State::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(CategoryButtonWidget_C_Set_Upgrade_Item_State, Temp_byte_Variable_4) == 0x000005, "Member 'CategoryButtonWidget_C_Set_Upgrade_Item_State::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(CategoryButtonWidget_C_Set_Upgrade_Item_State, Temp_byte_Variable_5) == 0x000006, "Member 'CategoryButtonWidget_C_Set_Upgrade_Item_State::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(CategoryButtonWidget_C_Set_Upgrade_Item_State, Temp_byte_Variable_6) == 0x000007, "Member 'CategoryButtonWidget_C_Set_Upgrade_Item_State::Temp_byte_Variable_6' has a wrong offset!");
static_assert(offsetof(CategoryButtonWidget_C_Set_Upgrade_Item_State, Temp_byte_Variable_7) == 0x000008, "Member 'CategoryButtonWidget_C_Set_Upgrade_Item_State::Temp_byte_Variable_7' has a wrong offset!");
static_assert(offsetof(CategoryButtonWidget_C_Set_Upgrade_Item_State, Temp_byte_Variable_8) == 0x000009, "Member 'CategoryButtonWidget_C_Set_Upgrade_Item_State::Temp_byte_Variable_8' has a wrong offset!");
static_assert(offsetof(CategoryButtonWidget_C_Set_Upgrade_Item_State, CallFunc_SelectFloat_ReturnValue) == 0x00000C, "Member 'CategoryButtonWidget_C_Set_Upgrade_Item_State::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(CategoryButtonWidget_C_Set_Upgrade_Item_State, K2Node_Select_Default) == 0x000010, "Member 'CategoryButtonWidget_C_Set_Upgrade_Item_State::K2Node_Select_Default' has a wrong offset!");

// Function CategoryButtonWidget.CategoryButtonWidget_C.SetIsEquipped
// 0x0002 (0x0002 - 0x0000)
struct CategoryButtonWidget_C_SetIsEquipped final
{
public:
	bool                                          InIsEquipped;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CategoryButtonWidget_C_SetIsEquipped) == 0x000001, "Wrong alignment on CategoryButtonWidget_C_SetIsEquipped");
static_assert(sizeof(CategoryButtonWidget_C_SetIsEquipped) == 0x000002, "Wrong size on CategoryButtonWidget_C_SetIsEquipped");
static_assert(offsetof(CategoryButtonWidget_C_SetIsEquipped, InIsEquipped) == 0x000000, "Member 'CategoryButtonWidget_C_SetIsEquipped::InIsEquipped' has a wrong offset!");
static_assert(offsetof(CategoryButtonWidget_C_SetIsEquipped, CallFunc_NotEqual_BoolBool_ReturnValue) == 0x000001, "Member 'CategoryButtonWidget_C_SetIsEquipped::CallFunc_NotEqual_BoolBool_ReturnValue' has a wrong offset!");

// Function CategoryButtonWidget.CategoryButtonWidget_C.SetIsNew
// 0x000A (0x000A - 0x0000)
struct CategoryButtonWidget_C_SetIsNew final
{
public:
	bool                                          InIsNew;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          InHasNewItemsInSubCategory;                        // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          WasNew;                                            // 0x0002(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CategoryButtonWidget_C_SetIsNew) == 0x000001, "Wrong alignment on CategoryButtonWidget_C_SetIsNew");
static_assert(sizeof(CategoryButtonWidget_C_SetIsNew) == 0x00000A, "Wrong size on CategoryButtonWidget_C_SetIsNew");
static_assert(offsetof(CategoryButtonWidget_C_SetIsNew, InIsNew) == 0x000000, "Member 'CategoryButtonWidget_C_SetIsNew::InIsNew' has a wrong offset!");
static_assert(offsetof(CategoryButtonWidget_C_SetIsNew, InHasNewItemsInSubCategory) == 0x000001, "Member 'CategoryButtonWidget_C_SetIsNew::InHasNewItemsInSubCategory' has a wrong offset!");
static_assert(offsetof(CategoryButtonWidget_C_SetIsNew, WasNew) == 0x000002, "Member 'CategoryButtonWidget_C_SetIsNew::WasNew' has a wrong offset!");
static_assert(offsetof(CategoryButtonWidget_C_SetIsNew, Temp_bool_Variable) == 0x000003, "Member 'CategoryButtonWidget_C_SetIsNew::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CategoryButtonWidget_C_SetIsNew, Temp_byte_Variable) == 0x000004, "Member 'CategoryButtonWidget_C_SetIsNew::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(CategoryButtonWidget_C_SetIsNew, Temp_byte_Variable_1) == 0x000005, "Member 'CategoryButtonWidget_C_SetIsNew::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(CategoryButtonWidget_C_SetIsNew, CallFunc_BooleanOR_ReturnValue) == 0x000006, "Member 'CategoryButtonWidget_C_SetIsNew::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(CategoryButtonWidget_C_SetIsNew, CallFunc_Not_PreBool_ReturnValue) == 0x000007, "Member 'CategoryButtonWidget_C_SetIsNew::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(CategoryButtonWidget_C_SetIsNew, K2Node_Select_Default) == 0x000008, "Member 'CategoryButtonWidget_C_SetIsNew::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(CategoryButtonWidget_C_SetIsNew, CallFunc_BooleanAND_ReturnValue) == 0x000009, "Member 'CategoryButtonWidget_C_SetIsNew::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function CategoryButtonWidget.CategoryButtonWidget_C.SetHovered
// 0x0028 (0x0028 - 0x0000)
struct CategoryButtonWidget_C_SetHovered final
{
public:
	bool                                          bInHovered;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2EBA[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_1;          // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2EBB[0x5];                                     // 0x0013(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_3;                 // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CategoryButtonWidget_C_SetHovered) == 0x000008, "Wrong alignment on CategoryButtonWidget_C_SetHovered");
static_assert(sizeof(CategoryButtonWidget_C_SetHovered) == 0x000028, "Wrong size on CategoryButtonWidget_C_SetHovered");
static_assert(offsetof(CategoryButtonWidget_C_SetHovered, bInHovered) == 0x000000, "Member 'CategoryButtonWidget_C_SetHovered::bInHovered' has a wrong offset!");
static_assert(offsetof(CategoryButtonWidget_C_SetHovered, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000001, "Member 'CategoryButtonWidget_C_SetHovered::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(CategoryButtonWidget_C_SetHovered, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000008, "Member 'CategoryButtonWidget_C_SetHovered::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(CategoryButtonWidget_C_SetHovered, CallFunc_BooleanAND_ReturnValue) == 0x000010, "Member 'CategoryButtonWidget_C_SetHovered::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(CategoryButtonWidget_C_SetHovered, CallFunc_BooleanAND_ReturnValue_1) == 0x000011, "Member 'CategoryButtonWidget_C_SetHovered::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CategoryButtonWidget_C_SetHovered, CallFunc_NotEqual_ByteByte_ReturnValue_1) == 0x000012, "Member 'CategoryButtonWidget_C_SetHovered::CallFunc_NotEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CategoryButtonWidget_C_SetHovered, CallFunc_PlayAnimationForward_ReturnValue) == 0x000018, "Member 'CategoryButtonWidget_C_SetHovered::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(CategoryButtonWidget_C_SetHovered, CallFunc_BooleanAND_ReturnValue_2) == 0x000020, "Member 'CategoryButtonWidget_C_SetHovered::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CategoryButtonWidget_C_SetHovered, CallFunc_BooleanAND_ReturnValue_3) == 0x000021, "Member 'CategoryButtonWidget_C_SetHovered::CallFunc_BooleanAND_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CategoryButtonWidget_C_SetHovered, CallFunc_NotEqual_BoolBool_ReturnValue) == 0x000022, "Member 'CategoryButtonWidget_C_SetHovered::CallFunc_NotEqual_BoolBool_ReturnValue' has a wrong offset!");

}

