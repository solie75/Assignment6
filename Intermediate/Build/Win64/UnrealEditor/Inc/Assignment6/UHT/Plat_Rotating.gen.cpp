// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Assignment6/Plat_Rotating.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlat_Rotating() {}

// Begin Cross Module References
ASSIGNMENT6_API UClass* Z_Construct_UClass_APlat_Rotating();
ASSIGNMENT6_API UClass* Z_Construct_UClass_APlat_Rotating_NoRegister();
ASSIGNMENT6_API UClass* Z_Construct_UClass_APlatObject();
UPackage* Z_Construct_UPackage__Script_Assignment6();
// End Cross Module References

// Begin Class APlat_Rotating
void APlat_Rotating::StaticRegisterNativesAPlat_Rotating()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlat_Rotating);
UClass* Z_Construct_UClass_APlat_Rotating_NoRegister()
{
	return APlat_Rotating::StaticClass();
}
struct Z_Construct_UClass_APlat_Rotating_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Plat_Rotating.h" },
		{ "ModuleRelativePath", "Plat_Rotating.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotateSpeed_MetaData[] = {
		{ "Category", "Plat_Setting" },
		{ "ModuleRelativePath", "Plat_Rotating.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotateSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlat_Rotating>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlat_Rotating_Statics::NewProp_RotateSpeed = { "RotateSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlat_Rotating, RotateSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotateSpeed_MetaData), NewProp_RotateSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlat_Rotating_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlat_Rotating_Statics::NewProp_RotateSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlat_Rotating_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APlat_Rotating_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlatObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Assignment6,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlat_Rotating_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APlat_Rotating_Statics::ClassParams = {
	&APlat_Rotating::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_APlat_Rotating_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_APlat_Rotating_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlat_Rotating_Statics::Class_MetaDataParams), Z_Construct_UClass_APlat_Rotating_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APlat_Rotating()
{
	if (!Z_Registration_Info_UClass_APlat_Rotating.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlat_Rotating.OuterSingleton, Z_Construct_UClass_APlat_Rotating_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APlat_Rotating.OuterSingleton;
}
template<> ASSIGNMENT6_API UClass* StaticClass<APlat_Rotating>()
{
	return APlat_Rotating::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APlat_Rotating);
APlat_Rotating::~APlat_Rotating() {}
// End Class APlat_Rotating

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Project_Assignment6_Source_Assignment6_Plat_Rotating_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APlat_Rotating, APlat_Rotating::StaticClass, TEXT("APlat_Rotating"), &Z_Registration_Info_UClass_APlat_Rotating, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlat_Rotating), 3693627449U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_Assignment6_Source_Assignment6_Plat_Rotating_h_3225003503(TEXT("/Script/Assignment6"),
	Z_CompiledInDeferFile_FID_Unreal_Project_Assignment6_Source_Assignment6_Plat_Rotating_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Project_Assignment6_Source_Assignment6_Plat_Rotating_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
