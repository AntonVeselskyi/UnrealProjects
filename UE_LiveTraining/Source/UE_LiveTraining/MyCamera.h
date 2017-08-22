
#pragma once //the best :)
//material for this code was taken from this video
//https://www.youtube.com/watch?v=lL89frGkM4g

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Camera/CameraActor.h"
#include "Classes/Kismet/KismetMathLibrary.h"
#include "Kismet/KismetSystemLibrary.h"
#include "DrawDebugHelpers.h"
#include "Camera/CameraComponent.h"
#include "MyCamera.generated.h"

UENUM(Meta = (Bitflags))
enum class ECameraAxes
{
    ECCA_X UMETA(DisplayName = "X Axis"),
    ECCA_Y UMETA(DisplayName = "Y Axis"),
    ECCA_Z UMETA(DisplayName = "Z Axis"),

    ECCA_Radius UMETA(DisplayName = "Polar (radius)")
};

USTRUCT()
struct FCameraSpeedAdjustment //korektirovanie
{
    GENERATED_BODY()

        //this adjuster will work when (this.X < CameraDesiredDistance <this.Y)
        UPROPERTY(EditAnywhere) //we use 2d vector because it`s interval from a to b (30-50pxls) 
        FVector2D DistanceRange;

    //this multiplier will be used based om a direct maping to camera distance`s value
    UPROPERTY(EditAnywhere)
        FVector2D SpeedMultiplierRange;

    //if checked, this adjustment applies to the X axis
    UPROPERTY(EditAnywhere, Meta = (Bitmask, BitmaskEnum = "ECameraAxes"))
        int32 AxisFlags;

};

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
		FVector CameraSpeedLimiter_PerAxis;

	//max speed of camera korektirovanie, for all axis
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float CameraSpeedLimiter;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
        FVector CameraDistanceLimiter_PerAxis;


		//max distance between camera and pawn
		UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float 	CameraDistanceLimiter = MAX_FLT;

        //speed adjustment. When the camera is withis one of this ranges it will be used to scale chasecamera
        //the bigger the distance between camera and pawn, the slower camera goes away!
        UPROPERTY(EditAnywhere, BlueprintReadWrite)
        TArray<FCameraSpeedAdjustment> SpeedAdjusters;
};

