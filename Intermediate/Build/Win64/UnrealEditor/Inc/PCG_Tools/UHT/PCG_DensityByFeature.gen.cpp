// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCG_Tools/Public/PCG_DensityByFeature.h"
#include "../../Source/Runtime/Engine/Classes/Curves/CurveFloat.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCG_DensityByFeature() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
	PCG_API UClass* Z_Construct_UClass_UPCGSettings();
	PCG_TOOLS_API UClass* Z_Construct_UClass_UPCG_DensityByFeatureSettings();
	PCG_TOOLS_API UClass* Z_Construct_UClass_UPCG_DensityByFeatureSettings_NoRegister();
	PCG_TOOLS_API UEnum* Z_Construct_UEnum_PCG_Tools_EPCGDensityFeatureType();
	UPackage* Z_Construct_UPackage__Script_PCG_Tools();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGDensityFeatureType;
	static UEnum* EPCGDensityFeatureType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPCGDensityFeatureType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPCGDensityFeatureType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCG_Tools_EPCGDensityFeatureType, (UObject*)Z_Construct_UPackage__Script_PCG_Tools(), TEXT("EPCGDensityFeatureType"));
		}
		return Z_Registration_Info_UEnum_EPCGDensityFeatureType.OuterSingleton;
	}
	template<> PCG_TOOLS_API UEnum* StaticEnum<EPCGDensityFeatureType>()
	{
		return EPCGDensityFeatureType_StaticEnum();
	}
	struct Z_Construct_UEnum_PCG_Tools_EPCGDensityFeatureType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PCG_Tools_EPCGDensityFeatureType_Statics::Enumerators[] = {
		{ "EPCGDensityFeatureType::BySlope", (int64)EPCGDensityFeatureType::BySlope },
		{ "EPCGDensityFeatureType::ByHeight", (int64)EPCGDensityFeatureType::ByHeight },
		{ "EPCGDensityFeatureType::ByDirection", (int64)EPCGDensityFeatureType::ByDirection },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PCG_Tools_EPCGDensityFeatureType_Statics::Enum_MetaDataParams[] = {
		{ "ByDirection.Comment", "/**\n * \n */" },
		{ "ByDirection.Name", "EPCGDensityFeatureType::ByDirection" },
		{ "ByHeight.Comment", "/**\n * \n */" },
		{ "ByHeight.Name", "EPCGDensityFeatureType::ByHeight" },
		{ "BySlope.Comment", "/**\n * \n */" },
		{ "BySlope.Name", "EPCGDensityFeatureType::BySlope" },
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "Public/PCG_DensityByFeature.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCG_Tools_EPCGDensityFeatureType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PCG_Tools,
		nullptr,
		"EPCGDensityFeatureType",
		"EPCGDensityFeatureType",
		Z_Construct_UEnum_PCG_Tools_EPCGDensityFeatureType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_Tools_EPCGDensityFeatureType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_PCG_Tools_EPCGDensityFeatureType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_Tools_EPCGDensityFeatureType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PCG_Tools_EPCGDensityFeatureType()
	{
		if (!Z_Registration_Info_UEnum_EPCGDensityFeatureType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGDensityFeatureType.InnerSingleton, Z_Construct_UEnum_PCG_Tools_EPCGDensityFeatureType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPCGDensityFeatureType.InnerSingleton;
	}
	void UPCG_DensityByFeatureSettings::StaticRegisterNativesUPCG_DensityByFeatureSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCG_DensityByFeatureSettings);
	UClass* Z_Construct_UClass_UPCG_DensityByFeatureSettings_NoRegister()
	{
		return UPCG_DensityByFeatureSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPCG_DensityByFeatureSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_DensityFeatureType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DensityFeatureType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DensityFeatureType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPointNormal_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InPointNormal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRampBySlopeAngle_MetaData[];
#endif
		static void NewProp_bRampBySlopeAngle_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRampBySlopeAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinSlopeAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinSlopeAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxSlopeAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSlopeAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlopeRampCurve_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SlopeRampCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRampByHeight_MetaData[];
#endif
		static void NewProp_bRampByHeight_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRampByHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeightRampCurve_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HeightRampCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DirectionAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DirectionAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AngleSpread_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AngleSpread;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRampByDirection_MetaData[];
#endif
		static void NewProp_bRampByDirection_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRampByDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DirectionRampCurve_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DirectionRampCurve;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCG_DensityByFeatureSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPCGSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG_Tools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCG_DensityByFeatureSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "IncludePath", "PCG_DensityByFeature.h" },
		{ "ModuleRelativePath", "Public/PCG_DensityByFeature.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCG_DensityByFeatureSettings_Statics::NewProp_DensityFeatureType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCG_DensityByFeatureSettings_Statics::NewProp_DensityFeatureType_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/PCG_DensityByFeature.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCG_DensityByFeatureSettings_Statics::NewProp_DensityFeatureType = { "DensityFeatureType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCG_DensityByFeatureSettings, DensityFeatureType), Z_Construct_UEnum_PCG_Tools_EPCGDensityFeatureType, METADATA_PARAMS(Z_Construct_UClass_UPCG_DensityByFeatureSettings_Statics::NewProp_DensityFeatureType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCG_DensityByFeatureSettings_Statics::NewProp_DensityFeatureType_MetaData)) }; // 404111994
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCG_DensityByFeatureSettings_Statics::NewProp_InPointNormal_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/PCG_DensityByFeature.h" },
		{ "PCG_Overridable", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCG_DensityByFeatureSettings_Statics::NewProp_InPointNormal = { "InPointNormal", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCG_DensityByFeatureSettings, InPointNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UPCG_DensityByFeatureSettings_Statics::NewProp_InPointNormal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCG_DensityByFeatureSettings_Statics::NewProp_InPointNormal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCG_DensityByFeatureSettings_Statics::NewProp_bRampBySlopeAngle_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "//By Slope\n" },
		{ "EditCondition", "DensityFeatureType == EPCGDensityFeatureType::BySlope" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/PCG_DensityByFeature.h" },
		{ "ToolTip", "By Slope" },
	};
#endif
	void Z_Construct_UClass_UPCG_DensityByFeatureSettings_Statics::NewProp_bRampBySlopeAngle_SetBit(void* Obj)
	{
		((UPCG_DensityByFeatureSettings*)Obj)->bRampBySlopeAngle = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCG_DensityByFeatureSettings_Statics::NewProp_bRampBySlopeAngle = { "bRampBySlopeAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPCG_DensityByFeatureSettings), &Z_Construct_UClass_UPCG_DensityByFeatureSettings_Statics::NewProp_bRampBySlopeAngle_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPCG_DensityByFeatureSettings_Statics::NewProp_bRampBySlopeAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCG_DensityByFeatureSettings_Statics::NewProp_bRampBySlopeAngle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCG_DensityByFeatureSettings_Statics::NewProp_MinSlopeAngle_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "90" },
		{ "ClampMin", "0" },
		{ "EditCondition", "DensityFeatureType == EPCGDensityFeatureType::BySlope && bRampBySlopeAngle" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/PCG_DensityByFeature.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPCG_DensityByFeatureSettings_Statics::NewProp_MinSlopeAngle = { "MinSlopeAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCG_DensityByFeatureSettings, MinSlopeAngle), METADATA_PARAMS(Z_Construct_UClass_UPCG_DensityByFeatureSettings_Statics::NewProp_MinSlopeAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCG_DensityByFeatureSettings_Statics::NewProp_MinSlopeAngle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCG_DensityByFeatureSettings_Statics::NewProp_MaxSlopeAngle_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "90" },
		{ "ClampMin", "0" },
		{ "EditCondition", "DensityFeatureType == EPCGDensityFeatureType::BySlope && bRampBySlopeAngle" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/PCG_DensityByFeature.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPCG_DensityByFeatureSettings_Statics::NewProp_MaxSlopeAngle = { "MaxSlopeAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCG_DensityByFeatureSettings, MaxSlopeAngle), METADATA_PARAMS(Z_Construct_UClass_UPCG_DensityByFeatureSettings_Statics::NewProp_MaxSlopeAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCG_DensityByFeatureSettings_Statics::NewProp_MaxSlopeAngle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCG_DensityByFeatureSettings_Statics::NewProp_SlopeRampCurve_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "DensityFeatureType == EPCGDensityFeatureType::BySlope && bRampBySlopeAngle" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/PCG_DensityByFeature.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCG_DensityByFeatureSettings_Statics::NewProp_SlopeRampCurve = { "SlopeRampCurve", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCG_DensityByFeatureSettings, SlopeRampCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UClass_UPCG_DensityByFeatureSettings_Statics::NewProp_SlopeRampCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCG_DensityByFeatureSettings_Statics::NewProp_SlopeRampCurve_MetaData)) }; // 1477693291
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCG_DensityByFeatureSettings_Statics::NewProp_MinHeight_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "//By Height\n" },
		{ "EditCondition", "DensityFeatureType == EPCGDensityFeatureType::ByHeight" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/PCG_DensityByFeature.h" },
		{ "ToolTip", "By Height" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPCG_DensityByFeatureSettings_Statics::NewProp_MinHeight = { "MinHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCG_DensityByFeatureSettings, MinHeight), METADATA_PARAMS(Z_Construct_UClass_UPCG_DensityByFeatureSettings_Statics::NewProp_MinHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCG_DensityByFeatureSettings_Statics::NewProp_MinHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCG_DensityByFeatureSettings_Statics::NewProp_MaxHeight_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "DensityFeatureType == EPCGDensityFeatureType::ByHeight" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/PCG_DensityByFeature.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPCG_DensityByFeatureSettings_Statics::NewProp_MaxHeight = { "MaxHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCG_DensityByFeatureSettings, MaxHeight), METADATA_PARAMS(Z_Construct_UClass_UPCG_DensityByFeatureSettings_Statics::NewProp_MaxHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCG_DensityByFeatureSettings_Statics::NewProp_MaxHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCG_DensityByFeatureSettings_Statics::NewProp_bRampByHeight_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "DensityFeatureType == EPCGDensityFeatureType::ByHeight" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/PCG_DensityByFeature.h" },
	};
#endif
	void Z_Construct_UClass_UPCG_DensityByFeatureSettings_Statics::NewProp_bRampByHeight_SetBit(void* Obj)
	{
		((UPCG_DensityByFeatureSettings*)Obj)->bRampByHeight = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCG_DensityByFeatureSettings_Statics::NewProp_bRampByHeight = { "bRampByHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPCG_DensityByFeatureSettings), &Z_Construct_UClass_UPCG_DensityByFeatureSettings_Statics::NewProp_bRampByHeight_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPCG_DensityByFeatureSettings_Statics::NewProp_bRampByHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCG_DensityByFeatureSettings_Statics::NewProp_bRampByHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCG_DensityByFeatureSettings_Statics::NewProp_HeightRampCurve_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "DensityFeatureType == EPCGDensityFeatureType::ByHeight && bRampByHeight" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/PCG_DensityByFeature.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCG_DensityByFeatureSettings_Statics::NewProp_HeightRampCurve = { "HeightRampCurve", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCG_DensityByFeatureSettings, HeightRampCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UClass_UPCG_DensityByFeatureSettings_Statics::NewProp_HeightRampCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCG_DensityByFeatureSettings_Statics::NewProp_HeightRampCurve_MetaData)) }; // 1477693291
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCG_DensityByFeatureSettings_Statics::NewProp_DirectionAngle_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "180" },
		{ "ClampMin", "-180" },
		{ "Comment", "//By Direction\n" },
		{ "EditCondition", "DensityFeatureType == EPCGDensityFeatureType::ByDirection" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/PCG_DensityByFeature.h" },
		{ "ToolTip", "By Direction" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPCG_DensityByFeatureSettings_Statics::NewProp_DirectionAngle = { "DirectionAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCG_DensityByFeatureSettings, DirectionAngle), METADATA_PARAMS(Z_Construct_UClass_UPCG_DensityByFeatureSettings_Statics::NewProp_DirectionAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCG_DensityByFeatureSettings_Statics::NewProp_DirectionAngle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCG_DensityByFeatureSettings_Statics::NewProp_AngleSpread_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "180" },
		{ "ClampMin", "0" },
		{ "EditCondition", "DensityFeatureType == EPCGDensityFeatureType::ByDirection" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/PCG_DensityByFeature.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPCG_DensityByFeatureSettings_Statics::NewProp_AngleSpread = { "AngleSpread", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCG_DensityByFeatureSettings, AngleSpread), METADATA_PARAMS(Z_Construct_UClass_UPCG_DensityByFeatureSettings_Statics::NewProp_AngleSpread_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCG_DensityByFeatureSettings_Statics::NewProp_AngleSpread_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCG_DensityByFeatureSettings_Statics::NewProp_bRampByDirection_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "DensityFeatureType == EPCGDensityFeatureType::ByDirection" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/PCG_DensityByFeature.h" },
	};
#endif
	void Z_Construct_UClass_UPCG_DensityByFeatureSettings_Statics::NewProp_bRampByDirection_SetBit(void* Obj)
	{
		((UPCG_DensityByFeatureSettings*)Obj)->bRampByDirection = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCG_DensityByFeatureSettings_Statics::NewProp_bRampByDirection = { "bRampByDirection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPCG_DensityByFeatureSettings), &Z_Construct_UClass_UPCG_DensityByFeatureSettings_Statics::NewProp_bRampByDirection_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPCG_DensityByFeatureSettings_Statics::NewProp_bRampByDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCG_DensityByFeatureSettings_Statics::NewProp_bRampByDirection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCG_DensityByFeatureSettings_Statics::NewProp_DirectionRampCurve_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "DensityFeatureType == EPCGDensityFeatureType::ByDirection && bRampByDirection" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/PCG_DensityByFeature.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCG_DensityByFeatureSettings_Statics::NewProp_DirectionRampCurve = { "DirectionRampCurve", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCG_DensityByFeatureSettings, DirectionRampCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UClass_UPCG_DensityByFeatureSettings_Statics::NewProp_DirectionRampCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCG_DensityByFeatureSettings_Statics::NewProp_DirectionRampCurve_MetaData)) }; // 1477693291
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCG_DensityByFeatureSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCG_DensityByFeatureSettings_Statics::NewProp_DensityFeatureType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCG_DensityByFeatureSettings_Statics::NewProp_DensityFeatureType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCG_DensityByFeatureSettings_Statics::NewProp_InPointNormal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCG_DensityByFeatureSettings_Statics::NewProp_bRampBySlopeAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCG_DensityByFeatureSettings_Statics::NewProp_MinSlopeAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCG_DensityByFeatureSettings_Statics::NewProp_MaxSlopeAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCG_DensityByFeatureSettings_Statics::NewProp_SlopeRampCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCG_DensityByFeatureSettings_Statics::NewProp_MinHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCG_DensityByFeatureSettings_Statics::NewProp_MaxHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCG_DensityByFeatureSettings_Statics::NewProp_bRampByHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCG_DensityByFeatureSettings_Statics::NewProp_HeightRampCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCG_DensityByFeatureSettings_Statics::NewProp_DirectionAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCG_DensityByFeatureSettings_Statics::NewProp_AngleSpread,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCG_DensityByFeatureSettings_Statics::NewProp_bRampByDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCG_DensityByFeatureSettings_Statics::NewProp_DirectionRampCurve,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCG_DensityByFeatureSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCG_DensityByFeatureSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCG_DensityByFeatureSettings_Statics::ClassParams = {
		&UPCG_DensityByFeatureSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPCG_DensityByFeatureSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPCG_DensityByFeatureSettings_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPCG_DensityByFeatureSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPCG_DensityByFeatureSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPCG_DensityByFeatureSettings()
	{
		if (!Z_Registration_Info_UClass_UPCG_DensityByFeatureSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCG_DensityByFeatureSettings.OuterSingleton, Z_Construct_UClass_UPCG_DensityByFeatureSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCG_DensityByFeatureSettings.OuterSingleton;
	}
	template<> PCG_TOOLS_API UClass* StaticClass<UPCG_DensityByFeatureSettings>()
	{
		return UPCG_DensityByFeatureSettings::StaticClass();
	}
	UPCG_DensityByFeatureSettings::UPCG_DensityByFeatureSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCG_DensityByFeatureSettings);
	UPCG_DensityByFeatureSettings::~UPCG_DensityByFeatureSettings() {}
	struct Z_CompiledInDeferFile_FID_UE5_2Project_PCG5_2Test_Plugins_PCGTools_Source_PCG_Tools_Public_PCG_DensityByFeature_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_2Project_PCG5_2Test_Plugins_PCGTools_Source_PCG_Tools_Public_PCG_DensityByFeature_h_Statics::EnumInfo[] = {
		{ EPCGDensityFeatureType_StaticEnum, TEXT("EPCGDensityFeatureType"), &Z_Registration_Info_UEnum_EPCGDensityFeatureType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 404111994U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_2Project_PCG5_2Test_Plugins_PCGTools_Source_PCG_Tools_Public_PCG_DensityByFeature_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCG_DensityByFeatureSettings, UPCG_DensityByFeatureSettings::StaticClass, TEXT("UPCG_DensityByFeatureSettings"), &Z_Registration_Info_UClass_UPCG_DensityByFeatureSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCG_DensityByFeatureSettings), 3356845909U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_2Project_PCG5_2Test_Plugins_PCGTools_Source_PCG_Tools_Public_PCG_DensityByFeature_h_3955391047(TEXT("/Script/PCG_Tools"),
		Z_CompiledInDeferFile_FID_UE5_2Project_PCG5_2Test_Plugins_PCGTools_Source_PCG_Tools_Public_PCG_DensityByFeature_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_2Project_PCG5_2Test_Plugins_PCGTools_Source_PCG_Tools_Public_PCG_DensityByFeature_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UE5_2Project_PCG5_2Test_Plugins_PCGTools_Source_PCG_Tools_Public_PCG_DensityByFeature_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_2Project_PCG5_2Test_Plugins_PCGTools_Source_PCG_Tools_Public_PCG_DensityByFeature_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
