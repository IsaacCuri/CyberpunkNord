// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "BlueprintSubsystemInitializer.generated.h"

/**
 * 
 */
UCLASS(config = Game, DefaultConfig, meta = (DisplayName = "Blueprint Subsystems"))
class CYBERPUNK_API UBlueprintSubsystemInitializer : public UDeveloperSettings
{
	GENERATED_BODY()
public:
	UPROPERTY(Config, EditAnywhere, Meta = (BlueprintBaseOnly))
	TArray<TSubclassOf<UGameInstanceSubsystem>> GameInstanceSubsystems;

private:
	
};

UCLASS()

class CYBERPUNK_API UGameInstanceSubsystemIntializer : public UGameInstanceSubsystem
{
	GENERATED_BODY()

	virtual void Initialize(FSubsystemCollectionBase& Collection) override final;
};

