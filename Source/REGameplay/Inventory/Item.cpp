// Fill out your copyright notice in the Description page of Project Settings.


#include "Inventory/Item.h"

UItem::UItem()
{
	ItemDescription = FText::FromString("Item");
	UseActionText = FText::FromString("Use");
}

void UItem::Use(class AREGameplayCharacter* Character) 
{

}
