// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Prueba_TrooperBLack/Objeto_Destruible_CPP.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObjeto_Destruible_CPP() {}
// Cross Module References
	PRUEBA_TROOPERBLACK_API UClass* Z_Construct_UClass_AObjeto_Destruible_CPP_NoRegister();
	PRUEBA_TROOPERBLACK_API UClass* Z_Construct_UClass_AObjeto_Destruible_CPP();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Prueba_TrooperBLack();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AObjeto_Destruible_CPP::execDesactivarWidget)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DesactivarWidget(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AObjeto_Destruible_CPP::execActivarWidget)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActivarWidget(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	void AObjeto_Destruible_CPP::StaticRegisterNativesAObjeto_Destruible_CPP()
	{
		UClass* Class = AObjeto_Destruible_CPP::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActivarWidget", &AObjeto_Destruible_CPP::execActivarWidget },
			{ "DesactivarWidget", &AObjeto_Destruible_CPP::execDesactivarWidget },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AObjeto_Destruible_CPP_ActivarWidget_Statics
	{
		struct Objeto_Destruible_CPP_eventActivarWidget_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AObjeto_Destruible_CPP_ActivarWidget_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AObjeto_Destruible_CPP_ActivarWidget_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Objeto_Destruible_CPP_eventActivarWidget_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AObjeto_Destruible_CPP_ActivarWidget_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AObjeto_Destruible_CPP_ActivarWidget_Statics::NewProp_SweepResult_MetaData)) };
	void Z_Construct_UFunction_AObjeto_Destruible_CPP_ActivarWidget_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((Objeto_Destruible_CPP_eventActivarWidget_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AObjeto_Destruible_CPP_ActivarWidget_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Objeto_Destruible_CPP_eventActivarWidget_Parms), &Z_Construct_UFunction_AObjeto_Destruible_CPP_ActivarWidget_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AObjeto_Destruible_CPP_ActivarWidget_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Objeto_Destruible_CPP_eventActivarWidget_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AObjeto_Destruible_CPP_ActivarWidget_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AObjeto_Destruible_CPP_ActivarWidget_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Objeto_Destruible_CPP_eventActivarWidget_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AObjeto_Destruible_CPP_ActivarWidget_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AObjeto_Destruible_CPP_ActivarWidget_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AObjeto_Destruible_CPP_ActivarWidget_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Objeto_Destruible_CPP_eventActivarWidget_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AObjeto_Destruible_CPP_ActivarWidget_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AObjeto_Destruible_CPP_ActivarWidget_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Objeto_Destruible_CPP_eventActivarWidget_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AObjeto_Destruible_CPP_ActivarWidget_Statics::NewProp_OverlappedComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AObjeto_Destruible_CPP_ActivarWidget_Statics::NewProp_OverlappedComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AObjeto_Destruible_CPP_ActivarWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AObjeto_Destruible_CPP_ActivarWidget_Statics::NewProp_SweepResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AObjeto_Destruible_CPP_ActivarWidget_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AObjeto_Destruible_CPP_ActivarWidget_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AObjeto_Destruible_CPP_ActivarWidget_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AObjeto_Destruible_CPP_ActivarWidget_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AObjeto_Destruible_CPP_ActivarWidget_Statics::NewProp_OverlappedComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AObjeto_Destruible_CPP_ActivarWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Objeto_Destruible_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AObjeto_Destruible_CPP_ActivarWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AObjeto_Destruible_CPP, nullptr, "ActivarWidget", nullptr, nullptr, sizeof(Objeto_Destruible_CPP_eventActivarWidget_Parms), Z_Construct_UFunction_AObjeto_Destruible_CPP_ActivarWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AObjeto_Destruible_CPP_ActivarWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AObjeto_Destruible_CPP_ActivarWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AObjeto_Destruible_CPP_ActivarWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AObjeto_Destruible_CPP_ActivarWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AObjeto_Destruible_CPP_ActivarWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AObjeto_Destruible_CPP_DesactivarWidget_Statics
	{
		struct Objeto_Destruible_CPP_eventDesactivarWidget_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AObjeto_Destruible_CPP_DesactivarWidget_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Objeto_Destruible_CPP_eventDesactivarWidget_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AObjeto_Destruible_CPP_DesactivarWidget_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AObjeto_Destruible_CPP_DesactivarWidget_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Objeto_Destruible_CPP_eventDesactivarWidget_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AObjeto_Destruible_CPP_DesactivarWidget_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AObjeto_Destruible_CPP_DesactivarWidget_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AObjeto_Destruible_CPP_DesactivarWidget_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Objeto_Destruible_CPP_eventDesactivarWidget_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AObjeto_Destruible_CPP_DesactivarWidget_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AObjeto_Destruible_CPP_DesactivarWidget_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Objeto_Destruible_CPP_eventDesactivarWidget_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AObjeto_Destruible_CPP_DesactivarWidget_Statics::NewProp_OverlappedComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AObjeto_Destruible_CPP_DesactivarWidget_Statics::NewProp_OverlappedComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AObjeto_Destruible_CPP_DesactivarWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AObjeto_Destruible_CPP_DesactivarWidget_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AObjeto_Destruible_CPP_DesactivarWidget_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AObjeto_Destruible_CPP_DesactivarWidget_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AObjeto_Destruible_CPP_DesactivarWidget_Statics::NewProp_OverlappedComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AObjeto_Destruible_CPP_DesactivarWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Objeto_Destruible_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AObjeto_Destruible_CPP_DesactivarWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AObjeto_Destruible_CPP, nullptr, "DesactivarWidget", nullptr, nullptr, sizeof(Objeto_Destruible_CPP_eventDesactivarWidget_Parms), Z_Construct_UFunction_AObjeto_Destruible_CPP_DesactivarWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AObjeto_Destruible_CPP_DesactivarWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AObjeto_Destruible_CPP_DesactivarWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AObjeto_Destruible_CPP_DesactivarWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AObjeto_Destruible_CPP_DesactivarWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AObjeto_Destruible_CPP_DesactivarWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AObjeto_Destruible_CPP_NoRegister()
	{
		return AObjeto_Destruible_CPP::StaticClass();
	}
	struct Z_Construct_UClass_AObjeto_Destruible_CPP_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_var_zonaRespawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_var_zonaRespawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_var_TextoFlotante_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_var_TextoFlotante;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_var_vida_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_var_vida;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_var_objetoTrigger_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_var_objetoTrigger;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_var_objetoWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_var_objetoWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_var_objetoCupula_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_var_objetoCupula;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AObjeto_Destruible_CPP_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Prueba_TrooperBLack,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AObjeto_Destruible_CPP_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AObjeto_Destruible_CPP_ActivarWidget, "ActivarWidget" }, // 1066859782
		{ &Z_Construct_UFunction_AObjeto_Destruible_CPP_DesactivarWidget, "DesactivarWidget" }, // 1398764033
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObjeto_Destruible_CPP_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Objeto_Destruible_CPP.h" },
		{ "ModuleRelativePath", "Objeto_Destruible_CPP.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObjeto_Destruible_CPP_Statics::NewProp_var_zonaRespawn_MetaData[] = {
		{ "Category", "Objeto_Destruible_CPP" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Objeto_Destruible_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AObjeto_Destruible_CPP_Statics::NewProp_var_zonaRespawn = { "var_zonaRespawn", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AObjeto_Destruible_CPP, var_zonaRespawn), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AObjeto_Destruible_CPP_Statics::NewProp_var_zonaRespawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AObjeto_Destruible_CPP_Statics::NewProp_var_zonaRespawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObjeto_Destruible_CPP_Statics::NewProp_var_TextoFlotante_MetaData[] = {
		{ "Category", "Objeto_Destruible_CPP" },
		{ "ModuleRelativePath", "Objeto_Destruible_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AObjeto_Destruible_CPP_Statics::NewProp_var_TextoFlotante = { "var_TextoFlotante", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AObjeto_Destruible_CPP, var_TextoFlotante), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AObjeto_Destruible_CPP_Statics::NewProp_var_TextoFlotante_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AObjeto_Destruible_CPP_Statics::NewProp_var_TextoFlotante_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObjeto_Destruible_CPP_Statics::NewProp_var_vida_MetaData[] = {
		{ "Category", "Objeto_Destruible_CPP" },
		{ "ModuleRelativePath", "Objeto_Destruible_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AObjeto_Destruible_CPP_Statics::NewProp_var_vida = { "var_vida", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AObjeto_Destruible_CPP, var_vida), METADATA_PARAMS(Z_Construct_UClass_AObjeto_Destruible_CPP_Statics::NewProp_var_vida_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AObjeto_Destruible_CPP_Statics::NewProp_var_vida_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObjeto_Destruible_CPP_Statics::NewProp_var_objetoTrigger_MetaData[] = {
		{ "Category", "Objeto_Destruible_CPP" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Objeto_Destruible_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AObjeto_Destruible_CPP_Statics::NewProp_var_objetoTrigger = { "var_objetoTrigger", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AObjeto_Destruible_CPP, var_objetoTrigger), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AObjeto_Destruible_CPP_Statics::NewProp_var_objetoTrigger_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AObjeto_Destruible_CPP_Statics::NewProp_var_objetoTrigger_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObjeto_Destruible_CPP_Statics::NewProp_var_objetoWidget_MetaData[] = {
		{ "Category", "Objeto_Destruible_CPP" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Objeto_Destruible_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AObjeto_Destruible_CPP_Statics::NewProp_var_objetoWidget = { "var_objetoWidget", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AObjeto_Destruible_CPP, var_objetoWidget), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AObjeto_Destruible_CPP_Statics::NewProp_var_objetoWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AObjeto_Destruible_CPP_Statics::NewProp_var_objetoWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObjeto_Destruible_CPP_Statics::NewProp_var_objetoCupula_MetaData[] = {
		{ "Category", "Objeto_Destruible_CPP" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Objeto_Destruible_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AObjeto_Destruible_CPP_Statics::NewProp_var_objetoCupula = { "var_objetoCupula", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AObjeto_Destruible_CPP, var_objetoCupula), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AObjeto_Destruible_CPP_Statics::NewProp_var_objetoCupula_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AObjeto_Destruible_CPP_Statics::NewProp_var_objetoCupula_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AObjeto_Destruible_CPP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObjeto_Destruible_CPP_Statics::NewProp_var_zonaRespawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObjeto_Destruible_CPP_Statics::NewProp_var_TextoFlotante,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObjeto_Destruible_CPP_Statics::NewProp_var_vida,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObjeto_Destruible_CPP_Statics::NewProp_var_objetoTrigger,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObjeto_Destruible_CPP_Statics::NewProp_var_objetoWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObjeto_Destruible_CPP_Statics::NewProp_var_objetoCupula,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AObjeto_Destruible_CPP_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AObjeto_Destruible_CPP>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AObjeto_Destruible_CPP_Statics::ClassParams = {
		&AObjeto_Destruible_CPP::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AObjeto_Destruible_CPP_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AObjeto_Destruible_CPP_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AObjeto_Destruible_CPP_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AObjeto_Destruible_CPP_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AObjeto_Destruible_CPP()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AObjeto_Destruible_CPP_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AObjeto_Destruible_CPP, 1841800531);
	template<> PRUEBA_TROOPERBLACK_API UClass* StaticClass<AObjeto_Destruible_CPP>()
	{
		return AObjeto_Destruible_CPP::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AObjeto_Destruible_CPP(Z_Construct_UClass_AObjeto_Destruible_CPP, &AObjeto_Destruible_CPP::StaticClass, TEXT("/Script/Prueba_TrooperBLack"), TEXT("AObjeto_Destruible_CPP"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AObjeto_Destruible_CPP);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
