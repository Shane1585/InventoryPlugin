// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InventorySlot.h"
#include "Components/ActorComponent.h"
#include "InventorySlotUIWrapper.h"
#include "InventoryComponent.generated.h"


/**
 * This class is the inventory itself. Adding this component will add an inventory to the actor added to (e.g.
 * the player, a chest, etc.)
 *
 * This has a number of slots, to which items can be added, along with an optional weight limit.
 */
UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class INVENTORYSYSTEM_API UInventoryComponent : public UActorComponent

{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UInventoryComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;


	/**
	 * List of slots containing items and other slot data (such as amount of an item) in this inventory.
	 */
	UPROPERTY(BlueprintType, EditAnywhere, Category="Inventory")
	TArray<FInventorySlot> Slots;

	
	/**
	 * Amount of weight that can be carried in the inventory.
	 *
	 * Can trigger encumbrance if inventory is overweight when a new item is picked up.
	 *
	 * Carry weight is disabled with a value of 0 or less in this variable.
	 */
	UPROPERTY(BlueprintType, EditAnywhere, BlueprintReadWrite, Category="Item Detail")
	float CarryWeightLimit = 0;

	/**
	 * Whether or not this inventory has an item with a matching name.
	 * 
	 * @param Name Name or the item to check in the array
	 * @return True if name of item is found
	 */
	UFUNCTION(BlueprintCallable, Category="Inventory")
	bool HasItem(FString Name);
	
	/**
	 * Increases the amount of the item in a slot if it already exists. Otherwise, adds the item to a new slot.
	 * 
	 * @param Item The item to add to this inventory
	 * @param Amount The amount of the item to add
	 * @return True if successfully added
	 */
	UFUNCTION(BlueprintCallable, Category="Inventory")
	bool AddItem(FItem Item, int Amount);
	
	/**
	 * Removes the amount of the item from a slot if it exists. If there are none left, it will destroy the slot.
	 * 
	 * @param Name The name of the item to remove
	 * @param Amount The amount of the item to remove
	 * @return True if it was successfully removed
	 */
	UFUNCTION(BlueprintCallable, Category="Inventory")
	bool RemoveItem(FString Name, int Amount);

	/**
	 * Drops the item, if found, to the ground. Cannot drop more than exist in the Inventory.
	 * If amount is more than exist in the inventory, then it will drop up to the number in the inventory, and return
	 * success.
	 * 
	 * @param Name Name of the item to drop
	 * @param Amount Amount of the item to drop
	 * @return True, if an item has been dropped
	 */
	UFUNCTION(BlueprintCallable, Category="Inventory")
	bool DropItem(FString Name, int Amount, FTransform DropLocation);

	/** 
	 * @return A list of slots within this inventory.
	 */
	UFUNCTION(BlueprintCallable, Category="Inventory")
	TArray<UInventorySlotUIWrapper*> GetInventorySlots(FString FieldName);

	/**
	 * @return true if weight limit is enabled.
	 */
	UFUNCTION(BlueprintCallable, Category="Inventory")
	bool HasAWeightLimit();
	
	/**
	 * @return How much weight can be carried before becoming encumbered. 0 if disabled, or negative.
	 */
	UFUNCTION(BlueprintCallable, Category="Inventory")
	float GetCarryWeightLimit();

	/**
	 * @return The amount of weight being carried in the inventory.
	 */
	UFUNCTION(BlueprintCallable, Category="Inventory")
	float GetCurrentWeight();

	/**
	 * @return the weight that is still available (can be negative). 0 if carry weight is disabled.
	 */
	UFUNCTION(BlueprintCallable, Category="Inventory")
	float GetRemainingWeight();

	/**
	 * This gets the inventory slots held in this inventory, and sorts them by the passed in FString
	 * weight - order by the weight (asc)
	 * name - order alphabetically by the name (acs)
	 * amount - order by the amount (acs)
	 *
	 * Add '-' to the start of the field name to reverse the ordering.
	 * 
	 * @param FieldName The field to order the returned array by.
	 * @return An ordered list of inventory slots
	 */
	TArray<FInventorySlot> GetOrderBy(FString FieldName);


};
