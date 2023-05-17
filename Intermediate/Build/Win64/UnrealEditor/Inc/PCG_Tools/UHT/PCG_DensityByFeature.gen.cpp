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
	PCG_TOOLS_API UScriptStruct* Z_Construct_UScriptStruct_FDirectionSettings();
	PCG_TOOLS_API UScriptStruct* Z_Construct_UScriptStruct_FHeightSettings();
	PCG_TOOLS_API UScriptStruct* Z_Construct_UScriptStruct_FSlopeSettings();
	UPackage* Z_Construct_UPackage__Script_PCG_Tools();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SlopeSettings;
class UScriptStruct* FSlopeSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SlopeSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SlopeSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSlopeSettings, (UObject*)Z_Construct_UPackage__Script_PCG_Tools(), TEXT("SlopeSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SlopeSettings.OuterSingleton;
}
template<> PCG_TOOLS_API UScriptStruct* StaticStruct<FSlopeSettings>()
{
	return FSlopeSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSlopeSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
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
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlopeSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "Public/PCG_DensityByFeature.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSlopeSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSlopeSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlopeSettings_Statics::NewProp_bRampBySlopeAngle_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/PCG_DensityByFeature.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSlopeSettings_Statics::NewProp_bRampBySlopeAngle_SetBit(void* Obj)
	{
		((FSlopeSettings*)Obj)->bRampBySlopeAngle = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSlopeSettings_Statics::NewProp_bRampBySlopeAngle = { "bRampBySlopeAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FSlopeSettings), &Z_Construct_UScriptStruct_FSlopeSettings_Statics::NewProp_bRampBySlopeAngle_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSlopeSettings_Statics::NewProp_bRampBySlopeAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlopeSettings_Statics::NewProp_bRampBySlopeAngle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlopeSettings_Statics::NewProp_MinSlopeAngle_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "90" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/PCG_DensityByFeature.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSlopeSettings_Statics::NewProp_MinSlopeAngle = { "MinSlopeAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSlopeSettings, MinSlopeAngle), METADATA_PARAMS(Z_Construct_UScriptStruct_FSlopeSettings_Statics::NewProp_MinSlopeAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlopeSettings_Statics::NewProp_MinSlopeAngle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlopeSettings_Statics::NewProp_MaxSlopeAngle_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "90" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/PCG_DensityByFeature.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSlopeSettings_Statics::NewProp_MaxSlopeAngle = { "MaxSlopeAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSlopeSettings, MaxSlopeAngle), METADATA_PARAMS(Z_Construct_UScriptStruct_FSlopeSettings_Statics::NewProp_MaxSlopeAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlopeSettings_Statics::NewProp_MaxSlopeAngle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlopeSettings_Statics::NewProp_SlopeRampCurve_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/PCG_DensityByFeature.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSlopeSettings_Statics::NewProp_SlopeRampCurve = { "SlopeRampCurve", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSlopeSettings, SlopeRampCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UScriptStruct_FSlopeSettings_Statics::NewProp_SlopeRampCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlopeSettings_Statics::NewProp_SlopeRampCurve_MetaData)) }; // 1477693291
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSlopeSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlopeSettings_Statics::NewProp_bRampBySlopeAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlopeSettings_Statics::NewProp_MinSlopeAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlopeSettings_Statics::NewProp_MaxSlopeAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlopeSettings_Statics::NewProp_SlopeRampCurve,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSlopeSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PCG_Tools,
		nullptr,
		&NewStructOps,
		"SlopeSettings",
		sizeof(FSlopeSettings),
		alignof(FSlopeSettings),
		Z_Construct_UScriptStruct_FSlopeSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlopeSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSlopeSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlopeSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSlopeSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_SlopeSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SlopeSettings.InnerSingleton, Z_Construct_UScriptStruct_FSlopeSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SlopeSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HeightSettings;
class UScriptStruct* FHeightSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HeightSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HeightSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHeightSettings, (UObject*)Z_Construct_UPackage__Script_PCG_Tools(), TEXT("HeightSettings"));
	}
	return Z_Registration_Info_UScriptStruct_HeightSettings.OuterSingleton;
}
template<> PCG_TOOLS_API UScriptStruct* StaticStruct<FHeightSettings>()
{
	return FHeightSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHeightSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
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
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHeightSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PCG_DensityByFeature.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHeightSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHeightSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHeightSettings_Statics::NewProp_MinHeight_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/PCG_DensityByFeature.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHeightSettings_Statics::NewProp_MinHeight = { "MinHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHeightSettings, MinHeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FHeightSettings_Statics::NewProp_MinHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHeightSettings_Statics::NewProp_MinHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHeightSettings_Statics::NewProp_MaxHeight_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/PCG_DensityByFeature.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHeightSettings_Statics::NewProp_MaxHeight = { "MaxHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHeightSettings, MaxHeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FHeightSettings_Statics::NewProp_MaxHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHeightSettings_Statics::NewProp_MaxHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHeightSettings_Statics::NewProp_bRampByHeight_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/PCG_DensityByFeature.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FHeightSettings_Statics::NewProp_bRampByHeight_SetBit(void* Obj)
	{
		((FHeightSettings*)Obj)->bRampByHeight = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHeightSettings_Statics::NewProp_bRampByHeight = { "bRampByHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FHeightSettings), &Z_Construct_UScriptStruct_FHeightSettings_Statics::NewProp_bRampByHeight_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHeightSettings_Statics::NewProp_bRampByHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHeightSettings_Statics::NewProp_bRampByHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHeightSettings_Statics::NewProp_HeightRampCurve_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/PCG_DensityByFeature.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHeightSettings_Statics::NewProp_HeightRampCurve = { "HeightRampCurve", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHeightSettings, HeightRampCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UScriptStruct_FHeightSettings_Statics::NewProp_HeightRampCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHeightSettings_Statics::NewProp_HeightRampCurve_MetaData)) }; // 1477693291
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHeightSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHeightSettings_Statics::NewProp_MinHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHeightSettings_Statics::NewProp_MaxHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHeightSettings_Statics::NewProp_bRampByHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHeightSettings_Statics::NewProp_HeightRampCurve,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHeightSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PCG_Tools,
		nullptr,
		&NewStructOps,
		"HeightSettings",
		sizeof(FHeightSettings),
		alignof(FHeightSettings),
		Z_Construct_UScriptStruct_FHeightSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHeightSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHeightSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHeightSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHeightSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_HeightSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HeightSettings.InnerSingleton, Z_Construct_UScriptStruct_FHeightSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HeightSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DirectionSettings;
class UScriptStruct* FDirectionSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DirectionSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DirectionSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDirectionSettings, (UObject*)Z_Construct_UPackage__Script_PCG_Tools(), TEXT("DirectionSettings"));
	}
	return Z_Registration_Info_UScriptStruct_DirectionSettings.OuterSingleton;
}
template<> PCG_TOOLS_API UScriptStruct* StaticStruct<FDirectionSettings>()
{
	return FDirectionSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDirectionSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
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
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDirectionSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PCG_DensityByFeature.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDirectionSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDirectionSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDirectionSettings_Statics::NewProp_DirectionAngle_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "180" },
		{ "ClampMin", "-180" },
		{ "ModuleRelativePath", "Public/PCG_DensityByFeature.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDirectionSettings_Statics::NewProp_DirectionAngle = { "DirectionAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDirectionSettings, DirectionAngle), METADATA_PARAMS(Z_Construct_UScriptStruct_FDirectionSettings_Statics::NewProp_DirectionAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDirectionSettings_Statics::NewProp_DirectionAngle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDirectionSettings_Statics::NewProp_AngleSpread_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "180" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/PCG_DensityByFeature.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDirectionSettings_Statics::NewProp_AngleSpread = { "AngleSpread", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDirectionSettings, AngleSpread), METADATA_PARAMS(Z_Construct_UScriptStruct_FDirectionSettings_Statics::NewProp_AngleSpread_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDirectionSettings_Statics::NewProp_AngleSpread_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDirectionSettings_Statics::NewProp_bRampByDirection_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/PCG_DensityByFeature.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDirectionSettings_Statics::NewProp_bRampByDirection_SetBit(void* Obj)
	{
		((FDirectionSettings*)Obj)->bRampByDirection = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDirectionSettings_Statics::NewProp_bRampByDirection = { "bRampByDirection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDirectionSettings), &Z_Construct_UScriptStruct_FDirectionSettings_Statics::NewProp_bRampByDirection_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDirectionSettings_Statics::NewProp_bRampByDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDirectionSettings_Statics::NewProp_bRampByDirection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDirectionSettings_Statics::NewProp_DirectionRampCurve_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/PCG_DensityByFeature.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDirectionSettings_Statics::NewProp_DirectionRampCurve = { "DirectionRampCurve", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDirectionSettings, DirectionRampCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UScriptStruct_FDirectionSettings_Statics::NewProp_DirectionRampCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDirectionSettings_Statics::NewProp_DirectionRampCurve_MetaData)) }; // 1477693291
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDirectionSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDirectionSettings_Statics::NewProp_DirectionAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDirectionSettings_Statics::NewProp_AngleSpread,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDirectionSettings_Statics::NewProp_bRampByDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDirectionSettings_Statics::NewProp_DirectionRampCurve,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDirectionSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PCG_Tools,
		nullptr,
		&NewStructOps,
		"DirectionSettings",
		sizeof(FDirectionSettings),
		alignof(FDirectionSettings),
		Z_Construct_UScriptStruct_FDirectionSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDirectionSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDirectionSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDirectionSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDirectionSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_DirectionSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DirectionSettings.InnerSingleton, Z_Construct_UScriptStruct_FDirectionSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DirectionSettings.InnerSingleton;
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpVector_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UpVector;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBySlope_MetaData[];
#endif
		static void NewProp_bBySlope_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBySlope;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlopeSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SlopeSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bByHeight_MetaData[];
#endif
		static void NewProp_bByHeight_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bByHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeightSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HeightSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bByDirection_MetaData[];
#endif
		static void NewProp_bByDirection_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bByDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DirectionSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DirectionSettings;
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCG_DensityByFeatureSettings_Statics::NewProp_UpVector_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/PCG_DensityByFeature.h" },
		{ "PCG_Overridable", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCG_DensityByFeatureSettings_Statics::NewProp_UpVector = { "UpVector", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCG_DensityByFeatureSettings, UpVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UPCG_DensityByFeatureSettings_Statics::NewProp_UpVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCG_DensityByFeatureSettings_Statics::NewProp_UpVector_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCG_DensityByFeatureSettings_Statics::NewProp_bBySlope_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "//By Slope\n" },
		{ "ModuleRelativePath", "Public/PCG_DensityByFeature.h" },
		{ "ToolTip", "By Slope" },
	};
#endif
	void Z_Construct_UClass_UPCG_DensityByFeatureSettings_Statics::NewProp_bBySlope_SetBit(void* Obj)
	{
		((UPCG_DensityByFeatureSettings*)Obj)->bBySlope = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCG_DensityByFeatureSettings_Statics::NewProp_bBySlope = { "bBySlope", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPCG_DensityByFeatureSettings), &Z_Construct_UClass_UPCG_DensityByFeatureSettings_Statics::NewProp_bBySlope_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPCG_DensityByFeatureSettings_Statics::NewProp_bBySlope_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCG_DensityByFeatureSettings_Statics::NewProp_bBySlope_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCG_DensityByFeatureSettings_Statics::NewProp_SlopeSettings_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "bBySlope" },
		{ "EditConditionHides", "" },
		{ "ExposeOnSpawn", "" },
		{ "ModuleRelativePath", "Public/PCG_DensityByFeature.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCG_DensityByFeatureSettings_Statics::NewProp_SlopeSettings = { "SlopeSettings", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCG_DensityByFeatureSettings, SlopeSettings), Z_Construct_UScriptStruct_FSlopeSettings, METADATA_PARAMS(Z_Construct_UClass_UPCG_DensityByFeatureSettings_Statics::NewProp_SlopeSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCG_DensityByFeatureSettings_Statics::NewProp_SlopeSettings_MetaData)) }; // 2193335095
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCG_DensityByFeatureSettings_Statics::NewProp_bByHeight_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "//By Height\n" },
		{ "ModuleRelativePath", "Public/PCG_DensityByFeature.h" },
		{ "ToolTip", "By Height" },
	};
#endif
	void Z_Construct_UClass_UPCG_DensityByFeatureSettings_Statics::NewProp_bByHeight_SetBit(void* Obj)
	{
		((UPCG_DensityByFeatureSettings*)Obj)->bByHeight = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCG_DensityByFeatureSettings_Statics::NewProp_bByHeight = { "bByHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPCG_DensityByFeatureSettings), &Z_Construct_UClass_UPCG_DensityByFeatureSettings_Statics::NewProp_bByHeight_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPCG_DensityByFeatureSettings_Statics::NewProp_bByHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCG_DensityByFeatureSettings_Statics::NewProp_bByHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCG_DensityByFeatureSettings_Statics::NewProp_HeightSettings_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "bByHeight" },
		{ "EditConditionHides", "" },
		{ "ExposeOnSpawn", "" },
		{ "ModuleRelativePath", "Public/PCG_DensityByFeature.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCG_DensityByFeatureSettings_Statics::NewProp_HeightSettings = { "HeightSettings", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCG_DensityByFeatureSettings, HeightSettings), Z_Construct_UScriptStruct_FHeightSettings, METADATA_PARAMS(Z_Construct_UClass_UPCG_DensityByFeatureSettings_Statics::NewProp_HeightSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCG_DensityByFeatureSettings_Statics::NewProp_HeightSettings_MetaData)) }; // 2004868017
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCG_DensityByFeatureSettings_Statics::NewProp_bByDirection_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "//By Direction\n" },
		{ "ModuleRelativePath", "Public/PCG_DensityByFeature.h" },
		{ "ToolTip", "By Direction" },
	};
#endif
	void Z_Construct_UClass_UPCG_DensityByFeatureSettings_Statics::NewProp_bByDirection_SetBit(void* Obj)
	{
		((UPCG_DensityByFeatureSettings*)Obj)->bByDirection = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCG_DensityByFeatureSettings_Statics::NewProp_bByDirection = { "bByDirection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPCG_DensityByFeatureSettings), &Z_Construct_UClass_UPCG_DensityByFeatureSettings_Statics::NewProp_bByDirection_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPCG_DensityByFeatureSettings_Statics::NewProp_bByDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCG_DensityByFeatureSettings_Statics::NewProp_bByDirection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCG_DensityByFeatureSettings_Statics::NewProp_DirectionSettings_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "bByDirection" },
		{ "EditConditionHides", "" },
		{ "ExposeOnSpawn", "" },
		{ "ModuleRelativePath", "Public/PCG_DensityByFeature.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCG_DensityByFeatureSettings_Statics::NewProp_DirectionSettings = { "DirectionSettings", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCG_DensityByFeatureSettings, DirectionSettings), Z_Construct_UScriptStruct_FDirectionSettings, METADATA_PARAMS(Z_Construct_UClass_UPCG_DensityByFeatureSettings_Statics::NewProp_DirectionSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCG_DensityByFeatureSettings_Statics::NewProp_DirectionSettings_MetaData)) }; // 2237685832
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCG_DensityByFeatureSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCG_DensityByFeatureSettings_Statics::NewProp_UpVector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCG_DensityByFeatureSettings_Statics::NewProp_bBySlope,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCG_DensityByFeatureSettings_Statics::NewProp_SlopeSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCG_DensityByFeatureSettings_Statics::NewProp_bByHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCG_DensityByFeatureSettings_Statics::NewProp_HeightSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCG_DensityByFeatureSettings_Statics::NewProp_bByDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCG_DensityByFeatureSettings_Statics::NewProp_DirectionSettings,
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
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCG_DensityByFeatureSettings);
	UPCG_DensityByFeatureSettings::~UPCG_DensityByFeatureSettings() {}
	struct Z_CompiledInDeferFile_FID_UE5_2Project_PCG5_2Test_Plugins_PCGTools_main_Source_PCG_Tools_Public_PCG_DensityByFeature_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_2Project_PCG5_2Test_Plugins_PCGTools_main_Source_PCG_Tools_Public_PCG_DensityByFeature_h_Statics::ScriptStructInfo[] = {
		{ FSlopeSettings::StaticStruct, Z_Construct_UScriptStruct_FSlopeSettings_Statics::NewStructOps, TEXT("SlopeSettings"), &Z_Registration_Info_UScriptStruct_SlopeSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSlopeSettings), 2193335095U) },
		{ FHeightSettings::StaticStruct, Z_Construct_UScriptStruct_FHeightSettings_Statics::NewStructOps, TEXT("HeightSettings"), &Z_Registration_Info_UScriptStruct_HeightSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHeightSettings), 2004868017U) },
		{ FDirectionSettings::StaticStruct, Z_Construct_UScriptStruct_FDirectionSettings_Statics::NewStructOps, TEXT("DirectionSettings"), &Z_Registration_Info_UScriptStruct_DirectionSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDirectionSettings), 2237685832U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_2Project_PCG5_2Test_Plugins_PCGTools_main_Source_PCG_Tools_Public_PCG_DensityByFeature_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCG_DensityByFeatureSettings, UPCG_DensityByFeatureSettings::StaticClass, TEXT("UPCG_DensityByFeatureSettings"), &Z_Registration_Info_UClass_UPCG_DensityByFeatureSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCG_DensityByFeatureSettings), 3810438276U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_2Project_PCG5_2Test_Plugins_PCGTools_main_Source_PCG_Tools_Public_PCG_DensityByFeature_h_1118729996(TEXT("/Script/PCG_Tools"),
		Z_CompiledInDeferFile_FID_UE5_2Project_PCG5_2Test_Plugins_PCGTools_main_Source_PCG_Tools_Public_PCG_DensityByFeature_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_2Project_PCG5_2Test_Plugins_PCGTools_main_Source_PCG_Tools_Public_PCG_DensityByFeature_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_UE5_2Project_PCG5_2Test_Plugins_PCGTools_main_Source_PCG_Tools_Public_PCG_DensityByFeature_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_2Project_PCG5_2Test_Plugins_PCGTools_main_Source_PCG_Tools_Public_PCG_DensityByFeature_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
