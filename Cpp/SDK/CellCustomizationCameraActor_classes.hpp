#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CellCustomizationCameraActor

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "OPP_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass CellCustomizationCameraActor.CellCustomizationCameraActor_C
// 0x0070 (0x02A0 - 0x0230)
class ACellCustomizationCameraActor_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0230(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCameraComponent*                       Camera;                                            // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 FocusedActor;                                      // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bShouldTick;                                       // 0x0250(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bManualOverride;                                   // 0x0251(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bDebugWholeCellCamTM;                              // 0x0252(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_36F9[0xD];                                     // 0x0253(0x000D)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             WholeSceneCameraTransform;                         // 0x0260(0x0030)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	ECustomizationMenuCategory                    FocusedCategory;                                   // 0x0290(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	struct FRotator GetCameraTargetWorldRotation();
	struct FVector GetCameraTargetRelativeLocation();
	void GetFocusActorFromCategory(ECustomizationMenuCategory Category, class AActor** Actor);
	void Init();
	void DeactivateCamera();
	void Activate_Camera(float blendTime);
	void UpdateCameraTransforms(float DeltaTime);
	void FocusCameraToInstant(ECustomizationMenuCategory CustomizationCategory);
	void FocusCameraTo(ECustomizationMenuCategory CustomizationCategory);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_CellCustomizationCameraActor(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CellCustomizationCameraActor_C">();
	}
	static class ACellCustomizationCameraActor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ACellCustomizationCameraActor_C>();
	}
};
static_assert(alignof(ACellCustomizationCameraActor_C) == 0x000010, "Wrong alignment on ACellCustomizationCameraActor_C");
static_assert(sizeof(ACellCustomizationCameraActor_C) == 0x0002A0, "Wrong size on ACellCustomizationCameraActor_C");
static_assert(offsetof(ACellCustomizationCameraActor_C, UberGraphFrame) == 0x000230, "Member 'ACellCustomizationCameraActor_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ACellCustomizationCameraActor_C, Camera) == 0x000238, "Member 'ACellCustomizationCameraActor_C::Camera' has a wrong offset!");
static_assert(offsetof(ACellCustomizationCameraActor_C, DefaultSceneRoot) == 0x000240, "Member 'ACellCustomizationCameraActor_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ACellCustomizationCameraActor_C, FocusedActor) == 0x000248, "Member 'ACellCustomizationCameraActor_C::FocusedActor' has a wrong offset!");
static_assert(offsetof(ACellCustomizationCameraActor_C, bShouldTick) == 0x000250, "Member 'ACellCustomizationCameraActor_C::bShouldTick' has a wrong offset!");
static_assert(offsetof(ACellCustomizationCameraActor_C, bManualOverride) == 0x000251, "Member 'ACellCustomizationCameraActor_C::bManualOverride' has a wrong offset!");
static_assert(offsetof(ACellCustomizationCameraActor_C, bDebugWholeCellCamTM) == 0x000252, "Member 'ACellCustomizationCameraActor_C::bDebugWholeCellCamTM' has a wrong offset!");
static_assert(offsetof(ACellCustomizationCameraActor_C, WholeSceneCameraTransform) == 0x000260, "Member 'ACellCustomizationCameraActor_C::WholeSceneCameraTransform' has a wrong offset!");
static_assert(offsetof(ACellCustomizationCameraActor_C, FocusedCategory) == 0x000290, "Member 'ACellCustomizationCameraActor_C::FocusedCategory' has a wrong offset!");

}

