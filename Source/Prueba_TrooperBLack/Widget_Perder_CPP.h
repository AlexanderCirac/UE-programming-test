// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Widget_Perder_CPP.generated.h"

/**
 * 
 */
UCLASS()
class PRUEBA_TROOPERBLACK_API UWidget_Perder_CPP : public UUserWidget
{
	GENERATED_BODY()


protected:
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* Texto_Perder;

	UPROPERTY(meta = (BindWidget))
		class UButton* Button_Reintentar;

	UPROPERTY(meta = (BindWidget))
		class UTextBlock* Text_Reintentar;

	UPROPERTY(meta = (BindWidget))
		class UButton* Button_Salir;

	UPROPERTY(meta = (BindWidget))
		class UTextBlock* Texto_Salir;


	void NativeConstruct() override;
	void NativeTick(const FGeometry& geometry, float deltaTime) override;

	UFUNCTION()
		void BotonCargarJuego();
	UFUNCTION()
		void BotonSalirJuego();
};
