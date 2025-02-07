#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AmbientActivity_AttachStaticmesh_AnimNotify

#include "Basic.hpp"

#include "AmbientActivity_AttachStaticmesh_AnimNotify_classes.hpp"
#include "AmbientActivity_AttachStaticmesh_AnimNotify_parameters.hpp"


namespace SDK
{

// Function AmbientActivity_AttachStaticmesh_AnimNotify.AmbientActivity_AttachStaticmesh_AnimNotify_C.Received_Notify
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*           MeshComp                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*                Animation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UAmbientActivity_AttachStaticmesh_AnimNotify_C::Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AmbientActivity_AttachStaticmesh_AnimNotify_C", "Received_Notify");

	Params::AmbientActivity_AttachStaticmesh_AnimNotify_C_Received_Notify Parms{};

	Parms.MeshComp = MeshComp;
	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function AmbientActivity_AttachStaticmesh_AnimNotify.AmbientActivity_AttachStaticmesh_AnimNotify_C.GetNotifyName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UAmbientActivity_AttachStaticmesh_AnimNotify_C::GetNotifyName() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AmbientActivity_AttachStaticmesh_AnimNotify_C", "GetNotifyName");

	Params::AmbientActivity_AttachStaticmesh_AnimNotify_C_GetNotifyName Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

