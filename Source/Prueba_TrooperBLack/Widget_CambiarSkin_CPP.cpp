// Fill out your copyright notice in the Description page of Project Settings.


#include "Widget_CambiarSkin_CPP.h"
#include "Engine/World.h"
#include "GameInstance_CPP.h"
#include "Components/TextBlock.h"
#include "Components/Button.h"
#include "Kismet/GameplayStatics.h"


void UWidget_CambiarSkin_CPP::NativeConstruct()
{
  Super::NativeConstruct();
}

void UWidget_CambiarSkin_CPP::NativeTick(const FGeometry& geometry, float deltaTime)
{
  Super::NativeTick(geometry, deltaTime);


  UGameInstance_CPP* v_GI = Cast <UGameInstance_CPP>(GetGameInstance());
  if (v_GI != nullptr) {
    if (v_GI->m_int_ID_Dialogo == 0) {
      Skin_1->SetText(FText::FromString(v_GI->m_string_Castellano[11]));
      Skin_2->SetText(FText::FromString(v_GI->m_string_Castellano[12]));
      Skin_3->SetText(FText::FromString(v_GI->m_string_Castellano[13]));
    }
    if (v_GI->m_int_ID_Dialogo == 1) {
      Skin_1->SetText(FText::FromString(v_GI->m_string_Castellano[11]));
      Skin_2->SetText(FText::FromString(v_GI->m_string_Castellano[12]));
      Skin_3->SetText(FText::FromString(v_GI->m_string_Castellano[13]));
    }
    if (v_GI->m_int_ID_Dialogo == 2) {
      Skin_1->SetText(FText::FromString(v_GI->m_string_Ingles[11]));
      Skin_2->SetText(FText::FromString(v_GI->m_string_Ingles[12]));
      Skin_3->SetText(FText::FromString(v_GI->m_string_Ingles[13]));
    }
  }
}
