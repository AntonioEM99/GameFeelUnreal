// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RTS/UnitCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnitCharacter() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
RTS_API UClass* Z_Construct_UClass_AUnitCharacter();
RTS_API UClass* Z_Construct_UClass_AUnitCharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_RTS();
// End Cross Module References

// Begin Class AUnitCharacter
void AUnitCharacter::StaticRegisterNativesAUnitCharacter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AUnitCharacter);
UClass* Z_Construct_UClass_AUnitCharacter_NoRegister()
{
	return AUnitCharacter::StaticClass();
}
struct Z_Construct_UClass_AUnitCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "UnitCharacter.h" },
		{ "ModuleRelativePath", "UnitCharacter.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUnitCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AUnitCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_RTS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AUnitCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AUnitCharacter_Statics::ClassParams = {
	&AUnitCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AUnitCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AUnitCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AUnitCharacter()
{
	if (!Z_Registration_Info_UClass_AUnitCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUnitCharacter.OuterSingleton, Z_Construct_UClass_AUnitCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AUnitCharacter.OuterSingleton;
}
template<> RTS_API UClass* StaticClass<AUnitCharacter>()
{
	return AUnitCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AUnitCharacter);
AUnitCharacter::~AUnitCharacter() {}
// End Class AUnitCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_tonya_Desktop_Git_GameFeelUnreal_RTS_Source_RTS_UnitCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AUnitCharacter, AUnitCharacter::StaticClass, TEXT("AUnitCharacter"), &Z_Registration_Info_UClass_AUnitCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUnitCharacter), 573220011U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_tonya_Desktop_Git_GameFeelUnreal_RTS_Source_RTS_UnitCharacter_h_3367564981(TEXT("/Script/RTS"),
	Z_CompiledInDeferFile_FID_Users_tonya_Desktop_Git_GameFeelUnreal_RTS_Source_RTS_UnitCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_tonya_Desktop_Git_GameFeelUnreal_RTS_Source_RTS_UnitCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
