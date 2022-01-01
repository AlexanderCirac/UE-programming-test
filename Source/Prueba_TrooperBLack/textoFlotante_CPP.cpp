// Fill out your copyright notice in the Description page of Project Settings.


#include "textoFlotante_CPP.h"
#include "TimerManager.h"
#include "UserWidgetTextFlotante_CPP.h"
#include "Components/WidgetComponent.h"
// Sets default values
AtextoFlotante_CPP::AtextoFlotante_CPP()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AtextoFlotante_CPP::BeginPlay()
{
	Super::BeginPlay();
	GetWorldTimerManager().SetTimer(var_destruccion, this, &AtextoFlotante_CPP::AutoDestruccion, 3);
}

// Called every frame
void AtextoFlotante_CPP::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	AtextoFlotante_CPP::MovimientoArriba();
	AtextoFlotante_CPP::PasarInfoDamage();
}

void AtextoFlotante_CPP::AutoDestruccion()
{
	Destroy();
}

void AtextoFlotante_CPP::MovimientoArriba()
{
	AddActorLocalOffset(FVector(0, 0, 42) * 0.25f);
}


void AtextoFlotante_CPP::PasarInfoDamage()
{
	//if (var_objetoWidget != nullptr) {
	//	UUserWidgetTextFlotante_CPP* widget = Cast<UUserWidgetTextFlotante_CPP>(var_objetoWidget->GetUserWidgetObject());

	//		if (widget != nullptr) {
	//			widget->var_damageText = var_damageObject;
	//		}
	//}
}

