// Fill out your copyright notice in the Description page of Project Settings.


#include "Objeto_Destruible_CPP.h"
#include "Components/WidgetComponent.h"
#include "Objeto_Bala_CPP.h"
#include "Widget_InfoObjJuego_CPP.h"
#include "Components/ProgressBar.h"
#include "textoFlotante_CPP.h"

// Sets default values
AObjeto_Destruible_CPP::AObjeto_Destruible_CPP()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AObjeto_Destruible_CPP::BeginPlay()
{
	Super::BeginPlay();
	
	if (var_objetoCupula != nullptr) {
	var_objetoCupula->OnComponentBeginOverlap.AddDynamic(this, &AObjeto_Destruible_CPP::ActivarWidget);
	var_objetoCupula->OnComponentEndOverlap.AddDynamic(this, &AObjeto_Destruible_CPP::DesactivarWidget);

	}
	if (var_objetoTrigger != nullptr) {
		var_objetoTrigger->OnComponentBeginOverlap.AddDynamic(this, &AObjeto_Destruible_CPP::ActivarWidget);
		var_objetoTrigger->OnComponentEndOverlap.AddDynamic(this, &AObjeto_Destruible_CPP::DesactivarWidget);

	}
	
//	var_objetoCupula->OnActorBeginOverlap.AddDynamic(this, &AObjeto_Destruible_CPP::ActivarWidget());
}

// Called every frame
void AObjeto_Destruible_CPP::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	AObjeto_Destruible_CPP::Vida();

	AObjeto_Destruible_CPP::PasarInfo();
}



void AObjeto_Destruible_CPP::ActivarWidget(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	AActor* var_objetoColisionado = OtherActor;

	if (var_objetoColisionado->ActorHasTag("Jugador")) {

		if (var_objetoWidget != nullptr) {
			
			var_objetoWidget->SetVisibility(true);
		}
	}
	
	AObjeto_Bala_CPP* bala = Cast<AObjeto_Bala_CPP>(OtherActor);
	if (bala != nullptr) {

		if (var_objetoColisionado->ActorHasTag("Bala")) {

			var_vida = var_vida - (bala->damage);
			if (var_TextoFlotante != nullptr && var_zonaRespawn != nullptr) {
				FActorSpawnParameters SpawnParams;
		AActor* coso	= GetWorld()->SpawnActor<AActor>(var_TextoFlotante, var_zonaRespawn->GetComponentLocation(), var_zonaRespawn->GetComponentRotation(), SpawnParams);
				AtextoFlotante_CPP* coso1 = Cast<AtextoFlotante_CPP>(coso);
				if (coso1 != nullptr) {
					coso1->var_damageObject = bala->damage;
				}
			}
			OtherActor->Destroy();
		}
	}


}

void AObjeto_Destruible_CPP::DesactivarWidget(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	AActor* var_objetoColisionado = OtherActor;

	if (var_objetoColisionado->ActorHasTag("Jugador")) {
		if (var_objetoWidget != nullptr) {

			var_objetoWidget->SetVisibility(false);
		}
	}


}

void AObjeto_Destruible_CPP::Vida()
{

	if (var_vida <= 0.0f) {
		Destroy();
	}
}

void AObjeto_Destruible_CPP::PasarInfo()
{

	if (var_objetoWidget != nullptr) {
		UWidget_InfoObjJuego_CPP*	widget = Cast<UWidget_InfoObjJuego_CPP>(var_objetoWidget->GetUserWidgetObject());
			if (widget != nullptr) {

			widget->ProgressBar_Vida_Objeto->SetPercent(var_vida/100);
			}
	}

				
}





