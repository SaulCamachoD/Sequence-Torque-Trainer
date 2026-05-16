#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "BOPPlayerController.generated.h"

class UInputMappingContext;
class UInputAction;
struct FInputActionValue;

UCLASS()
class SEQUENCETORQUE_API ABOPPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	ABOPPlayerController();
	
protected:
	virtual void BeginPlay() override;
	virtual void SetupInputComponent() override;
	virtual void PlayerTick(float DeltaTime) override;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Input")
	TObjectPtr<UInputMappingContext> DefaultMappingContext;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Input")
	TObjectPtr<UInputAction> ClickAction;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Input")
	TEnumAsByte<ECollisionChannel> InteractionTraceChannel = ECC_Visibility;

private:
	void LeftClick(const FInputActionValue& Value);

	AActor* GetActorUnderCursor() const;
	
	UPROPERTY()
	TObjectPtr<AActor> CurrentHoveredActor;
	
	
};
