// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "GameInstance_CPP.generated.h"

/**
 * 
 */
UCLASS()
class PRUEBA_TROOPERBLACK_API UGameInstance_CPP : public UGameInstance
{
	GENERATED_BODY()

public:

	UPROPERTY( BlueprintReadWrite)
	int m_int_ID_Dialogo = 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<FString> m_string_Castellano;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<FString> m_string_Ingles;

	int var_min;
	int var_seg;
	float var_vida;

};
