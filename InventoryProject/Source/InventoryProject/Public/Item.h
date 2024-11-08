// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Item.generated.h"

/**
 * This class stores the name and other important details about a single item.
 */
USTRUCT(BlueprintType, Blueprintable)
struct INVENTORYPROJECT_API FItem
{
	GENERATED_BODY()
	
	/**
	 * Display name for item
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Item Detail")
	FString Name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Item Detail")
	float Weight;

	FItem()
	{
		Name = "";
		Weight = 0;
	}

	/**
	 * This decides what == does when comparing two FItems
	 * @param Other The other item to check
	 * @return True, if the two match.
	 */
	bool operator == (FItem Other);
	

};
