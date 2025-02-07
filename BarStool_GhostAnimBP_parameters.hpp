#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BarStool_GhostAnimBP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "OPP_structs.hpp"


namespace SDK::Params
{

// Function BarStool_GhostAnimBP.BarStool_GhostAnimBP_C.ExecuteUbergraph_BarStool_GhostAnimBP
// 0x000C (0x000C - 0x0000)
struct BarStool_GhostAnimBP_C_ExecuteUbergraph_BarStool_GhostAnimBP final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaTimeX;                           // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GhostAnimTransition_ReturnValue;          // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BarStool_GhostAnimBP_C_ExecuteUbergraph_BarStool_GhostAnimBP) == 0x000004, "Wrong alignment on BarStool_GhostAnimBP_C_ExecuteUbergraph_BarStool_GhostAnimBP");
static_assert(sizeof(BarStool_GhostAnimBP_C_ExecuteUbergraph_BarStool_GhostAnimBP) == 0x00000C, "Wrong size on BarStool_GhostAnimBP_C_ExecuteUbergraph_BarStool_GhostAnimBP");
static_assert(offsetof(BarStool_GhostAnimBP_C_ExecuteUbergraph_BarStool_GhostAnimBP, EntryPoint) == 0x000000, "Member 'BarStool_GhostAnimBP_C_ExecuteUbergraph_BarStool_GhostAnimBP::EntryPoint' has a wrong offset!");
static_assert(offsetof(BarStool_GhostAnimBP_C_ExecuteUbergraph_BarStool_GhostAnimBP, K2Node_Event_DeltaTimeX) == 0x000004, "Member 'BarStool_GhostAnimBP_C_ExecuteUbergraph_BarStool_GhostAnimBP::K2Node_Event_DeltaTimeX' has a wrong offset!");
static_assert(offsetof(BarStool_GhostAnimBP_C_ExecuteUbergraph_BarStool_GhostAnimBP, CallFunc_GhostAnimTransition_ReturnValue) == 0x000008, "Member 'BarStool_GhostAnimBP_C_ExecuteUbergraph_BarStool_GhostAnimBP::CallFunc_GhostAnimTransition_ReturnValue' has a wrong offset!");

// Function BarStool_GhostAnimBP.BarStool_GhostAnimBP_C.BlueprintUpdateAnimation
// 0x0004 (0x0004 - 0x0000)
struct BarStool_GhostAnimBP_C_BlueprintUpdateAnimation final
{
public:
	float                                         DeltaTimeX;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BarStool_GhostAnimBP_C_BlueprintUpdateAnimation) == 0x000004, "Wrong alignment on BarStool_GhostAnimBP_C_BlueprintUpdateAnimation");
static_assert(sizeof(BarStool_GhostAnimBP_C_BlueprintUpdateAnimation) == 0x000004, "Wrong size on BarStool_GhostAnimBP_C_BlueprintUpdateAnimation");
static_assert(offsetof(BarStool_GhostAnimBP_C_BlueprintUpdateAnimation, DeltaTimeX) == 0x000000, "Member 'BarStool_GhostAnimBP_C_BlueprintUpdateAnimation::DeltaTimeX' has a wrong offset!");

// Function BarStool_GhostAnimBP.BarStool_GhostAnimBP_C.FinishGhost
// 0x000C (0x000C - 0x0000)
struct BarStool_GhostAnimBP_C_FinishGhost final
{
public:
	EGhostFinishReason                            FinishReason;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E6A[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         GhostFinishCustomReason;                           // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BarStool_GhostAnimBP_C_FinishGhost) == 0x000004, "Wrong alignment on BarStool_GhostAnimBP_C_FinishGhost");
static_assert(sizeof(BarStool_GhostAnimBP_C_FinishGhost) == 0x00000C, "Wrong size on BarStool_GhostAnimBP_C_FinishGhost");
static_assert(offsetof(BarStool_GhostAnimBP_C_FinishGhost, FinishReason) == 0x000000, "Member 'BarStool_GhostAnimBP_C_FinishGhost::FinishReason' has a wrong offset!");
static_assert(offsetof(BarStool_GhostAnimBP_C_FinishGhost, GhostFinishCustomReason) == 0x000004, "Member 'BarStool_GhostAnimBP_C_FinishGhost::GhostFinishCustomReason' has a wrong offset!");
static_assert(offsetof(BarStool_GhostAnimBP_C_FinishGhost, ReturnValue) == 0x000008, "Member 'BarStool_GhostAnimBP_C_FinishGhost::ReturnValue' has a wrong offset!");

// Function BarStool_GhostAnimBP.BarStool_GhostAnimBP_C.ManageLookAt
// 0x0038 (0x0038 - 0x0000)
struct BarStool_GhostAnimBP_C_ManageLookAt final
{
public:
	class ARBPlayer*                              K2Node_DynamicCast_AsRB_Player;                    // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3E6B[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakRotator_Roll;                        // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch;                       // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw;                         // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Roll_1;                      // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch_1;                     // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw_1;                       // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Roll_2;                      // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch_2;                     // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw_2;                       // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_NormalizeRotationAngle_ReturnValue;       // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BarStool_GhostAnimBP_C_ManageLookAt) == 0x000008, "Wrong alignment on BarStool_GhostAnimBP_C_ManageLookAt");
static_assert(sizeof(BarStool_GhostAnimBP_C_ManageLookAt) == 0x000038, "Wrong size on BarStool_GhostAnimBP_C_ManageLookAt");
static_assert(offsetof(BarStool_GhostAnimBP_C_ManageLookAt, K2Node_DynamicCast_AsRB_Player) == 0x000000, "Member 'BarStool_GhostAnimBP_C_ManageLookAt::K2Node_DynamicCast_AsRB_Player' has a wrong offset!");
static_assert(offsetof(BarStool_GhostAnimBP_C_ManageLookAt, K2Node_DynamicCast_bSuccess) == 0x000008, "Member 'BarStool_GhostAnimBP_C_ManageLookAt::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BarStool_GhostAnimBP_C_ManageLookAt, CallFunc_BreakRotator_Roll) == 0x00000C, "Member 'BarStool_GhostAnimBP_C_ManageLookAt::CallFunc_BreakRotator_Roll' has a wrong offset!");
static_assert(offsetof(BarStool_GhostAnimBP_C_ManageLookAt, CallFunc_BreakRotator_Pitch) == 0x000010, "Member 'BarStool_GhostAnimBP_C_ManageLookAt::CallFunc_BreakRotator_Pitch' has a wrong offset!");
static_assert(offsetof(BarStool_GhostAnimBP_C_ManageLookAt, CallFunc_BreakRotator_Yaw) == 0x000014, "Member 'BarStool_GhostAnimBP_C_ManageLookAt::CallFunc_BreakRotator_Yaw' has a wrong offset!");
static_assert(offsetof(BarStool_GhostAnimBP_C_ManageLookAt, CallFunc_BreakRotator_Roll_1) == 0x000018, "Member 'BarStool_GhostAnimBP_C_ManageLookAt::CallFunc_BreakRotator_Roll_1' has a wrong offset!");
static_assert(offsetof(BarStool_GhostAnimBP_C_ManageLookAt, CallFunc_BreakRotator_Pitch_1) == 0x00001C, "Member 'BarStool_GhostAnimBP_C_ManageLookAt::CallFunc_BreakRotator_Pitch_1' has a wrong offset!");
static_assert(offsetof(BarStool_GhostAnimBP_C_ManageLookAt, CallFunc_BreakRotator_Yaw_1) == 0x000020, "Member 'BarStool_GhostAnimBP_C_ManageLookAt::CallFunc_BreakRotator_Yaw_1' has a wrong offset!");
static_assert(offsetof(BarStool_GhostAnimBP_C_ManageLookAt, CallFunc_BreakRotator_Roll_2) == 0x000024, "Member 'BarStool_GhostAnimBP_C_ManageLookAt::CallFunc_BreakRotator_Roll_2' has a wrong offset!");
static_assert(offsetof(BarStool_GhostAnimBP_C_ManageLookAt, CallFunc_BreakRotator_Pitch_2) == 0x000028, "Member 'BarStool_GhostAnimBP_C_ManageLookAt::CallFunc_BreakRotator_Pitch_2' has a wrong offset!");
static_assert(offsetof(BarStool_GhostAnimBP_C_ManageLookAt, CallFunc_BreakRotator_Yaw_2) == 0x00002C, "Member 'BarStool_GhostAnimBP_C_ManageLookAt::CallFunc_BreakRotator_Yaw_2' has a wrong offset!");
static_assert(offsetof(BarStool_GhostAnimBP_C_ManageLookAt, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000030, "Member 'BarStool_GhostAnimBP_C_ManageLookAt::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BarStool_GhostAnimBP_C_ManageLookAt, CallFunc_NormalizeRotationAngle_ReturnValue) == 0x000034, "Member 'BarStool_GhostAnimBP_C_ManageLookAt::CallFunc_NormalizeRotationAngle_ReturnValue' has a wrong offset!");

// Function BarStool_GhostAnimBP.BarStool_GhostAnimBP_C.AnimGraph
// 0x0010 (0x0010 - 0x0000)
struct BarStool_GhostAnimBP_C_AnimGraph final
{
public:
	struct FPoseLink                              Param_AnimGraph;                                   // 0x0000(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(BarStool_GhostAnimBP_C_AnimGraph) == 0x000008, "Wrong alignment on BarStool_GhostAnimBP_C_AnimGraph");
static_assert(sizeof(BarStool_GhostAnimBP_C_AnimGraph) == 0x000010, "Wrong size on BarStool_GhostAnimBP_C_AnimGraph");
static_assert(offsetof(BarStool_GhostAnimBP_C_AnimGraph, Param_AnimGraph) == 0x000000, "Member 'BarStool_GhostAnimBP_C_AnimGraph::Param_AnimGraph' has a wrong offset!");

}

