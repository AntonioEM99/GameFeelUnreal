// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RTS/MainBuild.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainBuild() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
RTS_API UClass* Z_Construct_UClass_AMainBuild();
RTS_API UClass* Z_Construct_UClass_AMainBuild_NoRegister();
RTS_API UClass* Z_Construct_UClass_AUnitCharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_RTS();
// End Cross Module References

// Begin Class AMainBuild Function SpawnWorker
struct Z_Construct_UFunction_AMainBuild_SpawnWorker_Statics
{
	struct MainBuild_eventSpawnWorker_Parms
	{
		AUnitCharacter* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Build" },
		{ "ModuleRelativePath", "MainBuild.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMainBuild_SpawnWorker_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MainBuild_eventSpawnWorker_Parms, ReturnValue), Z_Construct_UClass_AUnitCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMainBuild_SpawnWorker_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMainBuild_SpawnWorker_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainBuild_SpawnWorker_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainBuild_SpawnWorker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainBuild, nullptr, "SpawnWorker", nullptr, nullptr, Z_Construct_UFunction_AMainBuild_SpawnWorker_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMainBuild_SpawnWorker_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMainBuild_SpawnWorker_Statics::MainBuild_eventSpawnWorker_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainBuild_SpawnWorker_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMainBuild_SpawnWorker_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMainBuild_SpawnWorker_Statics::MainBuild_eventSpawnWorker_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMainBuild_SpawnWorker()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMainBuild_SpawnWorker_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMainBuild::execSpawnWorker)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AUnitCharacter**)Z_Param__Result=P_THIS->SpawnWorker();
	P_NATIVE_END;
}
// End Class AMainBuild Function SpawnWorker

// Begin Class AMainBuild
void AMainBuild::StaticRegisterNativesAMainBuild()
{
	UClass* Class = AMainBuild::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SpawnWorker", &AMainBuild::execSpawnWorker },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMainBuild);
UClass* Z_Construct_UClass_AMainBuild_NoRegister()
{
	return AMainBuild::StaticClass();
}
struct Z_Construct_UClass_AMainBuild_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MainBuild.h" },
		{ "ModuleRelativePath", "MainBuild.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorkerClass_MetaData[] = {
		{ "Category", "Build|Spawn" },
		{ "ModuleRelativePath", "MainBuild.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnOffset_MetaData[] = {
		{ "Category", "Build|Spawn" },
		{ "ModuleRelativePath", "MainBuild.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_WorkerClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMainBuild_SpawnWorker, "SpawnWorker" }, // 576511753
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMainBuild>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMainBuild_Statics::NewProp_WorkerClass = { "WorkerClass", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainBuild, WorkerClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AUnitCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorkerClass_MetaData), NewProp_WorkerClass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMainBuild_Statics::NewProp_SpawnOffset = { "SpawnOffset", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainBuild, SpawnOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnOffset_MetaData), NewProp_SpawnOffset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMainBuild_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainBuild_Statics::NewProp_WorkerClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainBuild_Statics::NewProp_SpawnOffset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMainBuild_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMainBuild_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_RTS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMainBuild_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMainBuild_Statics::ClassParams = {
	&AMainBuild::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMainBuild_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMainBuild_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMainBuild_Statics::Class_MetaDataParams), Z_Construct_UClass_AMainBuild_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMainBuild()
{
	if (!Z_Registration_Info_UClass_AMainBuild.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMainBuild.OuterSingleton, Z_Construct_UClass_AMainBuild_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMainBuild.OuterSingleton;
}
template<> RTS_API UClass* StaticClass<AMainBuild>()
{
	return AMainBuild::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMainBuild);
AMainBuild::~AMainBuild() {}
// End Class AMainBuild

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_tonya_Desktop_Git_GameFeelUnreal_RTS_Source_RTS_MainBuild_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMainBuild, AMainBuild::StaticClass, TEXT("AMainBuild"), &Z_Registration_Info_UClass_AMainBuild, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMainBuild), 3435113199U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_tonya_Desktop_Git_GameFeelUnreal_RTS_Source_RTS_MainBuild_h_657605367(TEXT("/Script/RTS"),
	Z_CompiledInDeferFile_FID_Users_tonya_Desktop_Git_GameFeelUnreal_RTS_Source_RTS_MainBuild_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_tonya_Desktop_Git_GameFeelUnreal_RTS_Source_RTS_MainBuild_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
