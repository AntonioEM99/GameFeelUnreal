// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UnitCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EUnitType : uint8;
#ifdef RTS_UnitCharacter_generated_h
#error "UnitCharacter.generated.h already included, missing '#pragma once' in UnitCharacter.h"
#endif
#define RTS_UnitCharacter_generated_h

#define FID_Users_tonya_Desktop_Git_GameFeelUnreal_RTS_Source_RTS_UnitCharacter_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execInitializeUnit);


#define FID_Users_tonya_Desktop_Git_GameFeelUnreal_RTS_Source_RTS_UnitCharacter_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAUnitCharacter(); \
	friend struct Z_Construct_UClass_AUnitCharacter_Statics; \
public: \
	DECLARE_CLASS(AUnitCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RTS"), NO_API) \
	DECLARE_SERIALIZER(AUnitCharacter)


#define FID_Users_tonya_Desktop_Git_GameFeelUnreal_RTS_Source_RTS_UnitCharacter_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AUnitCharacter(AUnitCharacter&&); \
	AUnitCharacter(const AUnitCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUnitCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUnitCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AUnitCharacter) \
	NO_API virtual ~AUnitCharacter();


#define FID_Users_tonya_Desktop_Git_GameFeelUnreal_RTS_Source_RTS_UnitCharacter_h_15_PROLOG
#define FID_Users_tonya_Desktop_Git_GameFeelUnreal_RTS_Source_RTS_UnitCharacter_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_tonya_Desktop_Git_GameFeelUnreal_RTS_Source_RTS_UnitCharacter_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_tonya_Desktop_Git_GameFeelUnreal_RTS_Source_RTS_UnitCharacter_h_18_INCLASS_NO_PURE_DECLS \
	FID_Users_tonya_Desktop_Git_GameFeelUnreal_RTS_Source_RTS_UnitCharacter_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RTS_API UClass* StaticClass<class AUnitCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_tonya_Desktop_Git_GameFeelUnreal_RTS_Source_RTS_UnitCharacter_h


#define FOREACH_ENUM_EUNITTYPE(op) \
	op(EUnitType::ManualU) \
	op(EUnitType::AttackU) 

enum class EUnitType : uint8;
template<> struct TIsUEnumClass<EUnitType> { enum { Value = true }; };
template<> RTS_API UEnum* StaticEnum<EUnitType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
