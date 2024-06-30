#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ActiveEffectEntryWidget

#include "Basic.hpp"

#include "ActiveEffectEntryWidget_classes.hpp"
#include "ActiveEffectEntryWidget_parameters.hpp"


namespace SDK
{

// Function ActiveEffectEntryWidget.ActiveEffectEntryWidget_C.ExecuteUbergraph_ActiveEffectEntryWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UActiveEffectEntryWidget_C::ExecuteUbergraph_ActiveEffectEntryWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ActiveEffectEntryWidget_C", "ExecuteUbergraph_ActiveEffectEntryWidget");

	Params::ActiveEffectEntryWidget_C_ExecuteUbergraph_ActiveEffectEntryWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ActiveEffectEntryWidget.ActiveEffectEntryWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UActiveEffectEntryWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ActiveEffectEntryWidget_C", "Tick");

	Params::ActiveEffectEntryWidget_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ActiveEffectEntryWidget.ActiveEffectEntryWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UActiveEffectEntryWidget_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ActiveEffectEntryWidget_C", "PreConstruct");

	Params::ActiveEffectEntryWidget_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ActiveEffectEntryWidget.ActiveEffectEntryWidget_C.Setup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             Param_EffectId                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Param_UntilServerTime                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Param_DisplayValue                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UActiveEffectEntryWidget_C::Setup(class FName Param_EffectId, float Param_UntilServerTime, float Param_DisplayValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ActiveEffectEntryWidget_C", "Setup");

	Params::ActiveEffectEntryWidget_C_Setup Parms{};

	Parms.Param_EffectId = Param_EffectId;
	Parms.Param_UntilServerTime = Param_UntilServerTime;
	Parms.Param_DisplayValue = Param_DisplayValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ActiveEffectEntryWidget.ActiveEffectEntryWidget_C.UpdateText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UActiveEffectEntryWidget_C::UpdateText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ActiveEffectEntryWidget_C", "UpdateText");

	UObject::ProcessEvent(Func, nullptr);
}

}

