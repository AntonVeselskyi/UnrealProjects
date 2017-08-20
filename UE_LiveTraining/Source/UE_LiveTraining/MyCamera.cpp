// Fill out your copyright notice in the Description page of Project Settings.

#include "MyCamera.h"

// Sets default values
AMyCamera::AMyCamera()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	IdealOffset.Set(0.0f, .0f, 1500.0f);
}

// Called when the game starts or when spawned
void AMyCamera::BeginPlay()
{
	Super::BeginPlay();
	
	if (Instigator)
	{
		PrimaryActorTick.AddPrerequisite(Instigator, Instigator->PrimaryActorTick);

		SetActorLocation(Instigator->GetActorLocation() + IdealOffset);
		//set view (vzgl`ad) od camera to actor
		GetCameraComponent()->SetWorldRotation(UKismetMathLibrary::FindLookAtRotation(IdealOffset, FVector::ZeroVector).Quaternion());
	}
}

 //Called every frame
void AMyCamera::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (Instigator)
	{
        FVector IdealLocation = Instigator->GetActorLocation()+IdealOffset;
        FVector CurrentLocation = GetActorLocation();
        FVector DeltaLocation = IdealLocation - CurrentLocation; //how much we should go on
        FVector MaxMovementThisFrame_PerAxis = CameraSpeed_PerAxis * DeltaTime; 
        FVector DesiredMovementThisFrame; //movement that I want
        FVector MovementThisFrameDueToCap = FVector::ZeroVector;
        
       
		//make sure the camera doesn`t go away to far
		//clip (obrezat`) by radius
		{
			FVector Direction;
			float Length;
			DeltaLocation.ToDirectionAndLength(Direction, Length);
			if (Length > CameraDistanceLimiter)
			{
				FVector CapVector = (Length - CameraDistanceLimiter) * Directrion;
				MovementThisFrameDueToCap += CapVector;
				DeltaLocation -= CapVector;
			}
		}
		//clip axis
		{
            for (int32 i = 0; i < 3; ++i)
            {
                if (FMath::Abs(DeltaLocation.Component(i)) > CameraDistanceLimiter_PerAxis.Component(i))
                {
                    MovementThisFrameDueToCap.Component(i) = FMath::Sign(DeltaLocation.Component(i)) * (FMath::Abs(DeltaLocation.Component(i)) - CameraDistanceLimiter_PerAxis.Component(i));
                    DeltaLocation.Component(i) = FMath::Clamp(DeltaLocation.Component(i), -CameraDistanceLimiter_PerAxis.Component(i), CameraDistanceLimiter_PerAxis.Component(i));
                }
            }
        }

        //manage the offset (здвиг) between desired and current camera position
        {
            //Limit per-axis offset
            for (int32 i = 0; i < 3; ++i)
            {
                DesiredMovementThisFrame.Component(i) = FMath::Min(FMath::Abs(DeltaLocation.Component(i)), MaxMovementThisFrame_PerAxis.Component(i))
                    *FMath::Sign(DeltaLocation.Component(i)); //SIGN returns + or -
            }
            //limit overall magnitude
            DesiredMovementThisFrame = DesiredMovementThisFrame.GetClampedToMaxSize(CameraSpeedLimiter * DeltaTime); //clamp - yrezat`
        }

        //Apply all movment values
        SetActorLocation(CurrentLocation + DesiredMovementThisFrame + MovementThisFrameDueToCap);
        
#if !UE_BUILD_SHIPPING
        if (bShowDebugInfo)
        {
            if (!DesiredMovementThisFrame.IsNearlyZero() && UWorld* World = GetWorld())
            {
                FVector DebugLineOffset = FVector(0.0f, 0.0f, -IdealOffset.Z);
				FVector NewLocation = GetActorLocation();
				//camera path
                DrawDebugLine(World, CurrentLocation + DebugLineOffset, CurrentLocation + DesiredMovementThisFrame + DebugLineOffset, FColor(255, 0, 0), true, 10, 0, 10 );
				//box axis clip
				DrawDebugBox(World, NewLocation + DebugLineOffset, CameraDistanceLimiter_PerAxis, FColor::Green, false,-1,1,10);
				//radius clip
				FMatrix CircleMatrix = FMatrix(FVector::UpVector, Fvector::ForwardVector, FVector::RightVector, NewLocation + DebugLineOffset)
				DrawDebugCircle(World, CircleMatrix, CameraDistanseLimiter, 64, FColor::Green, false, -1,1,10)
            }
        }
#endif



        //code for seting our location static RIGHT ABOVE the pawn
		//FVector IdealLocation = Instigator->GetActorLocation();
		//IdealLocation.Z = GetActorLocation().Z;
		//SetActorLocation(IdealLocation);
	}
}

