// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PlatObject.h"
#include "Plat_Rotating.generated.h"

/**
 * 
 */
UCLASS()
class ASSIGNMENT6_API APlat_Rotating : public APlatObject
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	APlat_Rotating();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Plat_Setting")
	float RotateSpeed;
};
