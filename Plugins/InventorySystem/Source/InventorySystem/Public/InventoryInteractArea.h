// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Components/BoxComponent.h"
#include "InventoryInteractArea.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class INVENTORYSYSTEM_API UInventoryInteractArea : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UInventoryInteractArea();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	/**
	 * The trigger box for interaction
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory interaction")
	UBoxComponent* InteractTriggerBox = CreateDefaultSubobject<UBoxComponent>(TEXT("InteractTriggerBox"));

	/**
	 * The size for the trigger box to use to enable interaction
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory interaction")
	FVector TriggerBoxScale = FVector(100, 100, 100);
	
	/**
	 * Sets up the trigger box to be in the world and interacted with.
	 *
	 * Runs automatically on start with scale given. If a new scale is given, this will need to be re-run.
	 */
	UFUNCTION(BlueprintCallable, Category = "Item interaction")
	void InitialiseTriggerBox();

	/**
	 * Sets up player to have this inventory openable, if overlapping trigger box
	 */
	UFUNCTION(BlueprintCallable, Category = "Item interaction")
	void OverlappingInventory(AActor* OverlappedActor, AActor* OtherActor);

	/**
	 * Sets up player to have this inventory not-openable, if no longer overlapping trigger box
	 */
	UFUNCTION(BlueprintCallable, Category = "Item interaction")
	void StoppedOverlappingInventory(AActor* OverlappedActor, AActor* OtherActor);
};
