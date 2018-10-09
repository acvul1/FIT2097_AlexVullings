// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "FreshFIT2097HUD.generated.h"

UCLASS()
class AFreshFIT2097HUD : public AHUD
{
	GENERATED_BODY()

public:
	AFreshFIT2097HUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

