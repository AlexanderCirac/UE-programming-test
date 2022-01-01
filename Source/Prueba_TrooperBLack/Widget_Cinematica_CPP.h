// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Widget_Cinematica_CPP.generated.h"

/**
 * 
 */
UCLASS()
class PRUEBA_TROOPERBLACK_API UWidget_Cinematica_CPP : public UUserWidget
{
	GENERATED_BODY()

protected:
		UPROPERTY(meta = (BindWidget))
		class UButton* Boton_Cerrar_Cinematica;

	UPROPERTY(meta = (BindWidget))
		class UTextBlock* Texto_Boton_Cinematica;

	

	void NativeConstruct() override;
	void NativeTick(const FGeometry& geometry, float deltaTime) override;

	UFUNCTION()
		void BotonCargarJuego();
};
