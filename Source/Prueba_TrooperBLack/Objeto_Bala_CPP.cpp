// Fill out your copyright notice in the Description page of Project Settings.


#include "Objeto_Bala_CPP.h"
#include "TimerManager.h"

// Sets default values
AObjeto_Bala_CPP::AObjeto_Bala_CPP()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AObjeto_Bala_CPP::BeginPlay()
{
	Super::BeginPlay();
	
	GetWorldTimerManager().SetTimer(var_destruccion, this, &AObjeto_Bala_CPP::AutoDestruccion, 20);
	OnActorBeginOverlap.AddDynamic(this, &AObjeto_Bala_CPP::OnOverlap);
}

// Called every frame
void AObjeto_Bala_CPP::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	AddActorLocalOffset(FVector(190, 0, 0) * 0.25f);

}

void AObjeto_Bala_CPP::AutoDestruccion()
{
	Destroy();
}

void AObjeto_Bala_CPP::OnOverlap(AActor* me, AActor* other)
{
	//APrueba_TrooperBLackGameMode* v_GMB = Cast <APrueba_TrooperBLackGameMode>(GetWorld()->GetAuthGameMode());
	//if (v_GMB != nullptr) {
	//	v_GMB->var_contadorRecoleccion = v_GMB->var_contadorRecoleccion + 1;
	//}
	//me->Destroy();
	AActor* var_objetoColisionado = other;

	if (var_objetoColisionado->ActorHasTag("Enemigo")) {

		//me->Destroy();
	}
	else {
		if (var_objetoColisionado->ActorHasTag("Jugador")) {

		}
		else {

	//	me->Destroy();
		}
	}
}

