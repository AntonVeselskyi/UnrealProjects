// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "UE_PlgnStateMachine.generated.dep.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCode1UE_PlgnStateMachine() {}
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	ENGINE_API class UClass* Z_Construct_UClass_AGameModeBase();

	UE_PLGNSTATEMACHINE_API class UClass* Z_Construct_UClass_AUE_PlgnStateMachineGameModeBase_NoRegister();
	UE_PLGNSTATEMACHINE_API class UClass* Z_Construct_UClass_AUE_PlgnStateMachineGameModeBase();
	UE_PLGNSTATEMACHINE_API class UPackage* Z_Construct_UPackage__Script_UE_PlgnStateMachine();
	void AUE_PlgnStateMachineGameModeBase::StaticRegisterNativesAUE_PlgnStateMachineGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AUE_PlgnStateMachineGameModeBase_NoRegister()
	{
		return AUE_PlgnStateMachineGameModeBase::StaticClass();
	}
	UClass* Z_Construct_UClass_AUE_PlgnStateMachineGameModeBase()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AGameModeBase();
			Z_Construct_UPackage__Script_UE_PlgnStateMachine();
			OuterClass = AUE_PlgnStateMachineGameModeBase::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900288;


				static TCppClassTypeInfo<TCppClassTypeTraits<AUE_PlgnStateMachineGameModeBase> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("UE_PlgnStateMachineGameModeBase.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("UE_PlgnStateMachineGameModeBase.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUE_PlgnStateMachineGameModeBase, 331707341);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUE_PlgnStateMachineGameModeBase(Z_Construct_UClass_AUE_PlgnStateMachineGameModeBase, &AUE_PlgnStateMachineGameModeBase::StaticClass, TEXT("/Script/UE_PlgnStateMachine"), TEXT("AUE_PlgnStateMachineGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUE_PlgnStateMachineGameModeBase);
	UPackage* Z_Construct_UPackage__Script_UE_PlgnStateMachine()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), nullptr, FName(TEXT("/Script/UE_PlgnStateMachine")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0xF59293C1;
			Guid.B = 0x9238A64D;
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
