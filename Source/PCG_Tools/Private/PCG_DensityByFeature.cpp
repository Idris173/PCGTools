// Fill out your copyright notice in the Description page of Project Settings.


#include "PCG_DensityByFeature.h"
#include "Helpers/PCGSettingsHelpers.h"
#include "Data/PCGPointData.h"
#include "Elements/PCGPointProcessingElementBase.h"
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

	const FRichCurve* SlopeDensityCurve = Settings->SlopeSettings.SlopeRampCurve.GetRichCurveConst();

	const bool bGenerateSlopeMedialAxis = SlopeDensityCurve != nullptr && SlopeDensityCurve->GetNumKeys() > 0;

	const FRichCurve* HeightDensityCurve = Settings->HeightSettings.HeightRampCurve.GetRichCurveConst();

	const bool bGenerateHeightMedialAxis = HeightDensityCurve != nullptr && HeightDensityCurve->GetNumKeys() > 0;

	const FRichCurve* DirectionDensityCurve = Settings->DirectionSettings.DirectionRampCurve.GetRichCurveConst();

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

			const float MinBound = FMath::Min(Settings->SlopeSettings.MinSlopeAngle, Settings->SlopeSettings.MaxSlopeAngle);

			const float MaxBound = FMath::Max(Settings->SlopeSettings.MinSlopeAngle, Settings->SlopeSettings.MaxSlopeAngle);

			float MinSlope = FMath::DegreesToRadians(MinBound);

			float MaxSlope = FMath::DegreesToRadians(MaxBound);

			if(Slope >= MinSlope && Slope <= MaxSlope)
			{ 
	
				if(Settings->SlopeSettings.bRampBySlopeAngle && bGenerateSlopeMedialAxis)
				{				
					float SlopeDensityValue = SlopeDensityCurve->Eval(Slope);

					OutPoint.Density = FMath::Clamp(SlopeDensityValue, 0.f, 1.f);
					
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

	case EPCGDensityFeatureType::ByHeight:

		ProcessPoints(Context, Inputs, Outputs, [Settings, HeightDensityCurve, bGenerateHeightMedialAxis](const FPCGPoint& InPoint, FPCGPoint& OutPoint)->bool
		{
			OutPoint = InPoint;

			const float MinBound = FMath::Min(Settings->HeightSettings.MinHeight, Settings->HeightSettings.MaxHeight);

			const float MaxBound = FMath::Max(Settings->HeightSettings.MinHeight, Settings->HeightSettings.MaxHeight);

			const float Height = InPoint.Transform.GetLocation().Z;

			float heightRemap = FMath::GetRangePct(MinBound, MaxBound, Height);

			if (Height >= MinBound && Height <= MaxBound)
			{
				if (Settings->HeightSettings.bRampByHeight && bGenerateHeightMedialAxis)
				{
					float HeightDensityValue = HeightDensityCurve->Eval(heightRemap);

					OutPoint.Density = FMath::Clamp(HeightDensityValue, 0.f, 1.f);
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

			const FVector MinusXAxis = { -1.f, 0.f, 0.f };

			FVector AgainstVector = MinusXAxis;

			float AngleInRadians = FMath::DegreesToRadians(Settings->DirectionSettings.DirectionAngle);

			FQuat Rotation = FQuat(FVector(0.f, 0.f, 1.f), AngleInRadians);

			AgainstVector = Rotation.RotateVector(AgainstVector);

			const FVector UpVector = InPoint.Transform.GetUnitAxis(EAxis::Z);

			FVector ProjectedNormal = FVector(UpVector.X, UpVector.Y, 0.f);
			
			FVector UnitProjectedNormal = ProjectedNormal.GetSafeNormal();
			
			float Dot = FVector::DotProduct(UnitProjectedNormal, AgainstVector);

			float IncludedAngle = FMath::RadiansToDegrees(FMath::Acos(Dot));
			
			if(IncludedAngle >= -Settings->DirectionSettings.AngleSpread/2 && IncludedAngle <= Settings->DirectionSettings.AngleSpread/2)
			{
				if(bGenerateDirectionMedialAxis && Settings->DirectionSettings.bRampByDirection)
				{
					float Direction = abs(FMath::Cos(IncludedAngle));

					float DirectionDensityValue = DirectionDensityCurve->Eval(Direction);

					OutPoint.Density = FMath::Clamp(DirectionDensityValue, 0.f, 1.f);
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

			//TODO: Blend multiple density
		
		});
		break;
		
	default:
		break;
	}

	
	
	return true;
}
