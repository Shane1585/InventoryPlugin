#pragma once

#include "CoreUObject.h" // required to package plugin
#include "Engine/DataTable.h"
#include "CoreMinimal.h"

#include "InventorySlot.generated.h"

/**
 * Stores information about a single slot in the inventory
 *
 * This is currently an item + an amount of an item.
 */
USTRUCT(BlueprintType, Blueprintable)
struct INVENTORYSYSTEM_API FInventorySlot
{

	GENERATED_BODY()

	/**
	 * Item held in this slot
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Inventory", meta=(RowType="FItem"))
	FDataTableRowHandle Item;

	/**
	 * The amount of the item held in this slot.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Inventory")
	int Amount;
	
	FInventorySlot()
	{
		// Set some sensible defaults in the constructor to prevent errors
		Amount = 1;

		// Initialises item to error item (if not set)
		static ConstructorHelpers::FObjectFinder<UDataTable> DataTableObj(TEXT("DataTable'/InventorySystem/DataTables/DT_ItemTable.DT_ItemTable'"));
		Item.DataTable = DataTableObj.Object;
		Item.RowName = FName(TEXT("ErrorItem"));
	}
};
