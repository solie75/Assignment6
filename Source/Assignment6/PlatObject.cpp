// Fill out your copyright notice in the Description page of Project Settings.


#include "PlatObject.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
APlatObject::APlatObject()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	StaticMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	RootComponent = StaticMeshComp;
}

// Called when the game starts or when spawned
void APlatObject::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APlatObject::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

