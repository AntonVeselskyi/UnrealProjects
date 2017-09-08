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
        //if we want to make 100% sure that actor(Instigator) moves first 
		//PrimaryActorTick.AddPrerequisite(Instigator, Instigator->PrimaryActorTick);

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
        FVector MaxMovementThisFrame_PerAxis = CameraSpeedLimiter_PerAxis * DeltaTime; 
        FVector DesiredMovementThisFrame; //movement that I want
        FVector MovementThisFrameDueToCap = FVector::ZeroVector;
        float CurrentCameraSpeedLimiter = CameraSpeedLimiter;
        
       
		//make sure the camera doesn`t go away to farther THAN LIMITERS
		//clip (obrezat`) by radius
		{
			FVector Direction;
			float Length;
			DeltaLocation.ToDirectionAndLength(Direction, Length);
			if (Length > CameraDistanceLimiter)
			{
				FVector CapVector = (Length - CameraDistanceLimiter) * Direction;
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

       // ADJUST CAMERA SPEED based on distance
        {
            float DeltaLocationSize = DeltaLocation.Size(); //how long is our camera movement

            //try a radius-based adjustment 
            for (int32 j = 0; j < SpeedAdjusters.Num(); ++j)
            {
                //use this adjuster only if there is radial flag and we`re within it`s distance
                if (   SpeedAdjusters[j].AxisFlags & (1<<int32(ECameraAxes::ECCA_Radius))
                     && (DeltaLocationSize == FMath::Clamp(DeltaLocationSize, SpeedAdjusters[j].DistanceRange.X, SpeedAdjusters[j].DistanceRange.Y))  )
                {
                    //store this value for the adjustment code, wich will run later in this function
                    //next func clamp num if it in the range
                    CurrentCameraSpeedLimiter *= FMath::GetMappedRangeValueUnclamped(SpeedAdjusters[j].DistanceRange, SpeedAdjusters[j].SpeedMultiplierRange, DeltaLocationSize);
                }
            }

            //look for axis-based adjustments
            for (int32 i = (int32)ECameraAxes::ECCA_X; i <= (int32)ECameraAxes::ECCA_Z; i++)
            {
                //check all adjusters
                for (int32 j = 0; j < SpeedAdjusters.Num(); j++)
                {
                    //use this adjuster only if it supports this axis and we`re within its distance range
                    if ((SpeedAdjusters[j].AxisFlags & (1 << i))
                        //for example 1 and 1  0001 & 0001 case i=0
                        //2 & 2 0010 & 0010 case 0001<<1(2nd itiration)
                        && (DeltaLocation.Component(i) == FMath::Clamp(DeltaLocation.Component(i), SpeedAdjusters[j].DistanceRange.X, SpeedAdjusters[j].DistanceRange.Y)))
                    {
                        //scale the max movement we`re allowed to make (during this frame, onthis axis)
                        MaxMovementThisFrame_PerAxis.Component(i) *= FMath::GetMappedRangeValueUnclamped(SpeedAdjusters[j].DistanceRange, SpeedAdjusters[j].SpeedMultiplierRange, DeltaLocationSize);

                        //Don`t look any further, we`ve already found an acceptable limiter
                                                                     break;
                    }
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
            DesiredMovementThisFrame = DesiredMovementThisFrame.GetClampedToMaxSize(CurrentCameraSpeedLimiter * DeltaTime); //clamp - yrezat`
        }

       



        //Apply all movment values
        SetActorLocation(CurrentLocation + DesiredMovementThisFrame + MovementThisFrameDueToCap);
        

#if !UE_BUILD_SHIPPING
        if (bShowDebugInfo)
        {
            if (UWorld* World = GetWorld())
            {
                FVector DebugLineOffset = FVector(0.0f, 0.0f, -IdealOffset.Z);
				FVector NewLocation = GetActorLocation();
				//camera path
                DrawDebugLine(World, CurrentLocation + DebugLineOffset, CurrentLocation + DesiredMovementThisFrame + DebugLineOffset, FColor(255, 0, 0), true, 10, 0, 10 );
				//box axis clip
				DrawDebugBox(World, NewLocation + DebugLineOffset, CameraDistanceLimiter_PerAxis, FColor::Green, false,-1,1,10);
				//radius clip
                FMatrix CircleMatrix = FMatrix(FVector::UpVector, FVector::ForwardVector, FVector::RightVector, NewLocation + DebugLineOffset);
                    DrawDebugCircle(World, CircleMatrix, CameraDistanceLimiter, 64, FColor::Green, false, -1, 1, 10);
            }
        }
#endif

        //code for seting our location static RIGHT ABOVE the pawn
		//FVector IdealLocation = Instigator->GetActorLocation();
		//IdealLocation.Z = GetActorLocation().Z;
		//SetActorLocation(IdealLocation);
	}
}

