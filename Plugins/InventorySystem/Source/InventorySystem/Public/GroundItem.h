// Fill out your copyright notice in the Description page of Project Settings.

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
	
public:	
	// Sets default values for this actor's properties
	AGroundItem();

	
	/**
	 * The info of the item if picked up. 
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item details")
	FInventorySlot InventoryDetails;

	/**
	 * The trigger box for interaction
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item appearence")
	UBoxComponent* InteractTriggerBox = CreateDefaultSubobject<UBoxComponent>(TEXT("InteractTriggerBox"));

	// UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item appearence", meta=(RowType="GroundItemDetail"))
	// FDataTableRowHandle ActorDetails;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

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
	UFUNCTION(BlueprintCallable, Category = "Drop and pickup")
	void InitialiseItem(FTransform Transform, FGroundItemDetail NewActorDetails, FInventorySlot NewInventoryDetails);

	UFUNCTION(BlueprintCallable, Category = "Drop and pickup")
	void PickupItem(AActor* OverlappedActor, AActor* OtherActor);

};
