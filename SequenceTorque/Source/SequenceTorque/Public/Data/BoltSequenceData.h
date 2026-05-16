// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "BoltSequenceData.generated.h"

UCLASS(BlueprintType)
class SEQUENCETORQUE_API UBoltSequenceData : public UPrimaryDataAsset
{
	GENERATED_BODY()
	
	public:
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Sequence")
	TArray<int32> TighteningOrder;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Layout", meta = (ClampMin = "10.0"))
	float Radius;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Layout")
	float BoltHeight;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Layout")
	float StartAngleDegrees;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Layout")
	float ZOffsetPosition;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Layout", meta = (ClampMin = "3", ClampMax = "16"))
	int32 BoltCount;
	
};
