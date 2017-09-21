// Fill out your copyright notice in the Description page of Project Settings.

#include "FunCube.h"
#include "FPSCharacter.h"

#include "Kismet/GameplayStatics.h"

// Sets default values
AFunCube::AFunCube()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Head"));
	RootComponent = SceneComponent;

	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	StaticMesh->AttachTo(RootComponent);

	//create collider
	BoxCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxColider"));
	BoxCollider->bGenerateOverlapEvents = true;
	BoxCollider->SetWorldScale3D(FVector(1, 1, 1));
	//defining what method would be called when overlaping BoxColider
	BoxCollider->OnComponentBeginOverlap.AddDynamic(this, &AFunCube::OnOverlapBegin);
	BoxCollider->AttachTo(RootComponent);

	RotationRate = (FRotator(0, 180, 0));
	
}

// Called when the game starts or when spawned
void AFunCube::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFunCube::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	this->AddActorLocalRotation(RotationRate*DeltaTime*Speed);

}

void AFunCube::OnInteract()
{
	FString pickup = ("Picked up: "+ Name);
	GEngine->AddOnScreenDebugMessage(3, 5, FColor::Green, pickup);
	
	AFPSCharacter* player = static_cast<AFPSCharacter*>(UGameplayStatics::GetPlayerCharacter(this, 0));
	
	if (player)
	{
		player->AddToInventory(this);
	}
}

//overlap handler
void AFunCube::OnOverlapBegin(UPrimitiveComponent * OverlappedComp, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
	// Other Actor is the actor that triggered the event. Check that is not ourself.  
	if ((OtherActor != nullptr) && (OtherActor != this) && (OtherComp != nullptr))
	{
		OnInteract();
	}
}

