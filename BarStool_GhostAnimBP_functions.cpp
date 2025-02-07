#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BarStool_GhostAnimBP

#include "Basic.hpp"

#include "BarStool_GhostAnimBP_classes.hpp"
#include "BarStool_GhostAnimBP_parameters.hpp"


namespace SDK
{

// Function BarStool_GhostAnimBP.BarStool_GhostAnimBP_C.ExecuteUbergraph_BarStool_GhostAnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBarStool_GhostAnimBP_C::ExecuteUbergraph_BarStool_GhostAnimBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BarStool_GhostAnimBP_C", "ExecuteUbergraph_BarStool_GhostAnimBP");

	Params::BarStool_GhostAnimBP_C_ExecuteUbergraph_BarStool_GhostAnimBP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BarStool_GhostAnimBP.BarStool_GhostAnimBP_C.AnimNotify_LeftExit
// (BlueprintCallable, BlueprintEvent)

void UBarStool_GhostAnimBP_C::AnimNotify_LeftExit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BarStool_GhostAnimBP_C", "AnimNotify_LeftExit");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BarStool_GhostAnimBP.BarStool_GhostAnimBP_C.AnimNotify_EnteredIdle
// (BlueprintCallable, BlueprintEvent)

void UBarStool_GhostAnimBP_C::AnimNotify_EnteredIdle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BarStool_GhostAnimBP_C", "AnimNotify_EnteredIdle");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BarStool_GhostAnimBP.BarStool_GhostAnimBP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTimeX                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBarStool_GhostAnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BarStool_GhostAnimBP_C", "BlueprintUpdateAnimation");

	Params::BarStool_GhostAnimBP_C_BlueprintUpdateAnimation Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BarStool_GhostAnimBP.BarStool_GhostAnimBP_C.FinishGhost
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EGhostFinishReason                      FinishReason                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   GhostFinishCustomReason                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBarStool_GhostAnimBP_C::FinishGhost(EGhostFinishReason FinishReason, int32 GhostFinishCustomReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BarStool_GhostAnimBP_C", "FinishGhost");

	Params::BarStool_GhostAnimBP_C_FinishGhost Parms{};

	Parms.FinishReason = FinishReason;
	Parms.GhostFinishCustomReason = GhostFinishCustomReason;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BarStool_GhostAnimBP.BarStool_GhostAnimBP_C.ManageLookAt
// (Public, BlueprintCallable, BlueprintEvent)

void UBarStool_GhostAnimBP_C::ManageLookAt()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BarStool_GhostAnimBP_C", "ManageLookAt");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BarStool_GhostAnimBP.BarStool_GhostAnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        Param_AnimGraph                                        (Parm, OutParm, NoDestructor)

void UBarStool_GhostAnimBP_C::AnimGraph(struct FPoseLink* Param_AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BarStool_GhostAnimBP_C", "AnimGraph");

	Params::BarStool_GhostAnimBP_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_AnimGraph != nullptr)
		*Param_AnimGraph = std::move(Parms.Param_AnimGraph);
}

}

