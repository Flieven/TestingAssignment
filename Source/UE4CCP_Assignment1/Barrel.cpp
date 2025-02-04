// Fill out your copyright notice in the Description page of Project Settings.

#include "Barrel.h"


// Sets default values for this component's properties
UBarrel::UBarrel()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	BarrelEmitter = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ParticleEmitter"));
	BarrelEmitter->AttachTo(this);
	BarrelEmitter->bAutoActivate = false;
	BarrelEmitter->bAllowRecycling = true;
	BarrelEmitter->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f)); 

	BarrelAudioEmitter = CreateDefaultSubobject<UAudioComponent>(TEXT("AudioEmitter"));
	BarrelAudioEmitter->bAutoActivate = false;
	BarrelAudioEmitter->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
	// ...
}


// Called when the game starts
void UBarrel::BeginPlay()
{
	Super::BeginPlay();
	BarrelEmitter->SetWorldLocation(GetComponentTransform().GetLocation());
	// ...
	
}


// Called every frame
void UBarrel::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

UBarrel* UBarrel::Fire(UPARAM(ref) AController* controller)
{
	return nullptr;
}


