#include "Core/BOPGameMode.h"
#include "Gameplay/ABolt.h"
#include "Blueprint/UserWidget.h"
#include "Gameplay/BOP.h"
#include "Kismet/GameplayStatics.h"

ABOPGameMode::ABOPGameMode()
{
	DefaultPawnClass = nullptr;
}

void ABOPGameMode::StartPlay()
{
    Super::StartPlay();

    FindAndBindBOP();
    CreateHUD();

    if (GetWorld())
    {
        GameStartTime = GetWorld()->GetTimeSeconds();
    }
    bGameActive = true;
}

void ABOPGameMode::FindAndBindBOP()
{
    TArray<AActor*> FoundBOPs;
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), ABOP::StaticClass(), FoundBOPs);

    if (FoundBOPs.Num() == 0)
    {
        return;
    }

    CurrentBOP = Cast<ABOP>(FoundBOPs[0]);
    if (!CurrentBOP) return;

    CurrentBOP->OnStepAdvanced.AddDynamic(this, &ABOPGameMode::HandleStepAdvanced);
    CurrentBOP->OnWrongBoltClicked.AddDynamic(this, &ABOPGameMode::HandleWrongBolt);
    CurrentBOP->OnSequenceCompleted.AddDynamic(this, &ABOPGameMode::HandleSequenceCompleted);
}

void ABOPGameMode::CreateHUD()
{
    if (!HUDWidgetClass) return;

    APlayerController* PC = UGameplayStatics::GetPlayerController(GetWorld(), 0);
    if (!PC) return;

    HUDWidget = CreateWidget<UUserWidget>(PC, HUDWidgetClass);
    if (HUDWidget)
    {
        HUDWidget->AddToViewport();
    }
}

void ABOPGameMode::ShowVictoryScreen()
{
    if (!VictoryWidgetClass) return;

    APlayerController* PC = UGameplayStatics::GetPlayerController(GetWorld(), 0);
    if (!PC) return;

    VictoryWidget = CreateWidget<UUserWidget>(PC, VictoryWidgetClass);
    if (VictoryWidget)
    {
        VictoryWidget->AddToViewport(10);
        
        FInputModeUIOnly InputMode;
        InputMode.SetWidgetToFocus(VictoryWidget->TakeWidget());
        PC->SetInputMode(InputMode);
    }
}

void ABOPGameMode::HandleStepAdvanced(int32 NewStep)
{
    CurrentStep = NewStep;
    OnStepChanged.Broadcast(NewStep);
}

void ABOPGameMode::HandleWrongBolt(AABolt* WrongBolt)
{
    ErrorCount++;
    OnErrorsChanged.Broadcast(ErrorCount);
}

void ABOPGameMode::HandleSequenceCompleted()
{
    bGameActive = false;
    if (GetWorld())
    {
        GameEndTime = GetWorld()->GetTimeSeconds();
    }

    const float TotalTime = GameEndTime - GameStartTime;
    OnGameCompleted.Broadcast(TotalTime, ErrorCount);

    ShowVictoryScreen();
}

void ABOPGameMode::RestartSequence()
{
    if (!CurrentBOP) return;
    
    APlayerController* PC = UGameplayStatics::GetPlayerController(GetWorld(), 0);
    if (PC)
    {
        FInputModeGameAndUI InputMode;
        InputMode.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);
        InputMode.SetHideCursorDuringCapture(false);
        PC->SetInputMode(InputMode);
    }
    
    CurrentBOP->ResetSequence();

    if (VictoryWidget)
    {
        VictoryWidget->RemoveFromParent();
        VictoryWidget = nullptr;
    }

    if (GetWorld())
    {
        GameStartTime = GetWorld()->GetTimeSeconds();
    }
    GameEndTime = 0.0f;
    ErrorCount = 0;
    CurrentStep = 1;
    bGameActive = true;

    OnStepChanged.Broadcast(CurrentStep);
    OnErrorsChanged.Broadcast(ErrorCount);
}

float ABOPGameMode::GetElapsedTime() const
{
    if (!GetWorld()) return 0.0f;

    if (bGameActive)
    {
        return GetWorld()->GetTimeSeconds() - GameStartTime;
    }
    return GameEndTime - GameStartTime;
}
