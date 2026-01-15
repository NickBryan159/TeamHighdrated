// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "H2GO/H2GOGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeH2GOGameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
H2GO_API UClass* Z_Construct_UClass_AH2GOGameMode();
H2GO_API UClass* Z_Construct_UClass_AH2GOGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_H2GO();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AH2GOGameMode ************************************************************
void AH2GOGameMode::StaticRegisterNativesAH2GOGameMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AH2GOGameMode;
UClass* AH2GOGameMode::GetPrivateStaticClass()
{
	using TClass = AH2GOGameMode;
	if (!Z_Registration_Info_UClass_AH2GOGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("H2GOGameMode"),
			Z_Registration_Info_UClass_AH2GOGameMode.InnerSingleton,
			StaticRegisterNativesAH2GOGameMode,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_AH2GOGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_AH2GOGameMode_NoRegister()
{
	return AH2GOGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AH2GOGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple GameMode for a third person game\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "H2GOGameMode.h" },
		{ "ModuleRelativePath", "H2GOGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple GameMode for a third person game" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AH2GOGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AH2GOGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_H2GO,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AH2GOGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AH2GOGameMode_Statics::ClassParams = {
	&AH2GOGameMode::StaticClass,
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
	0x008003ADu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AH2GOGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AH2GOGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AH2GOGameMode()
{
	if (!Z_Registration_Info_UClass_AH2GOGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AH2GOGameMode.OuterSingleton, Z_Construct_UClass_AH2GOGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AH2GOGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AH2GOGameMode);
AH2GOGameMode::~AH2GOGameMode() {}
// ********** End Class AH2GOGameMode **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_H2GO_Source_H2GO_H2GOGameMode_h__Script_H2GO_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AH2GOGameMode, AH2GOGameMode::StaticClass, TEXT("AH2GOGameMode"), &Z_Registration_Info_UClass_AH2GOGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AH2GOGameMode), 844626342U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_H2GO_Source_H2GO_H2GOGameMode_h__Script_H2GO_3672436675(TEXT("/Script/H2GO"),
	Z_CompiledInDeferFile_FID_H2GO_Source_H2GO_H2GOGameMode_h__Script_H2GO_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_H2GO_Source_H2GO_H2GOGameMode_h__Script_H2GO_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
