// Fill out your copyright notice in the Description page of Project Settings.


#include "Widget_Perder_CPP.h"
#include "Engine/World.h"
#include "GameInstance_CPP.h"
#include "Components/TextBlock.h"
#include "Components/Button.h"
#include "Kismet/GameplayStatics.h"

void UWidget_Perder_CPP::NativeConstruct()
{
  Super::NativeConstruct();

  Button_Reintentar->OnClicked.AddDynamic(this, &UWidget_Perder_CPP::BotonCargarJuego);
  Button_Salir->OnClicked.AddDynamic(this, &UWidget_Perder_CPP::BotonSalirJuego);
}

void UWidget_Perder_CPP::NativeTick(const FGeometry& geometry, float deltaTime)
{
  Super::NativeTick(geometry, deltaTime);


  UGameInstance_CPP* v_GI = Cast <UGameInstance_CPP>(GetGameInstance());
  if (v_GI != nullptr) {
    if (v_GI->m_int_ID_Dialogo == 0) {
      Texto_Perder->SetText(FText::FromString(v_GI->m_string_Castellano[5]));
      Text_Reintentar->SetText(FText::FromString(v_GI->m_string_Castellano[0]));
      Texto_Salir->SetText(FText::FromString(v_GI->m_string_Castellano[3]));
    }
    if (v_GI->m_int_ID_Dialogo == 1) {
      Texto_Perder->SetText(FText::FromString(v_GI->m_string_Castellano[5]));
      Text_Reintentar->SetText(FText::FromString(v_GI->m_string_Castellano[4]));
      Texto_Salir->SetText(FText::FromString(v_GI->m_string_Castellano[3]));
    }
    if (v_GI->m_int_ID_Dialogo == 2) {
      Texto_Perder->SetText(FText::FromString(v_GI->m_string_Ingles[5]));
      Text_Reintentar->SetText(FText::FromString(v_GI->m_string_Ingles[4]));
      Texto_Salir->SetText(FText::FromString(v_GI->m_string_Ingles[3]));
    }
  }
}

void UWidget_Perder_CPP::BotonCargarJuego()
{
  UGameplayStatics::OpenLevel(this, "Niv_Juego_CPP");
}

void UWidget_Perder_CPP::BotonSalirJuego()
{
  UWorld* mundo = GetWorld();
  APlayerController* jugador = GetWorld()->GetFirstPlayerController();
  if (!ensure(jugador != nullptr)) return;

  jugador->ConsoleCommand("quit");
}
