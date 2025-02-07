#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CeilingFluorescentMinus03

#include "Basic.hpp"

#include "FluorescentLightSwitcherBaseMinus01_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass CeilingFluorescent-03.CeilingFluorescent-03_C
// 0x0010 (0x07B0 - 0x07A0)
class ACeilingFluorescentMinus03_C final : public AFluorescentLightSwitcherBaseMinus01_C
{
public:
	class URBVolumetricFogLightComponent*         RBVolumetricMiddle_FogLight;                       // 0x0798(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URBVolumetricFogLightComponent*         NewVar_0_0;                                        // 0x07A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CeilingFluorescent-03_C">();
	}
	static class ACeilingFluorescentMinus03_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ACeilingFluorescentMinus03_C>();
	}
};
static_assert(alignof(ACeilingFluorescentMinus03_C) == 0x000010, "Wrong alignment on ACeilingFluorescentMinus03_C");
static_assert(sizeof(ACeilingFluorescentMinus03_C) == 0x0007B0, "Wrong size on ACeilingFluorescentMinus03_C");
static_assert(offsetof(ACeilingFluorescentMinus03_C, RBVolumetricMiddle_FogLight) == 0x000798, "Member 'ACeilingFluorescentMinus03_C::RBVolumetricMiddle_FogLight' has a wrong offset!");
static_assert(offsetof(ACeilingFluorescentMinus03_C, NewVar_0_0) == 0x0007A0, "Member 'ACeilingFluorescentMinus03_C::NewVar_0_0' has a wrong offset!");

}

