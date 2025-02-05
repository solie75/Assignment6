// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PlatObject.h"
#include "Plat_MovingAlongLine.generated.h"

UCLASS()
class ASSIGNMENT6_API APlat_MovingAlongLine : public APlatObject
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APlat_MovingAlongLine();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Platform_Setting")
	float MaxRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Platform_Setting")
	float Speed;

	float CurMovedDist;

	bool FlagDirect;

	float StartLocationY;
};
