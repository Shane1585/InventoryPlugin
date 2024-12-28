#pragma once

#include "CoreMinimal.h"
#include "InventorySlot.h"
#include "Components/BoxComponent.h"
#include "Engine/StaticMeshActor.h"
#include "GameFramework/Actor.h"
#include "GroundItem.generated.h"

/**
 * An item to be placed in the world that can be picked up.
 */
UCLASS()
class INVENTORYSYSTEM_API AGroundItem : public AStaticMeshActor
{
	GENERATED_BODY()

	
// default functions ---------------------------------------------------------------------------------------------------
public:	
	// Sets default values for this actor's properties
	AGroundItem();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	
// variables -----------------------------------------------------------------------------------------------------------
private:
	/**
	 * The info of the item if picked up.
	 * (Inventory slot is just an items information + an amount, this could be expanded in the future and something
	 * new used here)
	 *
	 * AllowPrivateAccess and other uproperty parts lets it be setup in the ue5 editor, and then getters and setters have
	 * to use used in blueprints after that.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Inventory", meta=(AllowPrivateAccess = "true"))
	FInventorySlot InventoryDetails;

	/**
	 * The trigger box for interaction
	 *
	 * AllowPrivateAccess and other uproperty parts lets it be setup in the ue5 editor, and then getters and setters have
	 * to use used in blueprints after that.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Inventory", meta=(AllowPrivateAccess = "true"))
	UBoxComponent* InteractTriggerBox = CreateDefaultSubobject<UBoxComponent>(TEXT("InteractTriggerBox"));

	
// getters and setters -------------------------------------------------------------------------------------------------
	/**
	 * @param NewInventoryDetails Sets the details added to inventory when picked up
	 */
	UFUNCTION(BlueprintCallable, Category="Inventory")
	void SetInventoryDetails(FInventorySlot NewInventoryDetails);

	/**
	 * @returns gets the details added to the inventory when picked up
	 */
	UFUNCTION(BlueprintCallable, Category="Inventory")
	FInventorySlot GetInventoryDetails();

	/**
	 * This also attaches the new trigger box to the owner of this component, to make them move together.
	 * Sets up overlap events for new trigger box.
	 * Does NOT set up default collision behaviour (as you may want to change it)
	 * 
	 * @param NewInteractTriggerBox Set the trigger box for this interact area
	 * @param NewActorDetails The details used to set up scale, etc. of the trigger box
	 */
	UFUNCTION(BlueprintCallable, Category="Inventory")
	void SetInteractTriggerBox(UBoxComponent* NewInteractTriggerBox, FGroundItemDetail NewActorDetails);

	/**
	 * @returns get the interact trigger box for this interact area
	 */
	UFUNCTION(BlueprintCallable, Category="Inventory")
	UBoxComponent* GetInteractTriggerBox();

	
// other functions -----------------------------------------------------------------------------------------------------
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	/**
	 * Sets up the actor to be in the world and interacted with.
	 * This is not in the constructor due to UE5 limits. Construct the actor, then call this.
	 * 
	 * @param Transform Where to place the item
	 * @param NewActorDetails What item has been dropped (the look and size)
	 * @param NewInventoryDetails Item details when picked up (number, weight, name, etc.)
	 */
	UFUNCTION(BlueprintCallable, Category="Inventory")
	void InitialiseItem(FTransform Transform, FGroundItemDetail NewActorDetails, FInventorySlot NewInventoryDetails);

	/**
	 * Removes the item from the world, adds matching item information to the player or actor containing an Inventory.
	 * @param OverlappedActor The actor that is overlapped (this)
	 * @param OtherActor The actor overlapping this actor
	 */
	UFUNCTION(BlueprintCallable, Category="Inventory")
	void PickupItem(AActor* OverlappedActor, AActor* OtherActor);

};
