// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Prueba_TrooperBLackGameMode.generated.h"

UCLASS(minimalapi)
class APrueba_TrooperBLackGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	APrueba_TrooperBLackGameMode();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int var_tiempoJugadaMinutos;		
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int var_tiempoJugadaSegundos;	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float var_tiempoLimite;

	int var_contadorRecoleccion;		
	FString var_nombreMapa;
	FTimerHandle var_tiempoMinuto;
	FTimerHandle var_tiempoSegundo;

protected:

	void Tick(float deltaseconds) override;

	virtual void BeginPlay() override;

	void ContarSegundo();
	void ContarMinuto();

	void VidaActual();

	void ResetDatos();
	void ActualizarDatos();
};



