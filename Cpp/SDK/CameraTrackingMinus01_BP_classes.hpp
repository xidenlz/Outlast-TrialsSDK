#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CameraTrackingMinus01_BP

#include "Basic.hpp"

#include "RBStationnaryActor_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass CameraTracking-01_BP.CameraTracking-01_BP_C
// 0x0018 (0x0258 - 0x0240)
class ACameraTrackingMinus01_BP_C final : public ARBStationnaryActor_C
{
public:
	class UBoxComponent*                          Box;                                               // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URBSoundComponent*                      RBSound;                                           // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 SkeletalMesh;                                      // 0x0250(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CameraTracking-01_BP_C">();
	}
	static class ACameraTrackingMinus01_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ACameraTrackingMinus01_BP_C>();
	}
};
static_assert(alignof(ACameraTrackingMinus01_BP_C) == 0x000008, "Wrong alignment on ACameraTrackingMinus01_BP_C");
static_assert(sizeof(ACameraTrackingMinus01_BP_C) == 0x000258, "Wrong size on ACameraTrackingMinus01_BP_C");
static_assert(offsetof(ACameraTrackingMinus01_BP_C, Box) == 0x000240, "Member 'ACameraTrackingMinus01_BP_C::Box' has a wrong offset!");
static_assert(offsetof(ACameraTrackingMinus01_BP_C, RBSound) == 0x000248, "Member 'ACameraTrackingMinus01_BP_C::RBSound' has a wrong offset!");
static_assert(offsetof(ACameraTrackingMinus01_BP_C, SkeletalMesh) == 0x000250, "Member 'ACameraTrackingMinus01_BP_C::SkeletalMesh' has a wrong offset!");

}

