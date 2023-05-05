// Fill out your copyright notice in the Description page of Project Settings.


#include "PCG_DensityByFeature.h"
#include "Helpers/PCGSettingsHelpers.h"
#include "Data/PCGPointData.h"
#include "Elements/PCGPointProcessingElementBase.h"
#include "Kismet/KismetMathLibrary.h"
#include "Math/UnrealMathUtility.h"
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



	// Init Curve

	const FRichCurve* SlopeDensityCurve = Settings->SlopeRampCurve.GetRichCurveConst();

	const bool bGenerateSlopeMedialAxis = SlopeDensityCurve != nullptr && SlopeDensityCurve->GetNumKeys() > 0;

	const FRichCurve* HeightDensityCurve = Settings->HeightRampCurve.GetRichCurveConst();

	const bool bGenerateHeightMedialAxis = HeightDensityCurve != nullptr && HeightDensityCurve->GetNumKeys() > 0;

	const FRichCurve* DirectionDensityCurve = Settings->DirectionRampCurve.GetRichCurveConst();

	const bool bGenerateDirectionMedialAxis = DirectionDensityCurve != nullptr && DirectionDensityCurve->GetNumKeys() > 0;


	//

	const auto CalcValue = [Normal](const FPCGPoint& InPoint)
	{
		const FVector Up = InPoint.Transform.GetUnitAxis(EAxis::Z);

		return FMath::Clamp(Up.Dot(Normal),0.f,1.0f);
	};

	//
	
	switch (Settings->DensityFeatureType)
	{
	case EPCGDensityFeatureType::BySlope:
		
		ProcessPoints(Context, Inputs, Outputs, [CalcValue,Settings, SlopeDensityCurve, bGenerateSlopeMedialAxis](const FPCGPoint& InPoint, FPCGPoint& OutPoint)->bool
		{
			OutPoint = InPoint;

			float DegreesNdotZ = FMath::Acos(CalcValue(InPoint));

			float Slope = FMath::Sin(DegreesNdotZ);

			const float MinBound = FMath::Min(Settings->MinSlopeAngle, Settings->MaxSlopeAngle);

			const float MaxBound = FMath::Max(Settings->MinSlopeAngle, Settings->MaxSlopeAngle);

			if(Settings->bRampBySlopeAngle && bGenerateSlopeMedialAxis)
			{
				float MinSlope = FMath::DegreesToRadians(MinBound);

				float MaxSlope = FMath::DegreesToRadians(MaxBound);

				if(Slope >= MinSlope && Slope <= MaxSlope)
				{				
					float DensityValue = SlopeDensityCurve->Eval(Slope);

					OutPoint.Density = FMath::Clamp(DensityValue, 0.f, 1.f);
				}
				else
				{
					Slope = 0;

					OutPoint.Density = Slope;
				}

				return true;
				
			}
			else
			{
				OutPoint.Density = Slope;
				
				return true;
			}

			
		});
		
		break;

	case EPCGDensityFeatureType::ByHeight:

		ProcessPoints(Context, Inputs, Outputs, [Settings, HeightDensityCurve, bGenerateHeightMedialAxis](const FPCGPoint& InPoint, FPCGPoint& OutPoint)->bool
		{
			OutPoint = InPoint;

			const float MinBound = FMath::Min(Settings->MinHeight, Settings->MaxHeight);

			const float MaxBound = FMath::Max(Settings->MinHeight, Settings->MaxHeight);

			const float Height = InPoint.Transform.GetLocation().Z;

			float heightRemap = FMath::GetRangePct(MinBound, MaxBound, Height);

			if (Height >= MinBound && Height <= MaxBound)
			{
				if (Settings->bRampByHeight && bGenerateHeightMedialAxis)
				{
					float DensityValue = HeightDensityCurve->Eval(heightRemap);

					OutPoint.Density = FMath::Clamp(DensityValue, 0.f, 1.f);
				}
				else
				{
					OutPoint.Density = 1;
				}
				
			}
			else
			{
				OutPoint.Density = 0;
			}
			
			return true;
		});
		break;

	case EPCGDensityFeatureType::ByDirection:
			
		ProcessPoints(Context, Inputs, Outputs, [Settings, DirectionDensityCurve, bGenerateDirectionMedialAxis](const FPCGPoint& InPoint, FPCGPoint& OutPoint)->bool
		{
			OutPoint = InPoint;

			const FVector XAxis = { 1.f, 0.f, 0.f };

			FVector ForwardAxis = XAxis;

			float AngleInRadians = FMath::DegreesToRadians(Settings->DirectionAngle);

			FQuat Rotation = FQuat(FVector(0.f, 0.f, 1.f), AngleInRadians);

			ForwardAxis = Rotation.RotateVector(ForwardAxis);

			const FVector UpVector = InPoint.Transform.GetUnitAxis(EAxis::Z);

			FVector ProjectedNormal = FVector(UpVector.X, UpVector.Y, 0.f);
			
			FVector UnitProjectedNormal = ProjectedNormal.GetSafeNormal();

			float Density = FMath::Clamp(UnitProjectedNormal.Dot(ForwardAxis), 0.f, 1.0f);

			OutPoint.Density = Density;

			//TODO : Clamp and ramp density by AngleSpread.

			return true;
		
		});
		break;
		
	default:
		break;
	}

	
	
	return true;
}
