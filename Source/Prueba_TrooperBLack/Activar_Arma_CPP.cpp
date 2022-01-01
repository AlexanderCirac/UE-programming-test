// Fill out your copyright notice in the Description page of Project Settings.


#include "Activar_Arma_CPP.h"
#include "Prueba_TrooperBLackCharacter.h"
#include "Engine/World.h"
// Sets default values
AActivar_Arma_CPP::AActivar_Arma_CPP()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AActivar_Arma_CPP::BeginPlay()
{
	Super::BeginPlay();
	OnActorBeginOverlap.AddDynamic(this, &AActivar_Arma_CPP::OnOverlap);
}

// Called every frame
void AActivar_Arma_CPP::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AActivar_Arma_CPP::OnOverlap(AActor* me, AActor* other)
{
	AActor* var_objetoColisionado = other;

	if (var_objetoColisionado->ActorHasTag("Jugador")) {

		//APrueba_TrooperBLackCharacter* jugador = Cast<APrueba_TrooperBLackCharacter>(var_objetoColisionado->GetPlayer);
		 APrueba_TrooperBLackCharacter* jugador = Cast<APrueba_TrooperBLackCharacter>(other);
		if (jugador != nullptr) {
			jugador->var_ActivarArma = true;
			me->Destroy();
		}

	}
}

