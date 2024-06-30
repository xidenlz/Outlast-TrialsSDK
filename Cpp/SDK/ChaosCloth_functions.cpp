#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ChaosCloth

#include "Basic.hpp"

#include "ChaosCloth_classes.hpp"
#include "ChaosCloth_parameters.hpp"


namespace SDK
{

// Function ChaosCloth.ChaosClothingInteractor.ResetAndTeleport
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                                    bReset                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bTeleport                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChaosClothingInteractor::ResetAndTeleport(bool bReset, bool bTeleport)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChaosClothingInteractor", "ResetAndTeleport");

	Params::ChaosClothingInteractor_ResetAndTeleport Parms{};

	Parms.bReset = bReset;
	Parms.bTeleport = bTeleport;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function ChaosCloth.ChaosClothingInteractor.SetAerodynamics
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// float                                   DragCoefficient                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   LiftCoefficient                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                          WindVelocity                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChaosClothingInteractor::SetAerodynamics(float DragCoefficient, float LiftCoefficient, const struct FVector& WindVelocity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChaosClothingInteractor", "SetAerodynamics");

	Params::ChaosClothingInteractor_SetAerodynamics Parms{};

	Parms.DragCoefficient = DragCoefficient;
	Parms.LiftCoefficient = LiftCoefficient;
	Parms.WindVelocity = std::move(WindVelocity);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function ChaosCloth.ChaosClothingInteractor.SetAnimDrive
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                        AnimDriveStiffness                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                        AnimDriveDamping                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChaosClothingInteractor::SetAnimDrive(const struct FVector2D& AnimDriveStiffness, const struct FVector2D& AnimDriveDamping)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChaosClothingInteractor", "SetAnimDrive");

	Params::ChaosClothingInteractor_SetAnimDrive Parms{};

	Parms.AnimDriveStiffness = std::move(AnimDriveStiffness);
	Parms.AnimDriveDamping = std::move(AnimDriveDamping);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function ChaosCloth.ChaosClothingInteractor.SetAnimDriveLinear
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                                   AnimDriveStiffness                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChaosClothingInteractor::SetAnimDriveLinear(float AnimDriveStiffness)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChaosClothingInteractor", "SetAnimDriveLinear");

	Params::ChaosClothingInteractor_SetAnimDriveLinear Parms{};

	Parms.AnimDriveStiffness = AnimDriveStiffness;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function ChaosCloth.ChaosClothingInteractor.SetCollision
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                                   CollisionThickness                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   FrictionCoefficient                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bUseCCD                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   SelfCollisionThickness                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChaosClothingInteractor::SetCollision(float CollisionThickness, float FrictionCoefficient, bool bUseCCD, float SelfCollisionThickness)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChaosClothingInteractor", "SetCollision");

	Params::ChaosClothingInteractor_SetCollision Parms{};

	Parms.CollisionThickness = CollisionThickness;
	Parms.FrictionCoefficient = FrictionCoefficient;
	Parms.bUseCCD = bUseCCD;
	Parms.SelfCollisionThickness = SelfCollisionThickness;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function ChaosCloth.ChaosClothingInteractor.SetDamping
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                                   DampingCoefficient                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChaosClothingInteractor::SetDamping(float DampingCoefficient)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChaosClothingInteractor", "SetDamping");

	Params::ChaosClothingInteractor_SetDamping Parms{};

	Parms.DampingCoefficient = DampingCoefficient;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function ChaosCloth.ChaosClothingInteractor.SetGravity
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// float                                   GravityScale                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bIsGravityOverridden                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                          GravityOverride                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChaosClothingInteractor::SetGravity(float GravityScale, bool bIsGravityOverridden, const struct FVector& GravityOverride)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChaosClothingInteractor", "SetGravity");

	Params::ChaosClothingInteractor_SetGravity Parms{};

	Parms.GravityScale = GravityScale;
	Parms.bIsGravityOverridden = bIsGravityOverridden;
	Parms.GravityOverride = std::move(GravityOverride);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function ChaosCloth.ChaosClothingInteractor.SetLongRangeAttachment
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                        TetherStiffness                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChaosClothingInteractor::SetLongRangeAttachment(const struct FVector2D& TetherStiffness)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChaosClothingInteractor", "SetLongRangeAttachment");

	Params::ChaosClothingInteractor_SetLongRangeAttachment Parms{};

	Parms.TetherStiffness = std::move(TetherStiffness);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function ChaosCloth.ChaosClothingInteractor.SetLongRangeAttachmentLinear
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                                   TetherStiffness                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChaosClothingInteractor::SetLongRangeAttachmentLinear(float TetherStiffness)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChaosClothingInteractor", "SetLongRangeAttachmentLinear");

	Params::ChaosClothingInteractor_SetLongRangeAttachmentLinear Parms{};

	Parms.TetherStiffness = TetherStiffness;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function ChaosCloth.ChaosClothingInteractor.SetMaterialLinear
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                                   EdgeStiffness                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   BendingStiffness                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   AreaStiffness                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChaosClothingInteractor::SetMaterialLinear(float EdgeStiffness, float BendingStiffness, float AreaStiffness)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChaosClothingInteractor", "SetMaterialLinear");

	Params::ChaosClothingInteractor_SetMaterialLinear Parms{};

	Parms.EdgeStiffness = EdgeStiffness;
	Parms.BendingStiffness = BendingStiffness;
	Parms.AreaStiffness = AreaStiffness;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function ChaosCloth.ChaosClothingInteractor.SetVelocityScale
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                          LinearVelocityScale                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   AngularVelocityScale                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   FictitiousAngularScale                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChaosClothingInteractor::SetVelocityScale(const struct FVector& LinearVelocityScale, float AngularVelocityScale, float FictitiousAngularScale)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChaosClothingInteractor", "SetVelocityScale");

	Params::ChaosClothingInteractor_SetVelocityScale Parms{};

	Parms.LinearVelocityScale = std::move(LinearVelocityScale);
	Parms.AngularVelocityScale = AngularVelocityScale;
	Parms.FictitiousAngularScale = FictitiousAngularScale;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}

