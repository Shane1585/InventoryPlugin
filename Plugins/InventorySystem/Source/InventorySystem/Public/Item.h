#pragma once

#include "CoreMinimal.h"
#include "Item.generated.h"

/**
 * This struct stores the name and other important details about a single item.
 */
USTRUCT(BlueprintType, Blueprintable)
struct INVENTORYSYSTEM_API FItem: public FTableRowBase
{
	GENERATED_BODY()
	
	/**
	 * Name for the item
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Inventory")
	FString Name;

	/**
	 * Weight for a single one of this item
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Inventory")
	float Weight;

	/**
	 * A 2D Texture used for the inventory icon. Defaults if not set to prevent crashes.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Inventory")
	UTexture2D* InventoryIcon = UTexture2D::CreateTransient(64,64);

	FItem()
	{
		// Set some sensible initial values in the constructor
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
