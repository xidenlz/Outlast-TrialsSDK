#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CellCustomizationPropBase

#include "Basic.hpp"

#include "CellCustomizationPropBase_classes.hpp"
#include "CellCustomizationPropBase_parameters.hpp"


namespace SDK
{

// Function CellCustomizationPropBase.CellCustomizationPropBase_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ACellCustomizationPropBase_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CellCustomizationPropBase_C", "Initialize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CellCustomizationPropBase.CellCustomizationPropBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ACellCustomizationPropBase_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CellCustomizationPropBase_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CellCustomizationPropBase.CellCustomizationPropBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ACellCustomizationPropBase_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CellCustomizationPropBase_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CellCustomizationPropBase.CellCustomizationPropBase_C.ExecuteUbergraph_CellCustomizationPropBase
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACellCustomizationPropBase_C::ExecuteUbergraph_CellCustomizationPropBase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CellCustomizationPropBase_C", "ExecuteUbergraph_CellCustomizationPropBase");

	Params::CellCustomizationPropBase_C_ExecuteUbergraph_CellCustomizationPropBase Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

