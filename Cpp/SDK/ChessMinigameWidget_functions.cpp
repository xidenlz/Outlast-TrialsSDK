#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ChessMinigameWidget

#include "Basic.hpp"

#include "ChessMinigameWidget_classes.hpp"
#include "ChessMinigameWidget_parameters.hpp"


namespace SDK
{

// Function ChessMinigameWidget.ChessMinigameWidget_C.ExecuteUbergraph_ChessMinigameWidget
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChessMinigameWidget_C::ExecuteUbergraph_ChessMinigameWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChessMinigameWidget_C", "ExecuteUbergraph_ChessMinigameWidget");

	Params::ChessMinigameWidget_C_ExecuteUbergraph_ChessMinigameWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChessMinigameWidget.ChessMinigameWidget_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UChessMinigameWidget_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChessMinigameWidget_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChessMinigameWidget.ChessMinigameWidget_C.UnbindEvents
// (BlueprintCallable, BlueprintEvent)

void UChessMinigameWidget_C::UnbindEvents()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChessMinigameWidget_C", "UnbindEvents");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChessMinigameWidget.ChessMinigameWidget_C.BindEvents
// (BlueprintCallable, BlueprintEvent)

void UChessMinigameWidget_C::BindEvents()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChessMinigameWidget_C", "BindEvents");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChessMinigameWidget.ChessMinigameWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UChessMinigameWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChessMinigameWidget_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChessMinigameWidget.ChessMinigameWidget_C.Init
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ARBChessBoardBase_C*              Param_ChessBoard                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URBChessBoardPanelComponent*      Param_LocalPanel                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChessMinigameWidget_C::Init(class ARBChessBoardBase_C* Param_ChessBoard, class URBChessBoardPanelComponent* Param_LocalPanel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChessMinigameWidget_C", "Init");

	Params::ChessMinigameWidget_C_Init Parms{};

	Parms.Param_ChessBoard = Param_ChessBoard;
	Parms.Param_LocalPanel = Param_LocalPanel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChessMinigameWidget.ChessMinigameWidget_C.OnChessGameStateChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EChessGameState                         ChessGameState                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChessMinigameWidget_C::OnChessGameStateChanged(EChessGameState ChessGameState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChessMinigameWidget_C", "OnChessGameStateChanged");

	Params::ChessMinigameWidget_C_OnChessGameStateChanged Parms{};

	Parms.ChessGameState = ChessGameState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChessMinigameWidget.ChessMinigameWidget_C.GetLocalTeamTime
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UChessMinigameWidget_C::GetLocalTeamTime()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChessMinigameWidget_C", "GetLocalTeamTime");

	Params::ChessMinigameWidget_C_GetLocalTeamTime Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function ChessMinigameWidget.ChessMinigameWidget_C.GetOpposingTeamTime
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UChessMinigameWidget_C::GetOpposingTeamTime()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChessMinigameWidget_C", "GetOpposingTeamTime");

	Params::ChessMinigameWidget_C_GetOpposingTeamTime Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function ChessMinigameWidget.ChessMinigameWidget_C.Play Intro
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UChessMinigameWidget_C::Play_Intro()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChessMinigameWidget_C", "Play Intro");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChessMinigameWidget.ChessMinigameWidget_C.PlayStartGame
// (Public, BlueprintCallable, BlueprintEvent)

void UChessMinigameWidget_C::PlayStartGame()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChessMinigameWidget_C", "PlayStartGame");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChessMinigameWidget.ChessMinigameWidget_C.PlayOuttro
// (Public, BlueprintCallable, BlueprintEvent)

void UChessMinigameWidget_C::PlayOuttro()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChessMinigameWidget_C", "PlayOuttro");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChessMinigameWidget.ChessMinigameWidget_C.ResetGame
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UChessMinigameWidget_C::ResetGame()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChessMinigameWidget_C", "ResetGame");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChessMinigameWidget.ChessMinigameWidget_C.ChessGameTeamTurnChanged
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EChessTeam                              Team                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChessMinigameWidget_C::ChessGameTeamTurnChanged(EChessTeam Team)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChessMinigameWidget_C", "ChessGameTeamTurnChanged");

	Params::ChessMinigameWidget_C_ChessGameTeamTurnChanged Parms{};

	Parms.Team = Team;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChessMinigameWidget.ChessMinigameWidget_C.OnChessEndReasonChanged
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EChessGameEndReason                     ChessGameEndReason                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EChessTeam                              WinningTeam                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChessMinigameWidget_C::OnChessEndReasonChanged(EChessGameEndReason ChessGameEndReason, EChessTeam WinningTeam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChessMinigameWidget_C", "OnChessEndReasonChanged");

	Params::ChessMinigameWidget_C_OnChessEndReasonChanged Parms{};

	Parms.ChessGameEndReason = ChessGameEndReason;
	Parms.WinningTeam = WinningTeam;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChessMinigameWidget.ChessMinigameWidget_C.OnPlayerConnectionEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ARBPlayer*                        Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChessMinigameWidget_C::OnPlayerConnectionEvent(class ARBPlayer* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChessMinigameWidget_C", "OnPlayerConnectionEvent");

	Params::ChessMinigameWidget_C_OnPlayerConnectionEvent Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChessMinigameWidget.ChessMinigameWidget_C.SetupPlayerNames
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UChessMinigameWidget_C::SetupPlayerNames()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChessMinigameWidget_C", "SetupPlayerNames");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChessMinigameWidget.ChessMinigameWidget_C.GetCroppedName
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                           Param_Name                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                                   MaxChars                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UChessMinigameWidget_C::GetCroppedName(const class FString& Param_Name, int32 MaxChars)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChessMinigameWidget_C", "GetCroppedName");

	Params::ChessMinigameWidget_C_GetCroppedName Parms{};

	Parms.Param_Name = std::move(Param_Name);
	Parms.MaxChars = MaxChars;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function ChessMinigameWidget.ChessMinigameWidget_C.SetBindLocalPanel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bBind                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UChessMinigameWidget_C::SetBindLocalPanel(bool bBind)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChessMinigameWidget_C", "SetBindLocalPanel");

	Params::ChessMinigameWidget_C_SetBindLocalPanel Parms{};

	Parms.bBind = bBind;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChessMinigameWidget.ChessMinigameWidget_C.OnExitingChange
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bExiting                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   StartExitTimestamp                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChessMinigameWidget_C::OnExitingChange(bool bExiting, float StartExitTimestamp)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChessMinigameWidget_C", "OnExitingChange");

	Params::ChessMinigameWidget_C_OnExitingChange Parms{};

	Parms.bExiting = bExiting;
	Parms.StartExitTimestamp = StartExitTimestamp;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChessMinigameWidget.ChessMinigameWidget_C.GetExitingPercent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UChessMinigameWidget_C::GetExitingPercent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChessMinigameWidget_C", "GetExitingPercent");

	Params::ChessMinigameWidget_C_GetExitingPercent Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function ChessMinigameWidget.ChessMinigameWidget_C.Get_MatchCountdownText_Text_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UChessMinigameWidget_C::Get_MatchCountdownText_Text_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChessMinigameWidget_C", "Get_MatchCountdownText_Text_0");

	Params::ChessMinigameWidget_C_Get_MatchCountdownText_Text_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function ChessMinigameWidget.ChessMinigameWidget_C.Get_WaitingForPlayer_TXT_1_Text_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UChessMinigameWidget_C::Get_WaitingForPlayer_TXT_1_Text_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChessMinigameWidget_C", "Get_WaitingForPlayer_TXT_1_Text_0");

	Params::ChessMinigameWidget_C_Get_WaitingForPlayer_TXT_1_Text_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function ChessMinigameWidget.ChessMinigameWidget_C.RefreshPlayersRating
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UChessMinigameWidget_C::RefreshPlayersRating()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChessMinigameWidget_C", "RefreshPlayersRating");

	UObject::ProcessEvent(Func, nullptr);
}

}

