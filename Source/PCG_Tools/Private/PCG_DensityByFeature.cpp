// Fill out your copyright notice in the Description page of Project Settings.


#include "PCG_DensityByFeature.h"
#include "Helpers/PCGSettingsHelpers.h"
#include "Data/PCGPointData.h"
#include "Elements/PCGPointProcessingElementBase.h"
#include "Math/UnrealMathUtility.h"
#include "Curves/RichCurve.h"
#include "PCGContext.h"
#include "PCGPin.h"


FPCGElementPtr UPCG_DensityByFeatureSettings::CreateElement() const
{
	
	return MakeShared<FPCG_DensityByFeatureElement>();
	
}

UPCG_DensityByFeatureSettings::UPCG_DensityByFeatureSettings()
{
	//Init Default Curve
	
	FRuntimeFloatCurve DefaultCurve;
	
	DefaultCurve.GetRichCurve()->AddKey(0.0f, 0.0f);

	DefaultCurve.GetRichCurve()->AddKey(0.3f, 1.0f);

	DefaultCurve.GetRichCurve()->AddKey(0.7f, 1.0f);

	DefaultCurve.GetRichCurve()->AddKey(1.0f, 0.0f);

	SlopeSettings.SlopeRampCurve.GetRichCurve()->SetKeys(DefaultCurve.GetRichCurve()->GetCopyOfKeys());

	HeightSettings.HeightRampCurve.GetRichCurve()->SetKeys(DefaultCurve.GetRichCurve()->GetCopyOfKeys());

	DirectionSettings.DirectionRampCurve.GetRichCurve()->SetKeys(DefaultCurve.GetRichCurve()->GetCopyOfKeys());
	
}
bool FPCG_DensityByFeatureElement::ExecuteInternal(FPCGContext* Context) const
{
	TRACE_CPUPROFILER_EVENT_SCOPE(FPCG_DensityByFeatureElement::Execute);

	const UPCG_DensityByFeatureSettings * Settings = Context->GetInputSettings<UPCG_DensityByFeatureSettings>();

	check(Settings);
	
	const FVector UpVector = Settings->UpVector.GetSafeNormal();

	TArray<FPCGTaggedData> Inputs = Context->InputData.GetInputsByPin(PCGPinConstants::DefaultInputLabel);
	
	TArray<FPCGTaggedData>& Outputs = Context->OutputData.TaggedData;

	
	// Init Curve

	const FRichCurve* SlopeDensityCurve = Settings->SlopeSettings.SlopeRampCurve.GetRichCurveConst();

	const bool bGenerateSlopeMedialAxis = SlopeDensityCurve != nullptr && SlopeDensityCurve->GetNumKeys() > 0;

	const FRichCurve* HeightDensityCurve = Settings->HeightSettings.HeightRampCurve.GetRichCurveConst();

	const bool bGenerateHeightMedialAxis = HeightDensityCurve != nullptr && HeightDensityCurve->GetNumKeys() > 0;

	const FRichCurve* DirectionDensityCurve = Settings->DirectionSettings.DirectionRampCurve.GetRichCurveConst();
	
	const bool bGenerateDirectionMedialAxis = DirectionDensityCurve != nullptr && DirectionDensityCurve->GetNumKeys() > 0;
	

	
	//CalcValue UpVector Dot PointNormal

	const auto CalcValue = [UpVector](const FPCGPoint& InPoint)
	{
		const FVector PointUp = InPoint.Transform.GetUnitAxis(EAxis::Z);

		return FMath::Clamp(PointUp.Dot(UpVector),0.f,1.0f);
	};

	
	//ProcessPoints
		
	ProcessPoints(Context, Inputs, Outputs, [CalcValue,Settings, SlopeDensityCurve, bGenerateSlopeMedialAxis,HeightDensityCurve,bGenerateHeightMedialAxis,DirectionDensityCurve,bGenerateDirectionMedialAxis](const FPCGPoint& InPoint, FPCGPoint& OutPoint)->bool
	{
		OutPoint = InPoint;


		//------------------Calculate Slope--------------------//

		float DegreesNdotZ = FMath::Acos(CalcValue(InPoint));

		float Slope = FMath::Sin(DegreesNdotZ);

		const float MinBoundSlope = FMath::Min(Settings->SlopeSettings.MinSlopeAngle, Settings->SlopeSettings.MaxSlopeAngle);

		const float MaxBoundSlope = FMath::Max(Settings->SlopeSettings.MinSlopeAngle, Settings->SlopeSettings.MaxSlopeAngle);

		float MinSlope = FMath::DegreesToRadians(MinBoundSlope);

		float MaxSlope = FMath::DegreesToRadians(MaxBoundSlope);

		float SlopeDensityValue = 0;

		if(Slope >= MinSlope && Slope <= MaxSlope)
		{
			

			if(Settings->SlopeSettings.bRampBySlopeAngle && bGenerateSlopeMedialAxis)
			{				
				SlopeDensityValue = FMath::Clamp(SlopeDensityCurve->Eval(Slope), 0.f, 1.f);
				
			}
			else
			{
				SlopeDensityValue = 1;
			}
			
		}
		else
		{
			SlopeDensityValue = 0;

		}
		
		//------------------Calculate Height--------------------//
		
		const float MinBoundHeight = FMath::Min(Settings->HeightSettings.MinHeight, Settings->HeightSettings.MaxHeight);

		const float MaxBoundHeight = FMath::Max(Settings->HeightSettings.MinHeight, Settings->HeightSettings.MaxHeight);

		const float Height = InPoint.Transform.GetLocation().Z;

		float heightRemap = FMath::GetRangePct(MinBoundHeight, MaxBoundHeight, Height);

		float HeightDensityValue = 0;

		if (Height >= MinBoundHeight && Height <= MaxBoundHeight)
		{
			if (Settings->HeightSettings.bRampByHeight && bGenerateHeightMedialAxis)
			{
				HeightDensityValue = FMath::Clamp(HeightDensityCurve->Eval(heightRemap), 0.f, 1.f);

				
			}
			else
			{
				HeightDensityValue = 1;
			}
			
		}
		else
		{
			HeightDensityValue = 0;
		}

		//------------------Calculate Direction--------------------//

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

		float DirectionDensityValue = 0;
		
		if(IncludedAngle >= -Settings->DirectionSettings.AngleSpread/2 && IncludedAngle <= Settings->DirectionSettings.AngleSpread/2)
		{
			if(bGenerateDirectionMedialAxis && Settings->DirectionSettings.bRampByDirection)
			{
				float Direction = abs(FMath::Cos(IncludedAngle));

				DirectionDensityValue = FMath::Clamp(DirectionDensityCurve->Eval(Direction), 0.f, 1.f);
				
			}
			else
			{
				DirectionDensityValue = 1;
			}
			
		}
		else
		{
			DirectionDensityValue = 0;
		}

		//-----------------Blend Density-----------------//

		float OutputDensity = 1;

		if(!Settings->bBySlope && !Settings->bByHeight && !Settings->bByDirection)
		{
			OutputDensity = 0;
		}

		if(Settings->bBySlope)
		{
			OutputDensity *= SlopeDensityValue;
		}

		if(Settings->bByHeight)
		{
			OutputDensity *= HeightDensityValue;
		}

		if(Settings->bByDirection)
		{
			OutputDensity *= DirectionDensityValue;
		}

		if(Settings->bInvertDensity)
		{
			OutputDensity = 1 - OutputDensity;
		}
		
		OutPoint.Density = OutputDensity;
	
		return true;
		
	});
	
	return true;
}
