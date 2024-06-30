#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CharacterSheetBadgesTab

#include "Basic.hpp"

#include "CharacterSheetBadgesTab_classes.hpp"
#include "CharacterSheetBadgesTab_parameters.hpp"


namespace SDK
{

// Function CharacterSheetBadgesTab.CharacterSheetBadgesTab_C.HandleInputSourceChanged
// (Public, BlueprintCallable, BlueprintEvent)

void UCharacterSheetBadgesTab_C::HandleInputSourceChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterSheetBadgesTab_C", "HandleInputSourceChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CharacterSheetBadgesTab.CharacterSheetBadgesTab_C.Claim
// (Public, BlueprintCallable, BlueprintEvent)

void UCharacterSheetBadgesTab_C::Claim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterSheetBadgesTab_C", "Claim");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CharacterSheetBadgesTab.CharacterSheetBadgesTab_C.BuildBadgeRewards
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             RewardDataId                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bClaimable                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bUnlockedAtLeastOnce                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCharacterSheetBadgesTab_C::BuildBadgeRewards(class FName RewardDataId, bool bClaimable, bool bUnlockedAtLeastOnce)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterSheetBadgesTab_C", "BuildBadgeRewards");

	Params::CharacterSheetBadgesTab_C_BuildBadgeRewards Parms{};

	Parms.RewardDataId = RewardDataId;
	Parms.bClaimable = bClaimable;
	Parms.bUnlockedAtLeastOnce = bUnlockedAtLeastOnce;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CharacterSheetBadgesTab.CharacterSheetBadgesTab_C.SetupHoveredBadge
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UCharacterSheetBadgesTab_C::SetupHoveredBadge()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterSheetBadgesTab_C", "SetupHoveredBadge");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CharacterSheetBadgesTab.CharacterSheetBadgesTab_C.SetupSelectedBadge
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UCharacterSheetBadgesTab_C::SetupSelectedBadge()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterSheetBadgesTab_C", "SetupSelectedBadge");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CharacterSheetBadgesTab.CharacterSheetBadgesTab_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FFocusEvent                      InFocusEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UCharacterSheetBadgesTab_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterSheetBadgesTab_C", "OnFocusReceived");

	Params::CharacterSheetBadgesTab_C_OnFocusReceived Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InFocusEvent = std::move(InFocusEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function CharacterSheetBadgesTab.CharacterSheetBadgesTab_C.OnBadgeClicked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBadgeSashEntry_C*                badgeEntry                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharacterSheetBadgesTab_C::OnBadgeClicked(class UBadgeSashEntry_C* badgeEntry)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterSheetBadgesTab_C", "OnBadgeClicked");

	Params::CharacterSheetBadgesTab_C_OnBadgeClicked Parms{};

	Parms.badgeEntry = badgeEntry;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CharacterSheetBadgesTab.CharacterSheetBadgesTab_C.OnBadgeUnhovered
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBadgeSashEntry_C*                badgeEntry                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharacterSheetBadgesTab_C::OnBadgeUnhovered(class UBadgeSashEntry_C* badgeEntry)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterSheetBadgesTab_C", "OnBadgeUnhovered");

	Params::CharacterSheetBadgesTab_C_OnBadgeUnhovered Parms{};

	Parms.badgeEntry = badgeEntry;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CharacterSheetBadgesTab.CharacterSheetBadgesTab_C.OnBadgeHovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBadgeSashEntry_C*                badgeEntry                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharacterSheetBadgesTab_C::OnBadgeHovered(class UBadgeSashEntry_C* badgeEntry)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterSheetBadgesTab_C", "OnBadgeHovered");

	Params::CharacterSheetBadgesTab_C_OnBadgeHovered Parms{};

	Parms.badgeEntry = badgeEntry;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CharacterSheetBadgesTab.CharacterSheetBadgesTab_C.Refresh
// (Public, BlueprintCallable, BlueprintEvent)

void UCharacterSheetBadgesTab_C::Refresh()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterSheetBadgesTab_C", "Refresh");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CharacterSheetBadgesTab.CharacterSheetBadgesTab_C.Refresh Badges
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UCharacterSheetBadgesTab_C::Refresh_Badges()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterSheetBadgesTab_C", "Refresh Badges");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CharacterSheetBadgesTab.CharacterSheetBadgesTab_C.Event_Refresh
// (Event, Public, BlueprintEvent)

void UCharacterSheetBadgesTab_C::Event_Refresh()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterSheetBadgesTab_C", "Event_Refresh");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CharacterSheetBadgesTab.CharacterSheetBadgesTab_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCharacterSheetBadgesTab_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterSheetBadgesTab_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CharacterSheetBadgesTab.CharacterSheetBadgesTab_C.OnMenuInputSourceChanged
// (BlueprintCallable, BlueprintEvent)

void UCharacterSheetBadgesTab_C::OnMenuInputSourceChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterSheetBadgesTab_C", "OnMenuInputSourceChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CharacterSheetBadgesTab.CharacterSheetBadgesTab_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCharacterSheetBadgesTab_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterSheetBadgesTab_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CharacterSheetBadgesTab.CharacterSheetBadgesTab_C.Event_OnTabSelected
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UCharacterSheetBadgesTab_C::Event_OnTabSelected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterSheetBadgesTab_C", "Event_OnTabSelected");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CharacterSheetBadgesTab.CharacterSheetBadgesTab_C.BndEvt__CharacterSheetBadgesTab_ClaimRewardButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
// (BlueprintEvent)

void UCharacterSheetBadgesTab_C::BndEvt__CharacterSheetBadgesTab_ClaimRewardButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterSheetBadgesTab_C", "BndEvt__CharacterSheetBadgesTab_ClaimRewardButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CharacterSheetBadgesTab.CharacterSheetBadgesTab_C.ExecuteUbergraph_CharacterSheetBadgesTab
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharacterSheetBadgesTab_C::ExecuteUbergraph_CharacterSheetBadgesTab(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterSheetBadgesTab_C", "ExecuteUbergraph_CharacterSheetBadgesTab");

	Params::CharacterSheetBadgesTab_C_ExecuteUbergraph_CharacterSheetBadgesTab Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CharacterSheetBadgesTab.CharacterSheetBadgesTab_C.GetPageTitle
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UCharacterSheetBadgesTab_C::GetPageTitle() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterSheetBadgesTab_C", "GetPageTitle");

	Params::CharacterSheetBadgesTab_C_GetPageTitle Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

