// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Objeto_Bala_CPP.generated.h"

UCLASS()
class PRUEBA_TROOPERBLACK_API AObjeto_Bala_CPP : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AObjeto_Bala_CPP();
	FTimerHandle var_destruccion;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void AutoDestruccion();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float damage;
private:
	UFUNCTION()
		void OnOverlap(AActor* me, AActor* other);

};
