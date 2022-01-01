// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Zona_Victoria_CPP.generated.h"

UCLASS()
class PRUEBA_TROOPERBLACK_API AZona_Victoria_CPP : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AZona_Victoria_CPP();

	bool var_activarVictoria;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UMeshComponent* var_zonaVictoria;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	UFUNCTION()
		void OnOverlap(AActor* me, AActor* other);
		void Victoria();
};
