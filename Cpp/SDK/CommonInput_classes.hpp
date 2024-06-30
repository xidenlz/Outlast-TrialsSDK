#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CommonInput

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_classes.hpp"
#include "CommonInput_structs.hpp"


namespace SDK
{

// Class CommonInput.CommonUIInputData
// 0x0020 (0x0048 - 0x0028)
class UCommonUIInputData final : public UObject
{
public:
	struct FDataTableRowHandle                    DefaultClickAction;                                // 0x0028(0x0010)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FDataTableRowHandle                    DefaultBackAction;                                 // 0x0038(0x0010)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CommonUIInputData">();
	}
	static class UCommonUIInputData* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonUIInputData>();
	}
};
static_assert(alignof(UCommonUIInputData) == 0x000008, "Wrong alignment on UCommonUIInputData");
static_assert(sizeof(UCommonUIInputData) == 0x000048, "Wrong size on UCommonUIInputData");
static_assert(offsetof(UCommonUIInputData, DefaultClickAction) == 0x000028, "Member 'UCommonUIInputData::DefaultClickAction' has a wrong offset!");
static_assert(offsetof(UCommonUIInputData, DefaultBackAction) == 0x000038, "Member 'UCommonUIInputData::DefaultBackAction' has a wrong offset!");

// Class CommonInput.CommonInputBaseControllerData
// 0x0080 (0x00A8 - 0x0028)
class UCommonInputBaseControllerData final : public UObject
{
public:
	ECommonInputType                              InputType;                                         // 0x0028(0x0001)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_10C5[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   GamepadName;                                       // 0x002C(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_10C6[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTexture2D>              ControllerTexture;                                 // 0x0038(0x0028)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>              ControllerButtonMaskTexture;                       // 0x0060(0x0028)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FCommonInputKeyBrushConfiguration> InputBrushDataMap;                                 // 0x0088(0x0010)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FCommonInputKeySetBrushConfiguration> InputBrushKeySets;                                 // 0x0098(0x0010)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)

public:
	static const TArray<class FName> GetRegisteredGamepads();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CommonInputBaseControllerData">();
	}
	static class UCommonInputBaseControllerData* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonInputBaseControllerData>();
	}
};
static_assert(alignof(UCommonInputBaseControllerData) == 0x000008, "Wrong alignment on UCommonInputBaseControllerData");
static_assert(sizeof(UCommonInputBaseControllerData) == 0x0000A8, "Wrong size on UCommonInputBaseControllerData");
static_assert(offsetof(UCommonInputBaseControllerData, InputType) == 0x000028, "Member 'UCommonInputBaseControllerData::InputType' has a wrong offset!");
static_assert(offsetof(UCommonInputBaseControllerData, GamepadName) == 0x00002C, "Member 'UCommonInputBaseControllerData::GamepadName' has a wrong offset!");
static_assert(offsetof(UCommonInputBaseControllerData, ControllerTexture) == 0x000038, "Member 'UCommonInputBaseControllerData::ControllerTexture' has a wrong offset!");
static_assert(offsetof(UCommonInputBaseControllerData, ControllerButtonMaskTexture) == 0x000060, "Member 'UCommonInputBaseControllerData::ControllerButtonMaskTexture' has a wrong offset!");
static_assert(offsetof(UCommonInputBaseControllerData, InputBrushDataMap) == 0x000088, "Member 'UCommonInputBaseControllerData::InputBrushDataMap' has a wrong offset!");
static_assert(offsetof(UCommonInputBaseControllerData, InputBrushKeySets) == 0x000098, "Member 'UCommonInputBaseControllerData::InputBrushKeySets' has a wrong offset!");

// Class CommonInput.CommonInputSettings
// 0x00D8 (0x0100 - 0x0028)
class UCommonInputSettings final : public UObject
{
public:
	TSoftClassPtr<class UClass>                   InputData;                                         // 0x0028(0x0028)(Edit, Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMap<class FName, struct FCommonInputPlatformBaseData> CommonInputPlatformData;                           // 0x0050(0x0050)(Edit, EditFixedSize, Config, NativeAccessSpecifierPrivate)
	bool                                          bEnableInputMethodThrashingProtection;             // 0x00A0(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_10C7[0x3];                                     // 0x00A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         InputMethodThrashingLimit;                         // 0x00A4(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	double                                        InputMethodThrashingWindowInSeconds;               // 0x00A8(0x0008)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	double                                        InputMethodThrashingCooldownInSeconds;             // 0x00B0(0x0008)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                          bAllowOutOfFocusDeviceInput;                       // 0x00B8(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_10C8[0x7];                                     // 0x00B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class UCommonUIInputData>         InputDataClass;                                    // 0x00C0(0x0008)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FCommonInputPlatformBaseData           CurrentPlatform;                                   // 0x00C8(0x0038)(Transient, NativeAccessSpecifierPrivate)

public:
	static const TArray<class FName> GetRegisteredPlatforms();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CommonInputSettings">();
	}
	static class UCommonInputSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonInputSettings>();
	}
};
static_assert(alignof(UCommonInputSettings) == 0x000008, "Wrong alignment on UCommonInputSettings");
static_assert(sizeof(UCommonInputSettings) == 0x000100, "Wrong size on UCommonInputSettings");
static_assert(offsetof(UCommonInputSettings, InputData) == 0x000028, "Member 'UCommonInputSettings::InputData' has a wrong offset!");
static_assert(offsetof(UCommonInputSettings, CommonInputPlatformData) == 0x000050, "Member 'UCommonInputSettings::CommonInputPlatformData' has a wrong offset!");
static_assert(offsetof(UCommonInputSettings, bEnableInputMethodThrashingProtection) == 0x0000A0, "Member 'UCommonInputSettings::bEnableInputMethodThrashingProtection' has a wrong offset!");
static_assert(offsetof(UCommonInputSettings, InputMethodThrashingLimit) == 0x0000A4, "Member 'UCommonInputSettings::InputMethodThrashingLimit' has a wrong offset!");
static_assert(offsetof(UCommonInputSettings, InputMethodThrashingWindowInSeconds) == 0x0000A8, "Member 'UCommonInputSettings::InputMethodThrashingWindowInSeconds' has a wrong offset!");
static_assert(offsetof(UCommonInputSettings, InputMethodThrashingCooldownInSeconds) == 0x0000B0, "Member 'UCommonInputSettings::InputMethodThrashingCooldownInSeconds' has a wrong offset!");
static_assert(offsetof(UCommonInputSettings, bAllowOutOfFocusDeviceInput) == 0x0000B8, "Member 'UCommonInputSettings::bAllowOutOfFocusDeviceInput' has a wrong offset!");
static_assert(offsetof(UCommonInputSettings, InputDataClass) == 0x0000C0, "Member 'UCommonInputSettings::InputDataClass' has a wrong offset!");
static_assert(offsetof(UCommonInputSettings, CurrentPlatform) == 0x0000C8, "Member 'UCommonInputSettings::CurrentPlatform' has a wrong offset!");

// Class CommonInput.CommonInputSubsystem
// 0x00C8 (0x00F8 - 0x0030)
class UCommonInputSubsystem final : public ULocalPlayerSubsystem
{
public:
	uint8                                         Pad_10C9[0x20];                                    // 0x0030(0x0020)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnInputMethodChanged;                              // 0x0050(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	int32                                         NumberOfInputMethodChangesRecently;                // 0x0060(0x0004)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_10CA[0x4];                                     // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        LastInputMethodChangeTime;                         // 0x0068(0x0008)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	double                                        LastTimeInputMethodThrashingBegan;                 // 0x0070(0x0008)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	ECommonInputType                              LastInputType;                                     // 0x0078(0x0001)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	ECommonInputType                              CurrentInputType;                                  // 0x0079(0x0001)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_10CB[0x2];                                     // 0x007A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   GamepadInputType;                                  // 0x007C(0x0008)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_10CC[0x4];                                     // 0x0084(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<class FName, ECommonInputType>           CurrentInputLocks;                                 // 0x0088(0x0050)(Transient, NativeAccessSpecifierPrivate)
	uint8                                         Pad_10CD[0x18];                                    // 0x00D8(0x0018)(Fixing Size After Last Property [ Dumper-7 ])
	bool                                          bIsGamepadSimulatedClick;                          // 0x00F0(0x0001)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_10CE[0x7];                                     // 0x00F1(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void SetCurrentInputType(ECommonInputType NewInputType);
	void SetGamepadInputType(const class FName& InGamepadInputType);

	const class FName GetCurrentGamepadName() const;
	ECommonInputType GetCurrentInputType() const;
	ECommonInputType GetDefaultInputType() const;
	bool IsInputMethodActive(ECommonInputType InputMethod) const;
	bool IsUsingPointerInput() const;
	bool ShouldShowInputKeys() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CommonInputSubsystem">();
	}
	static class UCommonInputSubsystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonInputSubsystem>();
	}
};
static_assert(alignof(UCommonInputSubsystem) == 0x000008, "Wrong alignment on UCommonInputSubsystem");
static_assert(sizeof(UCommonInputSubsystem) == 0x0000F8, "Wrong size on UCommonInputSubsystem");
static_assert(offsetof(UCommonInputSubsystem, OnInputMethodChanged) == 0x000050, "Member 'UCommonInputSubsystem::OnInputMethodChanged' has a wrong offset!");
static_assert(offsetof(UCommonInputSubsystem, NumberOfInputMethodChangesRecently) == 0x000060, "Member 'UCommonInputSubsystem::NumberOfInputMethodChangesRecently' has a wrong offset!");
static_assert(offsetof(UCommonInputSubsystem, LastInputMethodChangeTime) == 0x000068, "Member 'UCommonInputSubsystem::LastInputMethodChangeTime' has a wrong offset!");
static_assert(offsetof(UCommonInputSubsystem, LastTimeInputMethodThrashingBegan) == 0x000070, "Member 'UCommonInputSubsystem::LastTimeInputMethodThrashingBegan' has a wrong offset!");
static_assert(offsetof(UCommonInputSubsystem, LastInputType) == 0x000078, "Member 'UCommonInputSubsystem::LastInputType' has a wrong offset!");
static_assert(offsetof(UCommonInputSubsystem, CurrentInputType) == 0x000079, "Member 'UCommonInputSubsystem::CurrentInputType' has a wrong offset!");
static_assert(offsetof(UCommonInputSubsystem, GamepadInputType) == 0x00007C, "Member 'UCommonInputSubsystem::GamepadInputType' has a wrong offset!");
static_assert(offsetof(UCommonInputSubsystem, CurrentInputLocks) == 0x000088, "Member 'UCommonInputSubsystem::CurrentInputLocks' has a wrong offset!");
static_assert(offsetof(UCommonInputSubsystem, bIsGamepadSimulatedClick) == 0x0000F0, "Member 'UCommonInputSubsystem::bIsGamepadSimulatedClick' has a wrong offset!");

}

