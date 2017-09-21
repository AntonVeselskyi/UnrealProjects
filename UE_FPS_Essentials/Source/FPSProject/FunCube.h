// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SceneComponent.h"
#include "Components/BoxComponent.h"
#include "Components/PrimitiveComponent.h"
#include "FunCube.generated.h"

UCLASS()
class FPSPROJECT_API AFunCube : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFunCube();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = PickUp)
		FRotator RotationRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = PickUp)
		float Speed = 1.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = PickUp)
		USceneComponent* SceneComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = PickUp)
		UStaticMeshComponent* StaticMesh;

	UPROPERTY(EditAnywhere)
		UBoxComponent* BoxCollider;

	//name
	UPROPERTY(EditAnywhere)
		FString Name="None";

	virtual void OnInteract();

	UFUNCTION()
		void OnOverlapBegin(UPrimitiveComponent* OverlappedComp,
			AActor* OtherActor, UPrimitiveComponent* OtherComp,
			int32 OtherBodyIndex, bool bFromSweep,
			const FHitResult& SweepResult);
	
};
