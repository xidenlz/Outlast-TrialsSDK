#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Base_NonPickable_RBPickup_BP

#include "Basic.hpp"

#include "OPP_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Base_NonPickable_RBPickup_BP.Base_NonPickable_RBPickup_BP_C
// 0x0010 (0x0A20 - 0x0A10)
#pragma pack(push, 0x1)
class alignas(0x10) ABase_NonPickable_RBPickup_BP_C : public ARBPickup
{
public:
	class UStaticMeshComponent*                   GasCanisterMesh;                                   // 0x0A10(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Base_NonPickable_RBPickup_BP_C">();
	}
	static class ABase_NonPickable_RBPickup_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABase_NonPickable_RBPickup_BP_C>();
	}
};
#pragma pack(pop)
static_assert(alignof(ABase_NonPickable_RBPickup_BP_C) == 0x000010, "Wrong alignment on ABase_NonPickable_RBPickup_BP_C");
static_assert(sizeof(ABase_NonPickable_RBPickup_BP_C) == 0x000A20, "Wrong size on ABase_NonPickable_RBPickup_BP_C");
static_assert(offsetof(ABase_NonPickable_RBPickup_BP_C, GasCanisterMesh) == 0x000A10, "Member 'ABase_NonPickable_RBPickup_BP_C::GasCanisterMesh' has a wrong offset!");

}

