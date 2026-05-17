// Fill out your copyright notice in the Description page of Project Settings.


#include "Core/BOPPlayerController.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputAction.h"
#include "InputMappingContext.h"
#include "Gameplay/ABolt.h"
#include "Interfaces/InteractableInterface.h"

ABOPPlayerController::ABOPPlayerController()
{
	bShowMouseCursor = true;
	bEnableClickEvents = true;
	bEnableMouseOverEvents = true;
	DefaultMouseCursor = EMouseCursor::Crosshairs;
}

void ABOPPlayerController::BeginPlay()
{
	Super::BeginPlay();
	if (UEnhancedInputLocalPlayerSubsystem* Subsystem =
		ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer()))
	{
		if (DefaultMappingContext)
		{
			Subsystem->AddMappingContext(DefaultMappingContext, 0);
		}
	}
}

void ABOPPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();
	
	if (UEnhancedInputComponent* EnhancedInput = Cast<UEnhancedInputComponent>(InputComponent))
	{
		if (ClickAction)
		{
			EnhancedInput->BindAction(ClickAction, ETriggerEvent::Started, this, &ABOPPlayerController::LeftClick);
		}
	}
	
}

void ABOPPlayerController::PlayerTick(float DeltaTime)
{
	Super::PlayerTick(DeltaTime);
	
	AActor* ActorUnderCursor = GetActorUnderCursor();

	if (ActorUnderCursor != CurrentHoveredActor)
	{
		if (AABolt* PreviousBolt = Cast<AABolt>(CurrentHoveredActor))
		{
			PreviousBolt->SetHighlighted(false);
		}

		if (AABolt* NewBolt = Cast<AABolt>(ActorUnderCursor))
		{
			NewBolt->SetHighlighted(true);
		}

		CurrentHoveredActor = ActorUnderCursor;
	}
}


void ABOPPlayerController::LeftClick(const FInputActionValue& Value)
{	
	
	AActor* HitActor = GetActorUnderCursor();
	if (!HitActor) return;

	if (HitActor->Implements<UInteractableInterface>())
	{	
		IInteractableInterface::Execute_Interact(HitActor, this);
	}
}

AActor* ABOPPlayerController::GetActorUnderCursor() const
{
	FHitResult Hit;
	const bool bHit = GetHitResultUnderCursor(InteractionTraceChannel, false, Hit);
	return bHit ? Hit.GetActor() : nullptr;
}
