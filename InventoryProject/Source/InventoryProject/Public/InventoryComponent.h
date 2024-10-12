// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InventorySlot.h"
#include "Components/ActorComponent.h"
#include "InventorySlotUIWrapper.h"
#include "InventoryComponent.generated.h"


UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class INVENTORYPROJECT_API UInventoryComponent : public UActorComponent
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
	 * List of slots containing items and other slot data (such as amount of an item) in this inventory
	 */
	UPROPERTY(BlueprintType, EditAnywhere, Category="Inventory")
	TArray<FInventorySlot> Slots;

	/**
	 * Amount of weight that can be carried in the inventory
	 *
	 * Can trigger encumbrance if inventory is overweight when a new item is picked up
	 *
	 * Carry weight is disabled with a value of -1 in this variable.
	 */
	UPROPERTY(BlueprintType, EditAnywhere, BlueprintReadWrite, Category="Item Detail")
	float CarryWeight;

	/** 
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
	 * Removes the amount of the item from a slot if it exists. If there are none left, it will destroy the slot
	 * @param Name The name of the item to remove
	 * @param Amount The amount of the item to remove
	 * @return True if it was successfully removed
	 */
	UFUNCTION(BlueprintCallable, Category="Inventory")
	bool RemoveItem(FString Name, int Amount);

	/** 
	 * @return A list of slots within this inventory
	 */
	UFUNCTION(BlueprintCallable, Category="Inventory")
	TArray<UInventorySlotUIWrapper*> GetInventorySlots();

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
	
	
};
