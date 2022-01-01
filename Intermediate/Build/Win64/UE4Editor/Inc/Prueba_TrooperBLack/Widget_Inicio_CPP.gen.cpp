// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Prueba_TrooperBLack/Widget_Inicio_CPP.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidget_Inicio_CPP() {}
// Cross Module References
	PRUEBA_TROOPERBLACK_API UClass* Z_Construct_UClass_UWidget_Inicio_CPP_NoRegister();
	PRUEBA_TROOPERBLACK_API UClass* Z_Construct_UClass_UWidget_Inicio_CPP();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Prueba_TrooperBLack();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UWidget_Inicio_CPP::execBotonSalirJuego)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BotonSalirJuego();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWidget_Inicio_CPP::execBotonCargarJuego)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BotonCargarJuego();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWidget_Inicio_CPP::execBotonIdiomaIngles)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BotonIdiomaIngles();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWidget_Inicio_CPP::execBotonIdiomaCastellano)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BotonIdiomaCastellano();
		P_NATIVE_END;
	}
	void UWidget_Inicio_CPP::StaticRegisterNativesUWidget_Inicio_CPP()
	{
		UClass* Class = UWidget_Inicio_CPP::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BotonCargarJuego", &UWidget_Inicio_CPP::execBotonCargarJuego },
			{ "BotonIdiomaCastellano", &UWidget_Inicio_CPP::execBotonIdiomaCastellano },
			{ "BotonIdiomaIngles", &UWidget_Inicio_CPP::execBotonIdiomaIngles },
			{ "BotonSalirJuego", &UWidget_Inicio_CPP::execBotonSalirJuego },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWidget_Inicio_CPP_BotonCargarJuego_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidget_Inicio_CPP_BotonCargarJuego_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Widget_Inicio_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidget_Inicio_CPP_BotonCargarJuego_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidget_Inicio_CPP, nullptr, "BotonCargarJuego", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidget_Inicio_CPP_BotonCargarJuego_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_Inicio_CPP_BotonCargarJuego_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidget_Inicio_CPP_BotonCargarJuego()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWidget_Inicio_CPP_BotonCargarJuego_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidget_Inicio_CPP_BotonIdiomaCastellano_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidget_Inicio_CPP_BotonIdiomaCastellano_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Widget_Inicio_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidget_Inicio_CPP_BotonIdiomaCastellano_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidget_Inicio_CPP, nullptr, "BotonIdiomaCastellano", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidget_Inicio_CPP_BotonIdiomaCastellano_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_Inicio_CPP_BotonIdiomaCastellano_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidget_Inicio_CPP_BotonIdiomaCastellano()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWidget_Inicio_CPP_BotonIdiomaCastellano_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidget_Inicio_CPP_BotonIdiomaIngles_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidget_Inicio_CPP_BotonIdiomaIngles_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Widget_Inicio_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidget_Inicio_CPP_BotonIdiomaIngles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidget_Inicio_CPP, nullptr, "BotonIdiomaIngles", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidget_Inicio_CPP_BotonIdiomaIngles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_Inicio_CPP_BotonIdiomaIngles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidget_Inicio_CPP_BotonIdiomaIngles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWidget_Inicio_CPP_BotonIdiomaIngles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidget_Inicio_CPP_BotonSalirJuego_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidget_Inicio_CPP_BotonSalirJuego_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Widget_Inicio_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidget_Inicio_CPP_BotonSalirJuego_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidget_Inicio_CPP, nullptr, "BotonSalirJuego", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidget_Inicio_CPP_BotonSalirJuego_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_Inicio_CPP_BotonSalirJuego_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidget_Inicio_CPP_BotonSalirJuego()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWidget_Inicio_CPP_BotonSalirJuego_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWidget_Inicio_CPP_NoRegister()
	{
		return UWidget_Inicio_CPP::StaticClass();
	}
	struct Z_Construct_UClass_UWidget_Inicio_CPP_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Texto_Castellano_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Texto_Castellano;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BotonIngles_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BotonIngles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BotonCastellano_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BotonCastellano;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_Salir_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Text_Salir;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Boton_Salir_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Boton_Salir;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_Ingles_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Text_Ingles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextoJugar_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextoJugar;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_boton_Jugar_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_boton_Jugar;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWidget_Inicio_CPP_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Prueba_TrooperBLack,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWidget_Inicio_CPP_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWidget_Inicio_CPP_BotonCargarJuego, "BotonCargarJuego" }, // 2634292825
		{ &Z_Construct_UFunction_UWidget_Inicio_CPP_BotonIdiomaCastellano, "BotonIdiomaCastellano" }, // 2310254752
		{ &Z_Construct_UFunction_UWidget_Inicio_CPP_BotonIdiomaIngles, "BotonIdiomaIngles" }, // 1324117180
		{ &Z_Construct_UFunction_UWidget_Inicio_CPP_BotonSalirJuego, "BotonSalirJuego" }, // 196875841
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidget_Inicio_CPP_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Widget_Inicio_CPP.h" },
		{ "ModuleRelativePath", "Widget_Inicio_CPP.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidget_Inicio_CPP_Statics::NewProp_Texto_Castellano_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Widget_Inicio_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidget_Inicio_CPP_Statics::NewProp_Texto_Castellano = { "Texto_Castellano", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidget_Inicio_CPP, Texto_Castellano), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWidget_Inicio_CPP_Statics::NewProp_Texto_Castellano_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_Inicio_CPP_Statics::NewProp_Texto_Castellano_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidget_Inicio_CPP_Statics::NewProp_BotonIngles_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Widget_Inicio_CPP" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Widget_Inicio_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidget_Inicio_CPP_Statics::NewProp_BotonIngles = { "BotonIngles", nullptr, (EPropertyFlags)0x002008000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidget_Inicio_CPP, BotonIngles), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWidget_Inicio_CPP_Statics::NewProp_BotonIngles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_Inicio_CPP_Statics::NewProp_BotonIngles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidget_Inicio_CPP_Statics::NewProp_BotonCastellano_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Widget_Inicio_CPP" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Widget_Inicio_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidget_Inicio_CPP_Statics::NewProp_BotonCastellano = { "BotonCastellano", nullptr, (EPropertyFlags)0x002008000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidget_Inicio_CPP, BotonCastellano), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWidget_Inicio_CPP_Statics::NewProp_BotonCastellano_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_Inicio_CPP_Statics::NewProp_BotonCastellano_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidget_Inicio_CPP_Statics::NewProp_Text_Salir_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Widget_Inicio_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidget_Inicio_CPP_Statics::NewProp_Text_Salir = { "Text_Salir", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidget_Inicio_CPP, Text_Salir), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWidget_Inicio_CPP_Statics::NewProp_Text_Salir_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_Inicio_CPP_Statics::NewProp_Text_Salir_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidget_Inicio_CPP_Statics::NewProp_Boton_Salir_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Widget_Inicio_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidget_Inicio_CPP_Statics::NewProp_Boton_Salir = { "Boton_Salir", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidget_Inicio_CPP, Boton_Salir), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWidget_Inicio_CPP_Statics::NewProp_Boton_Salir_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_Inicio_CPP_Statics::NewProp_Boton_Salir_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidget_Inicio_CPP_Statics::NewProp_Text_Ingles_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Widget_Inicio_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidget_Inicio_CPP_Statics::NewProp_Text_Ingles = { "Text_Ingles", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidget_Inicio_CPP, Text_Ingles), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWidget_Inicio_CPP_Statics::NewProp_Text_Ingles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_Inicio_CPP_Statics::NewProp_Text_Ingles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidget_Inicio_CPP_Statics::NewProp_TextoJugar_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Widget_Inicio_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidget_Inicio_CPP_Statics::NewProp_TextoJugar = { "TextoJugar", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidget_Inicio_CPP, TextoJugar), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWidget_Inicio_CPP_Statics::NewProp_TextoJugar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_Inicio_CPP_Statics::NewProp_TextoJugar_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidget_Inicio_CPP_Statics::NewProp_boton_Jugar_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Widget_Inicio_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidget_Inicio_CPP_Statics::NewProp_boton_Jugar = { "boton_Jugar", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidget_Inicio_CPP, boton_Jugar), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWidget_Inicio_CPP_Statics::NewProp_boton_Jugar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_Inicio_CPP_Statics::NewProp_boton_Jugar_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWidget_Inicio_CPP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_Inicio_CPP_Statics::NewProp_Texto_Castellano,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_Inicio_CPP_Statics::NewProp_BotonIngles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_Inicio_CPP_Statics::NewProp_BotonCastellano,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_Inicio_CPP_Statics::NewProp_Text_Salir,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_Inicio_CPP_Statics::NewProp_Boton_Salir,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_Inicio_CPP_Statics::NewProp_Text_Ingles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_Inicio_CPP_Statics::NewProp_TextoJugar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_Inicio_CPP_Statics::NewProp_boton_Jugar,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWidget_Inicio_CPP_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWidget_Inicio_CPP>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWidget_Inicio_CPP_Statics::ClassParams = {
		&UWidget_Inicio_CPP::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UWidget_Inicio_CPP_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_Inicio_CPP_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWidget_Inicio_CPP_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_Inicio_CPP_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWidget_Inicio_CPP()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWidget_Inicio_CPP_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWidget_Inicio_CPP, 585757593);
	template<> PRUEBA_TROOPERBLACK_API UClass* StaticClass<UWidget_Inicio_CPP>()
	{
		return UWidget_Inicio_CPP::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWidget_Inicio_CPP(Z_Construct_UClass_UWidget_Inicio_CPP, &UWidget_Inicio_CPP::StaticClass, TEXT("/Script/Prueba_TrooperBLack"), TEXT("UWidget_Inicio_CPP"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWidget_Inicio_CPP);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
