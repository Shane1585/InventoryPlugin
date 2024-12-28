#pragma once

#include "CoreMinimal.h"
#include "InventorySlot.h"
#include "InventorySlotUIWrapper.generated.h"


/**
 * Wraps a single inventory slot. This lets it be used in the blueprint UI, as the UI list view needs a UObject
 * (and an inventory slot is a class that is not a UObject)
 *
 * Also has some functions useful for the UI only.
 */
UCLASS(BlueprintType, Blueprintable)
class INVENTORYSYSTEM_API UInventorySlotUIWrapper : public UObject
{
	GENERATED_BODY()

public:
	
	/**
	 * Slots to show in the UI
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory slot details")
	FInventorySlot Slot;

	/**
	 * The inventory that the slot exists in
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory slot details")
	UInventoryComponent* RelatedInventory;
	
	/**
	 * Sets this up to have the inventory data to show
	 * 
	 * @param SlotData The slots to show in the UI
	 */
	UFUNCTION(BlueprintCallable, Category = "Inventory slot details")
	void Init(FInventorySlot SlotData, UInventoryComponent* InventoryComponent);

	/**
	 * @return The name of the row for the item in the table
	 */
	UFUNCTION(BlueprintCallable, Category = "Inventory slot details")
	FName GetRowName();
	
	/**
	 * @return The name of the item in this slot
	 */
	UFUNCTION(BlueprintCallable, Category = "Inventory slot details")
	FString GetName();

	/**
	 * @return The weight of one of the items in this slot
	 */
	UFUNCTION(BlueprintCallable, Category = "Inventory slot details")
	FString GetSingleItemWeight();

	/**
	 * @return The total weight of one of the items in this slot
	 */
	UFUNCTION(BlueprintCallable, Category = "Inventory slot details")
	FString GetTotalSlotWeight();

	/**
	 * @return The amount of the item in this slot
	 */
	UFUNCTION(BlueprintCallable, Category = "Inventory slot details")
	FString GetAmount();

	/**
	 * @return A slate brush containing an inventory icon texture
	 */
	UFUNCTION(BlueprintCallable, Category = "Inventory slot details")
	FSlateBrush GetInventoryIconBrush();

	/**
	 * @return True, if there is an icon to show in the slot
	 */
	UFUNCTION(BlueprintCallable, Category = "Inventory slot details")
	bool HasInventoryIcon();
};
