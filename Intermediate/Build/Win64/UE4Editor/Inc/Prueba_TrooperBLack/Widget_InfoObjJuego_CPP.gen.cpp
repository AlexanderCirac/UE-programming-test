// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Prueba_TrooperBLack/Widget_InfoObjJuego_CPP.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidget_InfoObjJuego_CPP() {}
// Cross Module References
	PRUEBA_TROOPERBLACK_API UClass* Z_Construct_UClass_UWidget_InfoObjJuego_CPP_NoRegister();
	PRUEBA_TROOPERBLACK_API UClass* Z_Construct_UClass_UWidget_InfoObjJuego_CPP();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Prueba_TrooperBLack();
	UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
// End Cross Module References
	void UWidget_InfoObjJuego_CPP::StaticRegisterNativesUWidget_InfoObjJuego_CPP()
	{
	}
	UClass* Z_Construct_UClass_UWidget_InfoObjJuego_CPP_NoRegister()
	{
		return UWidget_InfoObjJuego_CPP::StaticClass();
	}
	struct Z_Construct_UClass_UWidget_InfoObjJuego_CPP_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProgressBar_Vida_Objeto_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ProgressBar_Vida_Objeto;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWidget_InfoObjJuego_CPP_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Prueba_TrooperBLack,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidget_InfoObjJuego_CPP_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Widget_InfoObjJuego_CPP.h" },
		{ "ModuleRelativePath", "Widget_InfoObjJuego_CPP.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidget_InfoObjJuego_CPP_Statics::NewProp_ProgressBar_Vida_Objeto_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Widget_InfoObjJuego_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidget_InfoObjJuego_CPP_Statics::NewProp_ProgressBar_Vida_Objeto = { "ProgressBar_Vida_Objeto", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidget_InfoObjJuego_CPP, ProgressBar_Vida_Objeto), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWidget_InfoObjJuego_CPP_Statics::NewProp_ProgressBar_Vida_Objeto_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_InfoObjJuego_CPP_Statics::NewProp_ProgressBar_Vida_Objeto_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWidget_InfoObjJuego_CPP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_InfoObjJuego_CPP_Statics::NewProp_ProgressBar_Vida_Objeto,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWidget_InfoObjJuego_CPP_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWidget_InfoObjJuego_CPP>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWidget_InfoObjJuego_CPP_Statics::ClassParams = {
		&UWidget_InfoObjJuego_CPP::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWidget_InfoObjJuego_CPP_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_InfoObjJuego_CPP_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWidget_InfoObjJuego_CPP_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_InfoObjJuego_CPP_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWidget_InfoObjJuego_CPP()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWidget_InfoObjJuego_CPP_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWidget_InfoObjJuego_CPP, 2902361929);
	template<> PRUEBA_TROOPERBLACK_API UClass* StaticClass<UWidget_InfoObjJuego_CPP>()
	{
		return UWidget_InfoObjJuego_CPP::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWidget_InfoObjJuego_CPP(Z_Construct_UClass_UWidget_InfoObjJuego_CPP, &UWidget_InfoObjJuego_CPP::StaticClass, TEXT("/Script/Prueba_TrooperBLack"), TEXT("UWidget_InfoObjJuego_CPP"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWidget_InfoObjJuego_CPP);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
