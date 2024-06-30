#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BaseAnimatedQuestGiver_BP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "OPP_structs.hpp"
#include "OPP_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BaseAnimatedQuestGiver_BP.BaseAnimatedQuestGiver_BP_C
// 0x0080 (0x04A0 - 0x0420)
class ABaseAnimatedQuestGiver_BP_C : public ARBAnimatedQuestGiver
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0420(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class URBPropOptimizerComponent*              RBPropOptimizer;                                   // 0x0428(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 QuestGiverHeadMesh;                                // 0x0430(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          HailingZone;                                       // 0x0438(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCameraComponent*                       CameraGuestGiver;                                  // 0x0440(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 QuestGiverDisplayMesh;                             // 0x0448(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URBCinematicZoneComponent*              RBCinematicZone;                                   // 0x0450(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   MenuCameraRef;                                     // 0x0458(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          PlayerInShop;                                      // 0x0460(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_385E[0x3];                                     // 0x0461(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         blendTime;                                         // 0x0464(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BlendExp;                                          // 0x0468(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_385F[0x4];                                     // 0x046C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class URBMenuWidget*                          RBMenuWidget;                                      // 0x0470(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bUseRBCinematicZone;                               // 0x0478(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3860[0x3];                                     // 0x0479(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         LastHailingTimestamp;                              // 0x047C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          LookEnable;                                        // 0x0480(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3861[0x3];                                     // 0x0481(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         LookAtYaw;                                         // 0x0484(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bPlayingStoryline;                                 // 0x0488(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3862[0x7];                                     // 0x0489(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             StorylinePlayingChanged;                           // 0x0490(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void StorylinePlayingChanged__DelegateSignature();
	void ExecuteUbergraph_BaseAnimatedQuestGiver_BP(int32 EntryPoint);
	void PlayBlockingDialogue(class UAkAudioEvent* AudioEvent);
	void VOEnded(int32 PlayingId);
	void PlayStorylineBP();
	void Event_OnLocalPlayerInteracted();
	void Event_PostInitializeComponents();
	void OnPop();
	void UpdateLookAt();
	void NoticeStop();
	void NoticeStart();
	void OnPawnPlaySpecialMoveAnimation(const class ARBPawn* Pawn, ESpecialMove SpecialMove);
	void BndEvt__HailingZone_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void OnFocused();
	void BndEvt__HailingZone_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void UserConstructionScript();
	void TryPlayHailing();
	void SetAnimationParameters(bool Reset, class UQuest_AnimBP_C* NewParam);
	void Set_Playing_Storyline(bool bPlaying);

	bool GetInteractionPawnLocation(const class ARBPawn* Pawn, ESpecialMove SpecialMove, struct FVector* OutLocation, struct FVector* OutDirection) const;
	class USkeletalMeshComponent* GetFaceFXSkeletalMeshComponent() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BaseAnimatedQuestGiver_BP_C">();
	}
	static class ABaseAnimatedQuestGiver_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABaseAnimatedQuestGiver_BP_C>();
	}
};
static_assert(alignof(ABaseAnimatedQuestGiver_BP_C) == 0x000008, "Wrong alignment on ABaseAnimatedQuestGiver_BP_C");
static_assert(sizeof(ABaseAnimatedQuestGiver_BP_C) == 0x0004A0, "Wrong size on ABaseAnimatedQuestGiver_BP_C");
static_assert(offsetof(ABaseAnimatedQuestGiver_BP_C, UberGraphFrame) == 0x000420, "Member 'ABaseAnimatedQuestGiver_BP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABaseAnimatedQuestGiver_BP_C, RBPropOptimizer) == 0x000428, "Member 'ABaseAnimatedQuestGiver_BP_C::RBPropOptimizer' has a wrong offset!");
static_assert(offsetof(ABaseAnimatedQuestGiver_BP_C, QuestGiverHeadMesh) == 0x000430, "Member 'ABaseAnimatedQuestGiver_BP_C::QuestGiverHeadMesh' has a wrong offset!");
static_assert(offsetof(ABaseAnimatedQuestGiver_BP_C, HailingZone) == 0x000438, "Member 'ABaseAnimatedQuestGiver_BP_C::HailingZone' has a wrong offset!");
static_assert(offsetof(ABaseAnimatedQuestGiver_BP_C, CameraGuestGiver) == 0x000440, "Member 'ABaseAnimatedQuestGiver_BP_C::CameraGuestGiver' has a wrong offset!");
static_assert(offsetof(ABaseAnimatedQuestGiver_BP_C, QuestGiverDisplayMesh) == 0x000448, "Member 'ABaseAnimatedQuestGiver_BP_C::QuestGiverDisplayMesh' has a wrong offset!");
static_assert(offsetof(ABaseAnimatedQuestGiver_BP_C, RBCinematicZone) == 0x000450, "Member 'ABaseAnimatedQuestGiver_BP_C::RBCinematicZone' has a wrong offset!");
static_assert(offsetof(ABaseAnimatedQuestGiver_BP_C, MenuCameraRef) == 0x000458, "Member 'ABaseAnimatedQuestGiver_BP_C::MenuCameraRef' has a wrong offset!");
static_assert(offsetof(ABaseAnimatedQuestGiver_BP_C, PlayerInShop) == 0x000460, "Member 'ABaseAnimatedQuestGiver_BP_C::PlayerInShop' has a wrong offset!");
static_assert(offsetof(ABaseAnimatedQuestGiver_BP_C, blendTime) == 0x000464, "Member 'ABaseAnimatedQuestGiver_BP_C::blendTime' has a wrong offset!");
static_assert(offsetof(ABaseAnimatedQuestGiver_BP_C, BlendExp) == 0x000468, "Member 'ABaseAnimatedQuestGiver_BP_C::BlendExp' has a wrong offset!");
static_assert(offsetof(ABaseAnimatedQuestGiver_BP_C, RBMenuWidget) == 0x000470, "Member 'ABaseAnimatedQuestGiver_BP_C::RBMenuWidget' has a wrong offset!");
static_assert(offsetof(ABaseAnimatedQuestGiver_BP_C, bUseRBCinematicZone) == 0x000478, "Member 'ABaseAnimatedQuestGiver_BP_C::bUseRBCinematicZone' has a wrong offset!");
static_assert(offsetof(ABaseAnimatedQuestGiver_BP_C, LastHailingTimestamp) == 0x00047C, "Member 'ABaseAnimatedQuestGiver_BP_C::LastHailingTimestamp' has a wrong offset!");
static_assert(offsetof(ABaseAnimatedQuestGiver_BP_C, LookEnable) == 0x000480, "Member 'ABaseAnimatedQuestGiver_BP_C::LookEnable' has a wrong offset!");
static_assert(offsetof(ABaseAnimatedQuestGiver_BP_C, LookAtYaw) == 0x000484, "Member 'ABaseAnimatedQuestGiver_BP_C::LookAtYaw' has a wrong offset!");
static_assert(offsetof(ABaseAnimatedQuestGiver_BP_C, bPlayingStoryline) == 0x000488, "Member 'ABaseAnimatedQuestGiver_BP_C::bPlayingStoryline' has a wrong offset!");
static_assert(offsetof(ABaseAnimatedQuestGiver_BP_C, StorylinePlayingChanged) == 0x000490, "Member 'ABaseAnimatedQuestGiver_BP_C::StorylinePlayingChanged' has a wrong offset!");

}

