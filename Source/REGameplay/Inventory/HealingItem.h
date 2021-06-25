// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Inventory/Item.h"
#include "HealingItem.generated.h"

/**
 * 
 */
UCLASS()
class REGAMEPLAY_API UHealingItem : public UItem
{
	GENERATED_BODY()

public:
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category="Item", meta=(ClampMin = 0.f))
	float HealthToHeal;	
	
protected:
	virtual void Use(AREGameplayCharacter* Character) override;
	
};
