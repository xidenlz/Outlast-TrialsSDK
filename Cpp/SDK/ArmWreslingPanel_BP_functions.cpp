#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ArmWreslingPanel_BP

#include "Basic.hpp"

#include "ArmWreslingPanel_BP_classes.hpp"
#include "ArmWreslingPanel_BP_parameters.hpp"


namespace SDK
{

// Function ArmWreslingPanel_BP.ArmWreslingPanel_BP_C.ExecuteUbergraph_ArmWreslingPanel_BP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AArmWreslingPanel_BP_C::ExecuteUbergraph_ArmWreslingPanel_BP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ArmWreslingPanel_BP_C", "ExecuteUbergraph_ArmWreslingPanel_BP");

	Params::ArmWreslingPanel_BP_C_ExecuteUbergraph_ArmWreslingPanel_BP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ArmWreslingPanel_BP.ArmWreslingPanel_BP_C.CustomEvent_0
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FArmWreslingPlayerRoundData      PlayerRoundData                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void AArmWreslingPanel_BP_C::CustomEvent_0(const struct FArmWreslingPlayerRoundData& PlayerRoundData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ArmWreslingPanel_BP_C", "CustomEvent_0");

	Params::ArmWreslingPanel_BP_C_CustomEvent_0 Parms{};

	Parms.PlayerRoundData = std::move(PlayerRoundData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ArmWreslingPanel_BP.ArmWreslingPanel_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AArmWreslingPanel_BP_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ArmWreslingPanel_BP_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ArmWreslingPanel_BP.ArmWreslingPanel_BP_C.BndEvt__ArmWreslingPanel_BP_ArmWreslingPanelComponent_BP_K2Node_ComponentBoundEvent_0_ArmWreslingPanelTauntEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class ARBPlayer*                        Pawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AArmWreslingPanel_BP_C::BndEvt__ArmWreslingPanel_BP_ArmWreslingPanelComponent_BP_K2Node_ComponentBoundEvent_0_ArmWreslingPanelTauntEvent__DelegateSignature(class ARBPlayer* Pawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ArmWreslingPanel_BP_C", "BndEvt__ArmWreslingPanel_BP_ArmWreslingPanelComponent_BP_K2Node_ComponentBoundEvent_0_ArmWreslingPanelTauntEvent__DelegateSignature");

	Params::ArmWreslingPanel_BP_C_BndEvt__ArmWreslingPanel_BP_ArmWreslingPanelComponent_BP_K2Node_ComponentBoundEvent_0_ArmWreslingPanelTauntEvent__DelegateSignature Parms{};

	Parms.Pawn = Pawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ArmWreslingPanel_BP.ArmWreslingPanel_BP_C.BndEvt__ArmWreslingPanelComponent_BP_K2Node_ComponentBoundEvent_8_OnPanelEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class URBInteractiblePanelComponent*    Panel                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ARBPawn*                          PawnInteracting                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AArmWreslingPanel_BP_C::BndEvt__ArmWreslingPanelComponent_BP_K2Node_ComponentBoundEvent_8_OnPanelEvent__DelegateSignature(class URBInteractiblePanelComponent* Panel, class ARBPawn* PawnInteracting)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ArmWreslingPanel_BP_C", "BndEvt__ArmWreslingPanelComponent_BP_K2Node_ComponentBoundEvent_8_OnPanelEvent__DelegateSignature");

	Params::ArmWreslingPanel_BP_C_BndEvt__ArmWreslingPanelComponent_BP_K2Node_ComponentBoundEvent_8_OnPanelEvent__DelegateSignature Parms{};

	Parms.Panel = Panel;
	Parms.PawnInteracting = PawnInteracting;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ArmWreslingPanel_BP.ArmWreslingPanel_BP_C.ShowHUD
// (Public, BlueprintCallable, BlueprintEvent)

void AArmWreslingPanel_BP_C::ShowHUD()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ArmWreslingPanel_BP_C", "ShowHUD");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ArmWreslingPanel_BP.ArmWreslingPanel_BP_C.TryHideHud
// (Public, BlueprintCallable, BlueprintEvent)

void AArmWreslingPanel_BP_C::TryHideHud()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ArmWreslingPanel_BP_C", "TryHideHud");

	UObject::ProcessEvent(Func, nullptr);
}

}

