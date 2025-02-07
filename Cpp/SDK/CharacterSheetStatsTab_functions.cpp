#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CharacterSheetStatsTab

#include "Basic.hpp"

#include "CharacterSheetStatsTab_classes.hpp"
#include "CharacterSheetStatsTab_parameters.hpp"


namespace SDK
{

// Function CharacterSheetStatsTab.CharacterSheetStatsTab_C.BuildRecentTrialArray
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UCharacterSheetStatsTab_C::BuildRecentTrialArray()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterSheetStatsTab_C", "BuildRecentTrialArray");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CharacterSheetStatsTab.CharacterSheetStatsTab_C.Setup Score Lines
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   TrialSeed                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FRecordedScoringEvent>    ScoringEvents                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UCharacterSheetStatsTab_C::Setup_Score_Lines(int32 TrialSeed, TArray<struct FRecordedScoringEvent>& ScoringEvents)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterSheetStatsTab_C", "Setup Score Lines");

	Params::CharacterSheetStatsTab_C_Setup_Score_Lines Parms{};

	Parms.TrialSeed = TrialSeed;
	Parms.ScoringEvents = std::move(ScoringEvents);

	UObject::ProcessEvent(Func, &Parms);

	ScoringEvents = std::move(Parms.ScoringEvents);
}


// Function CharacterSheetStatsTab.CharacterSheetStatsTab_C.SetupVariators
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UHorizontalBox*                   TargetHBox                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             TrialId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharacterSheetStatsTab_C::SetupVariators(class UHorizontalBox* TargetHBox, class FName TrialId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterSheetStatsTab_C", "SetupVariators");

	Params::CharacterSheetStatsTab_C_SetupVariators Parms{};

	Parms.TargetHBox = TargetHBox;
	Parms.TrialId = TrialId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CharacterSheetStatsTab.CharacterSheetStatsTab_C.SetupTrialResults
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UCharacterSheetStatsTab_C::SetupTrialResults()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterSheetStatsTab_C", "SetupTrialResults");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CharacterSheetStatsTab.CharacterSheetStatsTab_C.SetPage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NewPageIndex                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharacterSheetStatsTab_C::SetPage(int32 NewPageIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterSheetStatsTab_C", "SetPage");

	Params::CharacterSheetStatsTab_C_SetPage Parms{};

	Parms.NewPageIndex = NewPageIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CharacterSheetStatsTab.CharacterSheetStatsTab_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FFocusEvent                      InFocusEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UCharacterSheetStatsTab_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterSheetStatsTab_C", "OnFocusReceived");

	Params::CharacterSheetStatsTab_C_OnFocusReceived Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InFocusEvent = std::move(InFocusEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function CharacterSheetStatsTab.CharacterSheetStatsTab_C.NextPage
// (Public, BlueprintCallable, BlueprintEvent)

void UCharacterSheetStatsTab_C::NextPage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterSheetStatsTab_C", "NextPage");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CharacterSheetStatsTab.CharacterSheetStatsTab_C.PreviousPage
// (Public, BlueprintCallable, BlueprintEvent)

void UCharacterSheetStatsTab_C::PreviousPage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterSheetStatsTab_C", "PreviousPage");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CharacterSheetStatsTab.CharacterSheetStatsTab_C.UpdateGamepadPageNav
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UCharacterSheetStatsTab_C::UpdateGamepadPageNav()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterSheetStatsTab_C", "UpdateGamepadPageNav");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CharacterSheetStatsTab.CharacterSheetStatsTab_C.Refresh
// (Public, BlueprintCallable, BlueprintEvent)

void UCharacterSheetStatsTab_C::Refresh()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterSheetStatsTab_C", "Refresh");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CharacterSheetStatsTab.CharacterSheetStatsTab_C.RefreshLevel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UCharacterSheetStatsTab_C::RefreshLevel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterSheetStatsTab_C", "RefreshLevel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CharacterSheetStatsTab.CharacterSheetStatsTab_C.RefreshStats
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UCharacterSheetStatsTab_C::RefreshStats()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterSheetStatsTab_C", "RefreshStats");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CharacterSheetStatsTab.CharacterSheetStatsTab_C.Event_Refresh
// (Event, Public, BlueprintEvent)

void UCharacterSheetStatsTab_C::Event_Refresh()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterSheetStatsTab_C", "Event_Refresh");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CharacterSheetStatsTab.CharacterSheetStatsTab_C.BndEvt__PreviousPageButton_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UCharacterSheetStatsTab_C::BndEvt__PreviousPageButton_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterSheetStatsTab_C", "BndEvt__PreviousPageButton_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CharacterSheetStatsTab.CharacterSheetStatsTab_C.BndEvt__NextPageButton_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UCharacterSheetStatsTab_C::BndEvt__NextPageButton_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterSheetStatsTab_C", "BndEvt__NextPageButton_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CharacterSheetStatsTab.CharacterSheetStatsTab_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCharacterSheetStatsTab_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterSheetStatsTab_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CharacterSheetStatsTab.CharacterSheetStatsTab_C.OnMenuInputSourceChanged
// (BlueprintCallable, BlueprintEvent)

void UCharacterSheetStatsTab_C::OnMenuInputSourceChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterSheetStatsTab_C", "OnMenuInputSourceChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CharacterSheetStatsTab.CharacterSheetStatsTab_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCharacterSheetStatsTab_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterSheetStatsTab_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CharacterSheetStatsTab.CharacterSheetStatsTab_C.OnGamepadPageLeft
// (BlueprintCallable, BlueprintEvent)

void UCharacterSheetStatsTab_C::OnGamepadPageLeft()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterSheetStatsTab_C", "OnGamepadPageLeft");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CharacterSheetStatsTab.CharacterSheetStatsTab_C.OnGamepadPageRight
// (BlueprintCallable, BlueprintEvent)

void UCharacterSheetStatsTab_C::OnGamepadPageRight()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterSheetStatsTab_C", "OnGamepadPageRight");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CharacterSheetStatsTab.CharacterSheetStatsTab_C.Event_OnTabSelected
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UCharacterSheetStatsTab_C::Event_OnTabSelected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterSheetStatsTab_C", "Event_OnTabSelected");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CharacterSheetStatsTab.CharacterSheetStatsTab_C.Event_OnTabUnselected
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UCharacterSheetStatsTab_C::Event_OnTabUnselected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterSheetStatsTab_C", "Event_OnTabUnselected");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CharacterSheetStatsTab.CharacterSheetStatsTab_C.ExecuteUbergraph_CharacterSheetStatsTab
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharacterSheetStatsTab_C::ExecuteUbergraph_CharacterSheetStatsTab(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterSheetStatsTab_C", "ExecuteUbergraph_CharacterSheetStatsTab");

	Params::CharacterSheetStatsTab_C_ExecuteUbergraph_CharacterSheetStatsTab Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CharacterSheetStatsTab.CharacterSheetStatsTab_C.GetPageTitle
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UCharacterSheetStatsTab_C::GetPageTitle() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterSheetStatsTab_C", "GetPageTitle");

	Params::CharacterSheetStatsTab_C_GetPageTitle Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

