#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ArmWrestlingMinigameWidget

#include "Basic.hpp"

#include "AkAudio_structs.hpp"
#include "OPP_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ArmWrestlingMinigameWidget.ArmWrestlingMinigameWidget_C
// 0x0368 (0x05C8 - 0x0260)
class UArmWrestlingMinigameWidget_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       GameTiedAnimation;                                 // 0x0268(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       FadeInIntro;                                       // 0x0270(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       BadHit;                                            // 0x0278(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Hit;                                               // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       DisplayWinner;                                     // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       FlashOutline;                                      // 0x0290(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Failure;                                           // 0x0298(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       FadeInStaminas;                                    // 0x02A0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UArmWrestling_WinFeedbackWidget_C*      ArmWrestling_WinFeedbackWidget;                    // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UArmWrestling_WinFeedbackWidget_C*      ArmWrestling_WinFeedbackWidget_1;                  // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UArmWrestling_WinFeedbackWidget_C*      ArmWrestling_WinFeedbackWidget_2;                  // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UArmWrestling_WinFeedbackWidget_C*      ArmWrestling_WinFeedbackWidget_3;                  // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UArmWrestling_WinFeedbackWidget_C*      ArmWrestling_WinFeedbackWidget_4;                  // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UArmWrestling_WinFeedbackWidget_C*      ArmWrestling_WinFeedbackWidget_5;                  // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UArmWrestling_WinFeedbackWidget_C*      ArmWrestling_WinFeedbackWidget_6;                  // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_0;                                     // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Circle_IMG;                                        // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Circle_Inner;                                      // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             ExitingText_TXT;                                   // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               GameZoneOverlay;                                   // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               HitZoneOverlay;                                    // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_212;                                         // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LastPositionDisplay_IMG;                           // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               LastPositionOverlay;                               // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               LeavingGameOverlay;                                // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                LocalConsecutiveHitsBorder;                        // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         LocalConsecutiveHitsHorizontalBox;                 // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             LocalTeamName_TXT;                                 // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               LocalTeamNameOverlay;                              // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             LocalTeamRating_TXT;                               // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             MatchCountdownText;                                // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Needle_IMG;                                        // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 NewHitZone_HalfSlot_IMG;                           // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 NewHitZone_HalfSlotGlow_IMG;                       // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 NewHitZone_HitGlow_IMG;                            // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 NewHitZone_IMG;                                    // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             OpponentName_TXT;                                  // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                OpposingConsecutiveHitsBorder;                     // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         OpposingConsecutiveHitsHorizontalBox;              // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               OpposingTeamNameOverlay;                           // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             OpposingTeamRating_TXT;                            // 0x03A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Outline_IMG;                                       // 0x03B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           ProgressBar_162;                                   // 0x03B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               RoundStartedCountdownOverlay;                      // 0x03C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               WaitingForPlayerOverlay;                           // 0x03C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             WinnerName_TXT;                                    // 0x03D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               WinnerNameOverlay;                                 // 0x03D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             WinnerStamp_TXT;                                   // 0x03E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 WinnerStampBG_IMG;                                 // 0x03E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               WinnerStampOverlay;                                // 0x03F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ARBArmWreslingTable*                    Table;                                             // 0x03F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               HitZoneDynMat;                                     // 0x0400(0x0008)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCameraShakeData                       Shake1;                                            // 0x0408(0x0090)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FCameraShakeData                       Shake2;                                            // 0x0498(0x0090)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FCameraShakeData                       Shake3;                                            // 0x0528(0x0090)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class UArmWreslingPanelComponent_BP_C*        LocalPanel;                                        // 0x05B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LastExitingTimestamp;                              // 0x05C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ArmWrestlingMinigameWidget(int32 EntryPoint);
	void Destruct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	void Event_FadeInWaitingForPlayer();
	void Init(class ARBArmWreslingTable* Param_Table, class UArmWreslingPanelComponent_BP_C* Param_LocalPanel);
	void UpdateTimer();
	void UpdateWinner();
	void UpdateNeedle();
	void CreateDynMaterials();
	void GetOpponentPlayer(class ARBPlayer** RBPlayer);
	void BindArmWrestlingEvents(bool Unbind);
	void FailedEvent(class URBArmWreslingPanelComponent* Panel, float StartCursorPosition, float EndCursorPosition, EArmWreslingPanelInputFailType FailType);
	void TableStateChangedEvent(class ARBArmWreslingTable* Param_Table);
	void Round_Ended_Event(const struct FArmWreslingPlayerRoundData& Player1RoundData, const struct FArmWreslingPlayerRoundData& Player2RoundData);
	void Shake_Camera(float Amount);
	void SetVisibilityToWaiting();
	void SetVisibilityToInGame();
	void GetOpposingPanel(class URBArmWreslingPanelComponent** Panel);
	void UpdateHitZone(float EndZoneOffset, int32 EndZoneSize);
	void Success_Event(class URBArmWreslingPanelComponent* Panel, float CursorPosition, float Multiplier, int32 InputLevel);
	void AddConsecutiveHitFeedbackInBox(class UHorizontalBox* HorizontalBox, int32 HitIndex);
	void PlayerInputCallback(const struct FArmWreslingPlayerRoundData& PlayerRoundData);
	void PlayerConnectionEvent(class ARBArmWreslingTable* Param_Table, class URBArmWreslingPanelComponent* Panel, class ARBPlayer* InteractingPlayer);
	void ResetMatchVisuals();
	void UpdateHitZoneImages(int32 NumZones);
	void OnPlayerDisconnected(class ARBArmWreslingTable* Param_Table, class URBArmWreslingPanelComponent* Panel, class ARBPlayer* InteractingPlayer);
	void ShouldShowPlayerHits();
	void UpdateStats(class ARBArmWreslingTable* Param_Table);
	void UpdateRTPCs();
	void ResetRTPCs();
	void SetupPlayerNames();
	void OnStartExitingGame(bool bExiting, float StartExitTimestamp);
	float GetExitingPercent();
	void UpdateLeavingUI();
	void OnPlayerLeaving();
	void SequenceEvent__ENTRYPOINTArmWrestlingMinigameWidget_0();
	void SequenceEvent__ENTRYPOINTArmWrestlingMinigameWidget_1();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ArmWrestlingMinigameWidget_C">();
	}
	static class UArmWrestlingMinigameWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UArmWrestlingMinigameWidget_C>();
	}
};
static_assert(alignof(UArmWrestlingMinigameWidget_C) == 0x000008, "Wrong alignment on UArmWrestlingMinigameWidget_C");
static_assert(sizeof(UArmWrestlingMinigameWidget_C) == 0x0005C8, "Wrong size on UArmWrestlingMinigameWidget_C");
static_assert(offsetof(UArmWrestlingMinigameWidget_C, UberGraphFrame) == 0x000260, "Member 'UArmWrestlingMinigameWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UArmWrestlingMinigameWidget_C, GameTiedAnimation) == 0x000268, "Member 'UArmWrestlingMinigameWidget_C::GameTiedAnimation' has a wrong offset!");
static_assert(offsetof(UArmWrestlingMinigameWidget_C, FadeInIntro) == 0x000270, "Member 'UArmWrestlingMinigameWidget_C::FadeInIntro' has a wrong offset!");
static_assert(offsetof(UArmWrestlingMinigameWidget_C, BadHit) == 0x000278, "Member 'UArmWrestlingMinigameWidget_C::BadHit' has a wrong offset!");
static_assert(offsetof(UArmWrestlingMinigameWidget_C, Hit) == 0x000280, "Member 'UArmWrestlingMinigameWidget_C::Hit' has a wrong offset!");
static_assert(offsetof(UArmWrestlingMinigameWidget_C, DisplayWinner) == 0x000288, "Member 'UArmWrestlingMinigameWidget_C::DisplayWinner' has a wrong offset!");
static_assert(offsetof(UArmWrestlingMinigameWidget_C, FlashOutline) == 0x000290, "Member 'UArmWrestlingMinigameWidget_C::FlashOutline' has a wrong offset!");
static_assert(offsetof(UArmWrestlingMinigameWidget_C, Failure) == 0x000298, "Member 'UArmWrestlingMinigameWidget_C::Failure' has a wrong offset!");
static_assert(offsetof(UArmWrestlingMinigameWidget_C, FadeInStaminas) == 0x0002A0, "Member 'UArmWrestlingMinigameWidget_C::FadeInStaminas' has a wrong offset!");
static_assert(offsetof(UArmWrestlingMinigameWidget_C, ArmWrestling_WinFeedbackWidget) == 0x0002A8, "Member 'UArmWrestlingMinigameWidget_C::ArmWrestling_WinFeedbackWidget' has a wrong offset!");
static_assert(offsetof(UArmWrestlingMinigameWidget_C, ArmWrestling_WinFeedbackWidget_1) == 0x0002B0, "Member 'UArmWrestlingMinigameWidget_C::ArmWrestling_WinFeedbackWidget_1' has a wrong offset!");
static_assert(offsetof(UArmWrestlingMinigameWidget_C, ArmWrestling_WinFeedbackWidget_2) == 0x0002B8, "Member 'UArmWrestlingMinigameWidget_C::ArmWrestling_WinFeedbackWidget_2' has a wrong offset!");
static_assert(offsetof(UArmWrestlingMinigameWidget_C, ArmWrestling_WinFeedbackWidget_3) == 0x0002C0, "Member 'UArmWrestlingMinigameWidget_C::ArmWrestling_WinFeedbackWidget_3' has a wrong offset!");
static_assert(offsetof(UArmWrestlingMinigameWidget_C, ArmWrestling_WinFeedbackWidget_4) == 0x0002C8, "Member 'UArmWrestlingMinigameWidget_C::ArmWrestling_WinFeedbackWidget_4' has a wrong offset!");
static_assert(offsetof(UArmWrestlingMinigameWidget_C, ArmWrestling_WinFeedbackWidget_5) == 0x0002D0, "Member 'UArmWrestlingMinigameWidget_C::ArmWrestling_WinFeedbackWidget_5' has a wrong offset!");
static_assert(offsetof(UArmWrestlingMinigameWidget_C, ArmWrestling_WinFeedbackWidget_6) == 0x0002D8, "Member 'UArmWrestlingMinigameWidget_C::ArmWrestling_WinFeedbackWidget_6' has a wrong offset!");
static_assert(offsetof(UArmWrestlingMinigameWidget_C, CanvasPanel_0) == 0x0002E0, "Member 'UArmWrestlingMinigameWidget_C::CanvasPanel_0' has a wrong offset!");
static_assert(offsetof(UArmWrestlingMinigameWidget_C, Circle_IMG) == 0x0002E8, "Member 'UArmWrestlingMinigameWidget_C::Circle_IMG' has a wrong offset!");
static_assert(offsetof(UArmWrestlingMinigameWidget_C, Circle_Inner) == 0x0002F0, "Member 'UArmWrestlingMinigameWidget_C::Circle_Inner' has a wrong offset!");
static_assert(offsetof(UArmWrestlingMinigameWidget_C, ExitingText_TXT) == 0x0002F8, "Member 'UArmWrestlingMinigameWidget_C::ExitingText_TXT' has a wrong offset!");
static_assert(offsetof(UArmWrestlingMinigameWidget_C, GameZoneOverlay) == 0x000300, "Member 'UArmWrestlingMinigameWidget_C::GameZoneOverlay' has a wrong offset!");
static_assert(offsetof(UArmWrestlingMinigameWidget_C, HitZoneOverlay) == 0x000308, "Member 'UArmWrestlingMinigameWidget_C::HitZoneOverlay' has a wrong offset!");
static_assert(offsetof(UArmWrestlingMinigameWidget_C, Image_212) == 0x000310, "Member 'UArmWrestlingMinigameWidget_C::Image_212' has a wrong offset!");
static_assert(offsetof(UArmWrestlingMinigameWidget_C, LastPositionDisplay_IMG) == 0x000318, "Member 'UArmWrestlingMinigameWidget_C::LastPositionDisplay_IMG' has a wrong offset!");
static_assert(offsetof(UArmWrestlingMinigameWidget_C, LastPositionOverlay) == 0x000320, "Member 'UArmWrestlingMinigameWidget_C::LastPositionOverlay' has a wrong offset!");
static_assert(offsetof(UArmWrestlingMinigameWidget_C, LeavingGameOverlay) == 0x000328, "Member 'UArmWrestlingMinigameWidget_C::LeavingGameOverlay' has a wrong offset!");
static_assert(offsetof(UArmWrestlingMinigameWidget_C, LocalConsecutiveHitsBorder) == 0x000330, "Member 'UArmWrestlingMinigameWidget_C::LocalConsecutiveHitsBorder' has a wrong offset!");
static_assert(offsetof(UArmWrestlingMinigameWidget_C, LocalConsecutiveHitsHorizontalBox) == 0x000338, "Member 'UArmWrestlingMinigameWidget_C::LocalConsecutiveHitsHorizontalBox' has a wrong offset!");
static_assert(offsetof(UArmWrestlingMinigameWidget_C, LocalTeamName_TXT) == 0x000340, "Member 'UArmWrestlingMinigameWidget_C::LocalTeamName_TXT' has a wrong offset!");
static_assert(offsetof(UArmWrestlingMinigameWidget_C, LocalTeamNameOverlay) == 0x000348, "Member 'UArmWrestlingMinigameWidget_C::LocalTeamNameOverlay' has a wrong offset!");
static_assert(offsetof(UArmWrestlingMinigameWidget_C, LocalTeamRating_TXT) == 0x000350, "Member 'UArmWrestlingMinigameWidget_C::LocalTeamRating_TXT' has a wrong offset!");
static_assert(offsetof(UArmWrestlingMinigameWidget_C, MatchCountdownText) == 0x000358, "Member 'UArmWrestlingMinigameWidget_C::MatchCountdownText' has a wrong offset!");
static_assert(offsetof(UArmWrestlingMinigameWidget_C, Needle_IMG) == 0x000360, "Member 'UArmWrestlingMinigameWidget_C::Needle_IMG' has a wrong offset!");
static_assert(offsetof(UArmWrestlingMinigameWidget_C, NewHitZone_HalfSlot_IMG) == 0x000368, "Member 'UArmWrestlingMinigameWidget_C::NewHitZone_HalfSlot_IMG' has a wrong offset!");
static_assert(offsetof(UArmWrestlingMinigameWidget_C, NewHitZone_HalfSlotGlow_IMG) == 0x000370, "Member 'UArmWrestlingMinigameWidget_C::NewHitZone_HalfSlotGlow_IMG' has a wrong offset!");
static_assert(offsetof(UArmWrestlingMinigameWidget_C, NewHitZone_HitGlow_IMG) == 0x000378, "Member 'UArmWrestlingMinigameWidget_C::NewHitZone_HitGlow_IMG' has a wrong offset!");
static_assert(offsetof(UArmWrestlingMinigameWidget_C, NewHitZone_IMG) == 0x000380, "Member 'UArmWrestlingMinigameWidget_C::NewHitZone_IMG' has a wrong offset!");
static_assert(offsetof(UArmWrestlingMinigameWidget_C, OpponentName_TXT) == 0x000388, "Member 'UArmWrestlingMinigameWidget_C::OpponentName_TXT' has a wrong offset!");
static_assert(offsetof(UArmWrestlingMinigameWidget_C, OpposingConsecutiveHitsBorder) == 0x000390, "Member 'UArmWrestlingMinigameWidget_C::OpposingConsecutiveHitsBorder' has a wrong offset!");
static_assert(offsetof(UArmWrestlingMinigameWidget_C, OpposingConsecutiveHitsHorizontalBox) == 0x000398, "Member 'UArmWrestlingMinigameWidget_C::OpposingConsecutiveHitsHorizontalBox' has a wrong offset!");
static_assert(offsetof(UArmWrestlingMinigameWidget_C, OpposingTeamNameOverlay) == 0x0003A0, "Member 'UArmWrestlingMinigameWidget_C::OpposingTeamNameOverlay' has a wrong offset!");
static_assert(offsetof(UArmWrestlingMinigameWidget_C, OpposingTeamRating_TXT) == 0x0003A8, "Member 'UArmWrestlingMinigameWidget_C::OpposingTeamRating_TXT' has a wrong offset!");
static_assert(offsetof(UArmWrestlingMinigameWidget_C, Outline_IMG) == 0x0003B0, "Member 'UArmWrestlingMinigameWidget_C::Outline_IMG' has a wrong offset!");
static_assert(offsetof(UArmWrestlingMinigameWidget_C, ProgressBar_162) == 0x0003B8, "Member 'UArmWrestlingMinigameWidget_C::ProgressBar_162' has a wrong offset!");
static_assert(offsetof(UArmWrestlingMinigameWidget_C, RoundStartedCountdownOverlay) == 0x0003C0, "Member 'UArmWrestlingMinigameWidget_C::RoundStartedCountdownOverlay' has a wrong offset!");
static_assert(offsetof(UArmWrestlingMinigameWidget_C, WaitingForPlayerOverlay) == 0x0003C8, "Member 'UArmWrestlingMinigameWidget_C::WaitingForPlayerOverlay' has a wrong offset!");
static_assert(offsetof(UArmWrestlingMinigameWidget_C, WinnerName_TXT) == 0x0003D0, "Member 'UArmWrestlingMinigameWidget_C::WinnerName_TXT' has a wrong offset!");
static_assert(offsetof(UArmWrestlingMinigameWidget_C, WinnerNameOverlay) == 0x0003D8, "Member 'UArmWrestlingMinigameWidget_C::WinnerNameOverlay' has a wrong offset!");
static_assert(offsetof(UArmWrestlingMinigameWidget_C, WinnerStamp_TXT) == 0x0003E0, "Member 'UArmWrestlingMinigameWidget_C::WinnerStamp_TXT' has a wrong offset!");
static_assert(offsetof(UArmWrestlingMinigameWidget_C, WinnerStampBG_IMG) == 0x0003E8, "Member 'UArmWrestlingMinigameWidget_C::WinnerStampBG_IMG' has a wrong offset!");
static_assert(offsetof(UArmWrestlingMinigameWidget_C, WinnerStampOverlay) == 0x0003F0, "Member 'UArmWrestlingMinigameWidget_C::WinnerStampOverlay' has a wrong offset!");
static_assert(offsetof(UArmWrestlingMinigameWidget_C, Table) == 0x0003F8, "Member 'UArmWrestlingMinigameWidget_C::Table' has a wrong offset!");
static_assert(offsetof(UArmWrestlingMinigameWidget_C, HitZoneDynMat) == 0x000400, "Member 'UArmWrestlingMinigameWidget_C::HitZoneDynMat' has a wrong offset!");
static_assert(offsetof(UArmWrestlingMinigameWidget_C, Shake1) == 0x000408, "Member 'UArmWrestlingMinigameWidget_C::Shake1' has a wrong offset!");
static_assert(offsetof(UArmWrestlingMinigameWidget_C, Shake2) == 0x000498, "Member 'UArmWrestlingMinigameWidget_C::Shake2' has a wrong offset!");
static_assert(offsetof(UArmWrestlingMinigameWidget_C, Shake3) == 0x000528, "Member 'UArmWrestlingMinigameWidget_C::Shake3' has a wrong offset!");
static_assert(offsetof(UArmWrestlingMinigameWidget_C, LocalPanel) == 0x0005B8, "Member 'UArmWrestlingMinigameWidget_C::LocalPanel' has a wrong offset!");
static_assert(offsetof(UArmWrestlingMinigameWidget_C, LastExitingTimestamp) == 0x0005C0, "Member 'UArmWrestlingMinigameWidget_C::LastExitingTimestamp' has a wrong offset!");

}

