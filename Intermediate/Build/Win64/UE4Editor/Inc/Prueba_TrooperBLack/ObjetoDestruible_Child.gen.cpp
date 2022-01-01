// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Prueba_TrooperBLack/ObjetoDestruible_Child.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObjetoDestruible_Child() {}
// Cross Module References
	PRUEBA_TROOPERBLACK_API UClass* Z_Construct_UClass_AObjetoDestruible_Child_NoRegister();
	PRUEBA_TROOPERBLACK_API UClass* Z_Construct_UClass_AObjetoDestruible_Child();
	PRUEBA_TROOPERBLACK_API UClass* Z_Construct_UClass_AObjeto_Destruible_CPP();
	UPackage* Z_Construct_UPackage__Script_Prueba_TrooperBLack();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AObjetoDestruible_Child::execSalirTrigger)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SalirTrigger(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AObjetoDestruible_Child::execEntrarTrigger)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EntrarTrigger(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	void AObjetoDestruible_Child::StaticRegisterNativesAObjetoDestruible_Child()
	{
		UClass* Class = AObjetoDestruible_Child::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EntrarTrigger", &AObjetoDestruible_Child::execEntrarTrigger },
			{ "SalirTrigger", &AObjetoDestruible_Child::execSalirTrigger },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AObjetoDestruible_Child_EntrarTrigger_Statics
	{
		struct ObjetoDestruible_Child_eventEntrarTrigger_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AObjetoDestruible_Child_EntrarTrigger_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AObjetoDestruible_Child_EntrarTrigger_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ObjetoDestruible_Child_eventEntrarTrigger_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AObjetoDestruible_Child_EntrarTrigger_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AObjetoDestruible_Child_EntrarTrigger_Statics::NewProp_SweepResult_MetaData)) };
	void Z_Construct_UFunction_AObjetoDestruible_Child_EntrarTrigger_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((ObjetoDestruible_Child_eventEntrarTrigger_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AObjetoDestruible_Child_EntrarTrigger_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ObjetoDestruible_Child_eventEntrarTrigger_Parms), &Z_Construct_UFunction_AObjetoDestruible_Child_EntrarTrigger_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AObjetoDestruible_Child_EntrarTrigger_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ObjetoDestruible_Child_eventEntrarTrigger_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AObjetoDestruible_Child_EntrarTrigger_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AObjetoDestruible_Child_EntrarTrigger_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ObjetoDestruible_Child_eventEntrarTrigger_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AObjetoDestruible_Child_EntrarTrigger_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AObjetoDestruible_Child_EntrarTrigger_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AObjetoDestruible_Child_EntrarTrigger_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ObjetoDestruible_Child_eventEntrarTrigger_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AObjetoDestruible_Child_EntrarTrigger_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AObjetoDestruible_Child_EntrarTrigger_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ObjetoDestruible_Child_eventEntrarTrigger_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AObjetoDestruible_Child_EntrarTrigger_Statics::NewProp_OverlappedComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AObjetoDestruible_Child_EntrarTrigger_Statics::NewProp_OverlappedComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AObjetoDestruible_Child_EntrarTrigger_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AObjetoDestruible_Child_EntrarTrigger_Statics::NewProp_SweepResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AObjetoDestruible_Child_EntrarTrigger_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AObjetoDestruible_Child_EntrarTrigger_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AObjetoDestruible_Child_EntrarTrigger_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AObjetoDestruible_Child_EntrarTrigger_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AObjetoDestruible_Child_EntrarTrigger_Statics::NewProp_OverlappedComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AObjetoDestruible_Child_EntrarTrigger_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ObjetoDestruible_Child.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AObjetoDestruible_Child_EntrarTrigger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AObjetoDestruible_Child, nullptr, "EntrarTrigger", nullptr, nullptr, sizeof(ObjetoDestruible_Child_eventEntrarTrigger_Parms), Z_Construct_UFunction_AObjetoDestruible_Child_EntrarTrigger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AObjetoDestruible_Child_EntrarTrigger_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AObjetoDestruible_Child_EntrarTrigger_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AObjetoDestruible_Child_EntrarTrigger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AObjetoDestruible_Child_EntrarTrigger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AObjetoDestruible_Child_EntrarTrigger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AObjetoDestruible_Child_SalirTrigger_Statics
	{
		struct ObjetoDestruible_Child_eventSalirTrigger_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AObjetoDestruible_Child_SalirTrigger_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ObjetoDestruible_Child_eventSalirTrigger_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AObjetoDestruible_Child_SalirTrigger_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AObjetoDestruible_Child_SalirTrigger_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ObjetoDestruible_Child_eventSalirTrigger_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AObjetoDestruible_Child_SalirTrigger_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AObjetoDestruible_Child_SalirTrigger_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AObjetoDestruible_Child_SalirTrigger_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ObjetoDestruible_Child_eventSalirTrigger_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AObjetoDestruible_Child_SalirTrigger_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AObjetoDestruible_Child_SalirTrigger_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ObjetoDestruible_Child_eventSalirTrigger_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AObjetoDestruible_Child_SalirTrigger_Statics::NewProp_OverlappedComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AObjetoDestruible_Child_SalirTrigger_Statics::NewProp_OverlappedComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AObjetoDestruible_Child_SalirTrigger_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AObjetoDestruible_Child_SalirTrigger_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AObjetoDestruible_Child_SalirTrigger_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AObjetoDestruible_Child_SalirTrigger_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AObjetoDestruible_Child_SalirTrigger_Statics::NewProp_OverlappedComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AObjetoDestruible_Child_SalirTrigger_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ObjetoDestruible_Child.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AObjetoDestruible_Child_SalirTrigger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AObjetoDestruible_Child, nullptr, "SalirTrigger", nullptr, nullptr, sizeof(ObjetoDestruible_Child_eventSalirTrigger_Parms), Z_Construct_UFunction_AObjetoDestruible_Child_SalirTrigger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AObjetoDestruible_Child_SalirTrigger_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AObjetoDestruible_Child_SalirTrigger_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AObjetoDestruible_Child_SalirTrigger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AObjetoDestruible_Child_SalirTrigger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AObjetoDestruible_Child_SalirTrigger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AObjetoDestruible_Child_NoRegister()
	{
		return AObjetoDestruible_Child::StaticClass();
	}
	struct Z_Construct_UClass_AObjetoDestruible_Child_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_var_objetoTrigger2_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_var_objetoTrigger2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_var_Damage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_var_Damage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AObjetoDestruible_Child_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AObjeto_Destruible_CPP,
		(UObject* (*)())Z_Construct_UPackage__Script_Prueba_TrooperBLack,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AObjetoDestruible_Child_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AObjetoDestruible_Child_EntrarTrigger, "EntrarTrigger" }, // 4213404612
		{ &Z_Construct_UFunction_AObjetoDestruible_Child_SalirTrigger, "SalirTrigger" }, // 2829173534
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObjetoDestruible_Child_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ObjetoDestruible_Child.h" },
		{ "ModuleRelativePath", "ObjetoDestruible_Child.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObjetoDestruible_Child_Statics::NewProp_var_objetoTrigger2_MetaData[] = {
		{ "Category", "ObjetoDestruible_Child" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ObjetoDestruible_Child.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AObjetoDestruible_Child_Statics::NewProp_var_objetoTrigger2 = { "var_objetoTrigger2", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AObjetoDestruible_Child, var_objetoTrigger2), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AObjetoDestruible_Child_Statics::NewProp_var_objetoTrigger2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AObjetoDestruible_Child_Statics::NewProp_var_objetoTrigger2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObjetoDestruible_Child_Statics::NewProp_var_Damage_MetaData[] = {
		{ "Category", "ObjetoDestruible_Child" },
		{ "ModuleRelativePath", "ObjetoDestruible_Child.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AObjetoDestruible_Child_Statics::NewProp_var_Damage = { "var_Damage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AObjetoDestruible_Child, var_Damage), METADATA_PARAMS(Z_Construct_UClass_AObjetoDestruible_Child_Statics::NewProp_var_Damage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AObjetoDestruible_Child_Statics::NewProp_var_Damage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AObjetoDestruible_Child_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObjetoDestruible_Child_Statics::NewProp_var_objetoTrigger2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObjetoDestruible_Child_Statics::NewProp_var_Damage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AObjetoDestruible_Child_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AObjetoDestruible_Child>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AObjetoDestruible_Child_Statics::ClassParams = {
		&AObjetoDestruible_Child::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AObjetoDestruible_Child_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AObjetoDestruible_Child_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AObjetoDestruible_Child_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AObjetoDestruible_Child_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AObjetoDestruible_Child()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AObjetoDestruible_Child_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AObjetoDestruible_Child, 1733717446);
	template<> PRUEBA_TROOPERBLACK_API UClass* StaticClass<AObjetoDestruible_Child>()
	{
		return AObjetoDestruible_Child::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AObjetoDestruible_Child(Z_Construct_UClass_AObjetoDestruible_Child, &AObjetoDestruible_Child::StaticClass, TEXT("/Script/Prueba_TrooperBLack"), TEXT("AObjetoDestruible_Child"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AObjetoDestruible_Child);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
