// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlatObject.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ASSIGNMENT6_PlatObject_generated_h
#error "PlatObject.generated.h already included, missing '#pragma once' in PlatObject.h"
#endif
#define ASSIGNMENT6_PlatObject_generated_h

#define FID_Unreal_Project_Assignment6_Source_Assignment6_PlatObject_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlatObject(); \
	friend struct Z_Construct_UClass_APlatObject_Statics; \
public: \
	DECLARE_CLASS(APlatObject, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Assignment6"), NO_API) \
	DECLARE_SERIALIZER(APlatObject)


#define FID_Unreal_Project_Assignment6_Source_Assignment6_PlatObject_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	APlatObject(APlatObject&&); \
	APlatObject(const APlatObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlatObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlatObject); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlatObject) \
	NO_API virtual ~APlatObject();


#define FID_Unreal_Project_Assignment6_Source_Assignment6_PlatObject_h_11_PROLOG
#define FID_Unreal_Project_Assignment6_Source_Assignment6_PlatObject_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Project_Assignment6_Source_Assignment6_PlatObject_h_14_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Project_Assignment6_Source_Assignment6_PlatObject_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ASSIGNMENT6_API UClass* StaticClass<class APlatObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Project_Assignment6_Source_Assignment6_PlatObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
