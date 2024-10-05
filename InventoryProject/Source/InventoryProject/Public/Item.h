// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Item.generated.h"

/**
 * This class stores the name and other important details about a single item.
 */
UCLASS()
class INVENTORYPROJECT_API UItem : public UObject
{
	GENERATED_BODY()
	
public:
	/**
	 * Display name for item
	 */
	UPROPERTY(Blueprintable, EditAnywhere, Category="Item Detail")
	FString Name;

	/**
	 * @return Display name of the item
	 */
	UFUNCTION(BlueprintCallable, Category="Item Detail")
	FString GetName();

	/**
	 * @param NewName The name you want to set as the display name
	 */
	UFUNCTION(BlueprintCallable, Category="Item Detail")
	void SetName(FString NewName);

};
