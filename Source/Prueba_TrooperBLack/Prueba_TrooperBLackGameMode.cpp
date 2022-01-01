// Copyright Epic Games, Inc. All Rights Reserved.

#include "Prueba_TrooperBLackGameMode.h"
#include "Prueba_TrooperBLackCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/World.h"
#include "Components/TextBlock.h"
#include "TimerManager.h"
#include "Kismet/GameplayStatics.h"
#include "GameInstance_CPP.h"
#include "AC_salud_CPP.h"

APrueba_TrooperBLackGameMode::APrueba_TrooperBLackGameMode()
{

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	PrimaryActorTick.bCanEverTick = true;

	//GetWorldTimerManager().SetTimer(var_tiempoMinuto, this, &APrueba_TrooperBLackGameMode::ContarMinuto, 59.0f, true);
	//GetWorldTimerManager().SetTimer(var_tiempoMinuto, this, &APrueba_TrooperBLackGameMode::ContarSegundo, 1.0f, true);
}

void APrueba_TrooperBLackGameMode::Tick(float deltaseconds)
{
	Super::Tick(deltaseconds);

	APrueba_TrooperBLackGameMode::VidaActual();
	APrueba_TrooperBLackGameMode::ActualizarDatos();

	if (var_tiempoJugadaMinutos >= 2) {
		UGameplayStatics::OpenLevel(this, "Niv_Perder_CPP");
	}
}

void APrueba_TrooperBLackGameMode::BeginPlay()
{
	Super::BeginPlay();
	var_nombreMapa = GetWorld()->GetName();
	GetWorldTimerManager().SetTimer(var_tiempoMinuto, this, &APrueba_TrooperBLackGameMode::ContarMinuto, 60.0f, true);
	GetWorldTimerManager().SetTimer(var_tiempoSegundo, this, &APrueba_TrooperBLackGameMode::ContarSegundo, 1.0f, true);
	APrueba_TrooperBLackGameMode::ResetDatos();
}

void APrueba_TrooperBLackGameMode::ContarSegundo()
{

	if (var_nombreMapa == "Niv_Juego_CPP") {
		if (var_tiempoJugadaSegundos <= 58) {
			var_tiempoJugadaSegundos = var_tiempoJugadaSegundos + 1;
		}
		else {
			var_tiempoJugadaSegundos = 0;
		}

	}
}

void APrueba_TrooperBLackGameMode::ContarMinuto()
{
	if (var_nombreMapa == "Niv_Juego_CPP") {
		var_tiempoJugadaMinutos = var_tiempoJugadaMinutos + 1;
	}


}

void APrueba_TrooperBLackGameMode::VidaActual()
{
	/*APrueba_TrooperBLackCharacter* jugador = Cast<APrueba_TrooperBLackCharacter>(
		GetWorld()->GetFirstPlayerController()->GetPawn());
	if (jugador != nullptr) {

		if (jugador->var_vida <= 0.0f) {
			UGameplayStatics::OpenLevel(this, "Niv_Perder_CPP");
		}
	}*/


}

void APrueba_TrooperBLackGameMode::ResetDatos()
{
	if (var_nombreMapa == "Niv_Juego_CPP") {

	UGameInstance_CPP* gameInstancia = Cast<UGameInstance_CPP>(GetWorld()->GetGameInstance());
	if (gameInstancia != nullptr) {
		gameInstancia->var_min = 0;
		gameInstancia->var_seg = 0;
		gameInstancia->var_vida = 100;
	}
	}

}

void APrueba_TrooperBLackGameMode::ActualizarDatos()
{
	if (var_nombreMapa == "Niv_Juego_CPP") {

		APrueba_TrooperBLackCharacter* jugador = Cast<APrueba_TrooperBLackCharacter>(
			GetWorld()->GetFirstPlayerController()->GetPawn());
		UGameInstance_CPP* gameInstancia = Cast<UGameInstance_CPP>(GetWorld()->GetGameInstance());
		if (gameInstancia != nullptr) {
			gameInstancia->var_seg = var_tiempoJugadaSegundos;
			gameInstancia->var_min = var_tiempoJugadaMinutos;
			gameInstancia->var_vida = jugador->var_vida;
			jugador->com_vida->Morir();
		}
	}

}
