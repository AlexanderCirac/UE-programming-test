// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Prueba_TrooperBLack/AC_salud_CPP.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAC_salud_CPP() {}
// Cross Module References
	PRUEBA_TROOPERBLACK_API UClass* Z_Construct_UClass_UAC_salud_CPP_NoRegister();
	PRUEBA_TROOPERBLACK_API UClass* Z_Construct_UClass_UAC_salud_CPP();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Prueba_TrooperBLack();
// End Cross Module References
	void UAC_salud_CPP::StaticRegisterNativesUAC_salud_CPP()
	{
	}
	UClass* Z_Construct_UClass_UAC_salud_CPP_NoRegister()
	{
		return UAC_salud_CPP::StaticClass();
	}
	struct Z_Construct_UClass_UAC_salud_CPP_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_var_vida_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_var_vida;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAC_salud_CPP_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Prueba_TrooperBLack,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAC_salud_CPP_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "AC_salud_CPP.h" },
		{ "ModuleRelativePath", "AC_salud_CPP.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAC_salud_CPP_Statics::NewProp_var_vida_MetaData[] = {
		{ "Category", "AC_salud_CPP" },
		{ "ModuleRelativePath", "AC_salud_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAC_salud_CPP_Statics::NewProp_var_vida = { "var_vida", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAC_salud_CPP, var_vida), METADATA_PARAMS(Z_Construct_UClass_UAC_salud_CPP_Statics::NewProp_var_vida_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAC_salud_CPP_Statics::NewProp_var_vida_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAC_salud_CPP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAC_salud_CPP_Statics::NewProp_var_vida,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAC_salud_CPP_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAC_salud_CPP>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAC_salud_CPP_Statics::ClassParams = {
		&UAC_salud_CPP::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAC_salud_CPP_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAC_salud_CPP_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAC_salud_CPP_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAC_salud_CPP_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAC_salud_CPP()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAC_salud_CPP_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAC_salud_CPP, 4048630570);
	template<> PRUEBA_TROOPERBLACK_API UClass* StaticClass<UAC_salud_CPP>()
	{
		return UAC_salud_CPP::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAC_salud_CPP(Z_Construct_UClass_UAC_salud_CPP, &UAC_salud_CPP::StaticClass, TEXT("/Script/Prueba_TrooperBLack"), TEXT("UAC_salud_CPP"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAC_salud_CPP);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
