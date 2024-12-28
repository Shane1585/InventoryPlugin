#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Components/BoxComponent.h"
#include "InventoryInteractArea.generated.h"

/**
 * This is an area in which another inventory can be interacted with.
 *
 * This can be used for any actor that stores items (e.g. chests)
 */
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class INVENTORYSYSTEM_API UInventoryInteractArea : public UActorComponent
{
	GENERATED_BODY()

// default functions ---------------------------------------------------------------------------------------------------
public:	
	// Sets default values for this component's properties
	UInventoryInteractArea();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	
// variables -----------------------------------------------------------------------------------------------------------
private:
	/**
	 * The trigger box for interaction
	 *
	 * AllowPrivateAccess and other uproperty parts lets it be setup in the ue5 editor, and then getters and setters have
	 * to use used in blueprints after that.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Inventory", meta=(AllowPrivateAccess = "true"))
	UBoxComponent* InteractTriggerBox = CreateDefaultSubobject<UBoxComponent>(TEXT("InteractTriggerBox"));

	/**
	 * The size for the trigger box to use to enable interaction
	 *
	 * AllowPrivateAccess and other uproperty parts lets it be setup in the ue5 editor, and then getters and setters have
	 * to use used in blueprints after that.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Inventory", meta=(AllowPrivateAccess = "true"))
	FVector TriggerBoxScale = FVector(100, 100, 100);

	
// getters and setters -------------------------------------------------------------------------------------------------
public:
	/**
	 * This also attaches the new trigger box to the owner of this component, to make them move together.
	 * Sets up overlap events for new trigger box.
	 * Does NOT set up default collision behaviour (as you may want to change it)
	 * 
	 * @param NewInteractTriggerBox Set the trigger box for this interact area
	 */
	UFUNCTION(BlueprintCallable, Category="Inventory")
	void SetInteractTriggerBox(UBoxComponent* NewInteractTriggerBox);

	/**
	 * @returns get the interact trigger box for this interact area
	 */
	UFUNCTION(BlueprintCallable, Category="Inventory")
	UBoxComponent* GetInteractTriggerBox();
	
	/**
	 * @param NewTriggerBoxScale Sets the new size of the trigger box
	 */
	UFUNCTION(BlueprintCallable, Category="Inventory")
	void SetTriggerBoxScale(FVector NewTriggerBoxScale);

	/**
	 * @returns gets the size of the trigger box area
	 */
	UFUNCTION(BlueprintCallable, Category="Inventory")
	FVector GetTriggerBoxScale();

	
// other functions -----------------------------------------------------------------------------------------------------
public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	
	/**
	 * Sets up the trigger box to be in the world and interacted with.
	 *
	 * Runs automatically on start with scale given. If a new scale is given, this will need to be re-run.
	 */
	UFUNCTION(BlueprintCallable, Category = "Inventory")
	void InitialiseTriggerBox();

	/**
	 * Sets up player to have this inventory openable, if overlapping trigger box
	 */
	UFUNCTION(BlueprintCallable, Category = "Inventory")
	void OverlappingInventory(AActor* OverlappedActor, AActor* OtherActor);

	/**
	 * Sets up player to have this inventory not-openable, if no longer overlapping trigger box
	 */
	UFUNCTION(BlueprintCallable, Category = "Inventory")
	void StoppedOverlappingInventory(AActor* OverlappedActor, AActor* OtherActor);
};
