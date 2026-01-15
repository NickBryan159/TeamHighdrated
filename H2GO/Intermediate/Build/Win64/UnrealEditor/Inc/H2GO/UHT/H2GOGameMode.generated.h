// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "H2GOGameMode.h"

#ifdef H2GO_H2GOGameMode_generated_h
#error "H2GOGameMode.generated.h already included, missing '#pragma once' in H2GOGameMode.h"
#endif
#define H2GO_H2GOGameMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AH2GOGameMode ************************************************************
H2GO_API UClass* Z_Construct_UClass_AH2GOGameMode_NoRegister();

#define FID_H2GO_Source_H2GO_H2GOGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAH2GOGameMode(); \
	friend struct Z_Construct_UClass_AH2GOGameMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend H2GO_API UClass* Z_Construct_UClass_AH2GOGameMode_NoRegister(); \
public: \
	DECLARE_CLASS2(AH2GOGameMode, AGameModeBase, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/H2GO"), Z_Construct_UClass_AH2GOGameMode_NoRegister) \
	DECLARE_SERIALIZER(AH2GOGameMode)


#define FID_H2GO_Source_H2GO_H2GOGameMode_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AH2GOGameMode(AH2GOGameMode&&) = delete; \
	AH2GOGameMode(const AH2GOGameMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AH2GOGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AH2GOGameMode); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AH2GOGameMode) \
	NO_API virtual ~AH2GOGameMode();


#define FID_H2GO_Source_H2GO_H2GOGameMode_h_12_PROLOG
#define FID_H2GO_Source_H2GO_H2GOGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_H2GO_Source_H2GO_H2GOGameMode_h_15_INCLASS_NO_PURE_DECLS \
	FID_H2GO_Source_H2GO_H2GOGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AH2GOGameMode;

// ********** End Class AH2GOGameMode **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_H2GO_Source_H2GO_H2GOGameMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
