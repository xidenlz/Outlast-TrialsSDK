#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BaseFogger_SkillItem_BP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "OPP_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BaseFogger_SkillItem_BP.BaseFogger_SkillItem_BP_C
// 0x0060 (0x0B70 - 0x0B10)
class ABaseFogger_SkillItem_BP_C : public ARBDeployableSkillItem
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0B10(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UPointLightComponent*                   Light_Marker;                                      // 0x0B18(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      Ngr_Marker;                                        // 0x0B20(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URBSoundComponent*                      SoundComponent;                                    // 0x0B28(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           PaintColor;                                        // 0x0B30(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           MineLightColor;                                    // 0x0B40(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         SpawnedActors;                                     // 0x0B50(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, Transient, DisableEditOnInstance)
	class UAkAudioEvent*                          StartBeepingSFX;                                   // 0x0B60(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          StopBeepingSFX;                                    // 0x0B68(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BaseFogger_SkillItem_BP(int32 EntryPoint);
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void DestroySpawnedActors();
	void Event_EffectFinished();
	void Event_OnPlaced();
	void Event_OnDeployed();
	void Event_OnExpiredUnactivated();
	void Event_OnActivate();
	void SpawnAndExplodeBomb_Client(class AActor** BombActor);
	void Activate_Light(const struct FLinearColor& Color, bool On);
	void SpawnAndExplodeBomb_Server(class AActor** BombActor);
	void StartStopBeepingSound(bool Start);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BaseFogger_SkillItem_BP_C">();
	}
	static class ABaseFogger_SkillItem_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABaseFogger_SkillItem_BP_C>();
	}
};
static_assert(alignof(ABaseFogger_SkillItem_BP_C) == 0x000010, "Wrong alignment on ABaseFogger_SkillItem_BP_C");
static_assert(sizeof(ABaseFogger_SkillItem_BP_C) == 0x000B70, "Wrong size on ABaseFogger_SkillItem_BP_C");
static_assert(offsetof(ABaseFogger_SkillItem_BP_C, UberGraphFrame) == 0x000B10, "Member 'ABaseFogger_SkillItem_BP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABaseFogger_SkillItem_BP_C, Light_Marker) == 0x000B18, "Member 'ABaseFogger_SkillItem_BP_C::Light_Marker' has a wrong offset!");
static_assert(offsetof(ABaseFogger_SkillItem_BP_C, Ngr_Marker) == 0x000B20, "Member 'ABaseFogger_SkillItem_BP_C::Ngr_Marker' has a wrong offset!");
static_assert(offsetof(ABaseFogger_SkillItem_BP_C, SoundComponent) == 0x000B28, "Member 'ABaseFogger_SkillItem_BP_C::SoundComponent' has a wrong offset!");
static_assert(offsetof(ABaseFogger_SkillItem_BP_C, PaintColor) == 0x000B30, "Member 'ABaseFogger_SkillItem_BP_C::PaintColor' has a wrong offset!");
static_assert(offsetof(ABaseFogger_SkillItem_BP_C, MineLightColor) == 0x000B40, "Member 'ABaseFogger_SkillItem_BP_C::MineLightColor' has a wrong offset!");
static_assert(offsetof(ABaseFogger_SkillItem_BP_C, SpawnedActors) == 0x000B50, "Member 'ABaseFogger_SkillItem_BP_C::SpawnedActors' has a wrong offset!");
static_assert(offsetof(ABaseFogger_SkillItem_BP_C, StartBeepingSFX) == 0x000B60, "Member 'ABaseFogger_SkillItem_BP_C::StartBeepingSFX' has a wrong offset!");
static_assert(offsetof(ABaseFogger_SkillItem_BP_C, StopBeepingSFX) == 0x000B68, "Member 'ABaseFogger_SkillItem_BP_C::StopBeepingSFX' has a wrong offset!");

}

