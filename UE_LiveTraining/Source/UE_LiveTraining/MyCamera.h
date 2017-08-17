// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Camera/CameraActor.h"
#include "Classes/Kismet/KismetMathLibrary.h"
#include "Kismet/KismetSystemLibrary.h"
#include "DrawDebugHelpers.h"
#include "Camera/CameraComponent.h"
#include "MyCamera.generated.h"

UCLASS()
class UE_LIVETRAINING_API AMyCamera : public ACameraActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyCamera();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//debug info
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		uint8 bShowDebugInfo : 1;
	
	//distanse between camera and object
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FVector IdealOffset;

	//max speed of camera korektirovanie, per axis
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FVector CameraSpeed_PerAxis;

	//max speed of camera korektirovanie, for all axis
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float CameraSpeedLimiter;
};
