// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Prueba_TrooperBLack/Widget_Perder_CPP.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidget_Perder_CPP() {}
// Cross Module References
	PRUEBA_TROOPERBLACK_API UClass* Z_Construct_UClass_UWidget_Perder_CPP_NoRegister();
	PRUEBA_TROOPERBLACK_API UClass* Z_Construct_UClass_UWidget_Perder_CPP();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Prueba_TrooperBLack();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UWidget_Perder_CPP::execBotonSalirJuego)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BotonSalirJuego();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWidget_Perder_CPP::execBotonCargarJuego)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BotonCargarJuego();
		P_NATIVE_END;
	}
	void UWidget_Perder_CPP::StaticRegisterNativesUWidget_Perder_CPP()
	{
		UClass* Class = UWidget_Perder_CPP::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BotonCargarJuego", &UWidget_Perder_CPP::execBotonCargarJuego },
			{ "BotonSalirJuego", &UWidget_Perder_CPP::execBotonSalirJuego },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWidget_Perder_CPP_BotonCargarJuego_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidget_Perder_CPP_BotonCargarJuego_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Widget_Perder_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidget_Perder_CPP_BotonCargarJuego_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidget_Perder_CPP, nullptr, "BotonCargarJuego", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidget_Perder_CPP_BotonCargarJuego_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_Perder_CPP_BotonCargarJuego_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidget_Perder_CPP_BotonCargarJuego()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWidget_Perder_CPP_BotonCargarJuego_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidget_Perder_CPP_BotonSalirJuego_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidget_Perder_CPP_BotonSalirJuego_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Widget_Perder_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidget_Perder_CPP_BotonSalirJuego_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidget_Perder_CPP, nullptr, "BotonSalirJuego", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidget_Perder_CPP_BotonSalirJuego_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_Perder_CPP_BotonSalirJuego_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidget_Perder_CPP_BotonSalirJuego()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWidget_Perder_CPP_BotonSalirJuego_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWidget_Perder_CPP_NoRegister()
	{
		return UWidget_Perder_CPP::StaticClass();
	}
	struct Z_Construct_UClass_UWidget_Perder_CPP_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Texto_Salir_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Texto_Salir;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Button_Salir_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Button_Salir;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_Reintentar_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Text_Reintentar;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Button_Reintentar_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Button_Reintentar;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Texto_Perder_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Texto_Perder;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWidget_Perder_CPP_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Prueba_TrooperBLack,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWidget_Perder_CPP_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWidget_Perder_CPP_BotonCargarJuego, "BotonCargarJuego" }, // 3382860524
		{ &Z_Construct_UFunction_UWidget_Perder_CPP_BotonSalirJuego, "BotonSalirJuego" }, // 2100163
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidget_Perder_CPP_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Widget_Perder_CPP.h" },
		{ "ModuleRelativePath", "Widget_Perder_CPP.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidget_Perder_CPP_Statics::NewProp_Texto_Salir_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Widget_Perder_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidget_Perder_CPP_Statics::NewProp_Texto_Salir = { "Texto_Salir", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidget_Perder_CPP, Texto_Salir), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWidget_Perder_CPP_Statics::NewProp_Texto_Salir_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_Perder_CPP_Statics::NewProp_Texto_Salir_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidget_Perder_CPP_Statics::NewProp_Button_Salir_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Widget_Perder_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidget_Perder_CPP_Statics::NewProp_Button_Salir = { "Button_Salir", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidget_Perder_CPP, Button_Salir), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWidget_Perder_CPP_Statics::NewProp_Button_Salir_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_Perder_CPP_Statics::NewProp_Button_Salir_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidget_Perder_CPP_Statics::NewProp_Text_Reintentar_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Widget_Perder_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidget_Perder_CPP_Statics::NewProp_Text_Reintentar = { "Text_Reintentar", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidget_Perder_CPP, Text_Reintentar), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWidget_Perder_CPP_Statics::NewProp_Text_Reintentar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_Perder_CPP_Statics::NewProp_Text_Reintentar_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidget_Perder_CPP_Statics::NewProp_Button_Reintentar_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Widget_Perder_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidget_Perder_CPP_Statics::NewProp_Button_Reintentar = { "Button_Reintentar", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidget_Perder_CPP, Button_Reintentar), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWidget_Perder_CPP_Statics::NewProp_Button_Reintentar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_Perder_CPP_Statics::NewProp_Button_Reintentar_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidget_Perder_CPP_Statics::NewProp_Texto_Perder_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Widget_Perder_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidget_Perder_CPP_Statics::NewProp_Texto_Perder = { "Texto_Perder", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidget_Perder_CPP, Texto_Perder), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWidget_Perder_CPP_Statics::NewProp_Texto_Perder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_Perder_CPP_Statics::NewProp_Texto_Perder_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWidget_Perder_CPP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_Perder_CPP_Statics::NewProp_Texto_Salir,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_Perder_CPP_Statics::NewProp_Button_Salir,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_Perder_CPP_Statics::NewProp_Text_Reintentar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_Perder_CPP_Statics::NewProp_Button_Reintentar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_Perder_CPP_Statics::NewProp_Texto_Perder,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWidget_Perder_CPP_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWidget_Perder_CPP>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWidget_Perder_CPP_Statics::ClassParams = {
		&UWidget_Perder_CPP::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UWidget_Perder_CPP_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_Perder_CPP_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWidget_Perder_CPP_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_Perder_CPP_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWidget_Perder_CPP()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWidget_Perder_CPP_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWidget_Perder_CPP, 2872791692);
	template<> PRUEBA_TROOPERBLACK_API UClass* StaticClass<UWidget_Perder_CPP>()
	{
		return UWidget_Perder_CPP::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWidget_Perder_CPP(Z_Construct_UClass_UWidget_Perder_CPP, &UWidget_Perder_CPP::StaticClass, TEXT("/Script/Prueba_TrooperBLack"), TEXT("UWidget_Perder_CPP"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWidget_Perder_CPP);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
