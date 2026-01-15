// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeH2GO_init() {}
	H2GO_API UFunction* Z_Construct_UDelegateFunction_H2GO_OnEnemyDied__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_H2GO;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_H2GO()
	{
		if (!Z_Registration_Info_UPackage__Script_H2GO.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_H2GO_OnEnemyDied__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/H2GO",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x82C0AFB6,
				0xD7DFBC7B,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_H2GO.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_H2GO.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_H2GO(Z_Construct_UPackage__Script_H2GO, TEXT("/Script/H2GO"), Z_Registration_Info_UPackage__Script_H2GO, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x82C0AFB6, 0xD7DFBC7B));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
