// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Widget_CambiarSkin_CPP.generated.h"

/**
 * 
 */
UCLASS()
class PRUEBA_TROOPERBLACK_API UWidget_CambiarSkin_CPP : public UUserWidget
{
	GENERATED_BODY()
	

		UPROPERTY(meta = (BindWidget))
		class UButton* Boton_Skin1;

	UPROPERTY(meta = (BindWidget))
		class UTextBlock* Skin_1;

	UPROPERTY(meta = (BindWidget))
		class UButton* Boton_Skin2;

	UPROPERTY(meta = (BindWidget))
		class UTextBlock* Skin_2;


	UPROPERTY(meta = (BindWidget))
		class UButton* Boton_Skin3;

	UPROPERTY(meta = (BindWidget))
		class UTextBlock* Skin_3;


		void NativeConstruct() override;
		void NativeTick(const FGeometry& geometry, float deltaTime) override;
};
