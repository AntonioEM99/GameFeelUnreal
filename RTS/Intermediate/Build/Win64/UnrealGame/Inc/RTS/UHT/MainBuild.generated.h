// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MainBuild.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AUnitCharacter;
#ifdef RTS_MainBuild_generated_h
#error "MainBuild.generated.h already included, missing '#pragma once' in MainBuild.h"
#endif
#define RTS_MainBuild_generated_h

#define FID_Users_tonya_Desktop_Git_GameFeelUnreal_RTS_Source_RTS_MainBuild_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSpawnWorker);


#define FID_Users_tonya_Desktop_Git_GameFeelUnreal_RTS_Source_RTS_MainBuild_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMainBuild(); \
	friend struct Z_Construct_UClass_AMainBuild_Statics; \
public: \
	DECLARE_CLASS(AMainBuild, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RTS"), NO_API) \
	DECLARE_SERIALIZER(AMainBuild)


#define FID_Users_tonya_Desktop_Git_GameFeelUnreal_RTS_Source_RTS_MainBuild_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMainBuild(AMainBuild&&); \
	AMainBuild(const AMainBuild&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMainBuild); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMainBuild); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMainBuild) \
	NO_API virtual ~AMainBuild();


#define FID_Users_tonya_Desktop_Git_GameFeelUnreal_RTS_Source_RTS_MainBuild_h_12_PROLOG
#define FID_Users_tonya_Desktop_Git_GameFeelUnreal_RTS_Source_RTS_MainBuild_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_tonya_Desktop_Git_GameFeelUnreal_RTS_Source_RTS_MainBuild_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_tonya_Desktop_Git_GameFeelUnreal_RTS_Source_RTS_MainBuild_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_tonya_Desktop_Git_GameFeelUnreal_RTS_Source_RTS_MainBuild_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RTS_API UClass* StaticClass<class AMainBuild>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_tonya_Desktop_Git_GameFeelUnreal_RTS_Source_RTS_MainBuild_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
