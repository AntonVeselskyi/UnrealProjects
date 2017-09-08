// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "UE_LiveTraining.generated.dep.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCode1UE_LiveTraining() {}
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	ENGINE_API class UClass* Z_Construct_UClass_ACameraActor();
	COREUOBJECT_API class UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API class UClass* Z_Construct_UClass_APawn();
	ENGINE_API class UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_AGameModeBase();

	UE_LIVETRAINING_API class UClass* Z_Construct_UClass_AMyCamera_NoRegister();
	UE_LIVETRAINING_API class UClass* Z_Construct_UClass_AMyCamera();
	UE_LIVETRAINING_API class UClass* Z_Construct_UClass_AMyPawn_NoRegister();
	UE_LIVETRAINING_API class UClass* Z_Construct_UClass_AMyPawn();
	UE_LIVETRAINING_API class UClass* Z_Construct_UClass_AUE_LiveTrainingGameModeBase_NoRegister();
	UE_LIVETRAINING_API class UClass* Z_Construct_UClass_AUE_LiveTrainingGameModeBase();
	UE_LIVETRAINING_API class UPackage* Z_Construct_UPackage__Script_UE_LiveTraining();
	void AMyCamera::StaticRegisterNativesAMyCamera()
	{
	}
	UClass* Z_Construct_UClass_AMyCamera_NoRegister()
	{
		return AMyCamera::StaticClass();
	}
	UClass* Z_Construct_UClass_AMyCamera()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_ACameraActor();
			Z_Construct_UPackage__Script_UE_LiveTraining();
			OuterClass = AMyCamera::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_IdealOffset = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("IdealOffset"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(IdealOffset, AMyCamera), 0x0010000000000005, Z_Construct_UScriptStruct_FVector());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				static TCppClassTypeInfo<TCppClassTypeTraits<AMyCamera> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Input Rendering"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("MyCamera.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("MyCamera.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
				MetaData->SetValue(NewProp_IdealOffset, TEXT("Category"), TEXT("MyCamera"));
				MetaData->SetValue(NewProp_IdealOffset, TEXT("ModuleRelativePath"), TEXT("MyCamera.h"));
				MetaData->SetValue(NewProp_IdealOffset, TEXT("ToolTip"), TEXT("distanse between camera and object"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyCamera, 3330784499);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyCamera(Z_Construct_UClass_AMyCamera, &AMyCamera::StaticClass, TEXT("/Script/UE_LiveTraining"), TEXT("AMyCamera"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyCamera);
	void AMyPawn::StaticRegisterNativesAMyPawn()
	{
	}
	UClass* Z_Construct_UClass_AMyPawn_NoRegister()
	{
		return AMyPawn::StaticClass();
	}
	UClass* Z_Construct_UClass_AMyPawn()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_APawn();
			Z_Construct_UPackage__Script_UE_LiveTraining();
			OuterClass = AMyPawn::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_MyCamera = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MyCamera"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(MyCamera, AMyPawn), 0x0010000000020015, Z_Construct_UClass_AMyCamera_NoRegister());
				UProperty* NewProp_CameraActorToSpawn = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CameraActorToSpawn"), RF_Public|RF_Transient|RF_MarkAsNative) UClassProperty(CPP_PROPERTY_BASE(CameraActorToSpawn, AMyPawn), 0x0014000000000001, Z_Construct_UClass_AMyCamera_NoRegister(), UClass::StaticClass());
				UProperty* NewProp_OurVisibleComponent = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("OurVisibleComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OurVisibleComponent, AMyPawn), 0x0010000000080009, Z_Construct_UClass_USceneComponent_NoRegister());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				static TCppClassTypeInfo<TCppClassTypeTraits<AMyPawn> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Navigation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("MyPawn.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("MyPawn.h"));
				MetaData->SetValue(NewProp_MyCamera, TEXT("Category"), TEXT("MyPawn"));
				MetaData->SetValue(NewProp_MyCamera, TEXT("ModuleRelativePath"), TEXT("MyPawn.h"));
				MetaData->SetValue(NewProp_CameraActorToSpawn, TEXT("Category"), TEXT("MyPawn"));
				MetaData->SetValue(NewProp_CameraActorToSpawn, TEXT("ModuleRelativePath"), TEXT("MyPawn.h"));
				MetaData->SetValue(NewProp_CameraActorToSpawn, TEXT("ToolTip"), TEXT("camera class/BP we spawn for the player"));
				MetaData->SetValue(NewProp_OurVisibleComponent, TEXT("Category"), TEXT("MyPawn"));
				MetaData->SetValue(NewProp_OurVisibleComponent, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_OurVisibleComponent, TEXT("ModuleRelativePath"), TEXT("MyPawn.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyPawn, 3212120552);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyPawn(Z_Construct_UClass_AMyPawn, &AMyPawn::StaticClass, TEXT("/Script/UE_LiveTraining"), TEXT("AMyPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyPawn);
	void AUE_LiveTrainingGameModeBase::StaticRegisterNativesAUE_LiveTrainingGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AUE_LiveTrainingGameModeBase_NoRegister()
	{
		return AUE_LiveTrainingGameModeBase::StaticClass();
	}
	UClass* Z_Construct_UClass_AUE_LiveTrainingGameModeBase()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AGameModeBase();
			Z_Construct_UPackage__Script_UE_LiveTraining();
			OuterClass = AUE_LiveTrainingGameModeBase::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900288;


				static TCppClassTypeInfo<TCppClassTypeTraits<AUE_LiveTrainingGameModeBase> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("UE_LiveTrainingGameModeBase.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("UE_LiveTrainingGameModeBase.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUE_LiveTrainingGameModeBase, 3241521871);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUE_LiveTrainingGameModeBase(Z_Construct_UClass_AUE_LiveTrainingGameModeBase, &AUE_LiveTrainingGameModeBase::StaticClass, TEXT("/Script/UE_LiveTraining"), TEXT("AUE_LiveTrainingGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUE_LiveTrainingGameModeBase);
	UPackage* Z_Construct_UPackage__Script_UE_LiveTraining()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), nullptr, FName(TEXT("/Script/UE_LiveTraining")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0x5FCB47C2;
			Guid.B = 0xC03C2503;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);

		}
		return ReturnPackage;
	}
#endif
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
