// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "H2GOPlayerController.h"

#ifdef H2GO_H2GOPlayerController_generated_h
#error "H2GOPlayerController.generated.h already included, missing '#pragma once' in H2GOPlayerController.h"
#endif
#define H2GO_H2GOPlayerController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AH2GOPlayerController ****************************************************
H2GO_API UClass* Z_Construct_UClass_AH2GOPlayerController_NoRegister();

#define FID_H2GO_Source_H2GO_H2GOPlayerController_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAH2GOPlayerController(); \
	friend struct Z_Construct_UClass_AH2GOPlayerController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend H2GO_API UClass* Z_Construct_UClass_AH2GOPlayerController_NoRegister(); \
public: \
	DECLARE_CLASS2(AH2GOPlayerController, APlayerController, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/H2GO"), Z_Construct_UClass_AH2GOPlayerController_NoRegister) \
	DECLARE_SERIALIZER(AH2GOPlayerController)


#define FID_H2GO_Source_H2GO_H2GOPlayerController_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AH2GOPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AH2GOPlayerController(AH2GOPlayerController&&) = delete; \
	AH2GOPlayerController(const AH2GOPlayerController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AH2GOPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AH2GOPlayerController); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AH2GOPlayerController) \
	NO_API virtual ~AH2GOPlayerController();


#define FID_H2GO_Source_H2GO_H2GOPlayerController_h_15_PROLOG
#define FID_H2GO_Source_H2GO_H2GOPlayerController_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_H2GO_Source_H2GO_H2GOPlayerController_h_18_INCLASS_NO_PURE_DECLS \
	FID_H2GO_Source_H2GO_H2GOPlayerController_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AH2GOPlayerController;

// ********** End Class AH2GOPlayerController ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_H2GO_Source_H2GO_H2GOPlayerController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
