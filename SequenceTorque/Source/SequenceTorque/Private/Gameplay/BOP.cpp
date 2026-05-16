#include "Gameplay//BOP.h"

#include "Data/BoltSequenceData.h"
#include "Kismet/KismetMathLibrary.h"
#include "Gameplay/ABolt.h"

ABOP::ABOP()
{
	PrimaryActorTick.bCanEverTick = false;
	
	RootScene = CreateDefaultSubobject<USceneComponent>(TEXT("RootScene"));
	RootComponent = RootScene;

	BOPMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BOPMesh"));
	BOPMesh->SetupAttachment(RootScene);
	BOPMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);

}

void ABOP::ResetSequence()
{
	CurrentStep = 1;

	for (AABolt* Bolt : SpawnedBolts)
	{
		if (Bolt)
		{
			Bolt->ResetBolt();
		}
	}

	OnStepAdvanced.Broadcast(CurrentStep);
	UE_LOG(LogTemp, Log, TEXT("ABOP_Flange: secuencia reiniciada."));
}

AABolt* ABOP::GetCurrentExpectedBolt() const
{
	if (IsSequenceCompleted()) return nullptr;

	for (AABolt* Bolt : SpawnedBolts)
	{
		if (Bolt && Bolt->TighteningOrder == CurrentStep)
		{
			return Bolt;
		}
	}
	return nullptr;
}

void ABOP::BeginPlay()
{
	Super::BeginPlay();
	
	TotalBolts = SequenceData->BoltCount;
	SpawnBolts();
	
}

void ABOP::SpawnBolts()
{
	UWorld* World = GetWorld();
	if (!World) return;
	if (!SequenceData || !BoltClass) return;
	SpawnedBolts.Empty();
	SpawnedBolts.Reserve(TotalBolts);

	FActorSpawnParameters SpawnParams;
	SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	SpawnParams.Owner = this;
	
	const FRotator BoltLocalRotation = UKismetMathLibrary::MakeRotFromZ(FVector(0.0f, 1.0f, 0.0f));

	for (int32 PositionIndex = 0; PositionIndex < TotalBolts; PositionIndex++)
	{
		const FVector LocalPos = CalculateBoltLocation(PositionIndex);
		const FVector WorldPos = GetActorLocation() + GetActorRotation().RotateVector(LocalPos);
		
		const FQuat WorldRotation = GetActorQuat() * BoltLocalRotation.Quaternion();
		const FTransform SpawnTransform = FTransform(WorldRotation, WorldPos);

		AABolt* NewBolt = World->SpawnActor<AABolt>(BoltClass, SpawnTransform, SpawnParams);
		if (!NewBolt) continue;

		NewBolt->AttachToActor(this, FAttachmentTransformRules::KeepWorldTransform);

		if (SequenceData->TighteningOrder.IsValidIndex(PositionIndex))
		{
			NewBolt->TighteningOrder = SequenceData->TighteningOrder[PositionIndex];
		}

		BindBoltEvents(NewBolt);
		SpawnedBolts.Add(NewBolt);
	}

	UE_LOG(LogTemp, Log, TEXT("ABOP: spawneados %d bolts."), SpawnedBolts.Num());
}

void ABOP::BindBoltEvents(AABolt* Bolt)
{
	if (!Bolt) return;
	Bolt->OnBoltClicked.AddDynamic(this, &ABOP::HandleBoltClicked);
}

void ABOP::HandleBoltClicked(AABolt* ClickedBolt)
{
	if (!ClickedBolt) return;
	if (IsSequenceCompleted()) return;
	
	if (ClickedBolt->TighteningOrder == CurrentStep)
	{
		ClickedBolt->Tighten();
		CurrentStep++;

		OnStepAdvanced.Broadcast(CurrentStep);

		if (IsSequenceCompleted())
		{
			OnSequenceCompleted.Broadcast();
			UE_LOG(LogTemp, Log, TEXT("ABOP_Flange: secuencia completada"));
		}
	}
	else
	{
		ClickedBolt->ShowError();
		OnWrongBoltClicked.Broadcast(ClickedBolt);
	}
}

FVector ABOP::CalculateBoltLocation(int32 PositionIndex) const
{
	if (!SequenceData) return FVector::ZeroVector;

	const float AngleStep = 360.0f / static_cast<float>(TotalBolts);
	const float AngleDeg = SequenceData->StartAngleDegrees + (PositionIndex * AngleStep);
	const float AngleRad = FMath::DegreesToRadians(AngleDeg);

	return FVector(
		FMath::Sin(AngleRad) * SequenceData->Radius,    
		SequenceData->BoltHeight,                       
		FMath::Cos(AngleRad) * SequenceData->Radius + SequenceData->ZOffsetPosition 
	);
}


