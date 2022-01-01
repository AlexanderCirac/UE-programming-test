// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "UserWidgetTextFlotante_CPP.generated.h"

/**
 * 
 */
UCLASS()
class PRUEBA_TROOPERBLACK_API UUserWidgetTextFlotante_CPP : public UUserWidget
{
	GENERATED_BODY()
	
public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float var_damageText;
protected:

	UPROPERTY(meta = (BindWidget))
	class UTextBlock* textDamage;


	void NativeConstruct() override;
	void NativeTick(const FGeometry& geometry, float deltaTime) override;
};
