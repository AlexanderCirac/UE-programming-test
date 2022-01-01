// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Widget_Ganar_CPP.generated.h"

/**
 * 
 */
UCLASS()
class PRUEBA_TROOPERBLACK_API UWidget_Ganar_CPP : public UUserWidget
{
	GENERATED_BODY()

protected:

		UPROPERTY(meta = (BindWidget))
		class UButton* Boton_Salir;

	UPROPERTY(meta = (BindWidget))
		class UTextBlock* Text_Salir;

	UPROPERTY(meta = (BindWidget))
		class UButton* Boton_Reintentar;

	UPROPERTY(meta = (BindWidget))
		class UTextBlock* Texto_Reintentar;


	UPROPERTY(meta = (BindWidget))
		class UTextBlock* Texto_Puntuacion_tx;

	UPROPERTY(meta = (BindWidget))
		class UTextBlock* Texto_Tiempo_tx;

	UPROPERTY(meta = (BindWidget))
		class UTextBlock* Texto_Vida_tx;

	UPROPERTY(meta = (BindWidget))
		class UTextBlock* Texto_Ganar;
	
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* Texto_Puntuacion_1;

	UPROPERTY(meta = (BindWidget))
		class UTextBlock* Texto_Tiempo;
	
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* Texto_Vida;

	
	void NativeConstruct() override;
	void NativeTick(const FGeometry& geometry, float deltaTime) override;

	UFUNCTION()
		void BotonCargarJuego();
	UFUNCTION()
		void BotonSalirJuego();


};
