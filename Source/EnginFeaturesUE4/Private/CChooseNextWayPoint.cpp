// Fill out your copyright notice in the Description page of Project Settings.


#include "CChooseNextWayPoint.h"
#include "BehaviorTree/BlackboardComponent.h"

EBTNodeResult::Type UCChooseNextWayPoint::ExecuteTask(UBehaviorTreeComponent & OwnerComp, uint8 * NodeMemory)
{
	//UE_LOG(LogTemp, Warning, TEXT("AI in C++ - yay!"));

	UBlackboardComponent *BlackboardComp = OwnerComp.GetBlackboardComponent();
	int32 Index = BlackboardComp->GetValueAsInt(IndexKey.SelectedKeyName);
	UE_LOG(LogTemp, Warning, TEXT("Waypoint index: %i"), Index);

	return EBTNodeResult::Succeeded;
}
