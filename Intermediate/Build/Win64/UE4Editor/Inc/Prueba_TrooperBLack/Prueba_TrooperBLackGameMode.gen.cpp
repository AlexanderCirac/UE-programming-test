// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Prueba_TrooperBLack/Prueba_TrooperBLackGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePrueba_TrooperBLackGameMode() {}
// Cross Module References
	PRUEBA_TROOPERBLACK_API UClass* Z_Construct_UClass_APrueba_TrooperBLackGameMode_NoRegister();
	PRUEBA_TROOPERBLACK_API UClass* Z_Construct_UClass_APrueba_TrooperBLackGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Prueba_TrooperBLack();
// End Cross Module References
	void APrueba_TrooperBLackGameMode::StaticRegisterNativesAPrueba_TrooperBLackGameMode()
	{
	}
	UClass* Z_Construct_UClass_APrueba_TrooperBLackGameMode_NoRegister()
	{
		return APrueba_TrooperBLackGameMode::StaticClass();
	}
	struct Z_Construct_UClass_APrueba_TrooperBLackGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_var_tiempoLimite_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_var_tiempoLimite;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_var_tiempoJugadaSegundos_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_var_tiempoJugadaSegundos;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_var_tiempoJugadaMinutos_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_var_tiempoJugadaMinutos;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APrueba_TrooperBLackGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Prueba_TrooperBLack,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APrueba_TrooperBLackGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Prueba_TrooperBLackGameMode.h" },
		{ "ModuleRelativePath", "Prueba_TrooperBLackGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APrueba_TrooperBLackGameMode_Statics::NewProp_var_tiempoLimite_MetaData[] = {
		{ "Category", "Prueba_TrooperBLackGameMode" },
		{ "ModuleRelativePath", "Prueba_TrooperBLackGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APrueba_TrooperBLackGameMode_Statics::NewProp_var_tiempoLimite = { "var_tiempoLimite", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APrueba_TrooperBLackGameMode, var_tiempoLimite), METADATA_PARAMS(Z_Construct_UClass_APrueba_TrooperBLackGameMode_Statics::NewProp_var_tiempoLimite_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APrueba_TrooperBLackGameMode_Statics::NewProp_var_tiempoLimite_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APrueba_TrooperBLackGameMode_Statics::NewProp_var_tiempoJugadaSegundos_MetaData[] = {
		{ "Category", "Prueba_TrooperBLackGameMode" },
		{ "ModuleRelativePath", "Prueba_TrooperBLackGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_APrueba_TrooperBLackGameMode_Statics::NewProp_var_tiempoJugadaSegundos = { "var_tiempoJugadaSegundos", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APrueba_TrooperBLackGameMode, var_tiempoJugadaSegundos), METADATA_PARAMS(Z_Construct_UClass_APrueba_TrooperBLackGameMode_Statics::NewProp_var_tiempoJugadaSegundos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APrueba_TrooperBLackGameMode_Statics::NewProp_var_tiempoJugadaSegundos_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APrueba_TrooperBLackGameMode_Statics::NewProp_var_tiempoJugadaMinutos_MetaData[] = {
		{ "Category", "Prueba_TrooperBLackGameMode" },
		{ "ModuleRelativePath", "Prueba_TrooperBLackGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_APrueba_TrooperBLackGameMode_Statics::NewProp_var_tiempoJugadaMinutos = { "var_tiempoJugadaMinutos", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APrueba_TrooperBLackGameMode, var_tiempoJugadaMinutos), METADATA_PARAMS(Z_Construct_UClass_APrueba_TrooperBLackGameMode_Statics::NewProp_var_tiempoJugadaMinutos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APrueba_TrooperBLackGameMode_Statics::NewProp_var_tiempoJugadaMinutos_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APrueba_TrooperBLackGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APrueba_TrooperBLackGameMode_Statics::NewProp_var_tiempoLimite,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APrueba_TrooperBLackGameMode_Statics::NewProp_var_tiempoJugadaSegundos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APrueba_TrooperBLackGameMode_Statics::NewProp_var_tiempoJugadaMinutos,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APrueba_TrooperBLackGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APrueba_TrooperBLackGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APrueba_TrooperBLackGameMode_Statics::ClassParams = {
		&APrueba_TrooperBLackGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APrueba_TrooperBLackGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APrueba_TrooperBLackGameMode_Statics::PropPointers),
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_APrueba_TrooperBLackGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APrueba_TrooperBLackGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APrueba_TrooperBLackGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APrueba_TrooperBLackGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APrueba_TrooperBLackGameMode, 203891220);
	template<> PRUEBA_TROOPERBLACK_API UClass* StaticClass<APrueba_TrooperBLackGameMode>()
	{
		return APrueba_TrooperBLackGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APrueba_TrooperBLackGameMode(Z_Construct_UClass_APrueba_TrooperBLackGameMode, &APrueba_TrooperBLackGameMode::StaticClass, TEXT("/Script/Prueba_TrooperBLack"), TEXT("APrueba_TrooperBLackGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APrueba_TrooperBLackGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
