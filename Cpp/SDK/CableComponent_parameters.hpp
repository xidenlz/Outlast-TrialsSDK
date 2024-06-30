#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CableComponent

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function CableComponent.CableComponent.SetAttachEndTo
// 0x0018 (0x0018 - 0x0000)
struct CableComponent_SetAttachEndTo final
{
public:
	class AActor*                                 Actor;                                             // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   ComponentProperty;                                 // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   SocketName;                                        // 0x0010(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(CableComponent_SetAttachEndTo) == 0x000008, "Wrong alignment on CableComponent_SetAttachEndTo");
static_assert(sizeof(CableComponent_SetAttachEndTo) == 0x000018, "Wrong size on CableComponent_SetAttachEndTo");
static_assert(offsetof(CableComponent_SetAttachEndTo, Actor) == 0x000000, "Member 'CableComponent_SetAttachEndTo::Actor' has a wrong offset!");
static_assert(offsetof(CableComponent_SetAttachEndTo, ComponentProperty) == 0x000008, "Member 'CableComponent_SetAttachEndTo::ComponentProperty' has a wrong offset!");
static_assert(offsetof(CableComponent_SetAttachEndTo, SocketName) == 0x000010, "Member 'CableComponent_SetAttachEndTo::SocketName' has a wrong offset!");

// Function CableComponent.CableComponent.SetAttachEndToComponent
// 0x0010 (0x0010 - 0x0000)
struct CableComponent_SetAttachEndToComponent final
{
public:
	class USceneComponent*                        Component;                                         // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   SocketName;                                        // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(CableComponent_SetAttachEndToComponent) == 0x000008, "Wrong alignment on CableComponent_SetAttachEndToComponent");
static_assert(sizeof(CableComponent_SetAttachEndToComponent) == 0x000010, "Wrong size on CableComponent_SetAttachEndToComponent");
static_assert(offsetof(CableComponent_SetAttachEndToComponent, Component) == 0x000000, "Member 'CableComponent_SetAttachEndToComponent::Component' has a wrong offset!");
static_assert(offsetof(CableComponent_SetAttachEndToComponent, SocketName) == 0x000008, "Member 'CableComponent_SetAttachEndToComponent::SocketName' has a wrong offset!");

// Function CableComponent.CableComponent.GetAttachedActor
// 0x0008 (0x0008 - 0x0000)
struct CableComponent_GetAttachedActor final
{
public:
	class AActor*                                 ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(CableComponent_GetAttachedActor) == 0x000008, "Wrong alignment on CableComponent_GetAttachedActor");
static_assert(sizeof(CableComponent_GetAttachedActor) == 0x000008, "Wrong size on CableComponent_GetAttachedActor");
static_assert(offsetof(CableComponent_GetAttachedActor, ReturnValue) == 0x000000, "Member 'CableComponent_GetAttachedActor::ReturnValue' has a wrong offset!");

// Function CableComponent.CableComponent.GetAttachedComponent
// 0x0008 (0x0008 - 0x0000)
struct CableComponent_GetAttachedComponent final
{
public:
	class USceneComponent*                        ReturnValue;                                       // 0x0000(0x0008)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(CableComponent_GetAttachedComponent) == 0x000008, "Wrong alignment on CableComponent_GetAttachedComponent");
static_assert(sizeof(CableComponent_GetAttachedComponent) == 0x000008, "Wrong size on CableComponent_GetAttachedComponent");
static_assert(offsetof(CableComponent_GetAttachedComponent, ReturnValue) == 0x000000, "Member 'CableComponent_GetAttachedComponent::ReturnValue' has a wrong offset!");

// Function CableComponent.CableComponent.GetCableParticleLocations
// 0x0010 (0x0010 - 0x0000)
struct CableComponent_GetCableParticleLocations final
{
public:
	TArray<struct FVector>                        Locations;                                         // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(CableComponent_GetCableParticleLocations) == 0x000008, "Wrong alignment on CableComponent_GetCableParticleLocations");
static_assert(sizeof(CableComponent_GetCableParticleLocations) == 0x000010, "Wrong size on CableComponent_GetCableParticleLocations");
static_assert(offsetof(CableComponent_GetCableParticleLocations, Locations) == 0x000000, "Member 'CableComponent_GetCableParticleLocations::Locations' has a wrong offset!");

}

