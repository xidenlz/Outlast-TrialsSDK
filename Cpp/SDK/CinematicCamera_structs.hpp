#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CinematicCamera

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// Enum CinematicCamera.ECameraFocusMethod
// NumValues: 0x0005
enum class ECameraFocusMethod : uint8
{
	DoNotOverride                            = 0,
	Manual                                   = 1,
	Tracking                                 = 2,
	Disable                                  = 3,
	MAX                                      = 4,
};

// ScriptStruct CinematicCamera.CameraLookatTrackingSettings
// 0x0050 (0x0050 - 0x0000)
struct FCameraLookatTrackingSettings final
{
public:
	uint8                                         bEnableLookAtTracking : 1;                         // 0x0000(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bDrawDebugLookAtTrackingPosition : 1;              // 0x0000(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, BlueprintVisible, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_287C[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         LookAtTrackingInterpSpeed;                         // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_287D[0x10];                                    // 0x0008(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class AActor>                  ActorToTrack;                                      // 0x0018(0x0028)(Edit, BlueprintVisible, Interp, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                RelativeOffset;                                    // 0x0040(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bAllowRoll : 1;                                    // 0x004C(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_287E[0x3];                                     // 0x004D(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FCameraLookatTrackingSettings) == 0x000008, "Wrong alignment on FCameraLookatTrackingSettings");
static_assert(sizeof(FCameraLookatTrackingSettings) == 0x000050, "Wrong size on FCameraLookatTrackingSettings");
static_assert(offsetof(FCameraLookatTrackingSettings, LookAtTrackingInterpSpeed) == 0x000004, "Member 'FCameraLookatTrackingSettings::LookAtTrackingInterpSpeed' has a wrong offset!");
static_assert(offsetof(FCameraLookatTrackingSettings, ActorToTrack) == 0x000018, "Member 'FCameraLookatTrackingSettings::ActorToTrack' has a wrong offset!");
static_assert(offsetof(FCameraLookatTrackingSettings, RelativeOffset) == 0x000040, "Member 'FCameraLookatTrackingSettings::RelativeOffset' has a wrong offset!");

// ScriptStruct CinematicCamera.CameraTrackingFocusSettings
// 0x0038 (0x0038 - 0x0000)
struct FCameraTrackingFocusSettings final
{
public:
	TSoftObjectPtr<class AActor>                  ActorToTrack;                                      // 0x0000(0x0028)(Edit, BlueprintVisible, Interp, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                RelativeOffset;                                    // 0x0028(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bDrawDebugTrackingFocusPoint : 1;                  // 0x0034(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_287F[0x3];                                     // 0x0035(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FCameraTrackingFocusSettings) == 0x000008, "Wrong alignment on FCameraTrackingFocusSettings");
static_assert(sizeof(FCameraTrackingFocusSettings) == 0x000038, "Wrong size on FCameraTrackingFocusSettings");
static_assert(offsetof(FCameraTrackingFocusSettings, ActorToTrack) == 0x000000, "Member 'FCameraTrackingFocusSettings::ActorToTrack' has a wrong offset!");
static_assert(offsetof(FCameraTrackingFocusSettings, RelativeOffset) == 0x000028, "Member 'FCameraTrackingFocusSettings::RelativeOffset' has a wrong offset!");

// ScriptStruct CinematicCamera.CameraFocusSettings
// 0x0058 (0x0058 - 0x0000)
struct FCameraFocusSettings final
{
public:
	ECameraFocusMethod                            FocusMethod;                                       // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2880[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ManualFocusDistance;                               // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCameraTrackingFocusSettings           TrackingFocusSettings;                             // 0x0008(0x0038)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	uint8                                         bDrawDebugFocusPlane : 1;                          // 0x0040(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_2881[0x3];                                     // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FColor                                 DebugFocusPlaneColor;                              // 0x0044(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bSmoothFocusChanges : 1;                           // 0x0048(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_2882[0x3];                                     // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         FocusSmoothingInterpSpeed;                         // 0x004C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         FocusOffset;                                       // 0x0050(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2883[0x4];                                     // 0x0054(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FCameraFocusSettings) == 0x000008, "Wrong alignment on FCameraFocusSettings");
static_assert(sizeof(FCameraFocusSettings) == 0x000058, "Wrong size on FCameraFocusSettings");
static_assert(offsetof(FCameraFocusSettings, FocusMethod) == 0x000000, "Member 'FCameraFocusSettings::FocusMethod' has a wrong offset!");
static_assert(offsetof(FCameraFocusSettings, ManualFocusDistance) == 0x000004, "Member 'FCameraFocusSettings::ManualFocusDistance' has a wrong offset!");
static_assert(offsetof(FCameraFocusSettings, TrackingFocusSettings) == 0x000008, "Member 'FCameraFocusSettings::TrackingFocusSettings' has a wrong offset!");
static_assert(offsetof(FCameraFocusSettings, DebugFocusPlaneColor) == 0x000044, "Member 'FCameraFocusSettings::DebugFocusPlaneColor' has a wrong offset!");
static_assert(offsetof(FCameraFocusSettings, FocusSmoothingInterpSpeed) == 0x00004C, "Member 'FCameraFocusSettings::FocusSmoothingInterpSpeed' has a wrong offset!");
static_assert(offsetof(FCameraFocusSettings, FocusOffset) == 0x000050, "Member 'FCameraFocusSettings::FocusOffset' has a wrong offset!");

// ScriptStruct CinematicCamera.CameraLensSettings
// 0x0018 (0x0018 - 0x0000)
struct FCameraLensSettings final
{
public:
	float                                         MinFocalLength;                                    // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MaxFocalLength;                                    // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MinFStop;                                          // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MaxFStop;                                          // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MinimumFocusDistance;                              // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         DiaphragmBladeCount;                               // 0x0014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FCameraLensSettings) == 0x000004, "Wrong alignment on FCameraLensSettings");
static_assert(sizeof(FCameraLensSettings) == 0x000018, "Wrong size on FCameraLensSettings");
static_assert(offsetof(FCameraLensSettings, MinFocalLength) == 0x000000, "Member 'FCameraLensSettings::MinFocalLength' has a wrong offset!");
static_assert(offsetof(FCameraLensSettings, MaxFocalLength) == 0x000004, "Member 'FCameraLensSettings::MaxFocalLength' has a wrong offset!");
static_assert(offsetof(FCameraLensSettings, MinFStop) == 0x000008, "Member 'FCameraLensSettings::MinFStop' has a wrong offset!");
static_assert(offsetof(FCameraLensSettings, MaxFStop) == 0x00000C, "Member 'FCameraLensSettings::MaxFStop' has a wrong offset!");
static_assert(offsetof(FCameraLensSettings, MinimumFocusDistance) == 0x000010, "Member 'FCameraLensSettings::MinimumFocusDistance' has a wrong offset!");
static_assert(offsetof(FCameraLensSettings, DiaphragmBladeCount) == 0x000014, "Member 'FCameraLensSettings::DiaphragmBladeCount' has a wrong offset!");

// ScriptStruct CinematicCamera.NamedLensPreset
// 0x0028 (0x0028 - 0x0000)
struct FNamedLensPreset final
{
public:
	class FString                                 Name;                                              // 0x0000(0x0010)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCameraLensSettings                    LensSettings;                                      // 0x0010(0x0018)(BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FNamedLensPreset) == 0x000008, "Wrong alignment on FNamedLensPreset");
static_assert(sizeof(FNamedLensPreset) == 0x000028, "Wrong size on FNamedLensPreset");
static_assert(offsetof(FNamedLensPreset, Name) == 0x000000, "Member 'FNamedLensPreset::Name' has a wrong offset!");
static_assert(offsetof(FNamedLensPreset, LensSettings) == 0x000010, "Member 'FNamedLensPreset::LensSettings' has a wrong offset!");

// ScriptStruct CinematicCamera.CameraFilmbackSettings
// 0x000C (0x000C - 0x0000)
struct FCameraFilmbackSettings final
{
public:
	float                                         SensorWidth;                                       // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SensorHeight;                                      // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SensorAspectRatio;                                 // 0x0008(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FCameraFilmbackSettings) == 0x000004, "Wrong alignment on FCameraFilmbackSettings");
static_assert(sizeof(FCameraFilmbackSettings) == 0x00000C, "Wrong size on FCameraFilmbackSettings");
static_assert(offsetof(FCameraFilmbackSettings, SensorWidth) == 0x000000, "Member 'FCameraFilmbackSettings::SensorWidth' has a wrong offset!");
static_assert(offsetof(FCameraFilmbackSettings, SensorHeight) == 0x000004, "Member 'FCameraFilmbackSettings::SensorHeight' has a wrong offset!");
static_assert(offsetof(FCameraFilmbackSettings, SensorAspectRatio) == 0x000008, "Member 'FCameraFilmbackSettings::SensorAspectRatio' has a wrong offset!");

// ScriptStruct CinematicCamera.NamedFilmbackPreset
// 0x0020 (0x0020 - 0x0000)
struct FNamedFilmbackPreset final
{
public:
	class FString                                 Name;                                              // 0x0000(0x0010)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCameraFilmbackSettings                FilmbackSettings;                                  // 0x0010(0x000C)(BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_2884[0x4];                                     // 0x001C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FNamedFilmbackPreset) == 0x000008, "Wrong alignment on FNamedFilmbackPreset");
static_assert(sizeof(FNamedFilmbackPreset) == 0x000020, "Wrong size on FNamedFilmbackPreset");
static_assert(offsetof(FNamedFilmbackPreset, Name) == 0x000000, "Member 'FNamedFilmbackPreset::Name' has a wrong offset!");
static_assert(offsetof(FNamedFilmbackPreset, FilmbackSettings) == 0x000010, "Member 'FNamedFilmbackPreset::FilmbackSettings' has a wrong offset!");

}

