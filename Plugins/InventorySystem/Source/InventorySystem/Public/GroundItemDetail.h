#pragma once

#include "Engine/DataTable.h"
#include "CoreMinimal.h"

#include "GroundItemDetail.generated.h"

/**
 * This class stores info about the item as it appears in the world.
 * E.G: the mesh it uses and how big it is.
 *
 * Without creating a row for this, the item will use a default mesh and scale.
 */
USTRUCT(BlueprintType, Blueprintable)
struct INVENTORYSYSTEM_API FGroundItemDetail: public FTableRowBase
{
	GENERATED_BODY()
	
	/**
	 * Name for the item
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Inventory")
	FString Name;

	/**
	 * Scale for item on the floor (mesh)
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Inventory")
	FVector ItemScale;

	/**
	 * The scale of the area in which you can pick up the item.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Inventory")
	FVector InteractAreaScale;

	/**
	 * The location of the static mesh within the files.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Inventory")
	FString StaticMeshPath;
	
	FGroundItemDetail()
	{
		// Set some sensible initial values in the constructor (shows an error item)
		Name = "";
		ItemScale = FVector(0.2, 0.2, 0.2);
		InteractAreaScale = FVector(200, 200, 200);
		StaticMeshPath = "/InventorySystem/DataTableExampleMeshes/SM_ErrorMesh";
	}
	

};
