#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "BOPGameMode.generated.h"

class AABolt;
class ABOP;
class UUserWidget;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStepChanged, int32, NewStep);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnErrorsChanged, int32, NewErrors);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnGameCompleted, float, TotalTime, int32, TotalErrors);


UCLASS()
class ABOPGameMode : public AGameModeBase
{
	GENERATED_BODY()
	
	public:
	ABOPGameMode();
	
	 virtual void StartPlay() override;

    UFUNCTION(BlueprintCallable, Category = "BOP|Game")
    void RestartSequence();

    UFUNCTION(BlueprintPure, Category = "BOP|Game")
    float GetElapsedTime() const;

    UFUNCTION(BlueprintPure, Category = "BOP|Game")
    int32 GetErrorCount() const { return ErrorCount; }

    UFUNCTION(BlueprintPure, Category = "BOP|Game")
    int32 GetCurrentStep() const { return CurrentStep; }

    UFUNCTION(BlueprintPure, Category = "BOP|Game")
    bool IsGameActive() const { return bGameActive; }

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "BOP|UI")
    TSubclassOf<UUserWidget> HUDWidgetClass;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "BOP|UI")
    TSubclassOf<UUserWidget> VictoryWidgetClass;
	
    UPROPERTY(BlueprintAssignable, Category = "BOP|Events")
    FOnStepChanged OnStepChanged;

    UPROPERTY(BlueprintAssignable, Category = "BOP|Events")
    FOnErrorsChanged OnErrorsChanged;

    UPROPERTY(BlueprintAssignable, Category = "BOP|Events")
    FOnGameCompleted OnGameCompleted;

protected:
    void FindAndBindBOP();

    void CreateHUD();

    void ShowVictoryScreen();
	
    UFUNCTION()
    void HandleStepAdvanced(int32 NewStep);

    UFUNCTION()
    void HandleWrongBolt(AABolt* WrongBolt);

    UFUNCTION()
    void HandleSequenceCompleted();

private:
    UPROPERTY()
    TObjectPtr<ABOP> CurrentBOP;

    UPROPERTY()
    TObjectPtr<UUserWidget> HUDWidget;

    UPROPERTY()
    TObjectPtr<UUserWidget> VictoryWidget;

    float GameStartTime = 0.0f;
    float GameEndTime = 0.0f;
    int32 ErrorCount = 0;
    int32 CurrentStep = 1;
    bool bGameActive = false;
};
