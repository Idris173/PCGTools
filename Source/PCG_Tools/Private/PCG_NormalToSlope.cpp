// Fill out your copyright notice in the Description page of Project Settings.


#include "PCG_NormalToSlope.h"
#include "Helpers/PCGSettingsHelpers.h"
#include "Data/PCGPointData.h"
#include "Kismet/KismetMathLibrary.h"
#include "PCGContext.h"
#include "PCGPin.h"

FPCGElementPtr UPCG_NormalToSlope::CreateElement() const
{
	return MakeShared<FPCG_NormalToSlopeElement>();
}


bool FPCG_NormalToSlopeElement::ExecuteInternal(FPCGContext* Context) const
{
	TRACE_CPUPROFILER_EVENT_SCOPE(FPCGNormalToDensityElement::Execute);

	const UPCG_NormalToSlope* Settings = Context->GetInputSettings<UPCG_NormalToSlope>();
	check(Settings);

	const FVector Normal = Settings->InPointNormal.GetSafeNormal();

	
	//const FVector NormalZ = Settings->NormalZ;
	
	TArray<FPCGTaggedData> Inputs = Context->InputData.GetInputsByPin(PCGPinConstants::DefaultInputLabel);
	
	TArray<FPCGTaggedData>& Outputs = Context->OutputData.TaggedData;

	
	const auto CalcValue = [Normal](const FPCGPoint& InPoint)
	{
		const FVector Up = InPoint.Transform.GetUnitAxis(EAxis::Z);

		return FMath::Clamp(Up.Dot(Normal),0.f,1.0f);
	};

	ProcessPoints(Context, Inputs, Outputs, [CalcValue](const FPCGPoint& InPoint, FPCGPoint& OutPoint)->bool
	{
		OutPoint = InPoint;

		// float NdotZ = FMath::RadiansToDegrees(FMath::Acos(CalcValue(InPoint)));
		//
		// float NdotB = 90.f - NdotZ;
		//
		// float Slope = FMath::Cos(FMath::DegreesToRadians(NdotB));

		float DegreesNdotZ = FMath::Acos(CalcValue(InPoint));

		float Slope = FMath::Sin(DegreesNdotZ);
		
		OutPoint.Density = Slope;
		return true;
	});
	return true;
}