#pragma once

#include "CoreMinimal.h"
#include "InventoryComponent.h"
#include "Components/ActorComponent.h"
#include "ParentInventoryUIComponent.generated.h"

/**
 * This allows making a UI of an inventory.
 *
 * This is used along with the Blueprint class InventoryUIComponent as it's difficult to create a Blueprint class from
 * a c++ class (the inventory widget is a blueprint). This class does as much as it can in code, with the rest being
 * in the blueprint.
 */
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent), Blueprintable)
class INVENTORYSYSTEM_API UParentInventoryUIComponent : public UActorComponent
{
	GENERATED_BODY()

	
// default functions ---------------------------------------------------------------------------------------------------
public:	
	// Sets default values for this component's properties
	UParentInventoryUIComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	
// variables -----------------------------------------------------------------------------------------------------------
private:
	/**
	 * True, if the player inventory (False if a chest or other inventory). Used to decide which side to show the
	 * inventory on.
	 *
	 * AllowPrivateAccess and other uproperty parts lets it be setup in the ue5 editor, and then getters and setters have
	 * to use used in blueprints after that.
	 */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Inventory", meta=(AllowPrivateAccess = "true"))
	bool IsPlayerInventory = false;

	
// getters and setters -------------------------------------------------------------------------------------------------
public:
	/**
	 * @param NewIsPlayerInventory Set if this inventory is the player inventory or not
	 */
	UFUNCTION(BlueprintCallable, Category="Inventory")
	void SetIsPlayerInventory(bool NewIsPlayerInventory);

	/**
	 * @returns get if this inventory is the player inventory or not
	 */
	UFUNCTION(BlueprintCallable, Category="Inventory")
	bool GetIsPlayerInventory();

	
// other functions -----------------------------------------------------------------------------------------------------
public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	/**
	 * Allows the inventory to be shown (does not show it, opened by player interaction. This lets the player open it)
	 * @param InventoryRepresented The inventory that can be shown
	 */
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category="Inventory")
	void EnableInventoryUI(UInventoryComponent* InventoryRepresented);

	/**
	 * Disables the inventory from being shown.
	 *
	 * Does not close it, closed by player interaction. This prevents the player from opening it.
	 */
	UFUNCTION(BlueprintImplementableEvent,  BlueprintCallable, Category="Inventory")
	void DisableInventoryUI();

};
