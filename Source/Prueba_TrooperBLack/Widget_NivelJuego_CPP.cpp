// Fill out your copyright notice in the Description page of Project Settings.


#include "Widget_NivelJuego_CPP.h"
#include "Engine/World.h"
#include "Prueba_TrooperBLackGameMode.h"
#include "GameInstance_CPP.h"
#include "Components/TextBlock.h"
#include "Components/Button.h"
#include "Kismet/GameplayStatics.h"
#include "Components/ProgressBar.h"
#include "Components/WidgetComponent.h"
#include "Prueba_TrooperBLackCharacter.h"
//#include "TimerManager.h"
//#include <Runtime/Engine/Private/Actor.cpp>
//#include "../../../../../../../Juegos/Epic/UE_4.25/Engine/Plugins/Online/OnlineFramework/Source/Qos/Private/QosEvaluator.cpp"
////#include "../../../../../../../Juegos/Epic/UE_4.25/Engine/Plugins/Online/OnlineFramework/Source/Qos/Private/QosEvaluator.h"

void UWidget_NivelJuego_CPP::NativeConstruct()
{
  Super::NativeConstruct();



}

void UWidget_NivelJuego_CPP::NativeTick(const FGeometry& geometry, float deltaTime)
{
  Super::NativeTick(geometry, deltaTime);

  APrueba_TrooperBLackGameMode* v_GMB = Cast <APrueba_TrooperBLackGameMode>(GetWorld()->GetAuthGameMode());
  if (v_GMB != nullptr) {
    //FString coso = FString::SanitizeFloat(v_GMB->var_tiempoJugada);
    Texto_Temporizador->SetText(FText::FromString(FString::FromInt(v_GMB->var_tiempoJugadaMinutos)+":"+ FString::FromInt(v_GMB->var_tiempoJugadaSegundos)));
    Texto_Recuento->SetText(FText::FromString(FString::FromInt(v_GMB->var_contadorRecoleccion)+"/7"));
    UWidget_NivelJuego_CPP::barraVida();
  }


}

void UWidget_NivelJuego_CPP::barraVida()
{
  APrueba_TrooperBLackCharacter* jugador = Cast<APrueba_TrooperBLackCharacter>(
    GetWorld()->GetFirstPlayerController()->GetPawn());
  if (jugador != nullptr) {
    ProgressBar_Vida->SetPercent(jugador->var_vida / 100);
  }

}


