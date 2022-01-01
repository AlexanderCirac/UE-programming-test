// Fill out your copyright notice in the Description page of Project Settings.


#include "Widget_Cinematica_CPP.h"
#include "Engine/World.h"
#include "GameInstance_CPP.h"
#include "Components/TextBlock.h"
#include "Components/Button.h"
#include "Kismet/GameplayStatics.h"

void UWidget_Cinematica_CPP::NativeConstruct()
{
  Super::NativeConstruct();
  Boton_Cerrar_Cinematica->OnClicked.AddDynamic(this, &UWidget_Cinematica_CPP::BotonCargarJuego);
}

void UWidget_Cinematica_CPP::NativeTick(const FGeometry& geometry, float deltaTime)
{
  Super::NativeTick(geometry, deltaTime);


  UGameInstance_CPP* v_GI = Cast <UGameInstance_CPP>(GetGameInstance());
  if (v_GI != nullptr) {
    if (v_GI->m_int_ID_Dialogo == 0) {
      Texto_Boton_Cinematica->SetText(FText::FromString(v_GI->m_string_Castellano[10]));
    }
    if (v_GI->m_int_ID_Dialogo == 1) {
      Texto_Boton_Cinematica->SetText(FText::FromString(v_GI->m_string_Castellano[10]));
    }
    if (v_GI->m_int_ID_Dialogo == 2) {
      Texto_Boton_Cinematica->SetText(FText::FromString(v_GI->m_string_Ingles[10]));
    }
  }
}

void UWidget_Cinematica_CPP::BotonCargarJuego()
{
  UGameplayStatics::OpenLevel(this, "Niv_Juego_CPP");
}
