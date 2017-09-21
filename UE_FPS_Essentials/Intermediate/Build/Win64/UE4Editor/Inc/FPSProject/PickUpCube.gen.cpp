// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "PickUpCube.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePickUpCube() {}
// Cross Module References
	FPSPROJECT_API UClass* Z_Construct_UClass_APickUpCube_NoRegister();
	FPSPROJECT_API UClass* Z_Construct_UClass_APickUpCube();
	FPSPROJECT_API UClass* Z_Construct_UClass_AFunCube();
	UPackage* Z_Construct_UPackage__Script_FPSProject();
// End Cross Module References
	void APickUpCube::StaticRegisterNativesAPickUpCube()
	{
	}
	UClass* Z_Construct_UClass_APickUpCube_NoRegister()
	{
		return APickUpCube::StaticClass();
	}
	UClass* Z_Construct_UClass_APickUpCube()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AFunCube();
			Z_Construct_UPackage__Script_FPSProject();
			OuterClass = APickUpCube::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;


				static TCppClassTypeInfo<TCppClassTypeTraits<APickUpCube> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("PickUpCube.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("PickUpCube.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(APickUpCube, 2247589131);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APickUpCube(Z_Construct_UClass_APickUpCube, &APickUpCube::StaticClass, TEXT("/Script/FPSProject"), TEXT("APickUpCube"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APickUpCube);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
