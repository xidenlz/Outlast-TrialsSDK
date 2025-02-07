#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ArmWreslingPanel_BP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass ArmWreslingPanel_BP.ArmWreslingPanel_BP_C
// 0x0048 (0x0278 - 0x0230)
class AArmWreslingPanel_BP_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0230(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URBSoundComponent*                      RBSound;                                           // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArmWreslingPanelComponent_BP_C*        ArmWreslingPanelComponent_BP;                      // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Anchor_Point;                                      // 0x0250(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Root;                                              // 0x0258(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArmWrestlingMinigameWidget_C*          Widget;                                            // 0x0260(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AArmWreslingTable_BP_C*                 ArmWrestlingTable;                                 // 0x0268(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UArmWreslingPanel_GhostAnimBP_C*        As_Arm_Wresling_Panel_Ghost_Anim_BP;               // 0x0270(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ArmWreslingPanel_BP(int32 EntryPoint);
	void CustomEvent_0(const struct FArmWreslingPlayerRoundData& PlayerRoundData);
	void ReceiveBeginPlay();
	void BndEvt__ArmWreslingPanel_BP_ArmWreslingPanelComponent_BP_K2Node_ComponentBoundEvent_0_ArmWreslingPanelTauntEvent__DelegateSignature(class ARBPlayer* Pawn);
	void BndEvt__ArmWreslingPanelComponent_BP_K2Node_ComponentBoundEvent_8_OnPanelEvent__DelegateSignature(class URBInteractiblePanelComponent* Panel, class ARBPawn* PawnInteracting);
	void ShowHUD();
	void TryHideHud();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ArmWreslingPanel_BP_C">();
	}
	static class AArmWreslingPanel_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AArmWreslingPanel_BP_C>();
	}
};
static_assert(alignof(AArmWreslingPanel_BP_C) == 0x000008, "Wrong alignment on AArmWreslingPanel_BP_C");
static_assert(sizeof(AArmWreslingPanel_BP_C) == 0x000278, "Wrong size on AArmWreslingPanel_BP_C");
static_assert(offsetof(AArmWreslingPanel_BP_C, UberGraphFrame) == 0x000230, "Member 'AArmWreslingPanel_BP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AArmWreslingPanel_BP_C, StaticMesh) == 0x000238, "Member 'AArmWreslingPanel_BP_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(AArmWreslingPanel_BP_C, RBSound) == 0x000240, "Member 'AArmWreslingPanel_BP_C::RBSound' has a wrong offset!");
static_assert(offsetof(AArmWreslingPanel_BP_C, ArmWreslingPanelComponent_BP) == 0x000248, "Member 'AArmWreslingPanel_BP_C::ArmWreslingPanelComponent_BP' has a wrong offset!");
static_assert(offsetof(AArmWreslingPanel_BP_C, Anchor_Point) == 0x000250, "Member 'AArmWreslingPanel_BP_C::Anchor_Point' has a wrong offset!");
static_assert(offsetof(AArmWreslingPanel_BP_C, Root) == 0x000258, "Member 'AArmWreslingPanel_BP_C::Root' has a wrong offset!");
static_assert(offsetof(AArmWreslingPanel_BP_C, Widget) == 0x000260, "Member 'AArmWreslingPanel_BP_C::Widget' has a wrong offset!");
static_assert(offsetof(AArmWreslingPanel_BP_C, ArmWrestlingTable) == 0x000268, "Member 'AArmWreslingPanel_BP_C::ArmWrestlingTable' has a wrong offset!");
static_assert(offsetof(AArmWreslingPanel_BP_C, As_Arm_Wresling_Panel_Ghost_Anim_BP) == 0x000270, "Member 'AArmWreslingPanel_BP_C::As_Arm_Wresling_Panel_Ghost_Anim_BP' has a wrong offset!");

}

