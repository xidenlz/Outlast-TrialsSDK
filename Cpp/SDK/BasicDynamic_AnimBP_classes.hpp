#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BasicDynamic_AnimBP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "AnimGraphRuntime_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass BasicDynamic_AnimBP.BasicDynamic_AnimBP_C
// 0x0820 (0x0AE0 - 0x02C0)
class UBasicDynamic_AnimBP_C final : public UAnimInstance
{
public:
	uint8                                         Pad_2B0D[0x8];                                     // 0x02B8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x02C8(0x0030)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_SubInput;                            // 0x02F8(0x0118)()
	struct FAnimNode_BoneDrivenController         AnimGraphNode_BoneDrivenController_5;              // 0x0410(0x0118)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x0528(0x0020)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x0548(0x0020)()
	struct FAnimNode_BoneDrivenController         AnimGraphNode_BoneDrivenController_4;              // 0x0568(0x0118)()
	struct FAnimNode_BoneDrivenController         AnimGraphNode_BoneDrivenController_3;              // 0x0680(0x0118)()
	struct FAnimNode_BoneDrivenController         AnimGraphNode_BoneDrivenController_2;              // 0x0798(0x0118)()
	struct FAnimNode_BoneDrivenController         AnimGraphNode_BoneDrivenController_1;              // 0x08B0(0x0118)()
	struct FAnimNode_BoneDrivenController         AnimGraphNode_BoneDrivenController;                // 0x09C8(0x0118)()

public:
	void ExecuteUbergraph_BasicDynamic_AnimBP(int32 EntryPoint);
	void AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* Param_AnimGraph);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BasicDynamic_AnimBP_C">();
	}
	static class UBasicDynamic_AnimBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBasicDynamic_AnimBP_C>();
	}
};
static_assert(alignof(UBasicDynamic_AnimBP_C) == 0x000010, "Wrong alignment on UBasicDynamic_AnimBP_C");
static_assert(sizeof(UBasicDynamic_AnimBP_C) == 0x000AE0, "Wrong size on UBasicDynamic_AnimBP_C");
static_assert(offsetof(UBasicDynamic_AnimBP_C, UberGraphFrame) == 0x0002C0, "Member 'UBasicDynamic_AnimBP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBasicDynamic_AnimBP_C, AnimGraphNode_Root) == 0x0002C8, "Member 'UBasicDynamic_AnimBP_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UBasicDynamic_AnimBP_C, AnimGraphNode_SubInput) == 0x0002F8, "Member 'UBasicDynamic_AnimBP_C::AnimGraphNode_SubInput' has a wrong offset!");
static_assert(offsetof(UBasicDynamic_AnimBP_C, AnimGraphNode_BoneDrivenController_5) == 0x000410, "Member 'UBasicDynamic_AnimBP_C::AnimGraphNode_BoneDrivenController_5' has a wrong offset!");
static_assert(offsetof(UBasicDynamic_AnimBP_C, AnimGraphNode_LocalToComponentSpace) == 0x000528, "Member 'UBasicDynamic_AnimBP_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(UBasicDynamic_AnimBP_C, AnimGraphNode_ComponentToLocalSpace) == 0x000548, "Member 'UBasicDynamic_AnimBP_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(UBasicDynamic_AnimBP_C, AnimGraphNode_BoneDrivenController_4) == 0x000568, "Member 'UBasicDynamic_AnimBP_C::AnimGraphNode_BoneDrivenController_4' has a wrong offset!");
static_assert(offsetof(UBasicDynamic_AnimBP_C, AnimGraphNode_BoneDrivenController_3) == 0x000680, "Member 'UBasicDynamic_AnimBP_C::AnimGraphNode_BoneDrivenController_3' has a wrong offset!");
static_assert(offsetof(UBasicDynamic_AnimBP_C, AnimGraphNode_BoneDrivenController_2) == 0x000798, "Member 'UBasicDynamic_AnimBP_C::AnimGraphNode_BoneDrivenController_2' has a wrong offset!");
static_assert(offsetof(UBasicDynamic_AnimBP_C, AnimGraphNode_BoneDrivenController_1) == 0x0008B0, "Member 'UBasicDynamic_AnimBP_C::AnimGraphNode_BoneDrivenController_1' has a wrong offset!");
static_assert(offsetof(UBasicDynamic_AnimBP_C, AnimGraphNode_BoneDrivenController) == 0x0009C8, "Member 'UBasicDynamic_AnimBP_C::AnimGraphNode_BoneDrivenController' has a wrong offset!");

}

