// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SHealthComponent.generated.h"

UCLASS(ClassGroup = (COOP), meta = (BlueprintSpawnableComponent))
class UE4DEMO_API ASHealthComponent : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ASHealthComponent();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "HealthComponent")
	float Health;
};