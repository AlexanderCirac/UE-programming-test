// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Objeto_Destruible_CPP.generated.h"

UCLASS()
class PRUEBA_TROOPERBLACK_API AObjeto_Destruible_CPP : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AObjeto_Destruible_CPP();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UMeshComponent* var_objetoCupula;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UWidgetComponent* var_objetoWidget;	
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UMeshComponent* var_objetoTrigger;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float var_vida;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TSubclassOf<class AActor> var_TextoFlotante;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UMeshComponent* var_zonaRespawn;

	//class UWidget_InfoObjJuego_CPP* widget;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;



	UFUNCTION()
		void ActivarWidget(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	UFUNCTION()
		void DesactivarWidget(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);


	void Vida();
	void PasarInfo();
};
