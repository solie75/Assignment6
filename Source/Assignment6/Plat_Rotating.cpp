// Fill out your copyright notice in the Description page of Project Settings.


#include "Plat_Rotating.h"

APlat_Rotating::APlat_Rotating()
{
	RotateSpeed = 300.0f;
}

void APlat_Rotating::BeginPlay()
{
	Super::BeginPlay();
}

void APlat_Rotating::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	AddActorLocalRotation(FRotator(RotateSpeed * DeltaTime, 0.0, 0.0));

	FTransform TF;
	TF.SetScale3D(FVector(0.5, 0.5, 0.5));
	AddActorLocalTransform(TF);
}


