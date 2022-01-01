// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Widget_InfoObjJuego_CPP.generated.h"

/**
 * 
 */
UCLASS()
class PRUEBA_TROOPERBLACK_API UWidget_InfoObjJuego_CPP : public UUserWidget
{
	GENERATED_BODY()
	
public:
		UPROPERTY(meta = (BindWidget))
		class UProgressBar* ProgressBar_Vida_Objeto;

	void NativeConstruct() override;
	void NativeTick(const FGeometry& geometry, float deltaTime) override;

};
