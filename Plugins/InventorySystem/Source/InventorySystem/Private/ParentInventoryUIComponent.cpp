#include "ParentInventoryUIComponent.h"

// default functions ---------------------------------------------------------------------------------------------------
// Sets default values for this component's properties
UParentInventoryUIComponent::UParentInventoryUIComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

}

// Called when the game starts
void UParentInventoryUIComponent::BeginPlay()
{
	Super::BeginPlay();
	
}


// getters and setters -------------------------------------------------------------------------------------------------
void UParentInventoryUIComponent::SetIsPlayerInventory(bool NewIsPlayerInventory)
{
	this->IsPlayerInventory = NewIsPlayerInventory;
}

bool UParentInventoryUIComponent::GetIsPlayerInventory()
{
	return IsPlayerInventory;
}


// other functions -----------------------------------------------------------------------------------------------------
// Called every frame
void UParentInventoryUIComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

