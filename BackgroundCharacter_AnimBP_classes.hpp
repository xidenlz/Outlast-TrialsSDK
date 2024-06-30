#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BackgroundCharacter_AnimBP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "OPP_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass BackgroundCharacter_AnimBP.BackgroundCharacter_AnimBP_C
// 0x1A80 (0x1E00 - 0x0380)
class UBackgroundCharacter_AnimBP_C final : public URBAnimInstanceBackgroundCharacter
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0380(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0388(0x0030)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_8;                  // 0x03B8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_7;                  // 0x03E0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_6;                  // 0x0408(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_5;                  // 0x0430(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_4;                  // 0x0458(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_3;                  // 0x0480(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_2;                  // 0x04A8(0x0028)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_9;                   // 0x04D0(0x00A8)()
	struct FAnimNode_BlendSpacePlayer             AnimGraphNode_BlendSpacePlayer_5;                  // 0x0578(0x00E8)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_11;                   // 0x0660(0x0080)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_7;                       // 0x06E0(0x0030)()
	struct FAnimNode_BlendSpacePlayer             AnimGraphNode_BlendSpacePlayer_4;                  // 0x0710(0x00E8)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend;                    // 0x07F8(0x00C0)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_8;                   // 0x08B8(0x00A8)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_7;                   // 0x0960(0x00A8)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_10;                   // 0x0A08(0x0080)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_9;                    // 0x0A88(0x0080)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_1;                  // 0x0B08(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult;                    // 0x0B30(0x0028)()
	struct FAnimNode_BlendSpacePlayer             AnimGraphNode_BlendSpacePlayer_3;                  // 0x0B58(0x00E8)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_6;                   // 0x0C40(0x00A8)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_5;                   // 0x0CE8(0x00A8)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_8;                    // 0x0D90(0x0080)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_7;                    // 0x0E10(0x0080)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_6;                       // 0x0E90(0x0030)()
	struct FAnimNode_BlendSpacePlayer             AnimGraphNode_BlendSpacePlayer_2;                  // 0x0EC0(0x00E8)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_4;                   // 0x0FA8(0x00A8)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_3;                   // 0x1050(0x00A8)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_6;                    // 0x10F8(0x0080)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_5;                    // 0x1178(0x0080)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_5;                       // 0x11F8(0x0030)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_4;                    // 0x1228(0x0080)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_3;                    // 0x12A8(0x0080)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_2;                   // 0x1328(0x00A8)()
	struct FAnimNode_RotationOffsetBlendSpace     AnimGraphNode_RotationOffsetBlendSpace_1;          // 0x13D0(0x0190)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_4;                       // 0x1560(0x0030)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_2;                    // 0x1590(0x0080)()
	struct FAnimNode_RotationOffsetBlendSpace     AnimGraphNode_RotationOffsetBlendSpace;            // 0x1610(0x0190)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_3;                       // 0x17A0(0x0030)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine_1;                      // 0x17D0(0x00B0)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_2;                       // 0x1880(0x0030)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_1;                   // 0x18B0(0x00A8)()
	struct FAnimNode_BlendSpacePlayer             AnimGraphNode_BlendSpacePlayer_1;                  // 0x1958(0x00E8)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;                    // 0x1A40(0x0080)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_1;                       // 0x1AC0(0x0030)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool;                     // 0x1AF0(0x00A8)()
	struct FAnimNode_BlendSpacePlayer             AnimGraphNode_BlendSpacePlayer;                    // 0x1B98(0x00E8)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x1C80(0x0080)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult;                         // 0x1D00(0x0030)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine;                        // 0x1D30(0x00B0)()
	bool                                          IsLookingAt;                                       // 0x1DE0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsAlert;                                           // 0x1DE1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsAGuard;                                          // 0x1DE2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3A1D[0x1];                                     // 0x1DE3(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         LookAtHorizontal;                                  // 0x1DE4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LookAtVertical;                                    // 0x1DE8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LookAtAlpha_0;                                     // 0x1DEC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          OnGround;                                          // 0x1DF0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BackgroundCharacter_AnimBP(int32 EntryPoint);
	void AnimGraph(struct FPoseLink* Param_AnimGraph);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BackgroundCharacter_AnimBP_C">();
	}
	static class UBackgroundCharacter_AnimBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBackgroundCharacter_AnimBP_C>();
	}
};
static_assert(alignof(UBackgroundCharacter_AnimBP_C) == 0x000010, "Wrong alignment on UBackgroundCharacter_AnimBP_C");
static_assert(sizeof(UBackgroundCharacter_AnimBP_C) == 0x001E00, "Wrong size on UBackgroundCharacter_AnimBP_C");
static_assert(offsetof(UBackgroundCharacter_AnimBP_C, UberGraphFrame) == 0x000380, "Member 'UBackgroundCharacter_AnimBP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBackgroundCharacter_AnimBP_C, AnimGraphNode_Root) == 0x000388, "Member 'UBackgroundCharacter_AnimBP_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UBackgroundCharacter_AnimBP_C, AnimGraphNode_TransitionResult_8) == 0x0003B8, "Member 'UBackgroundCharacter_AnimBP_C::AnimGraphNode_TransitionResult_8' has a wrong offset!");
static_assert(offsetof(UBackgroundCharacter_AnimBP_C, AnimGraphNode_TransitionResult_7) == 0x0003E0, "Member 'UBackgroundCharacter_AnimBP_C::AnimGraphNode_TransitionResult_7' has a wrong offset!");
static_assert(offsetof(UBackgroundCharacter_AnimBP_C, AnimGraphNode_TransitionResult_6) == 0x000408, "Member 'UBackgroundCharacter_AnimBP_C::AnimGraphNode_TransitionResult_6' has a wrong offset!");
static_assert(offsetof(UBackgroundCharacter_AnimBP_C, AnimGraphNode_TransitionResult_5) == 0x000430, "Member 'UBackgroundCharacter_AnimBP_C::AnimGraphNode_TransitionResult_5' has a wrong offset!");
static_assert(offsetof(UBackgroundCharacter_AnimBP_C, AnimGraphNode_TransitionResult_4) == 0x000458, "Member 'UBackgroundCharacter_AnimBP_C::AnimGraphNode_TransitionResult_4' has a wrong offset!");
static_assert(offsetof(UBackgroundCharacter_AnimBP_C, AnimGraphNode_TransitionResult_3) == 0x000480, "Member 'UBackgroundCharacter_AnimBP_C::AnimGraphNode_TransitionResult_3' has a wrong offset!");
static_assert(offsetof(UBackgroundCharacter_AnimBP_C, AnimGraphNode_TransitionResult_2) == 0x0004A8, "Member 'UBackgroundCharacter_AnimBP_C::AnimGraphNode_TransitionResult_2' has a wrong offset!");
static_assert(offsetof(UBackgroundCharacter_AnimBP_C, AnimGraphNode_BlendListByBool_9) == 0x0004D0, "Member 'UBackgroundCharacter_AnimBP_C::AnimGraphNode_BlendListByBool_9' has a wrong offset!");
static_assert(offsetof(UBackgroundCharacter_AnimBP_C, AnimGraphNode_BlendSpacePlayer_5) == 0x000578, "Member 'UBackgroundCharacter_AnimBP_C::AnimGraphNode_BlendSpacePlayer_5' has a wrong offset!");
static_assert(offsetof(UBackgroundCharacter_AnimBP_C, AnimGraphNode_SequencePlayer_11) == 0x000660, "Member 'UBackgroundCharacter_AnimBP_C::AnimGraphNode_SequencePlayer_11' has a wrong offset!");
static_assert(offsetof(UBackgroundCharacter_AnimBP_C, AnimGraphNode_StateResult_7) == 0x0006E0, "Member 'UBackgroundCharacter_AnimBP_C::AnimGraphNode_StateResult_7' has a wrong offset!");
static_assert(offsetof(UBackgroundCharacter_AnimBP_C, AnimGraphNode_BlendSpacePlayer_4) == 0x000710, "Member 'UBackgroundCharacter_AnimBP_C::AnimGraphNode_BlendSpacePlayer_4' has a wrong offset!");
static_assert(offsetof(UBackgroundCharacter_AnimBP_C, AnimGraphNode_LayeredBoneBlend) == 0x0007F8, "Member 'UBackgroundCharacter_AnimBP_C::AnimGraphNode_LayeredBoneBlend' has a wrong offset!");
static_assert(offsetof(UBackgroundCharacter_AnimBP_C, AnimGraphNode_BlendListByBool_8) == 0x0008B8, "Member 'UBackgroundCharacter_AnimBP_C::AnimGraphNode_BlendListByBool_8' has a wrong offset!");
static_assert(offsetof(UBackgroundCharacter_AnimBP_C, AnimGraphNode_BlendListByBool_7) == 0x000960, "Member 'UBackgroundCharacter_AnimBP_C::AnimGraphNode_BlendListByBool_7' has a wrong offset!");
static_assert(offsetof(UBackgroundCharacter_AnimBP_C, AnimGraphNode_SequencePlayer_10) == 0x000A08, "Member 'UBackgroundCharacter_AnimBP_C::AnimGraphNode_SequencePlayer_10' has a wrong offset!");
static_assert(offsetof(UBackgroundCharacter_AnimBP_C, AnimGraphNode_SequencePlayer_9) == 0x000A88, "Member 'UBackgroundCharacter_AnimBP_C::AnimGraphNode_SequencePlayer_9' has a wrong offset!");
static_assert(offsetof(UBackgroundCharacter_AnimBP_C, AnimGraphNode_TransitionResult_1) == 0x000B08, "Member 'UBackgroundCharacter_AnimBP_C::AnimGraphNode_TransitionResult_1' has a wrong offset!");
static_assert(offsetof(UBackgroundCharacter_AnimBP_C, AnimGraphNode_TransitionResult) == 0x000B30, "Member 'UBackgroundCharacter_AnimBP_C::AnimGraphNode_TransitionResult' has a wrong offset!");
static_assert(offsetof(UBackgroundCharacter_AnimBP_C, AnimGraphNode_BlendSpacePlayer_3) == 0x000B58, "Member 'UBackgroundCharacter_AnimBP_C::AnimGraphNode_BlendSpacePlayer_3' has a wrong offset!");
static_assert(offsetof(UBackgroundCharacter_AnimBP_C, AnimGraphNode_BlendListByBool_6) == 0x000C40, "Member 'UBackgroundCharacter_AnimBP_C::AnimGraphNode_BlendListByBool_6' has a wrong offset!");
static_assert(offsetof(UBackgroundCharacter_AnimBP_C, AnimGraphNode_BlendListByBool_5) == 0x000CE8, "Member 'UBackgroundCharacter_AnimBP_C::AnimGraphNode_BlendListByBool_5' has a wrong offset!");
static_assert(offsetof(UBackgroundCharacter_AnimBP_C, AnimGraphNode_SequencePlayer_8) == 0x000D90, "Member 'UBackgroundCharacter_AnimBP_C::AnimGraphNode_SequencePlayer_8' has a wrong offset!");
static_assert(offsetof(UBackgroundCharacter_AnimBP_C, AnimGraphNode_SequencePlayer_7) == 0x000E10, "Member 'UBackgroundCharacter_AnimBP_C::AnimGraphNode_SequencePlayer_7' has a wrong offset!");
static_assert(offsetof(UBackgroundCharacter_AnimBP_C, AnimGraphNode_StateResult_6) == 0x000E90, "Member 'UBackgroundCharacter_AnimBP_C::AnimGraphNode_StateResult_6' has a wrong offset!");
static_assert(offsetof(UBackgroundCharacter_AnimBP_C, AnimGraphNode_BlendSpacePlayer_2) == 0x000EC0, "Member 'UBackgroundCharacter_AnimBP_C::AnimGraphNode_BlendSpacePlayer_2' has a wrong offset!");
static_assert(offsetof(UBackgroundCharacter_AnimBP_C, AnimGraphNode_BlendListByBool_4) == 0x000FA8, "Member 'UBackgroundCharacter_AnimBP_C::AnimGraphNode_BlendListByBool_4' has a wrong offset!");
static_assert(offsetof(UBackgroundCharacter_AnimBP_C, AnimGraphNode_BlendListByBool_3) == 0x001050, "Member 'UBackgroundCharacter_AnimBP_C::AnimGraphNode_BlendListByBool_3' has a wrong offset!");
static_assert(offsetof(UBackgroundCharacter_AnimBP_C, AnimGraphNode_SequencePlayer_6) == 0x0010F8, "Member 'UBackgroundCharacter_AnimBP_C::AnimGraphNode_SequencePlayer_6' has a wrong offset!");
static_assert(offsetof(UBackgroundCharacter_AnimBP_C, AnimGraphNode_SequencePlayer_5) == 0x001178, "Member 'UBackgroundCharacter_AnimBP_C::AnimGraphNode_SequencePlayer_5' has a wrong offset!");
static_assert(offsetof(UBackgroundCharacter_AnimBP_C, AnimGraphNode_StateResult_5) == 0x0011F8, "Member 'UBackgroundCharacter_AnimBP_C::AnimGraphNode_StateResult_5' has a wrong offset!");
static_assert(offsetof(UBackgroundCharacter_AnimBP_C, AnimGraphNode_SequencePlayer_4) == 0x001228, "Member 'UBackgroundCharacter_AnimBP_C::AnimGraphNode_SequencePlayer_4' has a wrong offset!");
static_assert(offsetof(UBackgroundCharacter_AnimBP_C, AnimGraphNode_SequencePlayer_3) == 0x0012A8, "Member 'UBackgroundCharacter_AnimBP_C::AnimGraphNode_SequencePlayer_3' has a wrong offset!");
static_assert(offsetof(UBackgroundCharacter_AnimBP_C, AnimGraphNode_BlendListByBool_2) == 0x001328, "Member 'UBackgroundCharacter_AnimBP_C::AnimGraphNode_BlendListByBool_2' has a wrong offset!");
static_assert(offsetof(UBackgroundCharacter_AnimBP_C, AnimGraphNode_RotationOffsetBlendSpace_1) == 0x0013D0, "Member 'UBackgroundCharacter_AnimBP_C::AnimGraphNode_RotationOffsetBlendSpace_1' has a wrong offset!");
static_assert(offsetof(UBackgroundCharacter_AnimBP_C, AnimGraphNode_StateResult_4) == 0x001560, "Member 'UBackgroundCharacter_AnimBP_C::AnimGraphNode_StateResult_4' has a wrong offset!");
static_assert(offsetof(UBackgroundCharacter_AnimBP_C, AnimGraphNode_SequencePlayer_2) == 0x001590, "Member 'UBackgroundCharacter_AnimBP_C::AnimGraphNode_SequencePlayer_2' has a wrong offset!");
static_assert(offsetof(UBackgroundCharacter_AnimBP_C, AnimGraphNode_RotationOffsetBlendSpace) == 0x001610, "Member 'UBackgroundCharacter_AnimBP_C::AnimGraphNode_RotationOffsetBlendSpace' has a wrong offset!");
static_assert(offsetof(UBackgroundCharacter_AnimBP_C, AnimGraphNode_StateResult_3) == 0x0017A0, "Member 'UBackgroundCharacter_AnimBP_C::AnimGraphNode_StateResult_3' has a wrong offset!");
static_assert(offsetof(UBackgroundCharacter_AnimBP_C, AnimGraphNode_StateMachine_1) == 0x0017D0, "Member 'UBackgroundCharacter_AnimBP_C::AnimGraphNode_StateMachine_1' has a wrong offset!");
static_assert(offsetof(UBackgroundCharacter_AnimBP_C, AnimGraphNode_StateResult_2) == 0x001880, "Member 'UBackgroundCharacter_AnimBP_C::AnimGraphNode_StateResult_2' has a wrong offset!");
static_assert(offsetof(UBackgroundCharacter_AnimBP_C, AnimGraphNode_BlendListByBool_1) == 0x0018B0, "Member 'UBackgroundCharacter_AnimBP_C::AnimGraphNode_BlendListByBool_1' has a wrong offset!");
static_assert(offsetof(UBackgroundCharacter_AnimBP_C, AnimGraphNode_BlendSpacePlayer_1) == 0x001958, "Member 'UBackgroundCharacter_AnimBP_C::AnimGraphNode_BlendSpacePlayer_1' has a wrong offset!");
static_assert(offsetof(UBackgroundCharacter_AnimBP_C, AnimGraphNode_SequencePlayer_1) == 0x001A40, "Member 'UBackgroundCharacter_AnimBP_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(UBackgroundCharacter_AnimBP_C, AnimGraphNode_StateResult_1) == 0x001AC0, "Member 'UBackgroundCharacter_AnimBP_C::AnimGraphNode_StateResult_1' has a wrong offset!");
static_assert(offsetof(UBackgroundCharacter_AnimBP_C, AnimGraphNode_BlendListByBool) == 0x001AF0, "Member 'UBackgroundCharacter_AnimBP_C::AnimGraphNode_BlendListByBool' has a wrong offset!");
static_assert(offsetof(UBackgroundCharacter_AnimBP_C, AnimGraphNode_BlendSpacePlayer) == 0x001B98, "Member 'UBackgroundCharacter_AnimBP_C::AnimGraphNode_BlendSpacePlayer' has a wrong offset!");
static_assert(offsetof(UBackgroundCharacter_AnimBP_C, AnimGraphNode_SequencePlayer) == 0x001C80, "Member 'UBackgroundCharacter_AnimBP_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UBackgroundCharacter_AnimBP_C, AnimGraphNode_StateResult) == 0x001D00, "Member 'UBackgroundCharacter_AnimBP_C::AnimGraphNode_StateResult' has a wrong offset!");
static_assert(offsetof(UBackgroundCharacter_AnimBP_C, AnimGraphNode_StateMachine) == 0x001D30, "Member 'UBackgroundCharacter_AnimBP_C::AnimGraphNode_StateMachine' has a wrong offset!");
static_assert(offsetof(UBackgroundCharacter_AnimBP_C, IsLookingAt) == 0x001DE0, "Member 'UBackgroundCharacter_AnimBP_C::IsLookingAt' has a wrong offset!");
static_assert(offsetof(UBackgroundCharacter_AnimBP_C, IsAlert) == 0x001DE1, "Member 'UBackgroundCharacter_AnimBP_C::IsAlert' has a wrong offset!");
static_assert(offsetof(UBackgroundCharacter_AnimBP_C, IsAGuard) == 0x001DE2, "Member 'UBackgroundCharacter_AnimBP_C::IsAGuard' has a wrong offset!");
static_assert(offsetof(UBackgroundCharacter_AnimBP_C, LookAtHorizontal) == 0x001DE4, "Member 'UBackgroundCharacter_AnimBP_C::LookAtHorizontal' has a wrong offset!");
static_assert(offsetof(UBackgroundCharacter_AnimBP_C, LookAtVertical) == 0x001DE8, "Member 'UBackgroundCharacter_AnimBP_C::LookAtVertical' has a wrong offset!");
static_assert(offsetof(UBackgroundCharacter_AnimBP_C, LookAtAlpha_0) == 0x001DEC, "Member 'UBackgroundCharacter_AnimBP_C::LookAtAlpha_0' has a wrong offset!");
static_assert(offsetof(UBackgroundCharacter_AnimBP_C, OnGround) == 0x001DF0, "Member 'UBackgroundCharacter_AnimBP_C::OnGround' has a wrong offset!");

}

