#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BaseAmp_SkillItem_BP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "OPP_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BaseAmp_SkillItem_BP.BaseAmp_SkillItem_BP_C
// 0x0020 (0x0C20 - 0x0C00)
#pragma pack(push, 0x1)
class alignas(0x10) ABaseAmp_SkillItem_BP_C : public ARBThrowableSkillItem
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0C00(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                      Ngr_SkillDeactivate;                               // 0x0C08(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                      PostProcess;                                       // 0x0C10(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BaseAmp_SkillItem_BP(int32 EntryPoint);
	void On_Skill_Deactivate_FX();
	void CooldownChanged(class ARBActiveSkill* ActiveSkill, bool bIsInCooldown);
	void ReceiveBeginPlay();
	void PlayerAssigned(class ARBPawn* Pawn, class ARBPickup* Item);
	void Event_OnDeployed();
	void Event_OnActivate();
	void RefreshCooldown(class ARBActiveSkill* ActiveSkill);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BaseAmp_SkillItem_BP_C">();
	}
	static class ABaseAmp_SkillItem_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABaseAmp_SkillItem_BP_C>();
	}
};
#pragma pack(pop)
static_assert(alignof(ABaseAmp_SkillItem_BP_C) == 0x000010, "Wrong alignment on ABaseAmp_SkillItem_BP_C");
static_assert(sizeof(ABaseAmp_SkillItem_BP_C) == 0x000C20, "Wrong size on ABaseAmp_SkillItem_BP_C");
static_assert(offsetof(ABaseAmp_SkillItem_BP_C, UberGraphFrame) == 0x000C00, "Member 'ABaseAmp_SkillItem_BP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABaseAmp_SkillItem_BP_C, Ngr_SkillDeactivate) == 0x000C08, "Member 'ABaseAmp_SkillItem_BP_C::Ngr_SkillDeactivate' has a wrong offset!");
static_assert(offsetof(ABaseAmp_SkillItem_BP_C, PostProcess) == 0x000C10, "Member 'ABaseAmp_SkillItem_BP_C::PostProcess' has a wrong offset!");

}

