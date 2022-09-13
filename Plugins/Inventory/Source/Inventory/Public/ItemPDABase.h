// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ItemPDABase.generated.h"

/**
 * 
 */
UCLASS()
class INVENTORY_API UItemPDABase : public UPrimaryDataAsset{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category="Basic")
	FText Text;
	
};
