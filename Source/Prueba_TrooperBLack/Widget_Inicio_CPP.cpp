// Fill out your copyright notice in the Description page of Project Settings.


#include "Widget_Inicio_CPP.h"
#include "Engine/World.h"
#include "GameInstance_CPP.h"
#include "Components/TextBlock.h"
#include "Components/Button.h"
#include "Kismet/GameplayStatics.h"

void UWidget_Inicio_CPP::NativeConstruct()
{


 Super::NativeConstruct();
 

 BotonIngles->OnClicked.AddDynamic(this, &UWidget_Inicio_CPP::BotonIdiomaIngles);
 BotonCastellano->OnClicked.AddDynamic(this, &UWidget_Inicio_CPP::BotonIdiomaCastellano);
 Boton_Salir->OnClicked.AddDynamic(this, &UWidget_Inicio_CPP::BotonSalirJuego);
 boton_Jugar->OnClicked.AddDynamic(this, &UWidget_Inicio_CPP::BotonCargarJuego);
 
}

void UWidget_Inicio_CPP::NativeTick(const FGeometry& geometry, float deltaTime)
{
  Super::NativeTick(geometry, deltaTime);


      UGameInstance_CPP* v_GI = Cast <UGameInstance_CPP>(GetGameInstance());
      if (v_GI != nullptr) {
        if (v_GI->m_int_ID_Dialogo == 0) {
          //Forma 1
          //FText texto = FText::FromString("hola1");
          //TextoJugar->SetText(texto);
          //Forma 2
          Texto_Castellano->SetText(FText::FromString(v_GI->m_string_Castellano[1]));
          TextoJugar->SetText(FText::FromString(v_GI->m_string_Castellano[0]));
          Text_Ingles->SetText(FText::FromString(v_GI->m_string_Castellano[2]));
          Text_Salir->SetText(FText::FromString(v_GI->m_string_Castellano[3]));
       }        
        if (v_GI->m_int_ID_Dialogo == 1) {
          Texto_Castellano->SetText(FText::FromString(v_GI->m_string_Castellano[1]));
          TextoJugar->SetText(FText::FromString(v_GI->m_string_Castellano[0]));
          Text_Ingles->SetText(FText::FromString(v_GI->m_string_Castellano[2]));
          Text_Salir->SetText(FText::FromString(v_GI->m_string_Castellano[3]));
       }        
        if (v_GI->m_int_ID_Dialogo == 2) {
          TextoJugar->SetText(FText::FromString(v_GI->m_string_Ingles[0]));
          Texto_Castellano->SetText(FText::FromString(v_GI->m_string_Ingles[1]));
          Text_Ingles->SetText(FText::FromString(v_GI->m_string_Ingles[2]));
          Text_Salir->SetText(FText::FromString(v_GI->m_string_Ingles[3]));
       }
      }
}

void UWidget_Inicio_CPP::BotonIdiomaCastellano()
{
  UGameInstance_CPP* v_GI = Cast <UGameInstance_CPP>(GetGameInstance());
  if (v_GI != nullptr)
  v_GI->m_int_ID_Dialogo = 1;
}

void UWidget_Inicio_CPP::BotonIdiomaIngles()
{
  UGameInstance_CPP* v_GI = Cast <UGameInstance_CPP>(GetGameInstance());
  if(v_GI != nullptr)
  v_GI->m_int_ID_Dialogo = 2;
}

void UWidget_Inicio_CPP::BotonCargarJuego()
{
  UGameplayStatics::OpenLevel(this, "Nivel_Cinematica_CPP");
}

void UWidget_Inicio_CPP::BotonSalirJuego()
{
  UWorld* mundo = GetWorld();
  APlayerController* jugador = GetWorld()->GetFirstPlayerController();
  if (!ensure(jugador != nullptr)) return;

  jugador->ConsoleCommand("quit");
  
}





