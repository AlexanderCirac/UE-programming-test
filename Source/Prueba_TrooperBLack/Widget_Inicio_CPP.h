// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Widget_Inicio_CPP.generated.h"

/**
 * 
 */
UCLASS()
class PRUEBA_TROOPERBLACK_API UWidget_Inicio_CPP : public UUserWidget 
{
	GENERATED_BODY()


public : 


protected: 

		UPROPERTY(meta = (BindWidget))
		class UButton* boton_Jugar;

		UPROPERTY(meta = (BindWidget))
		class UTextBlock* TextoJugar;


		UPROPERTY(meta = (BindWidget))
		class UTextBlock* Text_Ingles;
		

		UPROPERTY(meta = (BindWidget))
		class UButton* Boton_Salir;

		UPROPERTY(meta = (BindWidget))
		class UTextBlock* Text_Salir;
		
		UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
			class UButton* BotonCastellano;


		UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
			class UButton* BotonIngles;

		
		UPROPERTY(meta = (BindWidget))
		class UTextBlock* Texto_Castellano;



	void NativeConstruct() override;
	void NativeTick(const FGeometry& geometry, float deltaTime) override;

	UFUNCTION()
	void BotonIdiomaCastellano();
	UFUNCTION()
	void BotonIdiomaIngles();	
	UFUNCTION()
	void BotonCargarJuego();	
	UFUNCTION()
	void BotonSalirJuego();

	
};
