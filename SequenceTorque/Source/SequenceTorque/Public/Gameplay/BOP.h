#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BOP.generated.h"

class AABolt;
class UBoltSequenceData;
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnSequenceCompleted);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnWrongBoltClicked, AABolt*, WrongBolt);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStepAdvanced, int32, NewStep);

UCLASS()
class SEQUENCETORQUE_API ABOP : public AActor
{
	GENERATED_BODY()
	
public:	
	ABOP();
	
	UFUNCTION(BlueprintCallable, Category = "BOP")
	void ResetSequence();

	UFUNCTION(BlueprintPure, Category = "BOP")
	int32 GetCurrentStep() const { return CurrentStep; }

	UFUNCTION(BlueprintPure, Category = "BOP")
	AABolt* GetCurrentExpectedBolt() const;

	UFUNCTION(BlueprintPure, Category = "BOP")
	bool IsSequenceCompleted() const { return CurrentStep > TotalBolts; }
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "BOP|Config")
	TObjectPtr<UBoltSequenceData> SequenceData;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "BOP|Config")
	TSubclassOf<AABolt> BoltClass;

	// Delegates 

	UPROPERTY(BlueprintAssignable, Category = "BOP|Events")
	FOnSequenceCompleted OnSequenceCompleted;

	UPROPERTY(BlueprintAssignable, Category = "BOP|Events")
	FOnWrongBoltClicked OnWrongBoltClicked;

	UPROPERTY(BlueprintAssignable, Category = "BOP|Events")
	FOnStepAdvanced OnStepAdvanced;

protected:
	virtual void BeginPlay() override;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	TObjectPtr<class USceneComponent> RootScene;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	TObjectPtr<class UStaticMeshComponent> BOPMesh;

private:
	
	void SpawnBolts();

	void BindBoltEvents(AABolt* Bolt);

	UFUNCTION()
	void HandleBoltClicked(AABolt* ClickedBolt);
	
	FVector CalculateBoltLocation(int32 PositionIndex) const;
	
	UPROPERTY()
	TArray<TObjectPtr<AABolt>> SpawnedBolts;
	int32 CurrentStep = 1;
	int32 TotalBolts = 8;
	

};
