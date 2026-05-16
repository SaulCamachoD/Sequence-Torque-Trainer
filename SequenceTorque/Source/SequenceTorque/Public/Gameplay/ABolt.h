#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Interfaces/InteractableInterface.h"
#include "ABolt.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBoltClicked, AABolt*, ClickedBolt);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnBoltTightened);

UENUM(BlueprintType)
enum class EBoltState : uint8
{
	Pending,
	Active,
	Tightened,
	Error
};


class UStaticMeshComponent;
class UWidgetComponent;
class USphereComponent;

UCLASS()
class SEQUENCETORQUE_API AABolt : public AActor , public IInteractableInterface
{
	GENERATED_BODY()
	
public:	
	AABolt();
	
	UFUNCTION(BlueprintCallable, Category = "Bolt")
	void Tighten();

	UFUNCTION(BlueprintCallable, Category = "Bolt")
	void ShowError();

	UFUNCTION(BlueprintCallable, Category = "Bolt")
	void SetHighlighted(bool bHighlighted);

	UFUNCTION(BlueprintCallable, Category = "Bolt")
	void ResetBolt();
	
	virtual void Interact_Implementation(AActor* Object) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Bolt|Config")
	int32 TighteningOrder = 0;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Bolt|State")
	EBoltState CurrentState = EBoltState::Pending;

	// ===== Delegates =====
	UPROPERTY(BlueprintAssignable, Category = "Bolt|Events")
	FOnBoltClicked OnBoltClicked;

	UPROPERTY(BlueprintAssignable, Category = "Bolt|Events")
	FOnBoltTightened OnBoltTightened;

protected:
	virtual void BeginPlay() override;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	TObjectPtr<UStaticMeshComponent> BoltMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	TObjectPtr<UStaticMeshComponent> NutMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	TObjectPtr<USphereComponent> InteractionSphere;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	TObjectPtr<UWidgetComponent> NumberWidget;
	
};
