// Fill out your copyright notice in the Description page of Project Settings.


#include "Inventory/HealingItem.h"

void UHealingItem::Use(AREGameplayCharacter* Character)
{
	if (Character)
		Character->Health += HealthToHeal;	
}
