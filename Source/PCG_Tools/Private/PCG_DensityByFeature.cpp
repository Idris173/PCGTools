// Fill out your copyright notice in the Description page of Project Settings.


#include "PCG_DensityByFeature.h"
#include "Helpers/PCGSettingsHelpers.h"
#include "Data/PCGPointData.h"
#include "Elements/PCGPointProcessingElementBase.h"
#include "Kismet/KismetMathLibrary.h"
#include "PCGContext.h"
#include "PCGPin.h"


FPCGElementPtr UPCG_DensityByFeatureSettings::CreateElement() const
{
	
	return MakeShared<FPCG_DensityByFeatureElement>();
	
}


bool FPCG_DensityByFeatureElement::ExecuteInternal(FPCGContext* Context) const
{
	TRACE_CPUPROFILER_EVENT_SCOPE(FPCG_DensityByFeatureElement::Execute);

	const UPCG_DensityByFeatureSettings * Settings = Context->GetInputSettings<UPCG_DensityByFeatureSettings>();

	check(Settings);
	
	const FVector Normal = Settings->InPointNormal.GetSafeNormal();

	

	TArray<FPCGTaggedData> Inputs = Context->InputData.GetInputsByPin(PCGPinConstants::DefaultInputLabel);
	
	TArray<FPCGTaggedData>& Outputs = Context->OutputData.TaggedData;

	const auto CalcValue = [Normal](const FPCGPoint& InPoint)
	{
		const FVector Up = InPoint.Transform.GetUnitAxis(EAxis::Z);

		return FMath::Clamp(Up.Dot(Normal),0.f,1.0f);
	};

	EPCGDensityFeatureType FitterType = Settings->DensityFeatureType;
	
	switch (FitterType)
	{
	case EPCGDensityFeatureType::BySlope:
		
		ProcessPoints(Context, Inputs, Outputs, [CalcValue](const FPCGPoint& InPoint, FPCGPoint& OutPoint)->bool
		{
			OutPoint = InPoint;

			float DegreesNdotZ = FMath::Acos(CalcValue(InPoint));

			float Slope = FMath::Sin(DegreesNdotZ);
			
			OutPoint.Density = Slope;
			return true;
		});
		
		break;
	case EPCGDensityFeatureType::ByHeight:
		ProcessPoints(Context, Inputs, Outputs, [CalcValue](const FPCGPoint& InPoint, FPCGPoint& OutPoint)->bool
		{
			OutPoint = InPoint;
			
			OutPoint.Density = 0;
			
			return true;
		});
		break;
	case EPCGDensityFeatureType::ByDirection:
		
		ProcessPoints(Context, Inputs, Outputs, [CalcValue](const FPCGPoint& InPoint, FPCGPoint& OutPoint)->bool
		{
			OutPoint = InPoint;
			
			OutPoint.Density = 1;
					
			return true;
		});
		break;
		
	default:
		break;
	}

	
	
	return true;
}
