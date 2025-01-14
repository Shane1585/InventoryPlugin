#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/World.h"
#include "Engine/Engine.h"

#include "InventorySlotUIWrapper.h"
#include "InventorySlot.h"
#include "InventoryComponent.generated.h"


/**
 * This class is the inventory itself. Adding this component will add an inventory to the actor added to (e.g.
 * the player, a chest, etc.)
 *
 * This has a number of slots, to which items can be added, along with an optional weight limit.
 * When the weight limit has been exceeded, it will add encumbrance to the owning Character (ignored if not a character)
 */
UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class INVENTORYSYSTEM_API UInventoryComponent : public UActorComponent

{
	GENERATED_BODY()

// default functions ---------------------------------------------------------------------------------------------------
public:	
	// Sets default values for this component's properties
	UInventoryComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;


// variables -----------------------------------------------------------------------------------------------------------
private:
	/**
	 * List of slots containing items and other slot data (such as amount of an item) in this inventory.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Inventory", meta=(AllowPrivateAccess = "true"))
	TArray<FInventorySlot> Slots;
	
	/**
	 * Amount of weight that can be carried in the inventory.
	 *
	 * Can trigger encumbrance if inventory is overweight when a new item is picked up.
	 *
	 * Carry weight is disabled with a value of 0 or less in this variable.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Inventory", meta=(AllowPrivateAccess = "true"))
	float CarryWeightLimit = 0;

	/**
	 * Whether or not this character is currently encumbered.
	 * Defaults to false, should always be false for non-characters, which do not have a move speed.
	 * Should always be false for characters with a weight limit 0 inventory.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Inventory", meta=(AllowPrivateAccess = "true"))
	bool IsEncumbered = false;

	/**
	 * How much slower to make the owning character when the inventory is over the weight limit
	 * (multiplier on base speed)
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Inventory", meta=(AllowPrivateAccess = "true"))
	float MoveSpeedMultiplierWhileEncumbered = 0.5;


// getters and setters -------------------------------------------------------------------------------------------------
public:
	/**
	 * @param NewSlots Sets the slots in the inventory
	 *
	 * Also recalculates encumberment
	 */
	UFUNCTION(BlueprintCallable, Category="Inventory")
	void SetSlots(TArray<FInventorySlot> NewSlots);

	/**
	 * @returns The slots contained in the inventory
	 */
	UFUNCTION(BlueprintCallable, Category="Inventory")
	TArray<FInventorySlot> GetSlots();

	/**
	 * @param NewCarryWeightLimit Sets the carry weight limit for the inventory
	 *
	 * Also recalculates encumberment
	 */
	UFUNCTION(BlueprintCallable, Category="Inventory")
	void SetCarryWeightLimit(float NewCarryWeightLimit);

	/**
	 * @returns The slots contained in the inventory
	 */
	UFUNCTION(BlueprintCallable, Category="Inventory")
	float GetCarryWeightLimit();

	/**
	 * This has no setter, because IsEncumbered is controlled by the RefreshEncumberment function, and other functions.
	 * It should not be set directy.
	 * 
	 * @returns If the owner of the inventory is encumbered
	 */
	UFUNCTION(BlueprintCallable, Category="Inventory")
	float GetIsEncumbered();

	/**
	 * @param NewMoveSpeedMultiplierWhileEncumbered The move speed modifier for the character when encumbered
	 *
	 * Also recalculates encumberment.
	 */
	UFUNCTION(BlueprintCallable, Category="Inventory")
	void SetMoveSpeedMultiplierWhileEncumbered(float NewMoveSpeedMultiplierWhileEncumbered);

	/**
	 * @returns The move speed modifier for the owning character when encumbered
	 */
	UFUNCTION(BlueprintCallable, Category="Inventory")
	float GetMoveSpeedMultiplierWhileEncumbered();
	
// other functions -----------------------------------------------------------------------------------------------------
public:
	/**
	 * Whether or not this inventory has an item with a matching name.
	 * 
	 * @param ItemRowName Name of the row in the item table
	 * @return True if name of item is found
	 */
	UFUNCTION(BlueprintCallable, Category="Inventory")
	bool HasItem(FName ItemRowName);

	/**
	 * Increases the amount of the item in a slot if it already exists. Otherwise, adds the item to a new slot.
	 * 
	 * @param ItemRowName Name of the row in the item table
	 * @param Amount The amount of the item to add
	 * @retthurn True if successfully added
	 */
	UFUNCTION(BlueprintCallable, Category="Inventory")
	bool AddItem(FName ItemRowName, int Amount);
	
	/**
	 * Removes the amount of the item from a slot if it exists. If there are none left, it will destroy the slot.
	 * 
	 * @param ItemRowName Name of the row in the item table
	 * @param Amount The amount of the item to remove
	 * @return True if it was successfully removed
	 */
	UFUNCTION(BlueprintCallable, Category="Inventory")
	bool RemoveItem(FName ItemRowName, int Amount);

	/**
	 * Drops the item, if found, to the ground. Cannot drop more than exist in the Inventory.
	 * If amount is more than exist in the inventory, then it will drop up to the number in the inventory, and return
	 * success.
	 * 
	 * @param ItemRowName Name of the row in the item table, to drop to the floor
	 * @param Amount Amount of the item to drop
	 * @return True, if an item has been dropped
	 */
	UFUNCTION(BlueprintCallable, Category="Inventory")
	bool DropItem(FName ItemRowName, int Amount, FTransform DropLocation);

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
	 * Add '-' to the start of the field name to reverse the ordering. E.g. '-weight' reverses the weight sorting
	 * 
	 * @param FieldName The field to order the returned array by.
	 * @return An ordered list of inventory slots
	 */
	UFUNCTION(BlueprintCallable, Category="Inventory")
	TArray<FInventorySlot> GetOrderBy(FString FieldName);

	/**
	 * Calculates if the character needs to be encumbered, and sets it if it does, and removes it if it doesn't.
	 * Only applies changes where the character encumberment needs to be changed.
	 */
	UFUNCTION(BlueprintCallable, Category="Inventory")
	void RecalculateEncumberment();

	/**
	 * @return Whether the character should be currently encumbered
	 */
	UFUNCTION(BlueprintCallable, Category="Inventory")
	bool NeedsEncumberment();

	/**
	 * Adds the effects of the encumberment to the character
	 */
	UFUNCTION(BlueprintCallable, Category="Inventory")
	void AddEncumberment();

	/**
	 * Removes the effects of the encumberment on the character.
	 */
	UFUNCTION(BlueprintCallable, Category="Inventory")
	void RemoveEncumberment();

};


