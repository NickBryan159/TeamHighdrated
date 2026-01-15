// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "H2GOCharacter.h"

#ifdef H2GO_H2GOCharacter_generated_h
#error "H2GOCharacter.generated.h already included, missing '#pragma once' in H2GOCharacter.h"
#endif
#define H2GO_H2GOCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AH2GOCharacter ***********************************************************
#define FID_H2GO_Source_H2GO_H2GOCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDoJumpEnd); \
	DECLARE_FUNCTION(execDoJumpStart); \
	DECLARE_FUNCTION(execDoLook); \
	DECLARE_FUNCTION(execDoMove);


H2GO_API UClass* Z_Construct_UClass_AH2GOCharacter_NoRegister();

#define FID_H2GO_Source_H2GO_H2GOCharacter_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAH2GOCharacter(); \
	friend struct Z_Construct_UClass_AH2GOCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend H2GO_API UClass* Z_Construct_UClass_AH2GOCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(AH2GOCharacter, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/H2GO"), Z_Construct_UClass_AH2GOCharacter_NoRegister) \
	DECLARE_SERIALIZER(AH2GOCharacter)


#define FID_H2GO_Source_H2GO_H2GOCharacter_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AH2GOCharacter(AH2GOCharacter&&) = delete; \
	AH2GOCharacter(const AH2GOCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AH2GOCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AH2GOCharacter); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AH2GOCharacter) \
	NO_API virtual ~AH2GOCharacter();


#define FID_H2GO_Source_H2GO_H2GOCharacter_h_21_PROLOG
#define FID_H2GO_Source_H2GO_H2GOCharacter_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_H2GO_Source_H2GO_H2GOCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_H2GO_Source_H2GO_H2GOCharacter_h_24_INCLASS_NO_PURE_DECLS \
	FID_H2GO_Source_H2GO_H2GOCharacter_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AH2GOCharacter;

// ********** End Class AH2GOCharacter *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_H2GO_Source_H2GO_H2GOCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
