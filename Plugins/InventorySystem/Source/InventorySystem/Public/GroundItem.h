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
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item appearence")
	UBoxComponent* InteractTriggerBox = CreateDefaultSubobject<UBoxComponent>(TEXT("InteractTriggerBox"));
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, Category = "Drop and pickup")
	void InitialiseItem(FTransform Transform, FGroundItemDetail NewActorDetails, FInventorySlot NewInventoryDetails);
	
	

};
