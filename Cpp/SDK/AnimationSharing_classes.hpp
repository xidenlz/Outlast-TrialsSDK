#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimationSharing

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "CoreUObject_classes.hpp"
#include "AnimationSharing_structs.hpp"


namespace SDK
{

// Class AnimationSharing.AnimSharingStateInstance
// 0x0020 (0x02E0 - 0x02C0)
class UAnimSharingStateInstance final : public UAnimInstance
{
public:
	class UAnimSequence*                          AnimationToPlay;                                   // 0x02B8(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         PermutationTimeOffset;                             // 0x02C0(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         PlayRate;                                          // 0x02C4(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          bStateBool;                                        // 0x02C8(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_1223[0x7];                                     // 0x02C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimSharingInstance*                   Instance;                                          // 0x02D0(0x0008)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_1224[0x8];                                     // 0x02D8(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void GetInstancedActors(TArray<class AActor*>* Actors);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AnimSharingStateInstance">();
	}
	static class UAnimSharingStateInstance* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimSharingStateInstance>();
	}
};
static_assert(alignof(UAnimSharingStateInstance) == 0x000010, "Wrong alignment on UAnimSharingStateInstance");
static_assert(sizeof(UAnimSharingStateInstance) == 0x0002E0, "Wrong size on UAnimSharingStateInstance");
static_assert(offsetof(UAnimSharingStateInstance, AnimationToPlay) == 0x0002B8, "Member 'UAnimSharingStateInstance::AnimationToPlay' has a wrong offset!");
static_assert(offsetof(UAnimSharingStateInstance, PermutationTimeOffset) == 0x0002C0, "Member 'UAnimSharingStateInstance::PermutationTimeOffset' has a wrong offset!");
static_assert(offsetof(UAnimSharingStateInstance, PlayRate) == 0x0002C4, "Member 'UAnimSharingStateInstance::PlayRate' has a wrong offset!");
static_assert(offsetof(UAnimSharingStateInstance, bStateBool) == 0x0002C8, "Member 'UAnimSharingStateInstance::bStateBool' has a wrong offset!");
static_assert(offsetof(UAnimSharingStateInstance, Instance) == 0x0002D0, "Member 'UAnimSharingStateInstance::Instance' has a wrong offset!");

// Class AnimationSharing.AnimSharingTransitionInstance
// 0x0010 (0x02D0 - 0x02C0)
class UAnimSharingTransitionInstance final : public UAnimInstance
{
public:
	TWeakObjectPtr<class USkeletalMeshComponent>  FromComponent;                                     // 0x02B8(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class USkeletalMeshComponent>  ToComponent;                                       // 0x02C0(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         blendTime;                                         // 0x02C8(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          bBlendBool;                                        // 0x02CC(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_1225[0x3];                                     // 0x02CD(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AnimSharingTransitionInstance">();
	}
	static class UAnimSharingTransitionInstance* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimSharingTransitionInstance>();
	}
};
static_assert(alignof(UAnimSharingTransitionInstance) == 0x000010, "Wrong alignment on UAnimSharingTransitionInstance");
static_assert(sizeof(UAnimSharingTransitionInstance) == 0x0002D0, "Wrong size on UAnimSharingTransitionInstance");
static_assert(offsetof(UAnimSharingTransitionInstance, FromComponent) == 0x0002B8, "Member 'UAnimSharingTransitionInstance::FromComponent' has a wrong offset!");
static_assert(offsetof(UAnimSharingTransitionInstance, ToComponent) == 0x0002C0, "Member 'UAnimSharingTransitionInstance::ToComponent' has a wrong offset!");
static_assert(offsetof(UAnimSharingTransitionInstance, blendTime) == 0x0002C8, "Member 'UAnimSharingTransitionInstance::blendTime' has a wrong offset!");
static_assert(offsetof(UAnimSharingTransitionInstance, bBlendBool) == 0x0002CC, "Member 'UAnimSharingTransitionInstance::bBlendBool' has a wrong offset!");

// Class AnimationSharing.AnimSharingAdditiveInstance
// 0x0010 (0x02D0 - 0x02C0)
class UAnimSharingAdditiveInstance final : public UAnimInstance
{
public:
	TWeakObjectPtr<class USkeletalMeshComponent>  BaseComponent;                                     // 0x02B8(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UAnimSequence>           AdditiveAnimation;                                 // 0x02C0(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         Alpha;                                             // 0x02C8(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          bStateBool;                                        // 0x02CC(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_1226[0x3];                                     // 0x02CD(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AnimSharingAdditiveInstance">();
	}
	static class UAnimSharingAdditiveInstance* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimSharingAdditiveInstance>();
	}
};
static_assert(alignof(UAnimSharingAdditiveInstance) == 0x000010, "Wrong alignment on UAnimSharingAdditiveInstance");
static_assert(sizeof(UAnimSharingAdditiveInstance) == 0x0002D0, "Wrong size on UAnimSharingAdditiveInstance");
static_assert(offsetof(UAnimSharingAdditiveInstance, BaseComponent) == 0x0002B8, "Member 'UAnimSharingAdditiveInstance::BaseComponent' has a wrong offset!");
static_assert(offsetof(UAnimSharingAdditiveInstance, AdditiveAnimation) == 0x0002C0, "Member 'UAnimSharingAdditiveInstance::AdditiveAnimation' has a wrong offset!");
static_assert(offsetof(UAnimSharingAdditiveInstance, Alpha) == 0x0002C8, "Member 'UAnimSharingAdditiveInstance::Alpha' has a wrong offset!");
static_assert(offsetof(UAnimSharingAdditiveInstance, bStateBool) == 0x0002CC, "Member 'UAnimSharingAdditiveInstance::bStateBool' has a wrong offset!");

// Class AnimationSharing.AnimSharingInstance
// 0x00F0 (0x0118 - 0x0028)
class UAnimSharingInstance final : public UObject
{
public:
	TArray<class AActor*>                         RegisteredActors;                                  // 0x0028(0x0010)(Edit, ZeroConstructor, Transient, EditConst, NativeAccessSpecifierPublic)
	uint8                                         Pad_1227[0x50];                                    // 0x0038(0x0050)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimationSharingStateProcessor*        StateProcessor;                                    // 0x0088(0x0008)(Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1228[0x38];                                    // 0x0090(0x0038)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UAnimSequence*>                  UsedAnimationSequences;                            // 0x00C8(0x0010)(Edit, ZeroConstructor, Transient, EditConst, NativeAccessSpecifierPublic)
	uint8                                         Pad_1229[0x10];                                    // 0x00D8(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	class UEnum*                                  StateEnum;                                         // 0x00E8(0x0008)(Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                 SharingActor;                                      // 0x00F0(0x0008)(Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_122A[0x20];                                    // 0x00F8(0x0020)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AnimSharingInstance">();
	}
	static class UAnimSharingInstance* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimSharingInstance>();
	}
};
static_assert(alignof(UAnimSharingInstance) == 0x000008, "Wrong alignment on UAnimSharingInstance");
static_assert(sizeof(UAnimSharingInstance) == 0x000118, "Wrong size on UAnimSharingInstance");
static_assert(offsetof(UAnimSharingInstance, RegisteredActors) == 0x000028, "Member 'UAnimSharingInstance::RegisteredActors' has a wrong offset!");
static_assert(offsetof(UAnimSharingInstance, StateProcessor) == 0x000088, "Member 'UAnimSharingInstance::StateProcessor' has a wrong offset!");
static_assert(offsetof(UAnimSharingInstance, UsedAnimationSequences) == 0x0000C8, "Member 'UAnimSharingInstance::UsedAnimationSequences' has a wrong offset!");
static_assert(offsetof(UAnimSharingInstance, StateEnum) == 0x0000E8, "Member 'UAnimSharingInstance::StateEnum' has a wrong offset!");
static_assert(offsetof(UAnimSharingInstance, SharingActor) == 0x0000F0, "Member 'UAnimSharingInstance::SharingActor' has a wrong offset!");

// Class AnimationSharing.AnimationSharingManager
// 0x0060 (0x0088 - 0x0028)
class UAnimationSharingManager final : public UObject
{
public:
	TArray<class USkeleton*>                      Skeletons;                                         // 0x0028(0x0010)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	TArray<class UAnimSharingInstance*>           PerSkeletonData;                                   // 0x0038(0x0010)(Edit, ZeroConstructor, Transient, EditConst, Protected, NativeAccessSpecifierProtected)
	uint8                                         Pad_122B[0x40];                                    // 0x0048(0x0040)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static bool AnimationSharingEnabled();
	static bool CreateAnimationSharingManager(class UObject* WorldContextObject, const class UAnimationSharingSetup* Setup);
	static class UAnimationSharingManager* GetAnimationSharingManager(class UObject* WorldContextObject);

	void RegisterActorWithSkeletonBP(class AActor* InActor, const class USkeleton* SharingSkeleton);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AnimationSharingManager">();
	}
	static class UAnimationSharingManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimationSharingManager>();
	}
};
static_assert(alignof(UAnimationSharingManager) == 0x000008, "Wrong alignment on UAnimationSharingManager");
static_assert(sizeof(UAnimationSharingManager) == 0x000088, "Wrong size on UAnimationSharingManager");
static_assert(offsetof(UAnimationSharingManager, Skeletons) == 0x000028, "Member 'UAnimationSharingManager::Skeletons' has a wrong offset!");
static_assert(offsetof(UAnimationSharingManager, PerSkeletonData) == 0x000038, "Member 'UAnimationSharingManager::PerSkeletonData' has a wrong offset!");

// Class AnimationSharing.AnimationSharingSetup
// 0x0020 (0x0048 - 0x0028)
class UAnimationSharingSetup final : public UObject
{
public:
	TArray<struct FPerSkeletonAnimationSharingSetup> SkeletonSetups;                                    // 0x0028(0x0010)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	struct FAnimationSharingScalability           ScalabilitySettings;                               // 0x0038(0x0010)(Edit, Config, NoDestructor, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AnimationSharingSetup">();
	}
	static class UAnimationSharingSetup* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimationSharingSetup>();
	}
};
static_assert(alignof(UAnimationSharingSetup) == 0x000008, "Wrong alignment on UAnimationSharingSetup");
static_assert(sizeof(UAnimationSharingSetup) == 0x000048, "Wrong size on UAnimationSharingSetup");
static_assert(offsetof(UAnimationSharingSetup, SkeletonSetups) == 0x000028, "Member 'UAnimationSharingSetup::SkeletonSetups' has a wrong offset!");
static_assert(offsetof(UAnimationSharingSetup, ScalabilitySettings) == 0x000038, "Member 'UAnimationSharingSetup::ScalabilitySettings' has a wrong offset!");

// Class AnimationSharing.AnimationSharingStateProcessor
// 0x0028 (0x0050 - 0x0028)
class UAnimationSharingStateProcessor final : public UObject
{
public:
	TSoftObjectPtr<class UEnum>                   AnimationStateEnum;                                // 0x0028(0x0028)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	class UEnum* GetAnimationStateEnum();
	void ProcessActorState(int32* OutState, class AActor* InActor, uint8 CurrentState, uint8 OnDemandState, bool* bShouldProcess);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AnimationSharingStateProcessor">();
	}
	static class UAnimationSharingStateProcessor* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimationSharingStateProcessor>();
	}
};
static_assert(alignof(UAnimationSharingStateProcessor) == 0x000008, "Wrong alignment on UAnimationSharingStateProcessor");
static_assert(sizeof(UAnimationSharingStateProcessor) == 0x000050, "Wrong size on UAnimationSharingStateProcessor");
static_assert(offsetof(UAnimationSharingStateProcessor, AnimationStateEnum) == 0x000028, "Member 'UAnimationSharingStateProcessor::AnimationStateEnum' has a wrong offset!");

}

