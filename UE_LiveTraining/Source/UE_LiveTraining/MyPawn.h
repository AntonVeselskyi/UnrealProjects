// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Components/SceneComponent.h"
#include "MyCamera.h"
#include "Camera/CameraComponent.h"
#include "Engine/World.h"
#include "MyPawn.generated.h"

UCLASS()
class UE_LIVETRAINING_API AMyPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AMyPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

 
    void Move_XAxis(float AxisValue);
    void Move_YAxis(float AxisValue);
	//Input variables
	FVector CurrentVelocity;


	UPROPERTY(EditAnywhere)
		USceneComponent* OurVisibleComponent;
	//camera class/BP we spawn for the player
	UPROPERTY(EditAnywhere)
		TSubclassOf<AMyCamera> CameraActorToSpawn;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	AMyCamera* MyCamera;

private:
	//flag to control firing
	uint32 bCanFire : 1;

	//handle for efficient managment of ShotTimerExpired timer
	FTimerHandle TimerHandle_ShotTimerExpires;

 
};
