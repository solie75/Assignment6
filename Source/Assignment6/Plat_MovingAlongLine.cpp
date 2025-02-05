// Fill out your copyright notice in the Description page of Project Settings.


#include "Plat_MovingAlongLine.h"

// Sets default values
APlat_MovingAlongLine::APlat_MovingAlongLine()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MaxRange = 800.0f;
	Speed = 400.0f;
	CurMovedDist = 0.0f;
	//StartLocationY = 0.0f;
	FlagDirect = true;
}

// Called when the game starts or when spawned
void APlat_MovingAlongLine::BeginPlay()
{
	Super::BeginPlay();
	
	//StartLocationY = GetActorLocation().Y;
}

// Called every frame
void APlat_MovingAlongLine::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	CurMovedDist += Speed * DeltaTime;
	
	if (CurMovedDist > MaxRange)
	{
		FlagDirect ^= true;
		CurMovedDist = 0;
	}


	FTransform TF;
	double Dest = TF.GetLocation().Y;
	if (FlagDirect)
	{
		Dest += Speed * DeltaTime;
	}
	else
	{
		Dest -= Speed * DeltaTime;
	}
	
	TF.SetLocation(FVector(0.0, Dest, 0.0));
	TF.SetScale3D(FVector(0.25, 0.25, 0.25));

	AddActorLocalTransform(TF);
}
