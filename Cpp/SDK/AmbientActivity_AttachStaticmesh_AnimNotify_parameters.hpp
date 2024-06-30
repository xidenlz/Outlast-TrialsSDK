#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AmbientActivity_AttachStaticmesh_AnimNotify

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function AmbientActivity_AttachStaticmesh_AnimNotify.AmbientActivity_AttachStaticmesh_AnimNotify_C.Received_Notify
// 0x0190 (0x0190 - 0x0000)
struct AmbientActivity_AttachStaticmesh_AnimNotify_C_Received_Notify final
{
public:
	class USkeletalMeshComponent*                 MeshComp;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      Animation;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3E11[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ARBNPC*                                 K2Node_DynamicCast_AsRB_NPC;                       // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3E12[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class URBAmbientStationComponent*             CallFunc_GetAmbientStationComponent_ReturnValue;   // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue_1;                   // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ARBAmbientActivityMarker*               K2Node_DynamicCast_AsRB_Ambient_Activity_Marker;   // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3E13[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;          // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E14[0x8];                                     // 0x0058(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetBoneTransformForAnimation_ReturnValue; // 0x0060(0x0030)(IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_K2_AttachToComponent_ReturnValue;         // 0x0091(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_K2_AttachToComponent_ReturnValue_1;       // 0x0092(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3E15[0xD];                                     // 0x0093(0x000D)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x00A0(0x0030)(ConstParm, IsPlainOldData, NoDestructor)
	struct FTransform                             CallFunc_ComposeTransforms_ReturnValue;            // 0x00D0(0x0030)(IsPlainOldData, NoDestructor)
	struct FHitResult                             CallFunc_K2_SetWorldTransform_SweepHitResult;      // 0x0100(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(AmbientActivity_AttachStaticmesh_AnimNotify_C_Received_Notify) == 0x000010, "Wrong alignment on AmbientActivity_AttachStaticmesh_AnimNotify_C_Received_Notify");
static_assert(sizeof(AmbientActivity_AttachStaticmesh_AnimNotify_C_Received_Notify) == 0x000190, "Wrong size on AmbientActivity_AttachStaticmesh_AnimNotify_C_Received_Notify");
static_assert(offsetof(AmbientActivity_AttachStaticmesh_AnimNotify_C_Received_Notify, MeshComp) == 0x000000, "Member 'AmbientActivity_AttachStaticmesh_AnimNotify_C_Received_Notify::MeshComp' has a wrong offset!");
static_assert(offsetof(AmbientActivity_AttachStaticmesh_AnimNotify_C_Received_Notify, Animation) == 0x000008, "Member 'AmbientActivity_AttachStaticmesh_AnimNotify_C_Received_Notify::Animation' has a wrong offset!");
static_assert(offsetof(AmbientActivity_AttachStaticmesh_AnimNotify_C_Received_Notify, ReturnValue) == 0x000010, "Member 'AmbientActivity_AttachStaticmesh_AnimNotify_C_Received_Notify::ReturnValue' has a wrong offset!");
static_assert(offsetof(AmbientActivity_AttachStaticmesh_AnimNotify_C_Received_Notify, CallFunc_GetOwner_ReturnValue) == 0x000018, "Member 'AmbientActivity_AttachStaticmesh_AnimNotify_C_Received_Notify::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(AmbientActivity_AttachStaticmesh_AnimNotify_C_Received_Notify, K2Node_DynamicCast_AsRB_NPC) == 0x000020, "Member 'AmbientActivity_AttachStaticmesh_AnimNotify_C_Received_Notify::K2Node_DynamicCast_AsRB_NPC' has a wrong offset!");
static_assert(offsetof(AmbientActivity_AttachStaticmesh_AnimNotify_C_Received_Notify, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'AmbientActivity_AttachStaticmesh_AnimNotify_C_Received_Notify::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(AmbientActivity_AttachStaticmesh_AnimNotify_C_Received_Notify, CallFunc_GetAmbientStationComponent_ReturnValue) == 0x000030, "Member 'AmbientActivity_AttachStaticmesh_AnimNotify_C_Received_Notify::CallFunc_GetAmbientStationComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(AmbientActivity_AttachStaticmesh_AnimNotify_C_Received_Notify, CallFunc_GetOwner_ReturnValue_1) == 0x000038, "Member 'AmbientActivity_AttachStaticmesh_AnimNotify_C_Received_Notify::CallFunc_GetOwner_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AmbientActivity_AttachStaticmesh_AnimNotify_C_Received_Notify, K2Node_DynamicCast_AsRB_Ambient_Activity_Marker) == 0x000040, "Member 'AmbientActivity_AttachStaticmesh_AnimNotify_C_Received_Notify::K2Node_DynamicCast_AsRB_Ambient_Activity_Marker' has a wrong offset!");
static_assert(offsetof(AmbientActivity_AttachStaticmesh_AnimNotify_C_Received_Notify, K2Node_DynamicCast_bSuccess_1) == 0x000048, "Member 'AmbientActivity_AttachStaticmesh_AnimNotify_C_Received_Notify::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(AmbientActivity_AttachStaticmesh_AnimNotify_C_Received_Notify, CallFunc_K2_GetRootComponent_ReturnValue) == 0x000050, "Member 'AmbientActivity_AttachStaticmesh_AnimNotify_C_Received_Notify::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(AmbientActivity_AttachStaticmesh_AnimNotify_C_Received_Notify, CallFunc_GetBoneTransformForAnimation_ReturnValue) == 0x000060, "Member 'AmbientActivity_AttachStaticmesh_AnimNotify_C_Received_Notify::CallFunc_GetBoneTransformForAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(AmbientActivity_AttachStaticmesh_AnimNotify_C_Received_Notify, CallFunc_IsValid_ReturnValue) == 0x000090, "Member 'AmbientActivity_AttachStaticmesh_AnimNotify_C_Received_Notify::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(AmbientActivity_AttachStaticmesh_AnimNotify_C_Received_Notify, CallFunc_K2_AttachToComponent_ReturnValue) == 0x000091, "Member 'AmbientActivity_AttachStaticmesh_AnimNotify_C_Received_Notify::CallFunc_K2_AttachToComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(AmbientActivity_AttachStaticmesh_AnimNotify_C_Received_Notify, CallFunc_K2_AttachToComponent_ReturnValue_1) == 0x000092, "Member 'AmbientActivity_AttachStaticmesh_AnimNotify_C_Received_Notify::CallFunc_K2_AttachToComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AmbientActivity_AttachStaticmesh_AnimNotify_C_Received_Notify, CallFunc_GetTransform_ReturnValue) == 0x0000A0, "Member 'AmbientActivity_AttachStaticmesh_AnimNotify_C_Received_Notify::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(AmbientActivity_AttachStaticmesh_AnimNotify_C_Received_Notify, CallFunc_ComposeTransforms_ReturnValue) == 0x0000D0, "Member 'AmbientActivity_AttachStaticmesh_AnimNotify_C_Received_Notify::CallFunc_ComposeTransforms_ReturnValue' has a wrong offset!");
static_assert(offsetof(AmbientActivity_AttachStaticmesh_AnimNotify_C_Received_Notify, CallFunc_K2_SetWorldTransform_SweepHitResult) == 0x000100, "Member 'AmbientActivity_AttachStaticmesh_AnimNotify_C_Received_Notify::CallFunc_K2_SetWorldTransform_SweepHitResult' has a wrong offset!");

// Function AmbientActivity_AttachStaticmesh_AnimNotify.AmbientActivity_AttachStaticmesh_AnimNotify_C.GetNotifyName
// 0x0010 (0x0010 - 0x0000)
struct AmbientActivity_AttachStaticmesh_AnimNotify_C_GetNotifyName final
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
};
static_assert(alignof(AmbientActivity_AttachStaticmesh_AnimNotify_C_GetNotifyName) == 0x000008, "Wrong alignment on AmbientActivity_AttachStaticmesh_AnimNotify_C_GetNotifyName");
static_assert(sizeof(AmbientActivity_AttachStaticmesh_AnimNotify_C_GetNotifyName) == 0x000010, "Wrong size on AmbientActivity_AttachStaticmesh_AnimNotify_C_GetNotifyName");
static_assert(offsetof(AmbientActivity_AttachStaticmesh_AnimNotify_C_GetNotifyName, ReturnValue) == 0x000000, "Member 'AmbientActivity_AttachStaticmesh_AnimNotify_C_GetNotifyName::ReturnValue' has a wrong offset!");

}

