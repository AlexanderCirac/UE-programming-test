// Fill out your copyright notice in the Description page of Project Settings.


#include "Zona_Victoria_CPP.h"
#include "Kismet/GameplayStatics.h"
#include "Prueba_TrooperBLackGameMode.h"

// Sets default values
AZona_Victoria_CPP::AZona_Victoria_CPP()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AZona_Victoria_CPP::BeginPlay()
{
	Super::BeginPlay();
	
	OnActorBeginOverlap.AddDynamic(this, &AZona_Victoria_CPP::OnOverlap);

	if (var_zonaVictoria != nullptr) {
		var_zonaVictoria->SetVisibility(false);
	}
}

// Called every frame
void AZona_Victoria_CPP::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	APrueba_TrooperBLackGameMode* v_GMB = Cast <APrueba_TrooperBLackGameMode>(GetWorld()->GetAuthGameMode());
	if (v_GMB != nullptr) {
		if (v_GMB->var_contadorRecoleccion == 7) {
				AZona_Victoria_CPP::Victoria();
				if(var_zonaVictoria != nullptr)
			var_zonaVictoria->SetVisibility(true);
		}
	}

}

void AZona_Victoria_CPP::OnOverlap(AActor* me, AActor* other)
{
		AActor* var_objetoColisionado = other;
	if (var_activarVictoria) {

		if (var_objetoColisionado->ActorHasTag("Jugador")) 
		UGameplayStatics::OpenLevel(this, "Niv_Ganar_CPP");
	}
}

void AZona_Victoria_CPP::Victoria()
{

			var_activarVictoria = true;
		
	
}

