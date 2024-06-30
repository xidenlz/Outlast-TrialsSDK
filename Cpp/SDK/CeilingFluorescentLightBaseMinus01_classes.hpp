#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CeilingFluorescentLightBaseMinus01

#include "Basic.hpp"

#include "RBLight_BP_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass CeilingFluorescentLightBase-01.CeilingFluorescentLightBase-01_C
// 0x0020 (0x0770 - 0x0750)
#pragma pack(push, 0x1)
class alignas(0x10) ACeilingFluorescentLightBaseMinus01_C : public ARBLight_BP_C
{
public:
	class URBVolumetricFogLightComponent*         RBVolumetricFogLight;                              // 0x0750(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                    SpotLight_Static;                                  // 0x0758(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                    SpotLight_Movable;                                 // 0x0760(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CeilingFluorescentLightBase-01_C">();
	}
	static class ACeilingFluorescentLightBaseMinus01_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ACeilingFluorescentLightBaseMinus01_C>();
	}
};
#pragma pack(pop)
static_assert(alignof(ACeilingFluorescentLightBaseMinus01_C) == 0x000010, "Wrong alignment on ACeilingFluorescentLightBaseMinus01_C");
static_assert(sizeof(ACeilingFluorescentLightBaseMinus01_C) == 0x000770, "Wrong size on ACeilingFluorescentLightBaseMinus01_C");
static_assert(offsetof(ACeilingFluorescentLightBaseMinus01_C, RBVolumetricFogLight) == 0x000750, "Member 'ACeilingFluorescentLightBaseMinus01_C::RBVolumetricFogLight' has a wrong offset!");
static_assert(offsetof(ACeilingFluorescentLightBaseMinus01_C, SpotLight_Static) == 0x000758, "Member 'ACeilingFluorescentLightBaseMinus01_C::SpotLight_Static' has a wrong offset!");
static_assert(offsetof(ACeilingFluorescentLightBaseMinus01_C, SpotLight_Movable) == 0x000760, "Member 'ACeilingFluorescentLightBaseMinus01_C::SpotLight_Movable' has a wrong offset!");

}

