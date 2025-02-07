#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CellCustomizableDecal

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// UserDefinedStruct CellCustomizableDecal.CellCustomizableDecal
// 0x0040 (0x0040 - 0x0000)
struct FCellCustomizableDecal final
{
public:
	class UMaterialInstanceConstant*              Material_7_BC47BA4A4CA4B279C2BCBE9C53A8F9F0;       // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_377D[0x8];                                     // 0x0008(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             Transform_5_A411514B4D63760D20549A828BF07E18;      // 0x0010(0x0030)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FCellCustomizableDecal) == 0x000010, "Wrong alignment on FCellCustomizableDecal");
static_assert(sizeof(FCellCustomizableDecal) == 0x000040, "Wrong size on FCellCustomizableDecal");
static_assert(offsetof(FCellCustomizableDecal, Material_7_BC47BA4A4CA4B279C2BCBE9C53A8F9F0) == 0x000000, "Member 'FCellCustomizableDecal::Material_7_BC47BA4A4CA4B279C2BCBE9C53A8F9F0' has a wrong offset!");
static_assert(offsetof(FCellCustomizableDecal, Transform_5_A411514B4D63760D20549A828BF07E18) == 0x000010, "Member 'FCellCustomizableDecal::Transform_5_A411514B4D63760D20549A828BF07E18' has a wrong offset!");

}

