// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRTS_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_RTS;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_RTS()
	{
		if (!Z_Registration_Info_UPackage__Script_RTS.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/RTS",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x6F886F5D,
				0x0074606F,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_RTS.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_RTS.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_RTS(Z_Construct_UPackage__Script_RTS, TEXT("/Script/RTS"), Z_Registration_Info_UPackage__Script_RTS, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x6F886F5D, 0x0074606F));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
