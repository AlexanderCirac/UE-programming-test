// Fill out your copyright notice in the Description page of Project Settings.


#include "ObjetoDestruible_Child.h"
#include "Components/WidgetComponent.h"
#include "Prueba_TrooperBLackCharacter.h"
#include "AC_salud_CPP.h"
AObjetoDestruible_Child::AObjetoDestruible_Child()
{
  // Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
  PrimaryActorTick.bCanEverTick = true;
  var_Check = false;
}

void AObjetoDestruible_Child::BeginPlay()
{
  Super::BeginPlay();
}

void AObjetoDestruible_Child::Tick(float DeltaTime)
{
  Super::Tick(DeltaTime);

  if (var_objetoTrigger2 != nullptr) {
    var_objetoTrigger2->OnComponentBeginOverlap.AddDynamic(this, &AObjetoDestruible_Child::EntrarTrigger);
    var_objetoTrigger2->OnComponentEndOverlap.AddDynamic(this, &AObjetoDestruible_Child::SalirTrigger);
  }
}

void AObjetoDestruible_Child::EntrarTrigger(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
  AActor* var_objetoColisionado = OtherActor;

  if (var_objetoColisionado->ActorHasTag("Jugador")) {
    if (!var_Check) {

    APrueba_TrooperBLackCharacter* jugador = Cast<APrueba_TrooperBLackCharacter>(
      GetWorld()->GetFirstPlayerController()->GetPawn());
      if (jugador != nullptr) {

      //jugador->var_vida = jugador->var_vida - var_Damage;
        jugador->com_vida->var_vida = jugador->com_vida->var_vida - var_Damage;
        jugador->var_vida = jugador->com_vida->var_vida;
        var_Check = true;
      }
    }
  }
}

void AObjetoDestruible_Child::SalirTrigger(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
  AActor* var_objetoColisionado = OtherActor;

  if (var_objetoColisionado->ActorHasTag("Jugador")) {
      var_Check = false;
  }
}


