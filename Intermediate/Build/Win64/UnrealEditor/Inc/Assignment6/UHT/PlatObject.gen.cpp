// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Assignment6/PlatObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlatObject() {}

// Begin Cross Module References
ASSIGNMENT6_API UClass* Z_Construct_UClass_APlatObject();
ASSIGNMENT6_API UClass* Z_Construct_UClass_APlatObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Assignment6();
// End Cross Module References

// Begin Class APlatObject
void APlatObject::StaticRegisterNativesAPlatObject()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlatObject);
UClass* Z_Construct_UClass_APlatObject_NoRegister()
{
	return APlatObject::StaticClass();
}
struct Z_Construct_UClass_APlatObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PlatObject.h" },
		{ "ModuleRelativePath", "PlatObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComp_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlatObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlatObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlatObject_Statics::NewProp_StaticMeshComp = { "StaticMeshComp", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlatObject, StaticMeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMeshComp_MetaData), NewProp_StaticMeshComp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlatObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlatObject_Statics::NewProp_StaticMeshComp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlatObject_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APlatObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Assignment6,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlatObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APlatObject_Statics::ClassParams = {
	&APlatObject::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_APlatObject_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_APlatObject_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlatObject_Statics::Class_MetaDataParams), Z_Construct_UClass_APlatObject_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APlatObject()
{
	if (!Z_Registration_Info_UClass_APlatObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlatObject.OuterSingleton, Z_Construct_UClass_APlatObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APlatObject.OuterSingleton;
}
template<> ASSIGNMENT6_API UClass* StaticClass<APlatObject>()
{
	return APlatObject::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APlatObject);
APlatObject::~APlatObject() {}
// End Class APlatObject

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Project_Assignment6_Source_Assignment6_PlatObject_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APlatObject, APlatObject::StaticClass, TEXT("APlatObject"), &Z_Registration_Info_UClass_APlatObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlatObject), 1708173345U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_Assignment6_Source_Assignment6_PlatObject_h_510860462(TEXT("/Script/Assignment6"),
	Z_CompiledInDeferFile_FID_Unreal_Project_Assignment6_Source_Assignment6_PlatObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Project_Assignment6_Source_Assignment6_PlatObject_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
