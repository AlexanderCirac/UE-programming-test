// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Prueba_TrooperBLack/Widget_Ganar_CPP.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidget_Ganar_CPP() {}
// Cross Module References
	PRUEBA_TROOPERBLACK_API UClass* Z_Construct_UClass_UWidget_Ganar_CPP_NoRegister();
	PRUEBA_TROOPERBLACK_API UClass* Z_Construct_UClass_UWidget_Ganar_CPP();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Prueba_TrooperBLack();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UWidget_Ganar_CPP::execBotonSalirJuego)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BotonSalirJuego();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWidget_Ganar_CPP::execBotonCargarJuego)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BotonCargarJuego();
		P_NATIVE_END;
	}
	void UWidget_Ganar_CPP::StaticRegisterNativesUWidget_Ganar_CPP()
	{
		UClass* Class = UWidget_Ganar_CPP::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BotonCargarJuego", &UWidget_Ganar_CPP::execBotonCargarJuego },
			{ "BotonSalirJuego", &UWidget_Ganar_CPP::execBotonSalirJuego },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWidget_Ganar_CPP_BotonCargarJuego_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidget_Ganar_CPP_BotonCargarJuego_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Widget_Ganar_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidget_Ganar_CPP_BotonCargarJuego_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidget_Ganar_CPP, nullptr, "BotonCargarJuego", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidget_Ganar_CPP_BotonCargarJuego_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_Ganar_CPP_BotonCargarJuego_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidget_Ganar_CPP_BotonCargarJuego()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWidget_Ganar_CPP_BotonCargarJuego_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidget_Ganar_CPP_BotonSalirJuego_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidget_Ganar_CPP_BotonSalirJuego_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Widget_Ganar_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidget_Ganar_CPP_BotonSalirJuego_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidget_Ganar_CPP, nullptr, "BotonSalirJuego", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidget_Ganar_CPP_BotonSalirJuego_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_Ganar_CPP_BotonSalirJuego_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidget_Ganar_CPP_BotonSalirJuego()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWidget_Ganar_CPP_BotonSalirJuego_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWidget_Ganar_CPP_NoRegister()
	{
		return UWidget_Ganar_CPP::StaticClass();
	}
	struct Z_Construct_UClass_UWidget_Ganar_CPP_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Texto_Vida_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Texto_Vida;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Texto_Tiempo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Texto_Tiempo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Texto_Puntuacion_1_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Texto_Puntuacion_1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Texto_Ganar_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Texto_Ganar;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Texto_Vida_tx_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Texto_Vida_tx;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Texto_Tiempo_tx_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Texto_Tiempo_tx;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Texto_Puntuacion_tx_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Texto_Puntuacion_tx;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Texto_Reintentar_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Texto_Reintentar;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Boton_Reintentar_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Boton_Reintentar;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_Salir_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Text_Salir;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Boton_Salir_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Boton_Salir;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWidget_Ganar_CPP_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Prueba_TrooperBLack,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWidget_Ganar_CPP_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWidget_Ganar_CPP_BotonCargarJuego, "BotonCargarJuego" }, // 712399862
		{ &Z_Construct_UFunction_UWidget_Ganar_CPP_BotonSalirJuego, "BotonSalirJuego" }, // 3351869692
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidget_Ganar_CPP_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Widget_Ganar_CPP.h" },
		{ "ModuleRelativePath", "Widget_Ganar_CPP.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidget_Ganar_CPP_Statics::NewProp_Texto_Vida_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Widget_Ganar_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidget_Ganar_CPP_Statics::NewProp_Texto_Vida = { "Texto_Vida", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidget_Ganar_CPP, Texto_Vida), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWidget_Ganar_CPP_Statics::NewProp_Texto_Vida_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_Ganar_CPP_Statics::NewProp_Texto_Vida_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidget_Ganar_CPP_Statics::NewProp_Texto_Tiempo_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Widget_Ganar_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidget_Ganar_CPP_Statics::NewProp_Texto_Tiempo = { "Texto_Tiempo", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidget_Ganar_CPP, Texto_Tiempo), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWidget_Ganar_CPP_Statics::NewProp_Texto_Tiempo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_Ganar_CPP_Statics::NewProp_Texto_Tiempo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidget_Ganar_CPP_Statics::NewProp_Texto_Puntuacion_1_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Widget_Ganar_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidget_Ganar_CPP_Statics::NewProp_Texto_Puntuacion_1 = { "Texto_Puntuacion_1", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidget_Ganar_CPP, Texto_Puntuacion_1), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWidget_Ganar_CPP_Statics::NewProp_Texto_Puntuacion_1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_Ganar_CPP_Statics::NewProp_Texto_Puntuacion_1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidget_Ganar_CPP_Statics::NewProp_Texto_Ganar_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Widget_Ganar_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidget_Ganar_CPP_Statics::NewProp_Texto_Ganar = { "Texto_Ganar", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidget_Ganar_CPP, Texto_Ganar), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWidget_Ganar_CPP_Statics::NewProp_Texto_Ganar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_Ganar_CPP_Statics::NewProp_Texto_Ganar_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidget_Ganar_CPP_Statics::NewProp_Texto_Vida_tx_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Widget_Ganar_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidget_Ganar_CPP_Statics::NewProp_Texto_Vida_tx = { "Texto_Vida_tx", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidget_Ganar_CPP, Texto_Vida_tx), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWidget_Ganar_CPP_Statics::NewProp_Texto_Vida_tx_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_Ganar_CPP_Statics::NewProp_Texto_Vida_tx_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidget_Ganar_CPP_Statics::NewProp_Texto_Tiempo_tx_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Widget_Ganar_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidget_Ganar_CPP_Statics::NewProp_Texto_Tiempo_tx = { "Texto_Tiempo_tx", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidget_Ganar_CPP, Texto_Tiempo_tx), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWidget_Ganar_CPP_Statics::NewProp_Texto_Tiempo_tx_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_Ganar_CPP_Statics::NewProp_Texto_Tiempo_tx_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidget_Ganar_CPP_Statics::NewProp_Texto_Puntuacion_tx_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Widget_Ganar_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidget_Ganar_CPP_Statics::NewProp_Texto_Puntuacion_tx = { "Texto_Puntuacion_tx", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidget_Ganar_CPP, Texto_Puntuacion_tx), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWidget_Ganar_CPP_Statics::NewProp_Texto_Puntuacion_tx_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_Ganar_CPP_Statics::NewProp_Texto_Puntuacion_tx_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidget_Ganar_CPP_Statics::NewProp_Texto_Reintentar_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Widget_Ganar_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidget_Ganar_CPP_Statics::NewProp_Texto_Reintentar = { "Texto_Reintentar", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidget_Ganar_CPP, Texto_Reintentar), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWidget_Ganar_CPP_Statics::NewProp_Texto_Reintentar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_Ganar_CPP_Statics::NewProp_Texto_Reintentar_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidget_Ganar_CPP_Statics::NewProp_Boton_Reintentar_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Widget_Ganar_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidget_Ganar_CPP_Statics::NewProp_Boton_Reintentar = { "Boton_Reintentar", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidget_Ganar_CPP, Boton_Reintentar), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWidget_Ganar_CPP_Statics::NewProp_Boton_Reintentar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_Ganar_CPP_Statics::NewProp_Boton_Reintentar_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidget_Ganar_CPP_Statics::NewProp_Text_Salir_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Widget_Ganar_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidget_Ganar_CPP_Statics::NewProp_Text_Salir = { "Text_Salir", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidget_Ganar_CPP, Text_Salir), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWidget_Ganar_CPP_Statics::NewProp_Text_Salir_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_Ganar_CPP_Statics::NewProp_Text_Salir_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidget_Ganar_CPP_Statics::NewProp_Boton_Salir_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Widget_Ganar_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidget_Ganar_CPP_Statics::NewProp_Boton_Salir = { "Boton_Salir", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidget_Ganar_CPP, Boton_Salir), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWidget_Ganar_CPP_Statics::NewProp_Boton_Salir_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_Ganar_CPP_Statics::NewProp_Boton_Salir_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWidget_Ganar_CPP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_Ganar_CPP_Statics::NewProp_Texto_Vida,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_Ganar_CPP_Statics::NewProp_Texto_Tiempo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_Ganar_CPP_Statics::NewProp_Texto_Puntuacion_1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_Ganar_CPP_Statics::NewProp_Texto_Ganar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_Ganar_CPP_Statics::NewProp_Texto_Vida_tx,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_Ganar_CPP_Statics::NewProp_Texto_Tiempo_tx,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_Ganar_CPP_Statics::NewProp_Texto_Puntuacion_tx,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_Ganar_CPP_Statics::NewProp_Texto_Reintentar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_Ganar_CPP_Statics::NewProp_Boton_Reintentar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_Ganar_CPP_Statics::NewProp_Text_Salir,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_Ganar_CPP_Statics::NewProp_Boton_Salir,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWidget_Ganar_CPP_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWidget_Ganar_CPP>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWidget_Ganar_CPP_Statics::ClassParams = {
		&UWidget_Ganar_CPP::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UWidget_Ganar_CPP_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_Ganar_CPP_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWidget_Ganar_CPP_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_Ganar_CPP_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWidget_Ganar_CPP()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWidget_Ganar_CPP_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWidget_Ganar_CPP, 2368785975);
	template<> PRUEBA_TROOPERBLACK_API UClass* StaticClass<UWidget_Ganar_CPP>()
	{
		return UWidget_Ganar_CPP::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWidget_Ganar_CPP(Z_Construct_UClass_UWidget_Ganar_CPP, &UWidget_Ganar_CPP::StaticClass, TEXT("/Script/Prueba_TrooperBLack"), TEXT("UWidget_Ganar_CPP"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWidget_Ganar_CPP);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
