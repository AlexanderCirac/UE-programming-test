// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "textoFlotante_CPP.generated.h"

UCLASS()
class PRUEBA_TROOPERBLACK_API AtextoFlotante_CPP : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AtextoFlotante_CPP();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UWidgetComponent* var_objetoWidget;

		FTimerHandle var_destruccion;
	
		UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float var_damageObject;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void AutoDestruccion();
	void MovimientoArriba();
	void PasarInfoDamage();

};
