// Fill out your copyright notice in the Description page of Project Settings.


#include "Objeto_coleccionable_CPP.h"
#include "Math/Vector.h"
#include "Misc/App.h"
#include "Prueba_TrooperBLackGameMode.h"


// Sets default values
AObjeto_coleccionable_CPP::AObjeto_coleccionable_CPP()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AObjeto_coleccionable_CPP::BeginPlay()
{
	Super::BeginPlay();
	
	var_tranform = GetTransform().GetLocation();

	OnActorBeginOverlap.AddDynamic(this, &AObjeto_coleccionable_CPP::OnOverlap);

}

// Called every frame
void AObjeto_coleccionable_CPP::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	var_tranformActual = GetTransform().GetLocation();
	Animacion(0.25f); // queria poner un delta time pero no funcion 
}

void AObjeto_coleccionable_CPP::Animacion(float deltaTime)
{
	if (var_tranformActual.Z < (var_tranform.Z - 40))
		var_a = true;
	if (var_tranformActual.Z > (var_tranform.Z + 40))
		var_a = false;

	if (var_a) {

		AddActorLocalOffset(FVector(0, 0, 2 )* deltaTime);
	}
	else {

		AddActorLocalOffset(FVector(0, 0, -2 )* deltaTime);
	}
}

void AObjeto_coleccionable_CPP::OnOverlap(AActor* me, AActor* other)
{
	APrueba_TrooperBLackGameMode* v_GMB = Cast <APrueba_TrooperBLackGameMode>(GetWorld()->GetAuthGameMode());


	AActor* var_objetoColisionado = other;
	
	if (var_objetoColisionado->ActorHasTag("Jugador")) {
		if (v_GMB != nullptr) {
		v_GMB->var_contadorRecoleccion = v_GMB->var_contadorRecoleccion + 1;
		}
		me->Destroy();
	}


}

