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

USTRUCT(BlueprintType)
struct FSlopeSettings
{
	GENERATED_BODY()
		
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings)
	bool bRampBySlopeAngle;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings, meta = (ClampMin = "0", ClampMax = "90"))
	float MinSlopeAngle = 20;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings, meta = (ClampMin = "0", ClampMax = "90"))
	float MaxSlopeAngle = 70;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings)
	FRuntimeFloatCurve SlopeRampCurve;
};

USTRUCT(BlueprintType)
struct FHeightSettings
{
	GENERATED_BODY()
		
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings)
	float MinHeight = 0;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings)
	float MaxHeight = 10;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings)
	bool bRampByHeight;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings)
	FRuntimeFloatCurve HeightRampCurve;

};


USTRUCT(BlueprintType)
struct FDirectionSettings
{
	GENERATED_BODY()
		
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings, meta = (ClampMin = "-180", ClampMax = "180"))
	float DirectionAngle = 0;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings, meta = (ClampMin = "0", ClampMax = "180"))
	float AngleSpread = 30;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings)
	bool bRampByDirection;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings)
	FRuntimeFloatCurve DirectionRampCurve;


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

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings)
	bool bBySlope = true;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings,  meta = (EditCondition = "bBySlope",EditConditionHides,ExposeOnSpawn))
	FSlopeSettings SlopeSettings;

	//By Height

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings)
	bool bByHeight;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings,  meta = (EditCondition = "bByHeight",EditConditionHides,ExposeOnSpawn))
	FHeightSettings HeightSettings;

	
	//By Direction

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings)
	bool bByDirection;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings,  meta = (EditCondition = "bByDirection",EditConditionHides,ExposeOnSpawn))
	FDirectionSettings DirectionSettings;
	
	
	
};



class FPCG_DensityByFeatureElement : public FPCGPointProcessingElementBase
{
protected:
	virtual bool ExecuteInternal(FPCGContext* Context) const override;

};