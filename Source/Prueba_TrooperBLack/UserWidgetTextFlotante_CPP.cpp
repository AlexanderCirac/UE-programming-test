// Fill out your copyright notice in the Description page of Project Settings.


#include "UserWidgetTextFlotante_CPP.h"
#include "Components/TextBlock.h"
#include "Engine/World.h"

void UUserWidgetTextFlotante_CPP::NativeConstruct()
{
  Super::NativeConstruct();
}

void UUserWidgetTextFlotante_CPP::NativeTick(const FGeometry& geometry, float deltaTime)
{
  Super::NativeTick(geometry, deltaTime);

  textDamage->SetText(FText::FromString(FString::SanitizeFloat(var_damageText)));
}
