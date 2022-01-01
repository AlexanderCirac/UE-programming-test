// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Objeto_Destruible_CPP.h"
#include "ObjetoDestruible_Child.generated.h"

/**
 * 
 */
UCLASS()
class PRUEBA_TROOPERBLACK_API AObjetoDestruible_Child : public AObjeto_Destruible_CPP
{
	GENERATED_BODY()
	

public:
	// Sets default values for this actor's properties
	AObjetoDestruible_Child();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	bool var_Check;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float var_Damage;


	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class	UMeshComponent* var_objetoTrigger2;

	UFUNCTION()
		void EntrarTrigger(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	UFUNCTION()
		void SalirTrigger(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
};
