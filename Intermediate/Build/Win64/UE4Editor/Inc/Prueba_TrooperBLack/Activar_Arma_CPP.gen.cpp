// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Prueba_TrooperBLack/Activar_Arma_CPP.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActivar_Arma_CPP() {}
// Cross Module References
	PRUEBA_TROOPERBLACK_API UClass* Z_Construct_UClass_AActivar_Arma_CPP_NoRegister();
	PRUEBA_TROOPERBLACK_API UClass* Z_Construct_UClass_AActivar_Arma_CPP();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Prueba_TrooperBLack();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AActivar_Arma_CPP::execOnOverlap)
	{
		P_GET_OBJECT(AActor,Z_Param_me);
		P_GET_OBJECT(AActor,Z_Param_other);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOverlap(Z_Param_me,Z_Param_other);
		P_NATIVE_END;
	}
	void AActivar_Arma_CPP::StaticRegisterNativesAActivar_Arma_CPP()
	{
		UClass* Class = AActivar_Arma_CPP::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnOverlap", &AActivar_Arma_CPP::execOnOverlap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AActivar_Arma_CPP_OnOverlap_Statics
	{
		struct Activar_Arma_CPP_eventOnOverlap_Parms
		{
			AActor* me;
			AActor* other;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_other;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_me;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AActivar_Arma_CPP_OnOverlap_Statics::NewProp_other = { "other", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Activar_Arma_CPP_eventOnOverlap_Parms, other), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AActivar_Arma_CPP_OnOverlap_Statics::NewProp_me = { "me", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Activar_Arma_CPP_eventOnOverlap_Parms, me), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActivar_Arma_CPP_OnOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActivar_Arma_CPP_OnOverlap_Statics::NewProp_other,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActivar_Arma_CPP_OnOverlap_Statics::NewProp_me,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActivar_Arma_CPP_OnOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Activar_Arma_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AActivar_Arma_CPP_OnOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActivar_Arma_CPP, nullptr, "OnOverlap", nullptr, nullptr, sizeof(Activar_Arma_CPP_eventOnOverlap_Parms), Z_Construct_UFunction_AActivar_Arma_CPP_OnOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActivar_Arma_CPP_OnOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActivar_Arma_CPP_OnOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActivar_Arma_CPP_OnOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActivar_Arma_CPP_OnOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AActivar_Arma_CPP_OnOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AActivar_Arma_CPP_NoRegister()
	{
		return AActivar_Arma_CPP::StaticClass();
	}
	struct Z_Construct_UClass_AActivar_Arma_CPP_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AActivar_Arma_CPP_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Prueba_TrooperBLack,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AActivar_Arma_CPP_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AActivar_Arma_CPP_OnOverlap, "OnOverlap" }, // 714136682
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActivar_Arma_CPP_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Activar_Arma_CPP.h" },
		{ "ModuleRelativePath", "Activar_Arma_CPP.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AActivar_Arma_CPP_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AActivar_Arma_CPP>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AActivar_Arma_CPP_Statics::ClassParams = {
		&AActivar_Arma_CPP::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AActivar_Arma_CPP_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AActivar_Arma_CPP_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AActivar_Arma_CPP()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AActivar_Arma_CPP_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AActivar_Arma_CPP, 3234726037);
	template<> PRUEBA_TROOPERBLACK_API UClass* StaticClass<AActivar_Arma_CPP>()
	{
		return AActivar_Arma_CPP::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AActivar_Arma_CPP(Z_Construct_UClass_AActivar_Arma_CPP, &AActivar_Arma_CPP::StaticClass, TEXT("/Script/Prueba_TrooperBLack"), TEXT("AActivar_Arma_CPP"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AActivar_Arma_CPP);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
