#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CategoryTitle

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Slate_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CategoryTitle.CategoryTitle_C
// 0x00B8 (0x0318 - 0x0260)
class UCategoryTitle_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Background;                                        // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line;                                              // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Title;                                             // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   TitleText;                                         // 0x0280(0x0018)(Edit, BlueprintVisible)
	bool                                          ShowLine;                                          // 0x0298(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_36E8[0x7];                                     // 0x0299(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            BackgroundColor;                                   // 0x02A0(0x0028)(Edit, BlueprintVisible)
	struct FSlateColor                            LineColor;                                         // 0x02C8(0x0028)(Edit, BlueprintVisible)
	struct FSlateColor                            TextColor;                                         // 0x02F0(0x0028)(Edit, BlueprintVisible)

public:
	void SetText(const class FText& Text, ETextTransformPolicy NewParam);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_CategoryTitle(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CategoryTitle_C">();
	}
	static class UCategoryTitle_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCategoryTitle_C>();
	}
};
static_assert(alignof(UCategoryTitle_C) == 0x000008, "Wrong alignment on UCategoryTitle_C");
static_assert(sizeof(UCategoryTitle_C) == 0x000318, "Wrong size on UCategoryTitle_C");
static_assert(offsetof(UCategoryTitle_C, UberGraphFrame) == 0x000260, "Member 'UCategoryTitle_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCategoryTitle_C, Background) == 0x000268, "Member 'UCategoryTitle_C::Background' has a wrong offset!");
static_assert(offsetof(UCategoryTitle_C, Line) == 0x000270, "Member 'UCategoryTitle_C::Line' has a wrong offset!");
static_assert(offsetof(UCategoryTitle_C, Title) == 0x000278, "Member 'UCategoryTitle_C::Title' has a wrong offset!");
static_assert(offsetof(UCategoryTitle_C, TitleText) == 0x000280, "Member 'UCategoryTitle_C::TitleText' has a wrong offset!");
static_assert(offsetof(UCategoryTitle_C, ShowLine) == 0x000298, "Member 'UCategoryTitle_C::ShowLine' has a wrong offset!");
static_assert(offsetof(UCategoryTitle_C, BackgroundColor) == 0x0002A0, "Member 'UCategoryTitle_C::BackgroundColor' has a wrong offset!");
static_assert(offsetof(UCategoryTitle_C, LineColor) == 0x0002C8, "Member 'UCategoryTitle_C::LineColor' has a wrong offset!");
static_assert(offsetof(UCategoryTitle_C, TextColor) == 0x0002F0, "Member 'UCategoryTitle_C::TextColor' has a wrong offset!");

}

