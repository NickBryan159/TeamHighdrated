// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "H2GOGameMode.generated.h"

/**
 *  Simple GameMode for a third person game
 */
UCLASS(abstract)
class AH2GOGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	
	/** Constructor */
	AH2GOGameMode();
};



