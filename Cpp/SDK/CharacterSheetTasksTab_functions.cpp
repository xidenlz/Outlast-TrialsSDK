#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CharacterSheetTasksTab

#include "Basic.hpp"

#include "CharacterSheetTasksTab_classes.hpp"
#include "CharacterSheetTasksTab_parameters.hpp"


namespace SDK
{

// Function CharacterSheetTasksTab.CharacterSheetTasksTab_C.Event_OnTabSelected
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UCharacterSheetTasksTab_C::Event_OnTabSelected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterSheetTasksTab_C", "Event_OnTabSelected");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CharacterSheetTasksTab.CharacterSheetTasksTab_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FFocusEvent                      InFocusEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UCharacterSheetTasksTab_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterSheetTasksTab_C", "OnFocusReceived");

	Params::CharacterSheetTasksTab_C_OnFocusReceived Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InFocusEvent = std::move(InFocusEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function CharacterSheetTasksTab.CharacterSheetTasksTab_C.GetPageTitle
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UCharacterSheetTasksTab_C::GetPageTitle() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterSheetTasksTab_C", "GetPageTitle");

	Params::CharacterSheetTasksTab_C_GetPageTitle Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

