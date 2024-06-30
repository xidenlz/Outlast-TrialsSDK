#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ClothingSystemRuntimeNv

#include "Basic.hpp"


namespace SDK
{

// Enum ClothingSystemRuntimeNv.EClothingWindMethodNv
// NumValues: 0x0003
enum class EClothingWindMethodNv : uint8
{
	Legacy                                   = 0,
	Accurate                                 = 1,
	EClothingWindMethodNv_MAX                = 2,
};

// ScriptStruct ClothingSystemRuntimeNv.ClothConstraintSetupNv
// 0x0010 (0x0010 - 0x0000)
struct FClothConstraintSetupNv final
{
public:
	float                                         Stiffness;                                         // 0x0000(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         StiffnessMultiplier;                               // 0x0004(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         StretchLimit;                                      // 0x0008(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         CompressionLimit;                                  // 0x000C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FClothConstraintSetupNv) == 0x000004, "Wrong alignment on FClothConstraintSetupNv");
static_assert(sizeof(FClothConstraintSetupNv) == 0x000010, "Wrong size on FClothConstraintSetupNv");
static_assert(offsetof(FClothConstraintSetupNv, Stiffness) == 0x000000, "Member 'FClothConstraintSetupNv::Stiffness' has a wrong offset!");
static_assert(offsetof(FClothConstraintSetupNv, StiffnessMultiplier) == 0x000004, "Member 'FClothConstraintSetupNv::StiffnessMultiplier' has a wrong offset!");
static_assert(offsetof(FClothConstraintSetupNv, StretchLimit) == 0x000008, "Member 'FClothConstraintSetupNv::StretchLimit' has a wrong offset!");
static_assert(offsetof(FClothConstraintSetupNv, CompressionLimit) == 0x00000C, "Member 'FClothConstraintSetupNv::CompressionLimit' has a wrong offset!");

}

