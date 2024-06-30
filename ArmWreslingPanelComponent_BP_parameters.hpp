#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ArmWreslingPanelComponent_BP

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "OPP_structs.hpp"


namespace SDK::Params
{

// Function ArmWreslingPanelComponent_BP.ArmWreslingPanelComponent_BP_C.ExecuteUbergraph_ArmWreslingPanelComponent_BP
// 0x0090 (0x0090 - 0x0000)
struct ArmWreslingPanelComponent_BP_C_ExecuteUbergraph_ArmWreslingPanelComponent_BP final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3DE2[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AArmWreslingTable_BP_C*                 K2Node_DynamicCast_AsArm_Wresling_Table_BP;        // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3DE3[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FArmWreslingPlayerRoundData            K2Node_CustomEvent_playerRoundData;                // 0x0018(0x0038)(ConstParm, ContainsInstancedReference)
	TDelegate<void(struct FArmWreslingPlayerRoundData& PlayerRoundData)> K2Node_CreateDelegate_OutputDelegate;              // 0x0050(0x0010)(ZeroConstructor, NoDestructor)
	class URBGhostAnimInstance*                   CallFunc_GetGhostAnimBP_ReturnValue;               // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UArmWreslingPanel_GhostAnimBP_C*        K2Node_DynamicCast_AsArm_Wresling_Panel_Ghost_Anim_BP; // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3DE4[0x2];                                     // 0x0072(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ARBPawn*                                K2Node_Event_pawn;                                 // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESpecialMove                                  K2Node_Event_specialMove;                          // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3DE5[0x3];                                     // 0x0081(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3DE6[0x3];                                     // 0x0089(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Get_Item;                           // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ArmWreslingPanelComponent_BP_C_ExecuteUbergraph_ArmWreslingPanelComponent_BP) == 0x000008, "Wrong alignment on ArmWreslingPanelComponent_BP_C_ExecuteUbergraph_ArmWreslingPanelComponent_BP");
static_assert(sizeof(ArmWreslingPanelComponent_BP_C_ExecuteUbergraph_ArmWreslingPanelComponent_BP) == 0x000090, "Wrong size on ArmWreslingPanelComponent_BP_C_ExecuteUbergraph_ArmWreslingPanelComponent_BP");
static_assert(offsetof(ArmWreslingPanelComponent_BP_C_ExecuteUbergraph_ArmWreslingPanelComponent_BP, EntryPoint) == 0x000000, "Member 'ArmWreslingPanelComponent_BP_C_ExecuteUbergraph_ArmWreslingPanelComponent_BP::EntryPoint' has a wrong offset!");
static_assert(offsetof(ArmWreslingPanelComponent_BP_C_ExecuteUbergraph_ArmWreslingPanelComponent_BP, K2Node_DynamicCast_AsArm_Wresling_Table_BP) == 0x000008, "Member 'ArmWreslingPanelComponent_BP_C_ExecuteUbergraph_ArmWreslingPanelComponent_BP::K2Node_DynamicCast_AsArm_Wresling_Table_BP' has a wrong offset!");
static_assert(offsetof(ArmWreslingPanelComponent_BP_C_ExecuteUbergraph_ArmWreslingPanelComponent_BP, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'ArmWreslingPanelComponent_BP_C_ExecuteUbergraph_ArmWreslingPanelComponent_BP::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ArmWreslingPanelComponent_BP_C_ExecuteUbergraph_ArmWreslingPanelComponent_BP, K2Node_CustomEvent_playerRoundData) == 0x000018, "Member 'ArmWreslingPanelComponent_BP_C_ExecuteUbergraph_ArmWreslingPanelComponent_BP::K2Node_CustomEvent_playerRoundData' has a wrong offset!");
static_assert(offsetof(ArmWreslingPanelComponent_BP_C_ExecuteUbergraph_ArmWreslingPanelComponent_BP, K2Node_CreateDelegate_OutputDelegate) == 0x000050, "Member 'ArmWreslingPanelComponent_BP_C_ExecuteUbergraph_ArmWreslingPanelComponent_BP::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(ArmWreslingPanelComponent_BP_C_ExecuteUbergraph_ArmWreslingPanelComponent_BP, CallFunc_GetGhostAnimBP_ReturnValue) == 0x000060, "Member 'ArmWreslingPanelComponent_BP_C_ExecuteUbergraph_ArmWreslingPanelComponent_BP::CallFunc_GetGhostAnimBP_ReturnValue' has a wrong offset!");
static_assert(offsetof(ArmWreslingPanelComponent_BP_C_ExecuteUbergraph_ArmWreslingPanelComponent_BP, K2Node_DynamicCast_AsArm_Wresling_Panel_Ghost_Anim_BP) == 0x000068, "Member 'ArmWreslingPanelComponent_BP_C_ExecuteUbergraph_ArmWreslingPanelComponent_BP::K2Node_DynamicCast_AsArm_Wresling_Panel_Ghost_Anim_BP' has a wrong offset!");
static_assert(offsetof(ArmWreslingPanelComponent_BP_C_ExecuteUbergraph_ArmWreslingPanelComponent_BP, K2Node_DynamicCast_bSuccess_1) == 0x000070, "Member 'ArmWreslingPanelComponent_BP_C_ExecuteUbergraph_ArmWreslingPanelComponent_BP::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(ArmWreslingPanelComponent_BP_C_ExecuteUbergraph_ArmWreslingPanelComponent_BP, K2Node_SwitchEnum_CmpSuccess) == 0x000071, "Member 'ArmWreslingPanelComponent_BP_C_ExecuteUbergraph_ArmWreslingPanelComponent_BP::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(ArmWreslingPanelComponent_BP_C_ExecuteUbergraph_ArmWreslingPanelComponent_BP, CallFunc_Array_Length_ReturnValue) == 0x000074, "Member 'ArmWreslingPanelComponent_BP_C_ExecuteUbergraph_ArmWreslingPanelComponent_BP::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(ArmWreslingPanelComponent_BP_C_ExecuteUbergraph_ArmWreslingPanelComponent_BP, K2Node_Event_pawn) == 0x000078, "Member 'ArmWreslingPanelComponent_BP_C_ExecuteUbergraph_ArmWreslingPanelComponent_BP::K2Node_Event_pawn' has a wrong offset!");
static_assert(offsetof(ArmWreslingPanelComponent_BP_C_ExecuteUbergraph_ArmWreslingPanelComponent_BP, K2Node_Event_specialMove) == 0x000080, "Member 'ArmWreslingPanelComponent_BP_C_ExecuteUbergraph_ArmWreslingPanelComponent_BP::K2Node_Event_specialMove' has a wrong offset!");
static_assert(offsetof(ArmWreslingPanelComponent_BP_C_ExecuteUbergraph_ArmWreslingPanelComponent_BP, CallFunc_Subtract_IntInt_ReturnValue) == 0x000084, "Member 'ArmWreslingPanelComponent_BP_C_ExecuteUbergraph_ArmWreslingPanelComponent_BP::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ArmWreslingPanelComponent_BP_C_ExecuteUbergraph_ArmWreslingPanelComponent_BP, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000088, "Member 'ArmWreslingPanelComponent_BP_C_ExecuteUbergraph_ArmWreslingPanelComponent_BP::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ArmWreslingPanelComponent_BP_C_ExecuteUbergraph_ArmWreslingPanelComponent_BP, CallFunc_Array_Get_Item) == 0x00008C, "Member 'ArmWreslingPanelComponent_BP_C_ExecuteUbergraph_ArmWreslingPanelComponent_BP::CallFunc_Array_Get_Item' has a wrong offset!");

// Function ArmWreslingPanelComponent_BP.ArmWreslingPanelComponent_BP_C.OnPawnSpecialMoveStarted
// 0x0010 (0x0010 - 0x0000)
struct ArmWreslingPanelComponent_BP_C_OnPawnSpecialMoveStarted final
{
public:
	class ARBPawn*                                Pawn;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESpecialMove                                  SpecialMove;                                       // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ArmWreslingPanelComponent_BP_C_OnPawnSpecialMoveStarted) == 0x000008, "Wrong alignment on ArmWreslingPanelComponent_BP_C_OnPawnSpecialMoveStarted");
static_assert(sizeof(ArmWreslingPanelComponent_BP_C_OnPawnSpecialMoveStarted) == 0x000010, "Wrong size on ArmWreslingPanelComponent_BP_C_OnPawnSpecialMoveStarted");
static_assert(offsetof(ArmWreslingPanelComponent_BP_C_OnPawnSpecialMoveStarted, Pawn) == 0x000000, "Member 'ArmWreslingPanelComponent_BP_C_OnPawnSpecialMoveStarted::Pawn' has a wrong offset!");
static_assert(offsetof(ArmWreslingPanelComponent_BP_C_OnPawnSpecialMoveStarted, SpecialMove) == 0x000008, "Member 'ArmWreslingPanelComponent_BP_C_OnPawnSpecialMoveStarted::SpecialMove' has a wrong offset!");

// Function ArmWreslingPanelComponent_BP.ArmWreslingPanelComponent_BP_C.CustomEvent_0
// 0x0038 (0x0038 - 0x0000)
struct ArmWreslingPanelComponent_BP_C_CustomEvent_0 final
{
public:
	struct FArmWreslingPlayerRoundData            PlayerRoundData;                                   // 0x0000(0x0038)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};
static_assert(alignof(ArmWreslingPanelComponent_BP_C_CustomEvent_0) == 0x000008, "Wrong alignment on ArmWreslingPanelComponent_BP_C_CustomEvent_0");
static_assert(sizeof(ArmWreslingPanelComponent_BP_C_CustomEvent_0) == 0x000038, "Wrong size on ArmWreslingPanelComponent_BP_C_CustomEvent_0");
static_assert(offsetof(ArmWreslingPanelComponent_BP_C_CustomEvent_0, PlayerRoundData) == 0x000000, "Member 'ArmWreslingPanelComponent_BP_C_CustomEvent_0::PlayerRoundData' has a wrong offset!");

// Function ArmWreslingPanelComponent_BP.ArmWreslingPanelComponent_BP_C.GetInteractionPawnLocation
// 0x00C0 (0x00C0 - 0x0000)
struct ArmWreslingPanelComponent_BP_C_GetInteractionPawnLocation final
{
public:
	const class ARBPawn*                          Pawn;                                              // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESpecialMove                                  SpecialMove;                                       // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3DE7[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                OutLocation;                                       // 0x000C(0x000C)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                OutDirection;                                      // 0x0018(0x000C)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0024(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3DE8[0xB];                                     // 0x0025(0x000B)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             RefTransform;                                      // 0x0030(0x0030)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3DE9[0x6];                                     // 0x0062(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	const class UAnimSequence*                    Temp_object_Variable;                              // 0x0068(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UAnimSequence*                    Temp_object_Variable_1;                            // 0x0070(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AArmWreslingPanel_BP_C*                 K2Node_DynamicCast_AsArm_Wresling_Panel_BP;        // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsPlayer1_ReturnValue;                    // 0x0089(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3DEA[0x6];                                     // 0x008A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	const class UAnimSequence*                    K2Node_Select_Default;                             // 0x0090(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        K2Node_Select_Default_1;                           // 0x0098(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetWorldTransformFromAnimationAnchor_outLocation; // 0x00A0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetWorldTransformFromAnimationAnchor_outDirection; // 0x00AC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ArmWreslingPanelComponent_BP_C_GetInteractionPawnLocation) == 0x000010, "Wrong alignment on ArmWreslingPanelComponent_BP_C_GetInteractionPawnLocation");
static_assert(sizeof(ArmWreslingPanelComponent_BP_C_GetInteractionPawnLocation) == 0x0000C0, "Wrong size on ArmWreslingPanelComponent_BP_C_GetInteractionPawnLocation");
static_assert(offsetof(ArmWreslingPanelComponent_BP_C_GetInteractionPawnLocation, Pawn) == 0x000000, "Member 'ArmWreslingPanelComponent_BP_C_GetInteractionPawnLocation::Pawn' has a wrong offset!");
static_assert(offsetof(ArmWreslingPanelComponent_BP_C_GetInteractionPawnLocation, SpecialMove) == 0x000008, "Member 'ArmWreslingPanelComponent_BP_C_GetInteractionPawnLocation::SpecialMove' has a wrong offset!");
static_assert(offsetof(ArmWreslingPanelComponent_BP_C_GetInteractionPawnLocation, OutLocation) == 0x00000C, "Member 'ArmWreslingPanelComponent_BP_C_GetInteractionPawnLocation::OutLocation' has a wrong offset!");
static_assert(offsetof(ArmWreslingPanelComponent_BP_C_GetInteractionPawnLocation, OutDirection) == 0x000018, "Member 'ArmWreslingPanelComponent_BP_C_GetInteractionPawnLocation::OutDirection' has a wrong offset!");
static_assert(offsetof(ArmWreslingPanelComponent_BP_C_GetInteractionPawnLocation, ReturnValue) == 0x000024, "Member 'ArmWreslingPanelComponent_BP_C_GetInteractionPawnLocation::ReturnValue' has a wrong offset!");
static_assert(offsetof(ArmWreslingPanelComponent_BP_C_GetInteractionPawnLocation, RefTransform) == 0x000030, "Member 'ArmWreslingPanelComponent_BP_C_GetInteractionPawnLocation::RefTransform' has a wrong offset!");
static_assert(offsetof(ArmWreslingPanelComponent_BP_C_GetInteractionPawnLocation, Temp_bool_Variable) == 0x000060, "Member 'ArmWreslingPanelComponent_BP_C_GetInteractionPawnLocation::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ArmWreslingPanelComponent_BP_C_GetInteractionPawnLocation, Temp_bool_Variable_1) == 0x000061, "Member 'ArmWreslingPanelComponent_BP_C_GetInteractionPawnLocation::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(ArmWreslingPanelComponent_BP_C_GetInteractionPawnLocation, Temp_object_Variable) == 0x000068, "Member 'ArmWreslingPanelComponent_BP_C_GetInteractionPawnLocation::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(ArmWreslingPanelComponent_BP_C_GetInteractionPawnLocation, Temp_object_Variable_1) == 0x000070, "Member 'ArmWreslingPanelComponent_BP_C_GetInteractionPawnLocation::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(ArmWreslingPanelComponent_BP_C_GetInteractionPawnLocation, CallFunc_GetOwner_ReturnValue) == 0x000078, "Member 'ArmWreslingPanelComponent_BP_C_GetInteractionPawnLocation::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(ArmWreslingPanelComponent_BP_C_GetInteractionPawnLocation, K2Node_DynamicCast_AsArm_Wresling_Panel_BP) == 0x000080, "Member 'ArmWreslingPanelComponent_BP_C_GetInteractionPawnLocation::K2Node_DynamicCast_AsArm_Wresling_Panel_BP' has a wrong offset!");
static_assert(offsetof(ArmWreslingPanelComponent_BP_C_GetInteractionPawnLocation, K2Node_DynamicCast_bSuccess) == 0x000088, "Member 'ArmWreslingPanelComponent_BP_C_GetInteractionPawnLocation::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ArmWreslingPanelComponent_BP_C_GetInteractionPawnLocation, CallFunc_IsPlayer1_ReturnValue) == 0x000089, "Member 'ArmWreslingPanelComponent_BP_C_GetInteractionPawnLocation::CallFunc_IsPlayer1_ReturnValue' has a wrong offset!");
static_assert(offsetof(ArmWreslingPanelComponent_BP_C_GetInteractionPawnLocation, K2Node_Select_Default) == 0x000090, "Member 'ArmWreslingPanelComponent_BP_C_GetInteractionPawnLocation::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ArmWreslingPanelComponent_BP_C_GetInteractionPawnLocation, K2Node_Select_Default_1) == 0x000098, "Member 'ArmWreslingPanelComponent_BP_C_GetInteractionPawnLocation::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(ArmWreslingPanelComponent_BP_C_GetInteractionPawnLocation, CallFunc_GetWorldTransformFromAnimationAnchor_outLocation) == 0x0000A0, "Member 'ArmWreslingPanelComponent_BP_C_GetInteractionPawnLocation::CallFunc_GetWorldTransformFromAnimationAnchor_outLocation' has a wrong offset!");
static_assert(offsetof(ArmWreslingPanelComponent_BP_C_GetInteractionPawnLocation, CallFunc_GetWorldTransformFromAnimationAnchor_outDirection) == 0x0000AC, "Member 'ArmWreslingPanelComponent_BP_C_GetInteractionPawnLocation::CallFunc_GetWorldTransformFromAnimationAnchor_outDirection' has a wrong offset!");

}

