// Fill out your copyright notice in the Description page of Project Settings.


#include "AC_salud_CPP.h"
#include "Kismet/GameplayStatics.h"
// Sets default values for this component's properties
UAC_salud_CPP::UAC_salud_CPP()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UAC_salud_CPP::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UAC_salud_CPP::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...

}
void UAC_salud_CPP::Morir()
{
	
	if (var_vida <= 0.0f) {
		UGameplayStatics::OpenLevel(this, "Niv_Perder_CPP");
	}

}

