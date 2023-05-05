// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
#include "PCGSettings.h"
#include "Elements/PCGDataFromActor.h"
#include "Elements/PCGPointProcessingElementBase.h"
#include "PCG_DensityByFeature.generated.h"

/**
 * 
 */

UENUM()
enum class EPCGDensityFeatureType : uint8
{
	BySlope ,
	
	ByHeight,
	
	ByDirection,
	
};


UCLASS(BlueprintType, ClassGroup = (Procedural))
class PCG_TOOLS_API UPCG_DensityByFeatureSettings : public UPCGSettings
{
	GENERATED_BODY()

public:
	//~Begin UPCGSettings interface
	#if WITH_EDITOR
	virtual FName GetDefaultNodeName() const override { return FName(TEXT("Density By Feature")); }
	virtual EPCGSettingsType GetType() const override { return EPCGSettingsType::Spatial; }
#endif

protected:
	virtual TArray<FPCGPinProperties> InputPinProperties() const override { return Super::DefaultPointInputPinProperties(); }
	virtual TArray<FPCGPinProperties> OutputPinProperties() const override { return Super::DefaultPointOutputPinProperties(); }
	virtual FPCGElementPtr CreateElement() const override;

public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings)
	EPCGDensityFeatureType DensityFeatureType = EPCGDensityFeatureType::BySlope;

	UPROPERTY(BlueprintReadOnly, Category = Settings, meta = (PCG_Overridable))
	FVector InPointNormal = {0, 0.0, 1.0};

	//By Slope
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings, meta = (EditCondition = "DensityFeatureType == EPCGDensityFeatureType::BySlope",EditConditionHides))
	bool bRampBySlopeAngle;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings, meta = (EditCondition = "DensityFeatureType == EPCGDensityFeatureType::BySlope && bRampBySlopeAngle",EditConditionHides, ClampMin = "0", ClampMax = "90"))
	float MinSlopeAngle = 20;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings, meta = (EditCondition = "DensityFeatureType == EPCGDensityFeatureType::BySlope && bRampBySlopeAngle",EditConditionHides, ClampMin = "0", ClampMax = "90"))
	float MaxSlopeAngle = 70;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings, meta = (EditCondition = "DensityFeatureType == EPCGDensityFeatureType::BySlope && bRampBySlopeAngle",EditConditionHides))
	FRuntimeFloatCurve SlopeRampCurve;

	//By Height

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings, meta = (EditCondition = "DensityFeatureType == EPCGDensityFeatureType::ByHeight", EditConditionHides))
	float MinHeight = 0;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings, meta = (EditCondition = "DensityFeatureType == EPCGDensityFeatureType::ByHeight", EditConditionHides))
	float MaxHeight = 10;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings, meta = (EditCondition = "DensityFeatureType == EPCGDensityFeatureType::ByHeight", EditConditionHides))
	bool bRampByHeight;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings, meta = (EditCondition = "DensityFeatureType == EPCGDensityFeatureType::ByHeight && bRampByHeight", EditConditionHides))
	FRuntimeFloatCurve HeightRampCurve;

	//By Direction

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings, meta = (EditCondition = "DensityFeatureType == EPCGDensityFeatureType::ByDirection", EditConditionHides, ClampMin = "-180", ClampMax = "180"))
	float DirectionAngle = 0;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings, meta = (EditCondition = "DensityFeatureType == EPCGDensityFeatureType::ByDirection", EditConditionHides, ClampMin = "0", ClampMax = "180"))
	float AngleSpread = 30;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings, meta = (EditCondition = "DensityFeatureType == EPCGDensityFeatureType::ByDirection", EditConditionHides))
	bool bRampByDirection;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings, meta = (EditCondition = "DensityFeatureType == EPCGDensityFeatureType::ByDirection && bRampByDirection", EditConditionHides))
	FRuntimeFloatCurve DirectionRampCurve;

	
};



class FPCG_DensityByFeatureElement : public FPCGPointProcessingElementBase
{
protected:
	virtual bool ExecuteInternal(FPCGContext* Context) const override;

};