// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Widget_NivelJuego_CPP.generated.h"

/**
 * 
 */
UCLASS()
class PRUEBA_TROOPERBLACK_API UWidget_NivelJuego_CPP : public UUserWidget
{
	GENERATED_BODY()
	
public: 
//
//	FTimerHandle tiempoHandler;

	UPROPERTY(meta = (BindWidget))
		class UProgressBar* ProgressBar_Vida;

protected:

	UPROPERTY(meta = (BindWidget))
		class UTextBlock* Texto_Recuento;



	UPROPERTY(meta = (BindWidget))
		class UTextBlock* Texto_Temporizador;



	void NativeConstruct() override;
	void NativeTick(const FGeometry& geometry, float deltaTime) override;

	void barraVida();
};
