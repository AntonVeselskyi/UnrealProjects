// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "Engine/Texture2D.h"
#include "Engine/Canvas.h"
#include "Public/CanvasItem.h"
//#include "CanvasItem.h"
#include "FPSHUD.generated.h"

/**
 * 
 */
UCLASS()
class FPSPROJECT_API AFPSHUD : public AHUD
{
	GENERATED_BODY()
	
protected:
	//This will be drawn at the center of the screen
	UPROPERTY(EditDefaultsOnly)
		UTexture2D* CrosshairTexture;

public:
	//HUD draw call 
	virtual void DrawHUD() override;
	
};
