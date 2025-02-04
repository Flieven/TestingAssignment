// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Interinterface.h"
#include "InteractableBase.generated.h"

UCLASS()
class UE4CCP_ASSIGNMENT1_API AInteractableBase : public AActor, public IInterinterface
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AInteractableBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	FORCEINLINE UTexture2D* GetpickupTexture() { return AmmoTexture; }

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Interaction")
		void OnInteract(AActor* Caller);
	virtual void OnInteract_Implementation(AActor* Caller) override;

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Interaction")
		void StartFocus() ;
	virtual void StartFocus_Implementation();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Interaction")
		void EndFocus();
	virtual void  EndFocus_Implementation();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Interaction")
		void OnOverlap(AActor* Caller);
protected:
	UPROPERTY(EditAnywhere, Category = "Texture Properties")
		UTexture2D* AmmoTexture;
	UPROPERTY(EditAnywhere, Category = "Item Properties")
		FString AmmoName;
};
