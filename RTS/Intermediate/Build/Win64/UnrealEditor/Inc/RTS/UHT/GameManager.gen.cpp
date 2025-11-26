// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RTS/GameManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameManager() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
RTS_API UClass* Z_Construct_UClass_AGameManager();
RTS_API UClass* Z_Construct_UClass_AGameManager_NoRegister();
RTS_API UClass* Z_Construct_UClass_AUnitCharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_RTS();
// End Cross Module References

// Begin Class AGameManager Function GetGameManager
struct Z_Construct_UFunction_AGameManager_GetGameManager_Statics
{
	struct GameManager_eventGetGameManager_Parms
	{
		UObject* WorldContextObject;
		AGameManager* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "GameManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGameManager_GetGameManager_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameManager_eventGetGameManager_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGameManager_GetGameManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameManager_eventGetGameManager_Parms, ReturnValue), Z_Construct_UClass_AGameManager_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameManager_GetGameManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameManager_GetGameManager_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameManager_GetGameManager_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameManager_GetGameManager_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameManager_GetGameManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameManager, nullptr, "GetGameManager", nullptr, nullptr, Z_Construct_UFunction_AGameManager_GetGameManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameManager_GetGameManager_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGameManager_GetGameManager_Statics::GameManager_eventGetGameManager_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameManager_GetGameManager_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGameManager_GetGameManager_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGameManager_GetGameManager_Statics::GameManager_eventGetGameManager_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGameManager_GetGameManager()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameManager_GetGameManager_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGameManager::execGetGameManager)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AGameManager**)Z_Param__Result=AGameManager::GetGameManager(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// End Class AGameManager Function GetGameManager

// Begin Class AGameManager Function RegisterUnit
struct Z_Construct_UFunction_AGameManager_RegisterUnit_Statics
{
	struct GameManager_eventRegisterUnit_Parms
	{
		AUnitCharacter* Unit;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "GameManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Unit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGameManager_RegisterUnit_Statics::NewProp_Unit = { "Unit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameManager_eventRegisterUnit_Parms, Unit), Z_Construct_UClass_AUnitCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameManager_RegisterUnit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameManager_RegisterUnit_Statics::NewProp_Unit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameManager_RegisterUnit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameManager_RegisterUnit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameManager, nullptr, "RegisterUnit", nullptr, nullptr, Z_Construct_UFunction_AGameManager_RegisterUnit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameManager_RegisterUnit_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGameManager_RegisterUnit_Statics::GameManager_eventRegisterUnit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameManager_RegisterUnit_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGameManager_RegisterUnit_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGameManager_RegisterUnit_Statics::GameManager_eventRegisterUnit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGameManager_RegisterUnit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameManager_RegisterUnit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGameManager::execRegisterUnit)
{
	P_GET_OBJECT(AUnitCharacter,Z_Param_Unit);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegisterUnit(Z_Param_Unit);
	P_NATIVE_END;
}
// End Class AGameManager Function RegisterUnit

// Begin Class AGameManager
void AGameManager::StaticRegisterNativesAGameManager()
{
	UClass* Class = AGameManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetGameManager", &AGameManager::execGetGameManager },
		{ "RegisterUnit", &AGameManager::execRegisterUnit },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGameManager);
UClass* Z_Construct_UClass_AGameManager_NoRegister()
{
	return AGameManager::StaticClass();
}
struct Z_Construct_UClass_AGameManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "GameManager.h" },
		{ "ModuleRelativePath", "GameManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllUnits_MetaData[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "GameManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AllUnits_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AllUnits;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AGameManager_GetGameManager, "GetGameManager" }, // 551224864
		{ &Z_Construct_UFunction_AGameManager_RegisterUnit, "RegisterUnit" }, // 2795892809
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGameManager_Statics::NewProp_AllUnits_Inner = { "AllUnits", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AUnitCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGameManager_Statics::NewProp_AllUnits = { "AllUnits", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameManager, AllUnits), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllUnits_MetaData), NewProp_AllUnits_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGameManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameManager_Statics::NewProp_AllUnits_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameManager_Statics::NewProp_AllUnits,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGameManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AGameManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_RTS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGameManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGameManager_Statics::ClassParams = {
	&AGameManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AGameManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AGameManager_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGameManager_Statics::Class_MetaDataParams), Z_Construct_UClass_AGameManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGameManager()
{
	if (!Z_Registration_Info_UClass_AGameManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGameManager.OuterSingleton, Z_Construct_UClass_AGameManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGameManager.OuterSingleton;
}
template<> RTS_API UClass* StaticClass<AGameManager>()
{
	return AGameManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGameManager);
AGameManager::~AGameManager() {}
// End Class AGameManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_tonya_Desktop_Git_GameFeelUnreal_RTS_Source_RTS_GameManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGameManager, AGameManager::StaticClass, TEXT("AGameManager"), &Z_Registration_Info_UClass_AGameManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGameManager), 663008123U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_tonya_Desktop_Git_GameFeelUnreal_RTS_Source_RTS_GameManager_h_2649122223(TEXT("/Script/RTS"),
	Z_CompiledInDeferFile_FID_Users_tonya_Desktop_Git_GameFeelUnreal_RTS_Source_RTS_GameManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_tonya_Desktop_Git_GameFeelUnreal_RTS_Source_RTS_GameManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
