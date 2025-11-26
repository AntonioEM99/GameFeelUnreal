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
RTS_API UEnum* Z_Construct_UEnum_RTS_EUnitType();
UPackage* Z_Construct_UPackage__Script_RTS();
// End Cross Module References

// Begin Enum EUnitType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EUnitType;
static UEnum* EUnitType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EUnitType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EUnitType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RTS_EUnitType, (UObject*)Z_Construct_UPackage__Script_RTS(), TEXT("EUnitType"));
	}
	return Z_Registration_Info_UEnum_EUnitType.OuterSingleton;
}
template<> RTS_API UEnum* StaticEnum<EUnitType>()
{
	return EUnitType_StaticEnum();
}
struct Z_Construct_UEnum_RTS_EUnitType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AttackU.Name", "EUnitType::AttackU" },
		{ "BlueprintType", "true" },
		{ "ManualU.Name", "EUnitType::ManualU" },
		{ "ModuleRelativePath", "UnitCharacter.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EUnitType::ManualU", (int64)EUnitType::ManualU },
		{ "EUnitType::AttackU", (int64)EUnitType::AttackU },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RTS_EUnitType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_RTS,
	nullptr,
	"EUnitType",
	"EUnitType",
	Z_Construct_UEnum_RTS_EUnitType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_RTS_EUnitType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_RTS_EUnitType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_RTS_EUnitType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_RTS_EUnitType()
{
	if (!Z_Registration_Info_UEnum_EUnitType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EUnitType.InnerSingleton, Z_Construct_UEnum_RTS_EUnitType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EUnitType.InnerSingleton;
}
// End Enum EUnitType

// Begin Class AUnitCharacter Function InitializeUnit
struct Z_Construct_UFunction_AUnitCharacter_InitializeUnit_Statics
{
	struct UnitCharacter_eventInitializeUnit_Parms
	{
		EUnitType InType;
		FName InName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Unit" },
		{ "ModuleRelativePath", "UnitCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InType;
	static const UECodeGen_Private::FNamePropertyParams NewProp_InName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AUnitCharacter_InitializeUnit_Statics::NewProp_InType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AUnitCharacter_InitializeUnit_Statics::NewProp_InType = { "InType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UnitCharacter_eventInitializeUnit_Parms, InType), Z_Construct_UEnum_RTS_EUnitType, METADATA_PARAMS(0, nullptr) }; // 3972361493
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AUnitCharacter_InitializeUnit_Statics::NewProp_InName = { "InName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UnitCharacter_eventInitializeUnit_Parms, InName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUnitCharacter_InitializeUnit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnitCharacter_InitializeUnit_Statics::NewProp_InType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnitCharacter_InitializeUnit_Statics::NewProp_InType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnitCharacter_InitializeUnit_Statics::NewProp_InName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AUnitCharacter_InitializeUnit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUnitCharacter_InitializeUnit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUnitCharacter, nullptr, "InitializeUnit", nullptr, nullptr, Z_Construct_UFunction_AUnitCharacter_InitializeUnit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnitCharacter_InitializeUnit_Statics::PropPointers), sizeof(Z_Construct_UFunction_AUnitCharacter_InitializeUnit_Statics::UnitCharacter_eventInitializeUnit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUnitCharacter_InitializeUnit_Statics::Function_MetaDataParams), Z_Construct_UFunction_AUnitCharacter_InitializeUnit_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AUnitCharacter_InitializeUnit_Statics::UnitCharacter_eventInitializeUnit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AUnitCharacter_InitializeUnit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUnitCharacter_InitializeUnit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AUnitCharacter::execInitializeUnit)
{
	P_GET_ENUM(EUnitType,Z_Param_InType);
	P_GET_PROPERTY(FNameProperty,Z_Param_InName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeUnit(EUnitType(Z_Param_InType),Z_Param_InName);
	P_NATIVE_END;
}
// End Class AUnitCharacter Function InitializeUnit

// Begin Class AUnitCharacter
void AUnitCharacter::StaticRegisterNativesAUnitCharacter()
{
	UClass* Class = AUnitCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "InitializeUnit", &AUnitCharacter::execInitializeUnit },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnitType_MetaData[] = {
		{ "Category", "Unit" },
		{ "ModuleRelativePath", "UnitCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnitName_MetaData[] = {
		{ "Category", "Unit" },
		{ "ModuleRelativePath", "UnitCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_UnitType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_UnitType;
	static const UECodeGen_Private::FNamePropertyParams NewProp_UnitName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AUnitCharacter_InitializeUnit, "InitializeUnit" }, // 3850935000
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUnitCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AUnitCharacter_Statics::NewProp_UnitType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AUnitCharacter_Statics::NewProp_UnitType = { "UnitType", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUnitCharacter, UnitType), Z_Construct_UEnum_RTS_EUnitType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnitType_MetaData), NewProp_UnitType_MetaData) }; // 3972361493
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AUnitCharacter_Statics::NewProp_UnitName = { "UnitName", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUnitCharacter, UnitName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnitName_MetaData), NewProp_UnitName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AUnitCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnitCharacter_Statics::NewProp_UnitType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnitCharacter_Statics::NewProp_UnitType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnitCharacter_Statics::NewProp_UnitName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AUnitCharacter_Statics::PropPointers) < 2048);
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
	FuncInfo,
	Z_Construct_UClass_AUnitCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AUnitCharacter_Statics::PropPointers),
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
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EUnitType_StaticEnum, TEXT("EUnitType"), &Z_Registration_Info_UEnum_EUnitType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3972361493U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AUnitCharacter, AUnitCharacter::StaticClass, TEXT("AUnitCharacter"), &Z_Registration_Info_UClass_AUnitCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUnitCharacter), 2926376325U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_tonya_Desktop_Git_GameFeelUnreal_RTS_Source_RTS_UnitCharacter_h_1854747445(TEXT("/Script/RTS"),
	Z_CompiledInDeferFile_FID_Users_tonya_Desktop_Git_GameFeelUnreal_RTS_Source_RTS_UnitCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_tonya_Desktop_Git_GameFeelUnreal_RTS_Source_RTS_UnitCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_tonya_Desktop_Git_GameFeelUnreal_RTS_Source_RTS_UnitCharacter_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_tonya_Desktop_Git_GameFeelUnreal_RTS_Source_RTS_UnitCharacter_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
