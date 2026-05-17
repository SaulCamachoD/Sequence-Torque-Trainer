#include "Gameplay//ABolt.h"

#include "Components/SphereComponent.h"
#include "Components/WidgetComponent.h"

AABolt::AABolt()
{
	PrimaryActorTick.bCanEverTick = false;
	
	BoltMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BoltMesh"));
	RootComponent = BoltMesh;

	BoltMesh->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	BoltMesh->SetCollisionResponseToAllChannels(ECR_Ignore);
	BoltMesh->SetCollisionObjectType(ECC_WorldDynamic);
	BoltMesh->SetCollisionResponseToChannel(ECC_Visibility, ECR_Block);

	NutMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("NutMesh"));
	NutMesh->SetupAttachment(BoltMesh);
	NutMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	InteractionSphere = CreateDefaultSubobject<USphereComponent>(TEXT("InteractionSphere"));
	InteractionSphere->SetupAttachment(BoltMesh);
	InteractionSphere->SetSphereRadius(10.0f);
	InteractionSphere->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	InteractionSphere->SetCollisionResponseToAllChannels(ECR_Ignore);
	InteractionSphere->SetCollisionObjectType(ECC_WorldDynamic);
	InteractionSphere->SetCollisionResponseToChannel(ECC_Visibility, ECR_Block);

	NumberWidget = CreateDefaultSubobject<UWidgetComponent>(TEXT("NumberWidget"));
	NumberWidget->SetupAttachment(BoltMesh);
	NumberWidget->SetRelativeLocation(FVector(0.0f, 0.0f, 20.0f));
	NumberWidget->SetWidgetSpace(EWidgetSpace::Screen);
	NumberWidget->SetDrawSize(FVector2D(80.0f, 80.0f));

}


void AABolt::BeginPlay()
{
	Super::BeginPlay();
	
	CurrentState = EBoltState::Pending;
	
}

void AABolt::Tighten()
{
	if (CurrentState == EBoltState::Tightened)return;
	CurrentState = EBoltState::Tightened;
	OnStateChanged(CurrentState);
	OnBoltTightened.Broadcast();
}

void AABolt::ShowError()
{
	if (CurrentState == EBoltState::Tightened) return;

	PreErrorState = CurrentState;
	CurrentState = EBoltState::Error;
	OnStateChanged(CurrentState);

	FTimerHandle ResetTimer;
	GetWorldTimerManager().SetTimer(
		ResetTimer,
		[this]()
		{
			if (CurrentState == EBoltState::Error)
			{
				CurrentState = PreErrorState;
				OnStateChanged(CurrentState);
			}
		},
		0.5f,
		false
		);
}

void AABolt::SetHighlighted(bool bHighlighted)
{
	if (CurrentState == EBoltState::Tightened) return;
	
	if (CurrentState == EBoltState::Error)
	{
		PreErrorState = bHighlighted ? EBoltState::Active : EBoltState::Pending;
		return;
	}

	if (bHighlighted && CurrentState == EBoltState::Pending)
	{
		CurrentState = EBoltState::Active;
		OnStateChanged(CurrentState);
	}
	else if (!bHighlighted && CurrentState == EBoltState::Active)
	{
		CurrentState = EBoltState::Pending;
		OnStateChanged(CurrentState);
	}
	
}

void AABolt::ResetBolt()
{
	CurrentState = EBoltState::Pending;
	PreErrorState = EBoltState::Pending;
	OnStateChanged(CurrentState);
}

void AABolt::Interact_Implementation(AActor* Object)
{
	if (CurrentState == EBoltState::Tightened)return;
	 OnBoltClicked.Broadcast(this);
}

