// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Prueba_TrooperBLack/Widget_Cinematica_CPP.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidget_Cinematica_CPP() {}
// Cross Module References
	PRUEBA_TROOPERBLACK_API UClass* Z_Construct_UClass_UWidget_Cinematica_CPP_NoRegister();
	PRUEBA_TROOPERBLACK_API UClass* Z_Construct_UClass_UWidget_Cinematica_CPP();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Prueba_TrooperBLack();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UWidget_Cinematica_CPP::execBotonCargarJuego)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BotonCargarJuego();
		P_NATIVE_END;
	}
	void UWidget_Cinematica_CPP::StaticRegisterNativesUWidget_Cinematica_CPP()
	{
		UClass* Class = UWidget_Cinematica_CPP::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BotonCargarJuego", &UWidget_Cinematica_CPP::execBotonCargarJuego },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWidget_Cinematica_CPP_BotonCargarJuego_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidget_Cinematica_CPP_BotonCargarJuego_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Widget_Cinematica_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidget_Cinematica_CPP_BotonCargarJuego_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidget_Cinematica_CPP, nullptr, "BotonCargarJuego", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidget_Cinematica_CPP_BotonCargarJuego_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_Cinematica_CPP_BotonCargarJuego_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidget_Cinematica_CPP_BotonCargarJuego()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWidget_Cinematica_CPP_BotonCargarJuego_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWidget_Cinematica_CPP_NoRegister()
	{
		return UWidget_Cinematica_CPP::StaticClass();
	}
	struct Z_Construct_UClass_UWidget_Cinematica_CPP_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Texto_Boton_Cinematica_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Texto_Boton_Cinematica;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Boton_Cerrar_Cinematica_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Boton_Cerrar_Cinematica;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWidget_Cinematica_CPP_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Prueba_TrooperBLack,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWidget_Cinematica_CPP_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWidget_Cinematica_CPP_BotonCargarJuego, "BotonCargarJuego" }, // 3254115453
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidget_Cinematica_CPP_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Widget_Cinematica_CPP.h" },
		{ "ModuleRelativePath", "Widget_Cinematica_CPP.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidget_Cinematica_CPP_Statics::NewProp_Texto_Boton_Cinematica_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Widget_Cinematica_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidget_Cinematica_CPP_Statics::NewProp_Texto_Boton_Cinematica = { "Texto_Boton_Cinematica", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidget_Cinematica_CPP, Texto_Boton_Cinematica), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWidget_Cinematica_CPP_Statics::NewProp_Texto_Boton_Cinematica_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_Cinematica_CPP_Statics::NewProp_Texto_Boton_Cinematica_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidget_Cinematica_CPP_Statics::NewProp_Boton_Cerrar_Cinematica_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Widget_Cinematica_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidget_Cinematica_CPP_Statics::NewProp_Boton_Cerrar_Cinematica = { "Boton_Cerrar_Cinematica", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidget_Cinematica_CPP, Boton_Cerrar_Cinematica), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWidget_Cinematica_CPP_Statics::NewProp_Boton_Cerrar_Cinematica_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_Cinematica_CPP_Statics::NewProp_Boton_Cerrar_Cinematica_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWidget_Cinematica_CPP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_Cinematica_CPP_Statics::NewProp_Texto_Boton_Cinematica,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_Cinematica_CPP_Statics::NewProp_Boton_Cerrar_Cinematica,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWidget_Cinematica_CPP_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWidget_Cinematica_CPP>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWidget_Cinematica_CPP_Statics::ClassParams = {
		&UWidget_Cinematica_CPP::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UWidget_Cinematica_CPP_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_Cinematica_CPP_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWidget_Cinematica_CPP_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_Cinematica_CPP_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWidget_Cinematica_CPP()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWidget_Cinematica_CPP_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWidget_Cinematica_CPP, 2797700809);
	template<> PRUEBA_TROOPERBLACK_API UClass* StaticClass<UWidget_Cinematica_CPP>()
	{
		return UWidget_Cinematica_CPP::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWidget_Cinematica_CPP(Z_Construct_UClass_UWidget_Cinematica_CPP, &UWidget_Cinematica_CPP::StaticClass, TEXT("/Script/Prueba_TrooperBLack"), TEXT("UWidget_Cinematica_CPP"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWidget_Cinematica_CPP);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
