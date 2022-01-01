// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Prueba_TrooperBLack/MyWidgetBlueprint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyWidgetBlueprint() {}
// Cross Module References
	PRUEBA_TROOPERBLACK_API UClass* Z_Construct_UClass_UMyWidgetBlueprint_NoRegister();
	PRUEBA_TROOPERBLACK_API UClass* Z_Construct_UClass_UMyWidgetBlueprint();
	UMGEDITOR_API UClass* Z_Construct_UClass_UWidgetBlueprint();
	UPackage* Z_Construct_UPackage__Script_Prueba_TrooperBLack();
// End Cross Module References
	void UMyWidgetBlueprint::StaticRegisterNativesUMyWidgetBlueprint()
	{
	}
	UClass* Z_Construct_UClass_UMyWidgetBlueprint_NoRegister()
	{
		return UMyWidgetBlueprint::StaticClass();
	}
	struct Z_Construct_UClass_UMyWidgetBlueprint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyWidgetBlueprint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidgetBlueprint,
		(UObject* (*)())Z_Construct_UPackage__Script_Prueba_TrooperBLack,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyWidgetBlueprint_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MyWidgetBlueprint.h" },
		{ "ModuleRelativePath", "MyWidgetBlueprint.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyWidgetBlueprint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyWidgetBlueprint>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMyWidgetBlueprint_Statics::ClassParams = {
		&UMyWidgetBlueprint::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMyWidgetBlueprint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMyWidgetBlueprint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMyWidgetBlueprint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMyWidgetBlueprint_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMyWidgetBlueprint, 436812886);
	template<> PRUEBA_TROOPERBLACK_API UClass* StaticClass<UMyWidgetBlueprint>()
	{
		return UMyWidgetBlueprint::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMyWidgetBlueprint(Z_Construct_UClass_UMyWidgetBlueprint, &UMyWidgetBlueprint::StaticClass, TEXT("/Script/Prueba_TrooperBLack"), TEXT("UMyWidgetBlueprint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyWidgetBlueprint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
