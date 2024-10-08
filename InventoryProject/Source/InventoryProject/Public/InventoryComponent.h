// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InventorySlot.h"
#include "Components/ActorComponent.h"
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
	TArray<FUInventorySlot> Slots;

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
	bool AddItem(FUItem Item, int Amount);

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
	TArray<FUInventorySlot> GetInventorySlots();
};
