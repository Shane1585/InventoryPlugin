// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
class INVENTORYPROJECT_API Item
{
public:
	Item();
	~Item();

	UPROPERTY(EditAnywhere, Category="Item Details")
	FString name;

	UFUNCTION(BlueprintCallable, Category="Item Details")
	FString GetName();

	UFUNCTION(BlueprintCallable, Category="Create Item Details")
	void SetName(FString newName);

};


