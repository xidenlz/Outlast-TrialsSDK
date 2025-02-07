#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ChessSpectator_AnimBP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "OPP_structs.hpp"
#include "OPP_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass ChessSpectator_AnimBP.ChessSpectator_AnimBP_C
// 0x0E20 (0x1110 - 0x02F0)
class UChessSpectator_AnimBP_C final : public URBGhostAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02F0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x02F8(0x0030)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_8;                  // 0x0328(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_7;                  // 0x0350(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_6;                  // 0x0378(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_5;                  // 0x03A0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_4;                  // 0x03C8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_3;                  // 0x03F0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_2;                  // 0x0418(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_1;                  // 0x0440(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult;                    // 0x0468(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_12;                   // 0x0490(0x0080)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_6;                       // 0x0510(0x0030)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_11;                   // 0x0540(0x0080)()
	struct FAnimNode_BlendListByInt               AnimGraphNode_BlendListByInt_5;                    // 0x05C0(0x00A8)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_10;                   // 0x0668(0x0080)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_5;                       // 0x06E8(0x0030)()
	struct FAnimNode_BlendListByInt               AnimGraphNode_BlendListByInt_4;                    // 0x0718(0x00A8)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_9;                    // 0x07C0(0x0080)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_8;                    // 0x0840(0x0080)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_4;                       // 0x08C0(0x0030)()
	struct FAnimNode_BlendListByInt               AnimGraphNode_BlendListByInt_3;                    // 0x08F0(0x00A8)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_7;                    // 0x0998(0x0080)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_6;                    // 0x0A18(0x0080)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_3;                       // 0x0A98(0x0030)()
	struct FAnimNode_BlendListByInt               AnimGraphNode_BlendListByInt_2;                    // 0x0AC8(0x00A8)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_5;                    // 0x0B70(0x0080)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_4;                    // 0x0BF0(0x0080)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_2;                       // 0x0C70(0x0030)()
	struct FAnimNode_BlendListByInt               AnimGraphNode_BlendListByInt_1;                    // 0x0CA0(0x00A8)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_3;                    // 0x0D48(0x0080)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_2;                    // 0x0DC8(0x0080)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_1;                       // 0x0E48(0x0030)()
	struct FAnimNode_BlendListByInt               AnimGraphNode_BlendListByInt;                      // 0x0E78(0x00A8)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;                    // 0x0F20(0x0080)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x0FA0(0x0080)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult;                         // 0x1020(0x0030)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine;                        // 0x1050(0x00B0)()
	bool                                          IsShopping;                                        // 0x1100(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bOut;                                              // 0x1101(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsCheering;                                       // 0x1102(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsAngry;                                          // 0x1103(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsPounding;                                       // 0x1104(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_378E[0x3];                                     // 0x1105(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         SpectatorAnimStyleIndex;                           // 0x1108(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ChessSpectator_AnimBP(int32 EntryPoint);
	void AnimNotify_Enter();
	void BP_InitializeGhost();
	void AnimNotify_EnteredPounding();
	void AnimNotify_Emote();
	void AnimNotify_Exit();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ChessSpectator_AnimBP_AnimGraphNode_TransitionResult_C3D093CA4976A71660805899C315CBFD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ChessSpectator_AnimBP_AnimGraphNode_TransitionResult_037C8ADC4AEEBADC4E22AF936A899D02();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ChessSpectator_AnimBP_AnimGraphNode_TransitionResult_EF9EFD0E44872E9C83DF399F9A558EE8();
	bool FinishGhost(EGhostFinishReason FinishReason, int32 GhostFinishCustomReason);
	void AnimGraph(struct FPoseLink* Param_AnimGraph);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ChessSpectator_AnimBP_C">();
	}
	static class UChessSpectator_AnimBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UChessSpectator_AnimBP_C>();
	}
};
static_assert(alignof(UChessSpectator_AnimBP_C) == 0x000010, "Wrong alignment on UChessSpectator_AnimBP_C");
static_assert(sizeof(UChessSpectator_AnimBP_C) == 0x001110, "Wrong size on UChessSpectator_AnimBP_C");
static_assert(offsetof(UChessSpectator_AnimBP_C, UberGraphFrame) == 0x0002F0, "Member 'UChessSpectator_AnimBP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UChessSpectator_AnimBP_C, AnimGraphNode_Root) == 0x0002F8, "Member 'UChessSpectator_AnimBP_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UChessSpectator_AnimBP_C, AnimGraphNode_TransitionResult_8) == 0x000328, "Member 'UChessSpectator_AnimBP_C::AnimGraphNode_TransitionResult_8' has a wrong offset!");
static_assert(offsetof(UChessSpectator_AnimBP_C, AnimGraphNode_TransitionResult_7) == 0x000350, "Member 'UChessSpectator_AnimBP_C::AnimGraphNode_TransitionResult_7' has a wrong offset!");
static_assert(offsetof(UChessSpectator_AnimBP_C, AnimGraphNode_TransitionResult_6) == 0x000378, "Member 'UChessSpectator_AnimBP_C::AnimGraphNode_TransitionResult_6' has a wrong offset!");
static_assert(offsetof(UChessSpectator_AnimBP_C, AnimGraphNode_TransitionResult_5) == 0x0003A0, "Member 'UChessSpectator_AnimBP_C::AnimGraphNode_TransitionResult_5' has a wrong offset!");
static_assert(offsetof(UChessSpectator_AnimBP_C, AnimGraphNode_TransitionResult_4) == 0x0003C8, "Member 'UChessSpectator_AnimBP_C::AnimGraphNode_TransitionResult_4' has a wrong offset!");
static_assert(offsetof(UChessSpectator_AnimBP_C, AnimGraphNode_TransitionResult_3) == 0x0003F0, "Member 'UChessSpectator_AnimBP_C::AnimGraphNode_TransitionResult_3' has a wrong offset!");
static_assert(offsetof(UChessSpectator_AnimBP_C, AnimGraphNode_TransitionResult_2) == 0x000418, "Member 'UChessSpectator_AnimBP_C::AnimGraphNode_TransitionResult_2' has a wrong offset!");
static_assert(offsetof(UChessSpectator_AnimBP_C, AnimGraphNode_TransitionResult_1) == 0x000440, "Member 'UChessSpectator_AnimBP_C::AnimGraphNode_TransitionResult_1' has a wrong offset!");
static_assert(offsetof(UChessSpectator_AnimBP_C, AnimGraphNode_TransitionResult) == 0x000468, "Member 'UChessSpectator_AnimBP_C::AnimGraphNode_TransitionResult' has a wrong offset!");
static_assert(offsetof(UChessSpectator_AnimBP_C, AnimGraphNode_SequencePlayer_12) == 0x000490, "Member 'UChessSpectator_AnimBP_C::AnimGraphNode_SequencePlayer_12' has a wrong offset!");
static_assert(offsetof(UChessSpectator_AnimBP_C, AnimGraphNode_StateResult_6) == 0x000510, "Member 'UChessSpectator_AnimBP_C::AnimGraphNode_StateResult_6' has a wrong offset!");
static_assert(offsetof(UChessSpectator_AnimBP_C, AnimGraphNode_SequencePlayer_11) == 0x000540, "Member 'UChessSpectator_AnimBP_C::AnimGraphNode_SequencePlayer_11' has a wrong offset!");
static_assert(offsetof(UChessSpectator_AnimBP_C, AnimGraphNode_BlendListByInt_5) == 0x0005C0, "Member 'UChessSpectator_AnimBP_C::AnimGraphNode_BlendListByInt_5' has a wrong offset!");
static_assert(offsetof(UChessSpectator_AnimBP_C, AnimGraphNode_SequencePlayer_10) == 0x000668, "Member 'UChessSpectator_AnimBP_C::AnimGraphNode_SequencePlayer_10' has a wrong offset!");
static_assert(offsetof(UChessSpectator_AnimBP_C, AnimGraphNode_StateResult_5) == 0x0006E8, "Member 'UChessSpectator_AnimBP_C::AnimGraphNode_StateResult_5' has a wrong offset!");
static_assert(offsetof(UChessSpectator_AnimBP_C, AnimGraphNode_BlendListByInt_4) == 0x000718, "Member 'UChessSpectator_AnimBP_C::AnimGraphNode_BlendListByInt_4' has a wrong offset!");
static_assert(offsetof(UChessSpectator_AnimBP_C, AnimGraphNode_SequencePlayer_9) == 0x0007C0, "Member 'UChessSpectator_AnimBP_C::AnimGraphNode_SequencePlayer_9' has a wrong offset!");
static_assert(offsetof(UChessSpectator_AnimBP_C, AnimGraphNode_SequencePlayer_8) == 0x000840, "Member 'UChessSpectator_AnimBP_C::AnimGraphNode_SequencePlayer_8' has a wrong offset!");
static_assert(offsetof(UChessSpectator_AnimBP_C, AnimGraphNode_StateResult_4) == 0x0008C0, "Member 'UChessSpectator_AnimBP_C::AnimGraphNode_StateResult_4' has a wrong offset!");
static_assert(offsetof(UChessSpectator_AnimBP_C, AnimGraphNode_BlendListByInt_3) == 0x0008F0, "Member 'UChessSpectator_AnimBP_C::AnimGraphNode_BlendListByInt_3' has a wrong offset!");
static_assert(offsetof(UChessSpectator_AnimBP_C, AnimGraphNode_SequencePlayer_7) == 0x000998, "Member 'UChessSpectator_AnimBP_C::AnimGraphNode_SequencePlayer_7' has a wrong offset!");
static_assert(offsetof(UChessSpectator_AnimBP_C, AnimGraphNode_SequencePlayer_6) == 0x000A18, "Member 'UChessSpectator_AnimBP_C::AnimGraphNode_SequencePlayer_6' has a wrong offset!");
static_assert(offsetof(UChessSpectator_AnimBP_C, AnimGraphNode_StateResult_3) == 0x000A98, "Member 'UChessSpectator_AnimBP_C::AnimGraphNode_StateResult_3' has a wrong offset!");
static_assert(offsetof(UChessSpectator_AnimBP_C, AnimGraphNode_BlendListByInt_2) == 0x000AC8, "Member 'UChessSpectator_AnimBP_C::AnimGraphNode_BlendListByInt_2' has a wrong offset!");
static_assert(offsetof(UChessSpectator_AnimBP_C, AnimGraphNode_SequencePlayer_5) == 0x000B70, "Member 'UChessSpectator_AnimBP_C::AnimGraphNode_SequencePlayer_5' has a wrong offset!");
static_assert(offsetof(UChessSpectator_AnimBP_C, AnimGraphNode_SequencePlayer_4) == 0x000BF0, "Member 'UChessSpectator_AnimBP_C::AnimGraphNode_SequencePlayer_4' has a wrong offset!");
static_assert(offsetof(UChessSpectator_AnimBP_C, AnimGraphNode_StateResult_2) == 0x000C70, "Member 'UChessSpectator_AnimBP_C::AnimGraphNode_StateResult_2' has a wrong offset!");
static_assert(offsetof(UChessSpectator_AnimBP_C, AnimGraphNode_BlendListByInt_1) == 0x000CA0, "Member 'UChessSpectator_AnimBP_C::AnimGraphNode_BlendListByInt_1' has a wrong offset!");
static_assert(offsetof(UChessSpectator_AnimBP_C, AnimGraphNode_SequencePlayer_3) == 0x000D48, "Member 'UChessSpectator_AnimBP_C::AnimGraphNode_SequencePlayer_3' has a wrong offset!");
static_assert(offsetof(UChessSpectator_AnimBP_C, AnimGraphNode_SequencePlayer_2) == 0x000DC8, "Member 'UChessSpectator_AnimBP_C::AnimGraphNode_SequencePlayer_2' has a wrong offset!");
static_assert(offsetof(UChessSpectator_AnimBP_C, AnimGraphNode_StateResult_1) == 0x000E48, "Member 'UChessSpectator_AnimBP_C::AnimGraphNode_StateResult_1' has a wrong offset!");
static_assert(offsetof(UChessSpectator_AnimBP_C, AnimGraphNode_BlendListByInt) == 0x000E78, "Member 'UChessSpectator_AnimBP_C::AnimGraphNode_BlendListByInt' has a wrong offset!");
static_assert(offsetof(UChessSpectator_AnimBP_C, AnimGraphNode_SequencePlayer_1) == 0x000F20, "Member 'UChessSpectator_AnimBP_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(UChessSpectator_AnimBP_C, AnimGraphNode_SequencePlayer) == 0x000FA0, "Member 'UChessSpectator_AnimBP_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UChessSpectator_AnimBP_C, AnimGraphNode_StateResult) == 0x001020, "Member 'UChessSpectator_AnimBP_C::AnimGraphNode_StateResult' has a wrong offset!");
static_assert(offsetof(UChessSpectator_AnimBP_C, AnimGraphNode_StateMachine) == 0x001050, "Member 'UChessSpectator_AnimBP_C::AnimGraphNode_StateMachine' has a wrong offset!");
static_assert(offsetof(UChessSpectator_AnimBP_C, IsShopping) == 0x001100, "Member 'UChessSpectator_AnimBP_C::IsShopping' has a wrong offset!");
static_assert(offsetof(UChessSpectator_AnimBP_C, bOut) == 0x001101, "Member 'UChessSpectator_AnimBP_C::bOut' has a wrong offset!");
static_assert(offsetof(UChessSpectator_AnimBP_C, bIsCheering) == 0x001102, "Member 'UChessSpectator_AnimBP_C::bIsCheering' has a wrong offset!");
static_assert(offsetof(UChessSpectator_AnimBP_C, bIsAngry) == 0x001103, "Member 'UChessSpectator_AnimBP_C::bIsAngry' has a wrong offset!");
static_assert(offsetof(UChessSpectator_AnimBP_C, bIsPounding) == 0x001104, "Member 'UChessSpectator_AnimBP_C::bIsPounding' has a wrong offset!");
static_assert(offsetof(UChessSpectator_AnimBP_C, SpectatorAnimStyleIndex) == 0x001108, "Member 'UChessSpectator_AnimBP_C::SpectatorAnimStyleIndex' has a wrong offset!");

}

