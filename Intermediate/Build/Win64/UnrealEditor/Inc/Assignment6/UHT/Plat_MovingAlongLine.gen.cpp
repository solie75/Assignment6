// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Assignment6/Plat_MovingAlongLine.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlat_MovingAlongLine() {}

// Begin Cross Module References
ASSIGNMENT6_API UClass* Z_Construct_UClass_APlat_MovingAlongLine();
ASSIGNMENT6_API UClass* Z_Construct_UClass_APlat_MovingAlongLine_NoRegister();
ASSIGNMENT6_API UClass* Z_Construct_UClass_APlatObject();
UPackage* Z_Construct_UPackage__Script_Assignment6();
// End Cross Module References

// Begin Class APlat_MovingAlongLine
void APlat_MovingAlongLine::StaticRegisterNativesAPlat_MovingAlongLine()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlat_MovingAlongLine);
UClass* Z_Construct_UClass_APlat_MovingAlongLine_NoRegister()
{
	return APlat_MovingAlongLine::StaticClass();
}
struct Z_Construct_UClass_APlat_MovingAlongLine_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Plat_MovingAlongLine.h" },
		{ "ModuleRelativePath", "Plat_MovingAlongLine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxRange_MetaData[] = {
		{ "Category", "Platform_Setting" },
		{ "ModuleRelativePath", "Plat_MovingAlongLine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[] = {
		{ "Category", "Platform_Setting" },
		{ "ModuleRelativePath", "Plat_MovingAlongLine.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlat_MovingAlongLine>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlat_MovingAlongLine_Statics::NewProp_MaxRange = { "MaxRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlat_MovingAlongLine, MaxRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxRange_MetaData), NewProp_MaxRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlat_MovingAlongLine_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlat_MovingAlongLine, Speed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Speed_MetaData), NewProp_Speed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlat_MovingAlongLine_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlat_MovingAlongLine_Statics::NewProp_MaxRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlat_MovingAlongLine_Statics::NewProp_Speed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlat_MovingAlongLine_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APlat_MovingAlongLine_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlatObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Assignment6,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlat_MovingAlongLine_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APlat_MovingAlongLine_Statics::ClassParams = {
	&APlat_MovingAlongLine::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_APlat_MovingAlongLine_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_APlat_MovingAlongLine_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlat_MovingAlongLine_Statics::Class_MetaDataParams), Z_Construct_UClass_APlat_MovingAlongLine_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APlat_MovingAlongLine()
{
	if (!Z_Registration_Info_UClass_APlat_MovingAlongLine.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlat_MovingAlongLine.OuterSingleton, Z_Construct_UClass_APlat_MovingAlongLine_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APlat_MovingAlongLine.OuterSingleton;
}
template<> ASSIGNMENT6_API UClass* StaticClass<APlat_MovingAlongLine>()
{
	return APlat_MovingAlongLine::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APlat_MovingAlongLine);
APlat_MovingAlongLine::~APlat_MovingAlongLine() {}
// End Class APlat_MovingAlongLine

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Project_Assignment6_Source_Assignment6_Plat_MovingAlongLine_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APlat_MovingAlongLine, APlat_MovingAlongLine::StaticClass, TEXT("APlat_MovingAlongLine"), &Z_Registration_Info_UClass_APlat_MovingAlongLine, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlat_MovingAlongLine), 536560458U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_Assignment6_Source_Assignment6_Plat_MovingAlongLine_h_4135585958(TEXT("/Script/Assignment6"),
	Z_CompiledInDeferFile_FID_Unreal_Project_Assignment6_Source_Assignment6_Plat_MovingAlongLine_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Project_Assignment6_Source_Assignment6_Plat_MovingAlongLine_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
