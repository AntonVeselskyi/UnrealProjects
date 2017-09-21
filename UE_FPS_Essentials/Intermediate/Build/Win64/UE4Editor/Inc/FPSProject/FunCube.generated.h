// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef FPSPROJECT_FunCube_generated_h
#error "FunCube.generated.h already included, missing '#pragma once' in FunCube.h"
#endif
#define FPSPROJECT_FunCube_generated_h

#define FPSProject_Source_FPSProject_FunCube_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnOverlapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define FPSProject_Source_FPSProject_FunCube_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnOverlapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define FPSProject_Source_FPSProject_FunCube_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFunCube(); \
	friend FPSPROJECT_API class UClass* Z_Construct_UClass_AFunCube(); \
public: \
	DECLARE_CLASS(AFunCube, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FPSProject"), NO_API) \
	DECLARE_SERIALIZER(AFunCube) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define FPSProject_Source_FPSProject_FunCube_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAFunCube(); \
	friend FPSPROJECT_API class UClass* Z_Construct_UClass_AFunCube(); \
public: \
	DECLARE_CLASS(AFunCube, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FPSProject"), NO_API) \
	DECLARE_SERIALIZER(AFunCube) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define FPSProject_Source_FPSProject_FunCube_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFunCube(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFunCube) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFunCube); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFunCube); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFunCube(AFunCube&&); \
	NO_API AFunCube(const AFunCube&); \
public:


#define FPSProject_Source_FPSProject_FunCube_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFunCube(AFunCube&&); \
	NO_API AFunCube(const AFunCube&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFunCube); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFunCube); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFunCube)


#define FPSProject_Source_FPSProject_FunCube_h_16_PRIVATE_PROPERTY_OFFSET
#define FPSProject_Source_FPSProject_FunCube_h_13_PROLOG
#define FPSProject_Source_FPSProject_FunCube_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPSProject_Source_FPSProject_FunCube_h_16_PRIVATE_PROPERTY_OFFSET \
	FPSProject_Source_FPSProject_FunCube_h_16_RPC_WRAPPERS \
	FPSProject_Source_FPSProject_FunCube_h_16_INCLASS \
	FPSProject_Source_FPSProject_FunCube_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FPSProject_Source_FPSProject_FunCube_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPSProject_Source_FPSProject_FunCube_h_16_PRIVATE_PROPERTY_OFFSET \
	FPSProject_Source_FPSProject_FunCube_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FPSProject_Source_FPSProject_FunCube_h_16_INCLASS_NO_PURE_DECLS \
	FPSProject_Source_FPSProject_FunCube_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FPSProject_Source_FPSProject_FunCube_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
