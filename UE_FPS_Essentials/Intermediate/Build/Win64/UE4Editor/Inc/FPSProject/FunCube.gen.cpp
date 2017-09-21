// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "FunCube.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFunCube() {}
// Cross Module References
	FPSPROJECT_API UFunction* Z_Construct_UFunction_AFunCube_OnOverlapBegin();
	FPSPROJECT_API UClass* Z_Construct_UClass_AFunCube();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	FPSPROJECT_API UClass* Z_Construct_UClass_AFunCube_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_FPSProject();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
// End Cross Module References
	void AFunCube::StaticRegisterNativesAFunCube()
	{
		UClass* Class = AFunCube::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "OnOverlapBegin", (Native)&AFunCube::execOnOverlapBegin },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_AFunCube_OnOverlapBegin()
	{
		struct FunCube_eventOnOverlapBegin_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
		UObject* Outer = Z_Construct_UClass_AFunCube();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnOverlapBegin"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00420401, 65535, sizeof(FunCube_eventOnOverlapBegin_Parms));
			UProperty* NewProp_SweepResult = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("SweepResult"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(SweepResult, FunCube_eventOnOverlapBegin_Parms), 0x0010008008000182, Z_Construct_UScriptStruct_FHitResult());
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bFromSweep, FunCube_eventOnOverlapBegin_Parms);
			UProperty* NewProp_bFromSweep = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bFromSweep"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bFromSweep, FunCube_eventOnOverlapBegin_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bFromSweep, FunCube_eventOnOverlapBegin_Parms), sizeof(bool), true);
			UProperty* NewProp_OtherBodyIndex = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherBodyIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(OtherBodyIndex, FunCube_eventOnOverlapBegin_Parms), 0x0010000000000080);
			UProperty* NewProp_OtherComp = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OtherComp, FunCube_eventOnOverlapBegin_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			UProperty* NewProp_OtherActor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherActor"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OtherActor, FunCube_eventOnOverlapBegin_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			UProperty* NewProp_OverlappedComp = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OverlappedComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OverlappedComp, FunCube_eventOnOverlapBegin_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("FunCube.h"));
			MetaData->SetValue(NewProp_SweepResult, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_OtherComp, TEXT("EditInline"), TEXT("true"));
			MetaData->SetValue(NewProp_OverlappedComp, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFunCube_NoRegister()
	{
		return AFunCube::StaticClass();
	}
	UClass* Z_Construct_UClass_AFunCube()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_FPSProject();
			OuterClass = AFunCube::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;

				OuterClass->LinkChild(Z_Construct_UFunction_AFunCube_OnOverlapBegin());

				UProperty* NewProp_Name = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Name"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(Name, AFunCube), 0x0010000000000001);
				UProperty* NewProp_BoxCollider = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("BoxCollider"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(BoxCollider, AFunCube), 0x0010000000080009, Z_Construct_UClass_UBoxComponent_NoRegister());
				UProperty* NewProp_StaticMesh = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("StaticMesh"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(StaticMesh, AFunCube), 0x001000000008000d, Z_Construct_UClass_UStaticMeshComponent_NoRegister());
				UProperty* NewProp_SceneComponent = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("SceneComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(SceneComponent, AFunCube), 0x001000000008000d, Z_Construct_UClass_USceneComponent_NoRegister());
				UProperty* NewProp_Speed = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Speed"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Speed, AFunCube), 0x0010000000000005);
				UProperty* NewProp_RotationRate = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("RotationRate"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(RotationRate, AFunCube), 0x0010000000000005, Z_Construct_UScriptStruct_FRotator());
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AFunCube_OnOverlapBegin(), "OnOverlapBegin"); // 2308575536
				static TCppClassTypeInfo<TCppClassTypeTraits<AFunCube> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("FunCube.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("FunCube.h"));
				MetaData->SetValue(NewProp_Name, TEXT("Category"), TEXT("FunCube"));
				MetaData->SetValue(NewProp_Name, TEXT("ModuleRelativePath"), TEXT("FunCube.h"));
				MetaData->SetValue(NewProp_Name, TEXT("ToolTip"), TEXT("name"));
				MetaData->SetValue(NewProp_BoxCollider, TEXT("Category"), TEXT("FunCube"));
				MetaData->SetValue(NewProp_BoxCollider, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_BoxCollider, TEXT("ModuleRelativePath"), TEXT("FunCube.h"));
				MetaData->SetValue(NewProp_StaticMesh, TEXT("Category"), TEXT("PickUp"));
				MetaData->SetValue(NewProp_StaticMesh, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_StaticMesh, TEXT("ModuleRelativePath"), TEXT("FunCube.h"));
				MetaData->SetValue(NewProp_SceneComponent, TEXT("Category"), TEXT("PickUp"));
				MetaData->SetValue(NewProp_SceneComponent, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_SceneComponent, TEXT("ModuleRelativePath"), TEXT("FunCube.h"));
				MetaData->SetValue(NewProp_Speed, TEXT("Category"), TEXT("PickUp"));
				MetaData->SetValue(NewProp_Speed, TEXT("ModuleRelativePath"), TEXT("FunCube.h"));
				MetaData->SetValue(NewProp_RotationRate, TEXT("Category"), TEXT("PickUp"));
				MetaData->SetValue(NewProp_RotationRate, TEXT("ModuleRelativePath"), TEXT("FunCube.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFunCube, 3052105893);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFunCube(Z_Construct_UClass_AFunCube, &AFunCube::StaticClass, TEXT("/Script/FPSProject"), TEXT("AFunCube"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFunCube);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
