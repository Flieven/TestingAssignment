// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "AmmoBase.h"
#include "AmmoInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UAmmoInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class UE4CCP_ASSIGNMENT1_API IAmmoInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Ammo Data")
	int GetAmmoCapacity();
	int GetAmmoCapacity_Implementation() { return 0; };


	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Ammo Data")
	int GetCurrentAmmo();
	int GetCurrentAmmo_Implementation() { return 0; }

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Ammo Data")
	void SetCurrentAmmo(int Amount);
	virtual void SetCurrentAmmo_Implementation(int Amount) { }

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Ammo Data")
	UAmmoBase* GetAmmoType();
	UAmmoBase* GetAmmoType_Implementation() { return NULL; }
};
