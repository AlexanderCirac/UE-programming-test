// Fill out your copyright notice in the Description page of Project Settings.


#include "Widget_Ganar_CPP.h"
#include "Engine/World.h"
#include "GameInstance_CPP.h"
#include "Components/TextBlock.h"
#include "Components/Button.h"
#include "Kismet/GameplayStatics.h"
#include "Prueba_TrooperBLackCharacter.h"

void UWidget_Ganar_CPP::NativeConstruct()
{

  Super::NativeConstruct();

  Boton_Salir->OnClicked.AddDynamic(this, &UWidget_Ganar_CPP::BotonSalirJuego);
  Boton_Reintentar->OnClicked.AddDynamic(this, &UWidget_Ganar_CPP::BotonCargarJuego);
}

void UWidget_Ganar_CPP::NativeTick(const FGeometry& geometry, float deltaTime)
{
  Super::NativeTick(geometry, deltaTime);


  UGameInstance_CPP* v_GI = Cast <UGameInstance_CPP>(GetGameInstance());
  if (v_GI != nullptr) {
    if (v_GI->m_int_ID_Dialogo == 0) {
      Texto_Ganar->SetText(FText::FromString(v_GI->m_string_Castellano[6]));
      Texto_Reintentar->SetText(FText::FromString(v_GI->m_string_Castellano[0]));
      Text_Salir->SetText(FText::FromString(v_GI->m_string_Castellano[3]));
      Texto_Puntuacion_1->SetText(FText::FromString(v_GI->m_string_Castellano[7]));
      Texto_Tiempo->SetText(FText::FromString(v_GI->m_string_Castellano[8]));
      Texto_Vida->SetText(FText::FromString(v_GI->m_string_Castellano[9]));
    }
    if (v_GI->m_int_ID_Dialogo == 1) {
      Texto_Ganar->SetText(FText::FromString(v_GI->m_string_Castellano[6]));
      Texto_Reintentar->SetText(FText::FromString(v_GI->m_string_Castellano[0]));
      Text_Salir->SetText(FText::FromString(v_GI->m_string_Castellano[3]));
      Texto_Puntuacion_1->SetText(FText::FromString(v_GI->m_string_Castellano[7]));
      Texto_Tiempo->SetText(FText::FromString(v_GI->m_string_Castellano[8]));
      Texto_Vida->SetText(FText::FromString(v_GI->m_string_Castellano[9]));
    }
    if (v_GI->m_int_ID_Dialogo == 2) {
      Texto_Ganar->SetText(FText::FromString(v_GI->m_string_Ingles[6]));
      Texto_Reintentar->SetText(FText::FromString(v_GI->m_string_Ingles[4]));
      Text_Salir->SetText(FText::FromString(v_GI->m_string_Ingles[3]));
      Texto_Puntuacion_1->SetText(FText::FromString(v_GI->m_string_Ingles[7]));
      Texto_Tiempo->SetText(FText::FromString(v_GI->m_string_Ingles[8]));
      Texto_Vida->SetText(FText::FromString(v_GI->m_string_Ingles[9]));
    }
    Texto_Puntuacion_tx->SetText(FText::FromString("7"));
    Texto_Tiempo_tx->SetText(FText::FromString(FString::FromInt(v_GI->var_min)+":"+ FString::FromInt(v_GI->var_seg)));
    Texto_Vida_tx->SetText(FText::FromString(FString::SanitizeFloat(v_GI->var_vida)));
    
  }
}

void UWidget_Ganar_CPP::BotonCargarJuego()
{
  UGameplayStatics::OpenLevel(this, "Niv_Juego_CPP");
}

void UWidget_Ganar_CPP::BotonSalirJuego()
{
  UWorld* mundo = GetWorld();
  APlayerController* jugador = GetWorld()->GetFirstPlayerController();
  if (!ensure(jugador != nullptr)) return;

  jugador->ConsoleCommand("quit");
}


