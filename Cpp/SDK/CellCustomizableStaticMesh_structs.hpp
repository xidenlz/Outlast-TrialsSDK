#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CellCustomizableStaticMesh

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// UserDefinedStruct CellCustomizableStaticMesh.CellCustomizableStaticMesh
// 0x0040 (0x0040 - 0x0000)
struct FCellCustomizableStaticMesh final
{
public:
	class UStaticMesh*                            StaticMesh_2_BC47BA4A4CA4B279C2BCBE9C53A8F9F0;     // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2B0E[0x8];                                     // 0x0008(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             Transform_5_A411514B4D63760D20549A828BF07E18;      // 0x0010(0x0030)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FCellCustomizableStaticMesh) == 0x000010, "Wrong alignment on FCellCustomizableStaticMesh");
static_assert(sizeof(FCellCustomizableStaticMesh) == 0x000040, "Wrong size on FCellCustomizableStaticMesh");
static_assert(offsetof(FCellCustomizableStaticMesh, StaticMesh_2_BC47BA4A4CA4B279C2BCBE9C53A8F9F0) == 0x000000, "Member 'FCellCustomizableStaticMesh::StaticMesh_2_BC47BA4A4CA4B279C2BCBE9C53A8F9F0' has a wrong offset!");
static_assert(offsetof(FCellCustomizableStaticMesh, Transform_5_A411514B4D63760D20549A828BF07E18) == 0x000010, "Member 'FCellCustomizableStaticMesh::Transform_5_A411514B4D63760D20549A828BF07E18' has a wrong offset!");

}

