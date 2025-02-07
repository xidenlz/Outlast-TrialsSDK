#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Alarm_BP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AkAudio_structs.hpp"
#include "OPP_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Alarm_BP.Alarm_BP_C
// 0x0060 (0x0470 - 0x0410)
class AAlarm_BP_C final : public ARBTriggerable
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0410(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class URBSoundComponent*                      RBSound;                                           // 0x0418(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SpeakerMinus01;                                    // 0x0420(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   PointLight;                                        // 0x0428(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URBSpotLightComponent*                  RBSpotLight;                                       // 0x0430(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   RevolvingLightMinus02;                             // 0x0438(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   RevolvingLightMinus01;                             // 0x0440(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0448(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	ELightClipPlaneMode                           Clip_Plane;                                        // 0x0450(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3D38[0x3];                                     // 0x0451(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CurrentAudioTriggerDeltaTime;                      // 0x0454(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          SoundStart;                                        // 0x0458(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          SoundStop;                                         // 0x0460(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Alarm_BP(int32 EntryPoint);
	void Event_OnResetStage();
	void ToggleOnOff(bool bAlarmState);
	void Event_OnUntriggered();
	void Event_OnTriggered();
	void ReceiveTick(float DeltaSeconds);
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Alarm_BP_C">();
	}
	static class AAlarm_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AAlarm_BP_C>();
	}
};
static_assert(alignof(AAlarm_BP_C) == 0x000010, "Wrong alignment on AAlarm_BP_C");
static_assert(sizeof(AAlarm_BP_C) == 0x000470, "Wrong size on AAlarm_BP_C");
static_assert(offsetof(AAlarm_BP_C, UberGraphFrame) == 0x000410, "Member 'AAlarm_BP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AAlarm_BP_C, RBSound) == 0x000418, "Member 'AAlarm_BP_C::RBSound' has a wrong offset!");
static_assert(offsetof(AAlarm_BP_C, SpeakerMinus01) == 0x000420, "Member 'AAlarm_BP_C::SpeakerMinus01' has a wrong offset!");
static_assert(offsetof(AAlarm_BP_C, PointLight) == 0x000428, "Member 'AAlarm_BP_C::PointLight' has a wrong offset!");
static_assert(offsetof(AAlarm_BP_C, RBSpotLight) == 0x000430, "Member 'AAlarm_BP_C::RBSpotLight' has a wrong offset!");
static_assert(offsetof(AAlarm_BP_C, RevolvingLightMinus02) == 0x000438, "Member 'AAlarm_BP_C::RevolvingLightMinus02' has a wrong offset!");
static_assert(offsetof(AAlarm_BP_C, RevolvingLightMinus01) == 0x000440, "Member 'AAlarm_BP_C::RevolvingLightMinus01' has a wrong offset!");
static_assert(offsetof(AAlarm_BP_C, DefaultSceneRoot) == 0x000448, "Member 'AAlarm_BP_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(AAlarm_BP_C, Clip_Plane) == 0x000450, "Member 'AAlarm_BP_C::Clip_Plane' has a wrong offset!");
static_assert(offsetof(AAlarm_BP_C, CurrentAudioTriggerDeltaTime) == 0x000454, "Member 'AAlarm_BP_C::CurrentAudioTriggerDeltaTime' has a wrong offset!");
static_assert(offsetof(AAlarm_BP_C, SoundStart) == 0x000458, "Member 'AAlarm_BP_C::SoundStart' has a wrong offset!");
static_assert(offsetof(AAlarm_BP_C, SoundStop) == 0x000460, "Member 'AAlarm_BP_C::SoundStop' has a wrong offset!");

}

