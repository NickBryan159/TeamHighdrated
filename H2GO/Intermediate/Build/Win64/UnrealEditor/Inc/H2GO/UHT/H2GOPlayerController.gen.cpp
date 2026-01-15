// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "H2GO/H2GOPlayerController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeH2GOPlayerController() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
H2GO_API UClass* Z_Construct_UClass_AH2GOPlayerController();
H2GO_API UClass* Z_Construct_UClass_AH2GOPlayerController_NoRegister();
UPackage* Z_Construct_UPackage__Script_H2GO();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AH2GOPlayerController ****************************************************
void AH2GOPlayerController::StaticRegisterNativesAH2GOPlayerController()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AH2GOPlayerController;
UClass* AH2GOPlayerController::GetPrivateStaticClass()
{
	using TClass = AH2GOPlayerController;
	if (!Z_Registration_Info_UClass_AH2GOPlayerController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("H2GOPlayerController"),
			Z_Registration_Info_UClass_AH2GOPlayerController.InnerSingleton,
			StaticRegisterNativesAH2GOPlayerController,
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
	return Z_Registration_Info_UClass_AH2GOPlayerController.InnerSingleton;
}
UClass* Z_Construct_UClass_AH2GOPlayerController_NoRegister()
{
	return AH2GOPlayerController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AH2GOPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Basic PlayerController class for a third person game\n *  Manages input mappings\n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "H2GOPlayerController.h" },
		{ "ModuleRelativePath", "H2GOPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Basic PlayerController class for a third person game\nManages input mappings" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContexts_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Input Mapping Contexts */" },
#endif
		{ "ModuleRelativePath", "H2GOPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input Mapping Contexts" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContexts_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultMappingContexts;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AH2GOPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AH2GOPlayerController_Statics::NewProp_DefaultMappingContexts_Inner = { "DefaultMappingContexts", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AH2GOPlayerController_Statics::NewProp_DefaultMappingContexts = { "DefaultMappingContexts", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AH2GOPlayerController, DefaultMappingContexts), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMappingContexts_MetaData), NewProp_DefaultMappingContexts_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AH2GOPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AH2GOPlayerController_Statics::NewProp_DefaultMappingContexts_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AH2GOPlayerController_Statics::NewProp_DefaultMappingContexts,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AH2GOPlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AH2GOPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_H2GO,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AH2GOPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AH2GOPlayerController_Statics::ClassParams = {
	&AH2GOPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AH2GOPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AH2GOPlayerController_Statics::PropPointers),
	0,
	0x008003A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AH2GOPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AH2GOPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AH2GOPlayerController()
{
	if (!Z_Registration_Info_UClass_AH2GOPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AH2GOPlayerController.OuterSingleton, Z_Construct_UClass_AH2GOPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AH2GOPlayerController.OuterSingleton;
}
AH2GOPlayerController::AH2GOPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AH2GOPlayerController);
AH2GOPlayerController::~AH2GOPlayerController() {}
// ********** End Class AH2GOPlayerController ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_H2GO_Source_H2GO_H2GOPlayerController_h__Script_H2GO_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AH2GOPlayerController, AH2GOPlayerController::StaticClass, TEXT("AH2GOPlayerController"), &Z_Registration_Info_UClass_AH2GOPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AH2GOPlayerController), 18110297U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_H2GO_Source_H2GO_H2GOPlayerController_h__Script_H2GO_1806546899(TEXT("/Script/H2GO"),
	Z_CompiledInDeferFile_FID_H2GO_Source_H2GO_H2GOPlayerController_h__Script_H2GO_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_H2GO_Source_H2GO_H2GOPlayerController_h__Script_H2GO_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
