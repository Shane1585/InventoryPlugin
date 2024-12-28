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

	
// variables -----------------------------------------------------------------------------------------------------------
private:
	/**
	 * Slots to show in the UI
	 */
	FInventorySlot Slot;

	/**
	 * The inventory that the slot exists in
	 */
	UInventoryComponent* RelatedInventory;

	
// getters and setters -------------------------------------------------------------------------------------------------
public:
	/**
	 * @return The slot being stored in this wrapper (use Init function for setter)
	 */
	UFUNCTION(BlueprintCallable, Category="Inventory")
	FInventorySlot GetSlot();
	
	/**
	 * @return The related inventory for this wrapper (use Init function for setter)
	 */
	UFUNCTION(BlueprintCallable, Category="Inventory")
	UInventoryComponent* GetRelatedInventory();

	/**
	 * Sets this up to have the inventory data to show
	 * 
	 * @param SlotData The slots to show in the UI
	 */
	UFUNCTION(BlueprintCallable, Category="Inventory")
	void Init(FInventorySlot SlotData, UInventoryComponent* InventoryComponent);

	
// other functions -----------------------------------------------------------------------------------------------------
public:
	/**
	 * @return The name of the row for the item in the table
	 */
	UFUNCTION(BlueprintCallable, Category="Inventory")
	FName GetRowName();
	
	/**
	 * @return The name of the item in this slot
	 */
	UFUNCTION(BlueprintCallable, Category="Inventory")
	FString GetName();

	/**
	 * @return The weight of one of the items in this slot
	 */
	UFUNCTION(BlueprintCallable, Category="Inventory")
	FString GetSingleItemWeight();

	/**
	 * @return The total weight of one of the items in this slot
	 */
	UFUNCTION(BlueprintCallable, Category="Inventory")
	FString GetTotalSlotWeight();

	/**
	 * @return The amount of the item in this slot
	 */
	UFUNCTION(BlueprintCallable, Category="Inventory")
	FString GetAmount();

	/**
	 * @return A slate brush containing an inventory icon texture
	 */
	UFUNCTION(BlueprintCallable, Category="Inventory")
	FSlateBrush GetInventoryIconBrush();

	/**
	 * @return True, if there is an icon to show in the slot
	 */
	UFUNCTION(BlueprintCallable, Category="Inventory")
	bool HasInventoryIcon();
};
