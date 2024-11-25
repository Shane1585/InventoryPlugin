// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GroundItemDetail.generated.h"

/**
 * This class stores info about the item as it appears in the world.
 * E.G: the mesh it uses and how big it is.
 */
USTRUCT(BlueprintType, Blueprintable)
struct INVENTORYSYSTEM_API FGroundItemDetail: public FTableRowBase
{
	GENERATED_BODY()
	
	/**
	 * Name for the item
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Item Detail")
	FString Name;

	/**
	 * Scale for item on the floor (mesh)
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Item Detail")
	FVector ItemScale;

	/**
	 * The scale of the area in which you can pick up the item.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Item Detail")
	FVector InteractAreaScale;

	/**
	 * The location of the static mesh within the files.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Item Detail")
	FString StaticMeshPath;
	
	FGroundItemDetail()
	{
		// Set some sensible initial values in the constructor
		Name = "";
		ItemScale = FVector(1, 1, 1);
		InteractAreaScale = FVector(1, 1, 1);
		StaticMeshPath = "";
	}
	

};