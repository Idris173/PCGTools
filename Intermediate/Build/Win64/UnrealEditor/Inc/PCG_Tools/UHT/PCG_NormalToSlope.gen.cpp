// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCG_Tools/Public/PCG_NormalToSlope.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCG_NormalToSlope() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	PCG_API UClass* Z_Construct_UClass_UPCGSettings();
	PCG_TOOLS_API UClass* Z_Construct_UClass_UPCG_NormalToSlope();
	PCG_TOOLS_API UClass* Z_Construct_UClass_UPCG_NormalToSlope_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PCG_Tools();
// End Cross Module References
	void UPCG_NormalToSlope::StaticRegisterNativesUPCG_NormalToSlope()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCG_NormalToSlope);
	UClass* Z_Construct_UClass_UPCG_NormalToSlope_NoRegister()
	{
		return UPCG_NormalToSlope::StaticClass();
	}
	struct Z_Construct_UClass_UPCG_NormalToSlope_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NormalZ_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NormalZ;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPointNormal_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InPointNormal;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCG_NormalToSlope_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPCGSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG_Tools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCG_NormalToSlope_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "PCG_NormalToSlope.h" },
		{ "ModuleRelativePath", "Public/PCG_NormalToSlope.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCG_NormalToSlope_Statics::NewProp_NormalZ_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// The normal to compare against\n" },
		{ "ModuleRelativePath", "Public/PCG_NormalToSlope.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "The normal to compare against" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCG_NormalToSlope_Statics::NewProp_NormalZ = { "NormalZ", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCG_NormalToSlope, NormalZ), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UPCG_NormalToSlope_Statics::NewProp_NormalZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCG_NormalToSlope_Statics::NewProp_NormalZ_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCG_NormalToSlope_Statics::NewProp_InPointNormal_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/PCG_NormalToSlope.h" },
		{ "PCG_Overridable", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCG_NormalToSlope_Statics::NewProp_InPointNormal = { "InPointNormal", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCG_NormalToSlope, InPointNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UPCG_NormalToSlope_Statics::NewProp_InPointNormal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCG_NormalToSlope_Statics::NewProp_InPointNormal_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCG_NormalToSlope_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCG_NormalToSlope_Statics::NewProp_NormalZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCG_NormalToSlope_Statics::NewProp_InPointNormal,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCG_NormalToSlope_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCG_NormalToSlope>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCG_NormalToSlope_Statics::ClassParams = {
		&UPCG_NormalToSlope::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPCG_NormalToSlope_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPCG_NormalToSlope_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPCG_NormalToSlope_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPCG_NormalToSlope_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPCG_NormalToSlope()
	{
		if (!Z_Registration_Info_UClass_UPCG_NormalToSlope.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCG_NormalToSlope.OuterSingleton, Z_Construct_UClass_UPCG_NormalToSlope_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCG_NormalToSlope.OuterSingleton;
	}
	template<> PCG_TOOLS_API UClass* StaticClass<UPCG_NormalToSlope>()
	{
		return UPCG_NormalToSlope::StaticClass();
	}
	UPCG_NormalToSlope::UPCG_NormalToSlope(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCG_NormalToSlope);
	UPCG_NormalToSlope::~UPCG_NormalToSlope() {}
	struct Z_CompiledInDeferFile_FID_UE5_2Project_PCG5_2Test_Plugins_PCGTools_main_Source_PCG_Tools_Public_PCG_NormalToSlope_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_2Project_PCG5_2Test_Plugins_PCGTools_main_Source_PCG_Tools_Public_PCG_NormalToSlope_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCG_NormalToSlope, UPCG_NormalToSlope::StaticClass, TEXT("UPCG_NormalToSlope"), &Z_Registration_Info_UClass_UPCG_NormalToSlope, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCG_NormalToSlope), 2637068017U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_2Project_PCG5_2Test_Plugins_PCGTools_main_Source_PCG_Tools_Public_PCG_NormalToSlope_h_425978202(TEXT("/Script/PCG_Tools"),
		Z_CompiledInDeferFile_FID_UE5_2Project_PCG5_2Test_Plugins_PCGTools_main_Source_PCG_Tools_Public_PCG_NormalToSlope_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_2Project_PCG5_2Test_Plugins_PCGTools_main_Source_PCG_Tools_Public_PCG_NormalToSlope_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
