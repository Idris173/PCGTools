// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PCGSettings.h"
#include "PCGPin.h"
#include "Elements/PCGPointProcessingElementBase.h"
#include "PCG_NormalToSlope.generated.h"

/**
 * 
 */
UCLASS()
class PCG_TOOLS_API UPCG_NormalToSlope : public UPCGSettings
{
	GENERATED_BODY()
	
public:
	//~Begin UPCGSettings interface
	#if WITH_EDITOR
	virtual FName GetDefaultNodeName() const override { return FName(TEXT("Normal To Slope")); }
	virtual EPCGSettingsType GetType() const override { return EPCGSettingsType::Spatial; }
#endif

protected:
	virtual TArray<FPCGPinProperties> InputPinProperties() const override { return Super::DefaultPointInputPinProperties(); }
	virtual TArray<FPCGPinProperties> OutputPinProperties() const override { return Super::DefaultPointOutputPinProperties(); }
	virtual FPCGElementPtr CreateElement() const override;
	//~End UPCGSettings interface

	public:
	
	// The normal to compare against
	UPROPERTY(BlueprintReadOnly, Category = Settings, meta = (PCG_Overridable))
	FVector NormalZ = {0, 0.0, 1.0};
	
	UPROPERTY(BlueprintReadOnly, Category = Settings, meta = (PCG_Overridable))
	FVector InPointNormal = {0, 0.0, 1.0};
	
};


class FPCG_NormalToSlopeElement : public FPCGPointProcessingElementBase
{
protected:
	virtual bool ExecuteInternal(FPCGContext* Context) const override;

};