#ifndef UE4SS_SDK_PCG_HPP
#define UE4SS_SDK_PCG_HPP

#include "PCG_enums.hpp"

struct FDeterminismTestResult
{
    FName TestResultTitle;                                                            // 0x0000 (size: 0x8)
    FString TestResultName;                                                           // 0x0008 (size: 0x10)
    int32 Seed;                                                                       // 0x0018 (size: 0x4)
    EPCGDataType DataTypesTested;                                                     // 0x001C (size: 0x4)
    TMap<class FName, class EDeterminismLevel> TestResults;                           // 0x0020 (size: 0x50)
    TArray<FString> AdditionalDetails;                                                // 0x0070 (size: 0x10)
    bool bFlagRaised;                                                                 // 0x0080 (size: 0x1)

}; // Size: 0x88

struct FEnumSelector
{
    class UEnum* Class;                                                               // 0x0000 (size: 0x8)
    int64 Value;                                                                      // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FPCGActorPropertyOverride
{
    FPCGAttributePropertyInputSelector InputSource;                                   // 0x0000 (size: 0x28)
    FString PropertyTarget;                                                           // 0x0028 (size: 0x10)

}; // Size: 0x38

struct FPCGActorSelectorSettings
{
    EPCGActorFilter ActorFilter;                                                      // 0x0000 (size: 0x1)
    bool bMustOverlapSelf;                                                            // 0x0001 (size: 0x1)
    bool bIncludeChildren;                                                            // 0x0002 (size: 0x1)
    bool bDisableFilter;                                                              // 0x0003 (size: 0x1)
    EPCGActorSelection ActorSelection;                                                // 0x0004 (size: 0x1)
    FName ActorSelectionTag;                                                          // 0x0008 (size: 0x8)
    TSubclassOf<class AActor> ActorSelectionClass;                                    // 0x0010 (size: 0x8)
    bool bSelectMultiple;                                                             // 0x0018 (size: 0x1)
    bool bIgnoreSelfAndChildren;                                                      // 0x0019 (size: 0x1)
    bool bShowActorFilter;                                                            // 0x001A (size: 0x1)
    bool bShowIncludeChildren;                                                        // 0x001B (size: 0x1)
    bool bShowActorSelection;                                                         // 0x001C (size: 0x1)
    bool bShowActorSelectionClass;                                                    // 0x001D (size: 0x1)
    bool bShowSelectMultiple;                                                         // 0x001E (size: 0x1)
    bool bShowIgnoreSelfAndChildren;                                                  // 0x001F (size: 0x1)

}; // Size: 0x20

struct FPCGAssetExporterParameters
{
    bool bOpenSaveDialog;                                                             // 0x0000 (size: 0x1)
    FString AssetName;                                                                // 0x0008 (size: 0x10)
    FString AssetPath;                                                                // 0x0018 (size: 0x10)

}; // Size: 0x30

struct FPCGAttributeExtractorTestStruct
{
    FPCGAttributeExtractorTestStructDepth1 DepthStruct;                               // 0x0000 (size: 0x8)
    class UPCGAttributeExtractorTestObject* Object;                                   // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FPCGAttributeExtractorTestStructDepth1
{
    FPCGAttributeExtractorTestStructDepth2 Depth2Struct;                              // 0x0000 (size: 0x4)
    float FloatValue;                                                                 // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FPCGAttributeExtractorTestStructDepth2
{
    int32 IntValue;                                                                   // 0x0000 (size: 0x4)

}; // Size: 0x4

struct FPCGAttributeFilterThresholdSettings
{
    bool bInclusive;                                                                  // 0x0000 (size: 0x1)
    bool bUseConstantThreshold;                                                       // 0x0001 (size: 0x1)
    FPCGAttributePropertyInputSelector ThresholdAttribute;                            // 0x0008 (size: 0x28)
    bool bUseSpatialQuery;                                                            // 0x0030 (size: 0x1)
    FPCGMetadataTypesConstantStruct AttributeTypes;                                   // 0x0040 (size: 0x170)

}; // Size: 0x1B0

struct FPCGAttributePropertyInputSelector : public FPCGAttributePropertySelector
{
}; // Size: 0x28

struct FPCGAttributePropertyOutputNoSourceSelector : public FPCGAttributePropertySelector
{
}; // Size: 0x28

struct FPCGAttributePropertyOutputSelector : public FPCGAttributePropertySelector
{
}; // Size: 0x28

struct FPCGAttributePropertySelector
{
    EPCGAttributePropertySelection Selection;                                         // 0x0008 (size: 0x4)
    FName AttributeName;                                                              // 0x000C (size: 0x8)
    EPCGPointProperties PointProperty;                                                // 0x0014 (size: 0x1)
    EPCGExtraProperties ExtraProperty;                                                // 0x0015 (size: 0x1)
    TArray<FString> ExtraNames;                                                       // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FPCGComponentInstanceData : public FActorComponentInstanceData
{
    class UPCGComponent* SourceComponent;                                             // 0x0068 (size: 0x8)

}; // Size: 0x70

struct FPCGContext
{
}; // Size: 0xD0

struct FPCGCrc
{
    uint32 Value;                                                                     // 0x0000 (size: 0x4)
    bool bValid;                                                                      // 0x0004 (size: 0x1)

}; // Size: 0x8

struct FPCGDataCollection
{
    TArray<FPCGTaggedData> TaggedData;                                                // 0x0000 (size: 0x10)
    bool bCancelExecutionOnEmpty;                                                     // 0x0010 (size: 0x1)

}; // Size: 0x30

struct FPCGDataTableRowToParamDataTestStruct
{
    FName Name;                                                                       // 0x0000 (size: 0x8)
    FString String;                                                                   // 0x0008 (size: 0x10)
    int32 I32;                                                                        // 0x0018 (size: 0x4)
    int64 I64;                                                                        // 0x0020 (size: 0x8)
    float F32;                                                                        // 0x0028 (size: 0x4)
    double F64;                                                                       // 0x0030 (size: 0x8)
    FVector2D v2;                                                                     // 0x0038 (size: 0x10)
    FVector V3;                                                                       // 0x0048 (size: 0x18)
    FVector4 V4;                                                                      // 0x0060 (size: 0x20)
    FSoftObjectPath SoftPath;                                                         // 0x0080 (size: 0x20)

}; // Size: 0xA0

struct FPCGDebugVisualizationSettings
{
    float PointScale;                                                                 // 0x0000 (size: 0x4)
    EPCGDebugVisScaleMethod ScaleMethod;                                              // 0x0004 (size: 0x1)
    TSoftObjectPtr<UStaticMesh> PointMesh;                                            // 0x0008 (size: 0x28)
    TSoftObjectPtr<UMaterialInterface> MaterialOverride;                              // 0x0030 (size: 0x28)

}; // Size: 0x58

struct FPCGDeterminismSettings
{
    bool bNativeTests;                                                                // 0x0000 (size: 0x1)
    bool bUseBlueprintDeterminismTest;                                                // 0x0001 (size: 0x1)
    TSubclassOf<class UPCGDeterminismTestBlueprintBase> DeterminismTestBlueprint;     // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FPCGDummyGetPropertyLevel2Struct
{
    TArray<double> DoubleArrayProperty;                                               // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FPCGDummyGetPropertyStruct
{
    TArray<int32> IntArrayProperty;                                                   // 0x0000 (size: 0x10)
    float FloatProperty;                                                              // 0x0010 (size: 0x4)
    FPCGDummyGetPropertyLevel2Struct Level2Struct;                                    // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FPCGLandscapeDataProps
{
    bool bGetHeightOnly;                                                              // 0x0000 (size: 0x1)
    bool bGetLayerWeights;                                                            // 0x0001 (size: 0x1)
    bool bGetActorReference;                                                          // 0x0002 (size: 0x1)
    bool bGetPhysicalMaterial;                                                        // 0x0003 (size: 0x1)
    bool bGetComponentCoordinates;                                                    // 0x0004 (size: 0x1)

}; // Size: 0x5

struct FPCGLandscapeLayerWeight
{
    FName Name;                                                                       // 0x0000 (size: 0x8)
    float Weight;                                                                     // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FPCGMatchAndSetByAttributeEntry
{
    FPCGMetadataTypesConstantStruct ValueToMatch;                                     // 0x0000 (size: 0x170)
    FPCGMetadataTypesConstantStruct Value;                                            // 0x0170 (size: 0x170)

}; // Size: 0x2E0

struct FPCGMatchAndSetWeightedByCategoryEntryList
{
    FPCGMetadataTypesConstantStruct CategoryValue;                                    // 0x0000 (size: 0x170)
    bool bIsDefault;                                                                  // 0x0170 (size: 0x1)
    TArray<FPCGMatchAndSetWeightedEntry> WeightedEntries;                             // 0x0178 (size: 0x10)

}; // Size: 0x190

struct FPCGMatchAndSetWeightedEntry
{
    FPCGMetadataTypesConstantStruct Value;                                            // 0x0000 (size: 0x170)
    int32 Weight;                                                                     // 0x0170 (size: 0x4)

}; // Size: 0x180

struct FPCGMeshInstanceList
{
    FSoftISMComponentDescriptor Descriptor;                                           // 0x0000 (size: 0x258)
    TArray<FTransform> Instances;                                                     // 0x0258 (size: 0x10)
    TArray<int64> InstancesMetadataEntry;                                             // 0x0268 (size: 0x10)

}; // Size: 0x280

struct FPCGMeshSelectorWeightedEntry
{
    FSoftISMComponentDescriptor Descriptor;                                           // 0x0000 (size: 0x258)
    int32 Weight;                                                                     // 0x0258 (size: 0x4)

}; // Size: 0x260

struct FPCGMetadataTypesConstantStruct
{
    EPCGMetadataTypes Type;                                                           // 0x0000 (size: 0x1)
    EPCGMetadataTypesConstantStructStringMode StringMode;                             // 0x0004 (size: 0x4)
    float FloatValue;                                                                 // 0x0008 (size: 0x4)
    int32 Int32Value;                                                                 // 0x000C (size: 0x4)
    double DoubleValue;                                                               // 0x0010 (size: 0x8)
    int64 IntValue;                                                                   // 0x0018 (size: 0x8)
    FVector2D Vector2Value;                                                           // 0x0020 (size: 0x10)
    FVector VectorValue;                                                              // 0x0030 (size: 0x18)
    FVector4 Vector4Value;                                                            // 0x0050 (size: 0x20)
    FQuat QuatValue;                                                                  // 0x0070 (size: 0x20)
    FTransform TransformValue;                                                        // 0x0090 (size: 0x60)
    FString StringValue;                                                              // 0x00F0 (size: 0x10)
    bool BoolValue;                                                                   // 0x0100 (size: 0x1)
    FRotator RotatorValue;                                                            // 0x0108 (size: 0x18)
    FName NameValue;                                                                  // 0x0120 (size: 0x8)
    FSoftClassPath SoftClassPathValue;                                                // 0x0128 (size: 0x20)
    FSoftObjectPath SoftObjectPathValue;                                              // 0x0148 (size: 0x20)
    bool bAllowsTypeChange;                                                           // 0x0168 (size: 0x1)

}; // Size: 0x170

struct FPCGObjectPropertyOverrideDescription
{
    FPCGAttributePropertyInputSelector InputSource;                                   // 0x0000 (size: 0x28)
    FString PropertyTarget;                                                           // 0x0028 (size: 0x10)

}; // Size: 0x38

struct FPCGOverrideInstancedPropertyBag
{
    FInstancedPropertyBag Parameters;                                                 // 0x0000 (size: 0x10)
    TSet<FGuid> PropertiesIDsOverridden;                                              // 0x0010 (size: 0x50)

}; // Size: 0x60

struct FPCGPackedCustomData
{
    int32 NumCustomDataFloats;                                                        // 0x0000 (size: 0x4)
    TArray<float> CustomData;                                                         // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FPCGPartitionActorRecord
{
    FGuid GridGuid;                                                                   // 0x0000 (size: 0x10)
    uint32 GridSize;                                                                  // 0x0010 (size: 0x4)
    FIntVector GridCoords;                                                            // 0x0014 (size: 0xC)

}; // Size: 0x20

struct FPCGPinProperties
{
    FName Label;                                                                      // 0x0000 (size: 0x8)
    EPCGPinUsage Usage;                                                               // 0x0008 (size: 0x1)
    EPCGDataType AllowedTypes;                                                        // 0x000C (size: 0x4)
    bool bAllowMultipleData;                                                          // 0x0010 (size: 0x1)
    EPCGPinStatus PinStatus;                                                          // 0x0011 (size: 0x1)
    bool bInvisiblePin;                                                               // 0x0012 (size: 0x1)
    bool bAllowMultipleConnections;                                                   // 0x0013 (size: 0x1)

}; // Size: 0x14

struct FPCGPoint
{
    FTransform Transform;                                                             // 0x0000 (size: 0x60)
    float Density;                                                                    // 0x0060 (size: 0x4)
    FVector BoundsMin;                                                                // 0x0068 (size: 0x18)
    FVector BoundsMax;                                                                // 0x0080 (size: 0x18)
    FVector4 Color;                                                                   // 0x00A0 (size: 0x20)
    float Steepness;                                                                  // 0x00C0 (size: 0x4)
    int32 Seed;                                                                       // 0x00C4 (size: 0x4)
    int64 MetadataEntry;                                                              // 0x00C8 (size: 0x8)

}; // Size: 0xD0

struct FPCGPreConfiguredSettingsInfo
{
    int32 PreconfiguredIndex;                                                         // 0x0000 (size: 0x4)
    FText Label;                                                                      // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FPCGProjectionParams
{
    bool bProjectPositions;                                                           // 0x0000 (size: 0x1)
    bool bProjectRotations;                                                           // 0x0001 (size: 0x1)
    bool bProjectScales;                                                              // 0x0002 (size: 0x1)
    EPCGProjectionColorBlendMode ColorBlendMode;                                      // 0x0003 (size: 0x1)
    FString AttributeList;                                                            // 0x0008 (size: 0x10)
    EPCGMetadataFilterMode AttributeMode;                                             // 0x0018 (size: 0x1)
    EPCGMetadataOp AttributeMergeOperation;                                           // 0x0019 (size: 0x1)
    EPCGProjectionTagMergeMode TagMergeOperation;                                     // 0x001A (size: 0x1)

}; // Size: 0x20

struct FPCGPropertyAliases
{
    TArray<FName> Aliases;                                                            // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FPCGRuntimeGenerationRadii
{
    double GenerationRadius;                                                          // 0x0000 (size: 0x8)
    double GenerationRadius400;                                                       // 0x0008 (size: 0x8)
    double GenerationRadius800;                                                       // 0x0010 (size: 0x8)
    double GenerationRadius1600;                                                      // 0x0018 (size: 0x8)
    double GenerationRadius3200;                                                      // 0x0020 (size: 0x8)
    double GenerationRadius6400;                                                      // 0x0028 (size: 0x8)
    double GenerationRadius12800;                                                     // 0x0030 (size: 0x8)
    double GenerationRadius25600;                                                     // 0x0038 (size: 0x8)
    double GenerationRadius51200;                                                     // 0x0040 (size: 0x8)
    double GenerationRadius102400;                                                    // 0x0048 (size: 0x8)
    double GenerationRadius204800;                                                    // 0x0050 (size: 0x8)
    double CleanupRadiusMultiplier;                                                   // 0x0058 (size: 0x8)

}; // Size: 0x60

struct FPCGSelectionKey
{
    EPCGActorFilter ActorFilter;                                                      // 0x0000 (size: 0x1)
    EPCGActorSelection Selection;                                                     // 0x0001 (size: 0x1)
    FName Tag;                                                                        // 0x0004 (size: 0x8)
    UClass* SelectionClass;                                                           // 0x0010 (size: 0x8)
    FSoftObjectPath ObjectPath;                                                       // 0x0018 (size: 0x20)
    UClass* OptionalExtraDependency;                                                  // 0x0038 (size: 0x8)

}; // Size: 0x40

struct FPCGSelfPruningParameters
{
    EPCGSelfPruningType PruningType;                                                  // 0x0000 (size: 0x1)
    FPCGAttributePropertyInputSelector ComparisonSource;                              // 0x0008 (size: 0x28)
    float RadiusSimilarityFactor;                                                     // 0x0030 (size: 0x4)
    bool bRandomizedPruning;                                                          // 0x0034 (size: 0x1)

}; // Size: 0x38

struct FPCGSettingsOverridableParam
{
    FName Label;                                                                      // 0x0000 (size: 0x8)
    TArray<FName> PropertiesNames;                                                    // 0x0008 (size: 0x10)
    class UStruct* PropertyClass;                                                     // 0x0018 (size: 0x8)
    TMap<int32, FPCGPropertyAliases> MapOfAliases;                                    // 0x0020 (size: 0x50)
    bool bHasNameClash;                                                               // 0x0070 (size: 0x1)

}; // Size: 0x88

struct FPCGSplineSamplerParams
{
    EPCGSplineSamplingDimension Dimension;                                            // 0x0000 (size: 0x1)
    EPCGSplineSamplingMode Mode;                                                      // 0x0001 (size: 0x1)
    EPCGSplineSamplingFill Fill;                                                      // 0x0002 (size: 0x1)
    int32 SubdivisionsPerSegment;                                                     // 0x0004 (size: 0x4)
    float DistanceIncrement;                                                          // 0x0008 (size: 0x4)
    int32 NumSamples;                                                                 // 0x000C (size: 0x4)
    int32 NumPlanarSubdivisions;                                                      // 0x0010 (size: 0x4)
    int32 NumHeightSubdivisions;                                                      // 0x0014 (size: 0x4)
    bool bComputeDirectionDelta;                                                      // 0x0018 (size: 0x1)
    FName NextDirectionDeltaAttribute;                                                // 0x001C (size: 0x8)
    bool bComputeCurvature;                                                           // 0x0024 (size: 0x1)
    FName CurvatureAttribute;                                                         // 0x0028 (size: 0x8)
    bool bComputeSegmentIndex;                                                        // 0x0030 (size: 0x1)
    FName SegmentIndexAttribute;                                                      // 0x0034 (size: 0x8)
    bool bComputeSubsegmentIndex;                                                     // 0x003C (size: 0x1)
    FName SubsegmentIndexAttribute;                                                   // 0x0040 (size: 0x8)
    bool bComputeTangents;                                                            // 0x0048 (size: 0x1)
    FName ArriveTangentAttribute;                                                     // 0x004C (size: 0x8)
    FName LeaveTangentAttribute;                                                      // 0x0054 (size: 0x8)
    bool bComputeAlpha;                                                               // 0x005C (size: 0x1)
    FName AlphaAttribute;                                                             // 0x0060 (size: 0x8)
    bool bComputeDistance;                                                            // 0x0068 (size: 0x1)
    FName DistanceAttribute;                                                          // 0x006C (size: 0x8)
    bool bComputeInputKey;                                                            // 0x0074 (size: 0x1)
    FName InputKeyAttribute;                                                          // 0x0078 (size: 0x8)
    bool bUnbounded;                                                                  // 0x0080 (size: 0x1)
    float InteriorSampleSpacing;                                                      // 0x0084 (size: 0x4)
    float InteriorBorderSampleSpacing;                                                // 0x0088 (size: 0x4)
    bool bTreatSplineAsPolyline;                                                      // 0x008C (size: 0x1)
    EPCGSplineSamplingInteriorOrientation InteriorOrientation;                        // 0x008D (size: 0x1)
    bool bProjectOntoSurface;                                                         // 0x008E (size: 0x1)
    FRuntimeFloatCurve InteriorDensityFalloffCurve;                                   // 0x0090 (size: 0x88)
    float PointSteepness;                                                             // 0x0118 (size: 0x4)
    bool bSeedFromLocalPosition;                                                      // 0x011C (size: 0x1)
    bool bSeedFrom2DPosition;                                                         // 0x011D (size: 0x1)

}; // Size: 0x120

struct FPCGSplineStruct
{
    FSplineCurves SplineCurves;                                                       // 0x0000 (size: 0x70)
    FTransform Transform;                                                             // 0x0070 (size: 0x60)
    FVector DefaultUpVector;                                                          // 0x00D0 (size: 0x18)
    int32 ReparamStepsPerSegment;                                                     // 0x00E8 (size: 0x4)
    bool bClosedLoop;                                                                 // 0x00EC (size: 0x1)
    FBoxSphereBounds LocalBounds;                                                     // 0x00F0 (size: 0x38)
    FBoxSphereBounds Bounds;                                                          // 0x0128 (size: 0x38)

}; // Size: 0x160

struct FPCGStack
{
}; // Size: 0x10

struct FPCGStackFrame
{
}; // Size: 0x10

struct FPCGStaticMeshSpawnerContext : public FPCGContext
{
}; // Size: 0x318

struct FPCGTaggedData
{
    class UPCGData* Data;                                                             // 0x0000 (size: 0x8)
    TSet<FString> Tags;                                                               // 0x0008 (size: 0x50)
    FName Pin;                                                                        // 0x0058 (size: 0x8)
    bool bPinlessData;                                                                // 0x0060 (size: 0x1)

}; // Size: 0x68

struct FPCGTestMyColorStruct
{
    double B;                                                                         // 0x0000 (size: 0x8)
    double G;                                                                         // 0x0008 (size: 0x8)
    double R;                                                                         // 0x0010 (size: 0x8)
    double A;                                                                         // 0x0018 (size: 0x8)

}; // Size: 0x20

struct FPCGWeightedByCategoryEntryList
{
    FString CategoryEntry;                                                            // 0x0000 (size: 0x10)
    bool IsDefault;                                                                   // 0x0010 (size: 0x1)
    TArray<FPCGMeshSelectorWeightedEntry> WeightedMeshEntries;                        // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FPCGWorldCommonQueryParams
{
    bool bIgnorePCGHits;                                                              // 0x0000 (size: 0x1)
    bool bIgnoreSelfHits;                                                             // 0x0001 (size: 0x1)
    TEnumAsByte<ECollisionChannel> CollisionChannel;                                  // 0x0002 (size: 0x1)
    bool bTraceComplex;                                                               // 0x0003 (size: 0x1)
    EPCGWorldQueryFilterByTag ActorTagFilter;                                         // 0x0004 (size: 0x4)
    FString ActorTagsList;                                                            // 0x0008 (size: 0x10)
    bool bIgnoreLandscapeHits;                                                        // 0x0018 (size: 0x1)
    bool bCheckTagsPerComponent;                                                      // 0x0019 (size: 0x1)
    bool bFullyIgnoreIfAnyHitComponentTagMatches;                                     // 0x001A (size: 0x1)
    bool bGetReferenceToActorHit;                                                     // 0x001B (size: 0x1)
    TSet<FName> ParsedActorTagsList;                                                  // 0x0020 (size: 0x50)

}; // Size: 0x70

struct FPCGWorldRayHitQueryParams : public FPCGWorldCommonQueryParams
{
    bool bOverrideDefaultParams;                                                      // 0x0070 (size: 0x1)
    FVector RayOrigin;                                                                // 0x0078 (size: 0x18)
    FVector RayDirection;                                                             // 0x0090 (size: 0x18)
    double RayLength;                                                                 // 0x00A8 (size: 0x8)
    bool bApplyMetadataFromLandscape;                                                 // 0x00B0 (size: 0x1)
    bool bGetReferenceToPhysicalMaterial;                                             // 0x00B1 (size: 0x1)

}; // Size: 0xB8

struct FPCGWorldVolumetricQueryParams : public FPCGWorldCommonQueryParams
{
    bool bSearchForOverlap;                                                           // 0x0070 (size: 0x1)

}; // Size: 0x78

class APCGPartitionActor : public APartitionActor
{
    FGuid PCGGuid;                                                                    // 0x0290 (size: 0x10)
    TMap<class UPCGComponent*, class TSoftObjectPtr<UPCGComponent>> LocalToOriginal;  // 0x02F0 (size: 0x50)
    TMap<class UPCGComponent*, class TSoftObjectPtr<UPCGComponent>> LoadedPreviewComponents; // 0x0340 (size: 0x50)
    uint32 PCGGridSize;                                                               // 0x0390 (size: 0x4)
    bool bUse2DGrid;                                                                  // 0x0394 (size: 0x1)

    class UPCGComponent* GetOriginalComponent(const class UPCGComponent* LocalComponent);
    class UPCGComponent* GetLocalComponent(const class UPCGComponent* OriginalComponent);
}; // Size: 0x398

class APCGUnitTestDummyActor : public AActor
{
    int32 IntProperty;                                                                // 0x0290 (size: 0x4)
    float FloatProperty;                                                              // 0x0294 (size: 0x4)
    int64 Int64Property;                                                              // 0x0298 (size: 0x8)
    double DoubleProperty;                                                            // 0x02A0 (size: 0x8)
    bool BoolProperty;                                                                // 0x02A8 (size: 0x1)
    FName NameProperty;                                                               // 0x02AC (size: 0x8)
    FString StringProperty;                                                           // 0x02B8 (size: 0x10)
    EPCGUnitTestDummyEnum EnumProperty;                                               // 0x02C8 (size: 0x8)
    FVector VectorProperty;                                                           // 0x02D0 (size: 0x18)
    FVector4 Vector4Property;                                                         // 0x02F0 (size: 0x20)
    FTransform TransformProperty;                                                     // 0x0310 (size: 0x60)
    FRotator RotatorProperty;                                                         // 0x0370 (size: 0x18)
    FQuat QuatProperty;                                                               // 0x0390 (size: 0x20)
    FSoftObjectPath SoftObjectPathProperty;                                           // 0x03B0 (size: 0x20)
    FSoftClassPath SoftClassPathProperty;                                             // 0x03D0 (size: 0x20)
    TSubclassOf<class AActor> ClassProperty;                                          // 0x03F0 (size: 0x8)
    class UPCGDummyGetPropertyTest* ObjectProperty;                                   // 0x03F8 (size: 0x8)
    FVector2D Vector2Property;                                                        // 0x0400 (size: 0x10)
    FColor ColorProperty;                                                             // 0x0410 (size: 0x4)
    FLinearColor LinearColorProperty;                                                 // 0x0414 (size: 0x10)
    FPCGTestMyColorStruct PCGColorProperty;                                           // 0x0428 (size: 0x20)
    TArray<int32> ArrayOfIntsProperty;                                                // 0x0448 (size: 0x10)
    TArray<FVector> ArrayOfVectorsProperty;                                           // 0x0458 (size: 0x10)
    TArray<FPCGTestMyColorStruct> ArrayOfStructsProperty;                             // 0x0468 (size: 0x10)
    TArray<class UPCGDummyGetPropertyTest*> ArrayOfObjectsProperty;                   // 0x0478 (size: 0x10)
    FPCGDummyGetPropertyStruct DummyStruct;                                           // 0x0488 (size: 0x28)

}; // Size: 0x4B0

class APCGVolume : public AVolume
{
    class UPCGComponent* PCGComponent;                                                // 0x02C8 (size: 0x8)

}; // Size: 0x2D0

class APCGWorldActor : public AActor
{
    uint32 PartitionGridSize;                                                         // 0x0290 (size: 0x4)
    class UPCGLandscapeCache* LandscapeCacheObject;                                   // 0x0298 (size: 0x8)
    bool bUse2DGrid;                                                                  // 0x02A0 (size: 0x1)
    TMap<uint32, FGuid> GridGuids;                                                    // 0x02A8 (size: 0x50)
    TMap<uint32, FGuid> TransientGridGuids;                                           // 0x0300 (size: 0x50)
    TSet<FPCGPartitionActorRecord> SerializedPartitionActorRecords;                   // 0x0358 (size: 0x50)

}; // Size: 0x3A8

class IPCGGenSourceBase : public IInterface
{
}; // Size: 0x28

class UPCGActorHelpers : public UBlueprintFunctionLibrary
{
}; // Size: 0x28

class UPCGAddAttributeSettings : public UPCGSettings
{
    FPCGAttributePropertyInputSelector InputSource;                                   // 0x00A8 (size: 0x28)
    FPCGAttributePropertyOutputSelector OutputTarget;                                 // 0x00D0 (size: 0x28)
    FPCGMetadataTypesConstantStruct AttributeTypes;                                   // 0x0100 (size: 0x170)
    bool bCopyAllAttributes;                                                          // 0x0270 (size: 0x1)

}; // Size: 0x280

class UPCGAddTagSettings : public UPCGSettings
{
    FString TagsToAdd;                                                                // 0x00A8 (size: 0x10)

}; // Size: 0xB8

class UPCGApplyOnActorSettings : public UPCGSettings
{
    TSoftObjectPtr<AActor> TargetActor;                                               // 0x00A8 (size: 0x28)
    TArray<FPCGObjectPropertyOverrideDescription> PropertyOverrideDescriptions;       // 0x00D0 (size: 0x10)
    TArray<FName> PostProcessFunctionNames;                                           // 0x00E0 (size: 0x10)

}; // Size: 0xF0

class UPCGApplyScaleToBoundsSettings : public UPCGSettings
{
}; // Size: 0xA8

class UPCGAssetExporter : public UObject
{

    TSubclassOf<class UPCGDataAsset> BP_GetAssetType();
    bool BP_ExportToAsset(class UPCGDataAsset* Asset);
}; // Size: 0x28

class UPCGAttributeCastSettings : public UPCGSettings
{
    FPCGAttributePropertyInputSelector InputSource;                                   // 0x00A8 (size: 0x28)
    EPCGMetadataTypes OutputType;                                                     // 0x00D0 (size: 0x1)
    FPCGAttributePropertyOutputSelector OutputTarget;                                 // 0x00D8 (size: 0x28)

}; // Size: 0x100

class UPCGAttributeExtractorTestObject : public UObject
{
    double DoubleValue;                                                               // 0x0028 (size: 0x8)

}; // Size: 0x30

class UPCGAttributeFilteringRangeSettings : public UPCGSettings
{
    FPCGAttributePropertyInputSelector TargetAttribute;                               // 0x00A8 (size: 0x28)
    FPCGAttributeFilterThresholdSettings MinThreshold;                                // 0x00D0 (size: 0x1B0)
    FPCGAttributeFilterThresholdSettings MaxThreshold;                                // 0x0280 (size: 0x1B0)
    bool bHasSpatialToPointDeprecation;                                               // 0x0430 (size: 0x1)

}; // Size: 0x440

class UPCGAttributeFilteringSettings : public UPCGSettings
{
    EPCGAttributeFilterOperator Operator;                                             // 0x00A8 (size: 0x1)
    FPCGAttributePropertyInputSelector TargetAttribute;                               // 0x00B0 (size: 0x28)
    bool bUseConstantThreshold;                                                       // 0x00D8 (size: 0x1)
    FPCGAttributePropertyInputSelector ThresholdAttribute;                            // 0x00E0 (size: 0x28)
    bool bUseSpatialQuery;                                                            // 0x0108 (size: 0x1)
    FPCGMetadataTypesConstantStruct AttributeTypes;                                   // 0x0110 (size: 0x170)
    bool bHasSpatialToPointDeprecation;                                               // 0x0280 (size: 0x1)

}; // Size: 0x290

class UPCGAttributeGetFromIndexSettings : public UPCGSettings
{
    int32 Index;                                                                      // 0x00A8 (size: 0x4)

}; // Size: 0xB0

class UPCGAttributeGetFromPointIndexSettings : public UPCGSettings
{
    FPCGAttributePropertyInputSelector InputSource;                                   // 0x00A8 (size: 0x28)
    int32 Index;                                                                      // 0x00D0 (size: 0x4)
    FName OutputAttributeName;                                                        // 0x00D4 (size: 0x8)

}; // Size: 0xE0

class UPCGAttributeNoiseSettings : public UPCGSettings
{
    FPCGAttributePropertyInputSelector InputSource;                                   // 0x00A8 (size: 0x28)
    FPCGAttributePropertyOutputSelector OutputTarget;                                 // 0x00D0 (size: 0x28)
    EPCGAttributeNoiseMode Mode;                                                      // 0x00F8 (size: 0x1)
    float NoiseMin;                                                                   // 0x00FC (size: 0x4)
    float NoiseMax;                                                                   // 0x0100 (size: 0x4)
    bool bInvertSource;                                                               // 0x0104 (size: 0x1)
    bool bClampResult;                                                                // 0x0105 (size: 0x1)
    bool bHasSpatialToPointDeprecation;                                               // 0x0106 (size: 0x1)

}; // Size: 0x108

class UPCGAttributePropertySelectorBlueprintHelpers : public UBlueprintFunctionLibrary
{

    bool SetPointProperty(FPCGAttributePropertySelector& Selector, EPCGPointProperties InPointProperty);
    bool SetExtraProperty(FPCGAttributePropertySelector& Selector, EPCGExtraProperties InExtraProperty);
    bool SetAttributeName(FPCGAttributePropertySelector& Selector, FName InAttributeName);
    EPCGAttributePropertySelection GetSelection(const FPCGAttributePropertySelector& Selector);
    EPCGPointProperties GetPointProperty(const FPCGAttributePropertySelector& Selector);
    FName GetName(const FPCGAttributePropertySelector& Selector);
    EPCGExtraProperties GetExtraProperty(const FPCGAttributePropertySelector& Selector);
    TArray<FString> GetExtraNames(const FPCGAttributePropertySelector& Selector);
    FName GetAttributeName(const FPCGAttributePropertySelector& Selector);
    FPCGAttributePropertyOutputSelector CopyAndFixSource(const FPCGAttributePropertyOutputSelector& OutputSelector, const FPCGAttributePropertyInputSelector& InputSelector);
    FPCGAttributePropertyInputSelector CopyAndFixLast(const FPCGAttributePropertyInputSelector& Selector, const class UPCGData* InData);
}; // Size: 0x28

class UPCGAttributeReduceSettings : public UPCGSettings
{
    FPCGAttributePropertyInputSelector InputSource;                                   // 0x00A8 (size: 0x28)
    FName OutputAttributeName;                                                        // 0x00D0 (size: 0x8)
    EPCGAttributeReduceOperation Operation;                                           // 0x00D8 (size: 0x4)
    bool bMergeOutputAttributes;                                                      // 0x00DC (size: 0x1)

}; // Size: 0xE0

class UPCGAttributeSelectSettings : public UPCGSettings
{
    FPCGAttributePropertyInputSelector InputSource;                                   // 0x00A8 (size: 0x28)
    FName OutputAttributeName;                                                        // 0x00D0 (size: 0x8)
    EPCGAttributeSelectOperation Operation;                                           // 0x00D8 (size: 0x4)
    EPCGAttributeSelectAxis Axis;                                                     // 0x00DC (size: 0x4)
    FVector4 CustomAxis;                                                              // 0x00E0 (size: 0x20)

}; // Size: 0x100

class UPCGAttributeTransferSettings : public UPCGSettings
{
    FPCGAttributePropertyInputSelector SourceAttributeProperty;                       // 0x00A8 (size: 0x28)
    FPCGAttributePropertyOutputSelector TargetAttributeProperty;                      // 0x00D0 (size: 0x28)

}; // Size: 0xF8

class UPCGBadOutputsNodeSettings : public UPCGSettings
{
}; // Size: 0xA8

class UPCGBaseSubgraphNode : public UPCGNode
{
}; // Size: 0x88

class UPCGBaseSubgraphSettings : public UPCGSettings
{
}; // Size: 0xA8

class UPCGBaseTextureData : public UPCGSurfaceData
{
    EPCGTextureDensityFunction DensityFunction;                                       // 0x0130 (size: 0x1)
    EPCGTextureColorChannel ColorChannel;                                             // 0x0131 (size: 0x1)
    EPCGTextureFilter Filter;                                                         // 0x0132 (size: 0x1)
    float TexelSize;                                                                  // 0x0134 (size: 0x4)
    bool bUseAdvancedTiling;                                                          // 0x0138 (size: 0x1)
    FVector2D Tiling;                                                                 // 0x0140 (size: 0x10)
    FVector2D CenterOffset;                                                           // 0x0150 (size: 0x10)
    float Rotation;                                                                   // 0x0160 (size: 0x4)
    bool bUseTileBounds;                                                              // 0x0164 (size: 0x1)
    FBox2D TileBounds;                                                                // 0x0168 (size: 0x28)
    TArray<FLinearColor> ColorData;                                                   // 0x0190 (size: 0x10)
    FBox Bounds;                                                                      // 0x01A0 (size: 0x38)
    int32 Height;                                                                     // 0x01D8 (size: 0x4)
    int32 Width;                                                                      // 0x01DC (size: 0x4)

}; // Size: 0x1E0

class UPCGBlueprintElement : public UObject
{
    bool bIsCacheable;                                                                // 0x0028 (size: 0x1)
    bool bComputeFullDataCrc;                                                         // 0x0029 (size: 0x1)
    bool bRequiresGameThread;                                                         // 0x002A (size: 0x1)
    TArray<FPCGPinProperties> CustomInputPins;                                        // 0x0030 (size: 0x10)
    TArray<FPCGPinProperties> CustomOutputPins;                                       // 0x0040 (size: 0x10)
    bool bHasDefaultInPin;                                                            // 0x0050 (size: 0x1)
    bool bHasDefaultOutPin;                                                           // 0x0051 (size: 0x1)

    TArray<FPCGPoint> VariableLoopBody(const FPCGContext& InContext, const class UPCGPointData* InData, const FPCGPoint& InPoint, class UPCGMetadata* OutMetadata, int64 Iteration);
    void VariableLoop(FPCGContext& InContext, const class UPCGPointData* InData, class UPCGPointData*& OutData, class UPCGPointData* OptionalOutData);
    bool PointLoopBody(const FPCGContext& InContext, const class UPCGPointData* InData, const FPCGPoint& InPoint, FPCGPoint& OutPoint, class UPCGMetadata* OutMetadata, int64 Iteration);
    void PointLoop(FPCGContext& InContext, const class UPCGPointData* InData, class UPCGPointData*& OutData, class UPCGPointData* OptionalOutData);
    EPCGSettingsType NodeTypeOverride();
    FName NodeTitleOverride();
    FLinearColor NodeColorOverride();
    bool NestedLoopBody(const FPCGContext& InContext, const class UPCGPointData* InOuterData, const class UPCGPointData* InInnerData, const FPCGPoint& InOuterPoint, const FPCGPoint& InInnerPoint, FPCGPoint& OutPoint, class UPCGMetadata* OutMetadata, int64 OuterIteration, int64 InnerIteration);
    void NestedLoop(FPCGContext& InContext, const class UPCGPointData* InOuterData, const class UPCGPointData* InInnerData, class UPCGPointData*& OutData, class UPCGPointData* OptionalOutData);
    bool IterationLoopBody(const FPCGContext& InContext, int64 Iteration, const class UPCGSpatialData* InA, const class UPCGSpatialData* InB, FPCGPoint& OutPoint, class UPCGMetadata* OutMetadata);
    void IterationLoop(FPCGContext& InContext, int64 NumIterations, class UPCGPointData*& OutData, const class UPCGSpatialData* OptionalA, const class UPCGSpatialData* OptionalB, class UPCGPointData* OptionalOutData);
    bool IsCacheableOverride();
    int32 GetSeed(FPCGContext& InContext);
    FRandomStream GetRandomStream(FPCGContext& InContext);
    TArray<FPCGPinProperties> GetOutputPins();
    bool GetOutputPinByLabel(FName InPinLabel, FPCGPinProperties& OutFoundPin);
    TArray<FPCGPinProperties> GetInputPins();
    bool GetInputPinByLabel(FName InPinLabel, FPCGPinProperties& OutFoundPin);
    FPCGContext GetContext();
    void ExecuteWithContext(FPCGContext& InContext, const FPCGDataCollection& Input, FPCGDataCollection& Output);
    void Execute(const FPCGDataCollection& Input, FPCGDataCollection& Output);
    TSet<FName> CustomOutputLabels();
    TSet<FName> CustomInputLabels();
    void ApplyPreconfiguredSettings(const FPCGPreConfiguredSettingsInfo& InPreconfigureInfo);
}; // Size: 0x68

class UPCGBlueprintHelpers : public UBlueprintFunctionLibrary
{

    void SetSeedFromPosition(FPCGPoint& InPoint);
    void SetLocalCenter(FPCGPoint& InPoint, const FVector& InLocalCenter);
    void SetExtents(FPCGPoint& InPoint, const FVector& InExtents);
    FBox GetTransformedBounds(const FPCGPoint& InPoint);
    int64 GetTaskId(FPCGContext& Context);
    class AActor* GetTargetActor(FPCGContext& Context, class UPCGSpatialData* SpatialData);
    class UPCGSettings* GetSettings(FPCGContext& Context);
    FRandomStream GetRandomStreamFromTwoPoints(const FPCGPoint& InPointA, const FPCGPoint& InPointB, const class UPCGSettings* OptionalSettings, const class UPCGComponent* OptionalComponent);
    FRandomStream GetRandomStreamFromPoint(const FPCGPoint& InPoint, const class UPCGSettings* OptionalSettings, const class UPCGComponent* OptionalComponent);
    class UPCGComponent* GetOriginalComponent(FPCGContext& Context);
    FVector GetLocalCenter(const FPCGPoint& InPoint);
    TArray<FPCGLandscapeLayerWeight> GetInterpolatedPCGLandscapeLayerWeights(class UObject* WorldContextObject, const FVector& Location);
    class UPCGData* GetInputData(FPCGContext& Context);
    FVector GetExtents(const FPCGPoint& InPoint);
    class UPCGComponent* GetComponent(FPCGContext& Context);
    FBox GetActorLocalBoundsPCG(class AActor* InActor, bool bIgnorePCGCreatedComponents);
    class UPCGData* GetActorData(FPCGContext& Context);
    FBox GetActorBoundsPCG(class AActor* InActor, bool bIgnorePCGCreatedComponents);
    class UPCGData* CreatePCGDataFromActor(class AActor* InActor, bool bParseActor);
    int32 ComputeSeedFromPosition(const FVector& InPosition);
}; // Size: 0x28

class UPCGBlueprintPinHelpers : public UBlueprintFunctionLibrary
{

    FPCGPinProperties MakePinProperty(FName Label, bool bAllowMultipleData, bool bAllowMultipleConnections, bool bIsAdvancedPin, EPCGExclusiveDataType AllowedType);
    void BreakPinProperty(const FPCGPinProperties& PinProperty, FName& Label, bool& bAllowMultipleData, bool& bAllowMultipleConnections, bool& bIsAdvancedPin, EPCGExclusiveDataType& AllowedType);
}; // Size: 0x28

class UPCGBlueprintSettings : public UPCGSettings
{
    TSubclassOf<class UPCGBlueprintElement> BlueprintElementType;                     // 0x00A8 (size: 0x8)
    class UPCGBlueprintElement* BlueprintElementInstance;                             // 0x00B0 (size: 0x8)

    void SetElementType(TSubclassOf<class UPCGBlueprintElement> InElementType, class UPCGBlueprintElement*& ElementInstance);
    TSubclassOf<class UPCGBlueprintElement> GetElementType();
}; // Size: 0xB8

class UPCGBooleanSelectSettings : public UPCGSettings
{
    bool bUseInputB;                                                                  // 0x00A8 (size: 0x1)

}; // Size: 0xB0

class UPCGBoundsModifierSettings : public UPCGSettings
{
    EPCGBoundsModifierMode Mode;                                                      // 0x00A8 (size: 0x1)
    FVector BoundsMin;                                                                // 0x00B0 (size: 0x18)
    FVector BoundsMax;                                                                // 0x00C8 (size: 0x18)
    bool bAffectSteepness;                                                            // 0x00E0 (size: 0x1)
    float Steepness;                                                                  // 0x00E4 (size: 0x4)

}; // Size: 0xE8

class UPCGBranchSettings : public UPCGSettings
{
    bool bOutputToB;                                                                  // 0x00A8 (size: 0x1)

}; // Size: 0xB0

class UPCGCollapseSettings : public UPCGSettings
{
}; // Size: 0xA8

class UPCGCollisionShapeData : public UPCGSpatialDataWithPointCache
{
    FTransform Transform;                                                             // 0x00D0 (size: 0x60)
    FBox CachedBounds;                                                                // 0x0148 (size: 0x38)
    FBox CachedStrictBounds;                                                          // 0x0180 (size: 0x38)

}; // Size: 0x1C0

class UPCGCombinePointsSettings : public UPCGSettings
{
    bool bCenterPivot;                                                                // 0x00A8 (size: 0x1)
    bool bUseFirstPointTransform;                                                     // 0x00A9 (size: 0x1)
    FTransform PointTransform;                                                        // 0x00B0 (size: 0x60)

}; // Size: 0x110

class UPCGComponent : public UActorComponent
{
    int32 Seed;                                                                       // 0x00A0 (size: 0x4)
    bool bActivated;                                                                  // 0x00A4 (size: 0x1)
    bool bIsComponentPartitioned;                                                     // 0x00A5 (size: 0x1)
    EPCGComponentGenerationTrigger GenerationTrigger;                                 // 0x00A6 (size: 0x1)
    bool bGenerateOnDropWhenTriggerOnDemand;                                          // 0x00A7 (size: 0x1)
    bool bOverrideGenerationRadii;                                                    // 0x00A8 (size: 0x1)
    FPCGRuntimeGenerationRadii GenerationRadii;                                       // 0x00B0 (size: 0x60)
    TSubclassOf<class UPCGSchedulingPolicyBase> SchedulingPolicyClass;                // 0x0110 (size: 0x8)
    class UPCGSchedulingPolicyBase* SchedulingPolicy;                                 // 0x0118 (size: 0x8)
    FPCGComponentOnPCGGraphStartGeneratingExternal OnPCGGraphStartGeneratingExternal; // 0x0120 (size: 0x10)
    void OnPCGGraphStartGeneratingExternal(class UPCGComponent* PCGComponent);
    FPCGComponentOnPCGGraphCancelledExternal OnPCGGraphCancelledExternal;             // 0x0130 (size: 0x10)
    void OnPCGGraphCancelledExternal(class UPCGComponent* PCGComponent);
    FPCGComponentOnPCGGraphGeneratedExternal OnPCGGraphGeneratedExternal;             // 0x0140 (size: 0x10)
    void OnPCGGraphGeneratedExternal(class UPCGComponent* PCGComponent);
    FPCGComponentOnPCGGraphCleanedExternal OnPCGGraphCleanedExternal;                 // 0x0150 (size: 0x10)
    void OnPCGGraphCleanedExternal(class UPCGComponent* PCGComponent);
    bool bGenerated;                                                                  // 0x0160 (size: 0x1)
    bool bRuntimeGenerated;                                                           // 0x0161 (size: 0x1)
    TArray<FName> PostGenerateFunctionNames;                                          // 0x0168 (size: 0x10)
    class UPCGGraphInstance* GraphInstance;                                           // 0x0178 (size: 0x8)
    uint32 GenerationGridSize;                                                        // 0x0180 (size: 0x4)
    EPCGEditorDirtyMode CurrentEditingMode;                                           // 0x0184 (size: 0x1)
    EPCGEditorDirtyMode SerializedEditingMode;                                        // 0x0185 (size: 0x1)
    EPCGComponentInput InputType;                                                     // 0x0187 (size: 0x1)
    bool bParseActorComponents;                                                       // 0x0188 (size: 0x1)
    class UPCGData* CachedPCGData;                                                    // 0x0190 (size: 0x8)
    class UPCGData* CachedInputData;                                                  // 0x0198 (size: 0x8)
    class UPCGData* CachedActorData;                                                  // 0x01A0 (size: 0x8)
    class UPCGData* CachedLandscapeData;                                              // 0x01A8 (size: 0x8)
    class UPCGData* CachedLandscapeHeightData;                                        // 0x01B0 (size: 0x8)
    TArray<class UPCGManagedResource*> GeneratedResources;                            // 0x01B8 (size: 0x10)
    FBox LastGeneratedBounds;                                                         // 0x01D0 (size: 0x38)
    FPCGDataCollection GeneratedGraphOutput;                                          // 0x0208 (size: 0x30)
    TMap<class FString, class FPCGDataCollection> PerPinGeneratedOutput;              // 0x0238 (size: 0x50)
    bool bIsComponentLocal;                                                           // 0x02A0 (size: 0x1)

    void SetGraph(class UPCGGraphInterface* InGraph);
    void SetEditingMode(EPCGEditorDirtyMode InEditingMode, EPCGEditorDirtyMode InSerializedEditingMode);
    void NotifyPropertiesChangedFromBlueprint();
    EPCGEditorDirtyMode GetSerializedEditingMode();
    FPCGDataCollection GetGeneratedGraphOutput();
    EPCGEditorDirtyMode GetEditingMode();
    void GenerateLocal(bool bForce);
    void Generate(bool bForce);
    class AActor* ClearPCGLink(UClass* TemplateActor);
    void CleanupLocal(bool bRemoveComponents, bool bSave);
    void Cleanup(bool bRemoveComponents, bool bSave);
    void AddToManagedResources(class UPCGManagedResource* InResource);
}; // Size: 0x2D0

class UPCGConvertToAttributeSetSettings : public UPCGSettings
{
}; // Size: 0xA8

class UPCGConvertToPointDataSettings : public UPCGCollapseSettings
{
}; // Size: 0xA8

class UPCGConvexHull2DSettings : public UPCGSettings
{
}; // Size: 0xA8

class UPCGCopyPointsSettings : public UPCGSettings
{
    EPCGCopyPointsInheritanceMode RotationInheritance;                                // 0x00A8 (size: 0x1)
    EPCGCopyPointsInheritanceMode ScaleInheritance;                                   // 0x00A9 (size: 0x1)
    EPCGCopyPointsInheritanceMode ColorInheritance;                                   // 0x00AA (size: 0x1)
    EPCGCopyPointsInheritanceMode SeedInheritance;                                    // 0x00AB (size: 0x1)
    EPCGCopyPointsMetadataInheritanceMode AttributeInheritance;                       // 0x00AC (size: 0x1)
    EPCGCopyPointsTagInheritanceMode TagInheritance;                                  // 0x00AD (size: 0x1)

}; // Size: 0xB0

class UPCGCreateAttributeSetSettings : public UPCGSettings
{
    FPCGMetadataTypesConstantStruct AttributeTypes;                                   // 0x00B0 (size: 0x170)
    FPCGAttributePropertyOutputNoSourceSelector OutputTarget;                         // 0x0220 (size: 0x28)

}; // Size: 0x250

class UPCGCreatePointsGridSettings : public UPCGSettings
{
    FVector GridExtents;                                                              // 0x00A8 (size: 0x18)
    FVector CellSize;                                                                 // 0x00C0 (size: 0x18)
    EPCGCoordinateSpace CoordinateSpace;                                              // 0x00D8 (size: 0x1)
    bool bSetPointsBounds;                                                            // 0x00D9 (size: 0x1)
    bool bCullPointsOutsideVolume;                                                    // 0x00DA (size: 0x1)
    EPCGPointPosition PointPosition;                                                  // 0x00DB (size: 0x1)

}; // Size: 0xE0

class UPCGCreatePointsSettings : public UPCGSettings
{
    TArray<FPCGPoint> PointsToCreate;                                                 // 0x00A8 (size: 0x10)
    EPCGCoordinateSpace CoordinateSpace;                                              // 0x00B8 (size: 0x1)
    bool bCullPointsOutsideVolume;                                                    // 0x00B9 (size: 0x1)

}; // Size: 0xC0

class UPCGCreateSplineSettings : public UPCGSettings
{
    EPCGCreateSplineMode Mode;                                                        // 0x00A8 (size: 0x1)
    bool bClosedLoop;                                                                 // 0x00A9 (size: 0x1)
    bool bLinear;                                                                     // 0x00AA (size: 0x1)
    bool bApplyCustomTangents;                                                        // 0x00AB (size: 0x1)
    FName ArriveTangentAttribute;                                                     // 0x00AC (size: 0x8)
    FName LeaveTangentAttribute;                                                      // 0x00B4 (size: 0x8)
    TSoftObjectPtr<AActor> TargetActor;                                               // 0x00C0 (size: 0x28)
    EPCGAttachOptions AttachOptions;                                                  // 0x00E8 (size: 0x4)
    TArray<FName> PostProcessFunctionNames;                                           // 0x00F0 (size: 0x10)

}; // Size: 0x100

class UPCGCreateSurfaceFromSplineSettings : public UPCGSettings
{
}; // Size: 0xA8

class UPCGCreateTargetActor : public UPCGSettings
{
    class AActor* TemplateActor;                                                      // 0x00A8 (size: 0x8)
    EPCGAttachOptions AttachOptions;                                                  // 0x00B0 (size: 0x4)
    TSoftObjectPtr<AActor> RootActor;                                                 // 0x00B8 (size: 0x28)
    FString ActorLabel;                                                               // 0x00E0 (size: 0x10)
    FTransform ActorPivot;                                                            // 0x00F0 (size: 0x60)
    TArray<FPCGObjectPropertyOverrideDescription> PropertyOverrideDescriptions;       // 0x0150 (size: 0x10)
    TArray<FName> PostProcessFunctionNames;                                           // 0x0160 (size: 0x10)
    TSubclassOf<class AActor> TemplateActorClass;                                     // 0x0170 (size: 0x8)
    bool bAllowTemplateActorEditing;                                                  // 0x0178 (size: 0x1)

}; // Size: 0x180

class UPCGCullPointsOutsideActorBoundsSettings : public UPCGSettings
{
    float BoundsExpansion;                                                            // 0x00A8 (size: 0x4)

}; // Size: 0xB0

class UPCGData : public UObject
{
    uint64 UID;                                                                       // 0x0028 (size: 0x8)

}; // Size: 0x38

class UPCGDataAsset : public UObject
{
    FPCGDataCollection Data;                                                          // 0x0028 (size: 0x30)
    FString Name;                                                                     // 0x0058 (size: 0x10)

}; // Size: 0x68

class UPCGDataFromActorSettings : public UPCGSettings
{
    FPCGActorSelectorSettings ActorSelector;                                          // 0x00A8 (size: 0x20)
    EPCGGetDataFromActorMode Mode;                                                    // 0x00C8 (size: 0x1)
    bool bAlsoOutputSinglePointData;                                                  // 0x00C9 (size: 0x1)
    bool bComponentsMustOverlapSelf;                                                  // 0x00CA (size: 0x1)
    bool bGetDataOnAllGrids;                                                          // 0x00CB (size: 0x1)
    int32 AllowedGrids;                                                               // 0x00CC (size: 0x4)
    bool bMergeSinglePointData;                                                       // 0x00D0 (size: 0x1)
    bool bDisplayModeSettings;                                                        // 0x00D1 (size: 0x1)
    TArray<FName> ExpectedPins;                                                       // 0x00D8 (size: 0x10)
    FName PropertyName;                                                               // 0x00E8 (size: 0x8)
    bool bSilenceSanitizedAttributeNameWarnings;                                      // 0x00F0 (size: 0x1)

}; // Size: 0xF8

class UPCGDataFunctionLibrary : public UBlueprintFunctionLibrary
{

    TArray<class UPCGData*> GetTypedInputsByTag(const FPCGDataCollection& InCollection, FString InTag, TArray<FPCGTaggedData>& OutTaggedData, TSubclassOf<class UPCGData> InDataTypeClass);
    TArray<class UPCGData*> GetTypedInputsByPinLabel(const FPCGDataCollection& InCollection, FName InPinLabel, TArray<FPCGTaggedData>& OutTaggedData, TSubclassOf<class UPCGData> InDataTypeClass);
    TArray<class UPCGData*> GetTypedInputsByPin(const FPCGDataCollection& InCollection, const FPCGPinProperties& InPin, TArray<FPCGTaggedData>& OutTaggedData, TSubclassOf<class UPCGData> InDataTypeClass);
    TArray<class UPCGData*> GetTypedInputs(const FPCGDataCollection& InCollection, TArray<FPCGTaggedData>& OutTaggedData, TSubclassOf<class UPCGData> InDataTypeClass);
    TArray<FPCGTaggedData> GetParamsByTag(const FPCGDataCollection& InCollection, FString InTag);
    TArray<FPCGTaggedData> GetParamsByPinLabel(const FPCGDataCollection& InCollection, const FName InPinLabel);
    TArray<FPCGTaggedData> GetParams(const FPCGDataCollection& InCollection);
    TArray<FPCGTaggedData> GetInputsByTag(const FPCGDataCollection& InCollection, FString InTag);
    TArray<FPCGTaggedData> GetInputsByPinLabel(const FPCGDataCollection& InCollection, const FName InPinLabel);
    TArray<FPCGTaggedData> GetInputs(const FPCGDataCollection& InCollection);
    TArray<FPCGTaggedData> GetAllSettings(const FPCGDataCollection& InCollection);
    void AddToCollection(FPCGDataCollection& InCollection, const class UPCGData* InData, FName InPinLabel, TArray<FString> InTags);
}; // Size: 0x28

class UPCGDataNumSettings : public UPCGSettings
{
    FName OutputAttributeName;                                                        // 0x00A8 (size: 0x8)

}; // Size: 0xB0

class UPCGDataTableRowToParamDataSettings : public UPCGSettings
{
    FName RowName;                                                                    // 0x00A8 (size: 0x8)
    TSoftObjectPtr<UDataTable> DataTable;                                             // 0x00B0 (size: 0x28)
    bool bSynchronousLoad;                                                            // 0x00D8 (size: 0x1)

}; // Size: 0xE0

class UPCGDebugDrawComponent : public UDebugDrawComponent
{
}; // Size: 0x580

class UPCGDebugSettings : public UPCGSettings
{
    TSoftObjectPtr<AActor> TargetActor;                                               // 0x00A8 (size: 0x28)

}; // Size: 0xD0

class UPCGDeleteAttributesSettings : public UPCGSettings
{
    EPCGAttributeFilterOperation Operation;                                           // 0x00A8 (size: 0x4)
    FString SelectedAttributes;                                                       // 0x00B0 (size: 0x10)

}; // Size: 0xC0

class UPCGDeleteTagsSettings : public UPCGSettings
{
    EPCGTagFilterOperation Operation;                                                 // 0x00A8 (size: 0x4)
    FString SelectedTags;                                                             // 0x00B0 (size: 0x10)

}; // Size: 0xC0

class UPCGDensityFilterSettings : public UPCGSettings
{
    float LowerBound;                                                                 // 0x00A8 (size: 0x4)
    float UpperBound;                                                                 // 0x00AC (size: 0x4)
    bool bInvertFilter;                                                               // 0x00B0 (size: 0x1)

}; // Size: 0xB8

class UPCGDensityRemapSettings : public UPCGSettings
{
    float InRangeMin;                                                                 // 0x00A8 (size: 0x4)
    float InRangeMax;                                                                 // 0x00AC (size: 0x4)
    float OutRangeMin;                                                                // 0x00B0 (size: 0x4)
    float OutRangeMax;                                                                // 0x00B4 (size: 0x4)
    bool bExcludeValuesOutsideInputRange;                                             // 0x00B8 (size: 0x1)

}; // Size: 0xC0

class UPCGDeterminismTestBlueprintBase : public UObject
{

    void ExecuteTest(const class UPCGNode* InPCGNode, FDeterminismTestResult& InOutTestResult);
}; // Size: 0x28

class UPCGDifferenceData : public UPCGSpatialDataWithPointCache
{
    bool bDiffMetadata;                                                               // 0x00D0 (size: 0x1)
    class UPCGSpatialData* Source;                                                    // 0x00D8 (size: 0x8)
    class UPCGSpatialData* Difference;                                                // 0x00E0 (size: 0x8)
    class UPCGUnionData* DifferencesUnion;                                            // 0x00E8 (size: 0x8)
    EPCGDifferenceDensityFunction DensityFunction;                                    // 0x00F0 (size: 0x1)

    void SetDensityFunction(EPCGDifferenceDensityFunction InDensityFunction);
    void Initialize(const class UPCGSpatialData* InData);
    void AddDifference(const class UPCGSpatialData* InDifference);
}; // Size: 0xF8

class UPCGDifferenceSettings : public UPCGSettings
{
    EPCGDifferenceDensityFunction DensityFunction;                                    // 0x00A8 (size: 0x1)
    EPCGDifferenceMode Mode;                                                          // 0x00A9 (size: 0x1)
    bool bDiffMetadata;                                                               // 0x00AA (size: 0x1)
    bool bKeepZeroDensityPoints;                                                      // 0x00AB (size: 0x1)

}; // Size: 0xB0

class UPCGDistanceSettings : public UPCGSettings
{
    bool bOutputToAttribute;                                                          // 0x00A8 (size: 0x1)
    FPCGAttributePropertySelector OutputAttribute;                                    // 0x00B0 (size: 0x28)
    bool bOutputDistanceVector;                                                       // 0x00D8 (size: 0x1)
    bool bSetDensity;                                                                 // 0x00D9 (size: 0x1)
    double MaximumDistance;                                                           // 0x00E0 (size: 0x8)
    PCGDistanceShape SourceShape;                                                     // 0x00E8 (size: 0x4)
    PCGDistanceShape TargetShape;                                                     // 0x00EC (size: 0x4)

}; // Size: 0xF0

class UPCGDummyGetPropertyTest : public UObject
{
    int64 Int64Property;                                                              // 0x0028 (size: 0x8)
    double DoubleProperty;                                                            // 0x0030 (size: 0x8)

}; // Size: 0x38

class UPCGDuplicatePointSettings : public UPCGSettings
{
    int32 Iterations;                                                                 // 0x00A8 (size: 0x4)
    FVector Direction;                                                                // 0x00B0 (size: 0x18)
    bool bDirectionAppliedInRelativeSpace;                                            // 0x00C8 (size: 0x1)
    bool bOutputSourcePoint;                                                          // 0x00C9 (size: 0x1)
    FTransform PointTransform;                                                        // 0x00D0 (size: 0x60)

}; // Size: 0x130

class UPCGEdge : public UObject
{
    FName InboundLabel;                                                               // 0x0028 (size: 0x8)
    class UPCGNode* InboundNode;                                                      // 0x0030 (size: 0x8)
    FName OutboundLabel;                                                              // 0x0038 (size: 0x8)
    class UPCGNode* OutboundNode;                                                     // 0x0040 (size: 0x8)
    class UPCGPin* InputPin;                                                          // 0x0048 (size: 0x8)
    class UPCGPin* OutputPin;                                                         // 0x0050 (size: 0x8)

}; // Size: 0x58

class UPCGEngineSettings : public UDeveloperSettingsBackedByCVars
{
    FVector VolumeScale;                                                              // 0x0038 (size: 0x18)
    bool bGenerateOnDrop;                                                             // 0x0050 (size: 0x1)
    bool bDisplayCullingStateWhenDebugging;                                           // 0x0051 (size: 0x1)

}; // Size: 0x58

class UPCGExternalDataSettings : public UPCGSettings
{
    TMap<class FString, class FPCGAttributePropertyInputSelector> AttributeMapping;   // 0x00A8 (size: 0x50)

}; // Size: 0xF8

class UPCGFilterByAttributeSettings : public UPCGFilterDataBaseSettings
{
    FName Attribute;                                                                  // 0x00A8 (size: 0x8)

}; // Size: 0xB0

class UPCGFilterByIndexSettings : public UPCGFilterDataBaseSettings
{
    bool bInvertFilter;                                                               // 0x00A8 (size: 0x1)
    FString SelectedIndices;                                                          // 0x00B0 (size: 0x10)

}; // Size: 0xC0

class UPCGFilterByTagSettings : public UPCGFilterDataBaseSettings
{
    EPCGFilterByTagOperation Operation;                                               // 0x00A8 (size: 0x4)
    FString SelectedTags;                                                             // 0x00B0 (size: 0x10)

}; // Size: 0xC0

class UPCGFilterByTypeSettings : public UPCGFilterDataBaseSettings
{
    EPCGDataType TargetType;                                                          // 0x00A8 (size: 0x4)
    bool bShowOutsideFilter;                                                          // 0x00AC (size: 0x1)

}; // Size: 0xB0

class UPCGFilterDataBaseSettings : public UPCGSettings
{
}; // Size: 0xA8

class UPCGFunctionPrototypes : public UBlueprintFunctionLibrary
{

    void PrototypeWithPointAndMetadata(FPCGPoint Point, const class UPCGMetadata* MetaData);
    void PrototypeWithNoParams();
}; // Size: 0x28

class UPCGGatherSettings : public UPCGSettings
{
}; // Size: 0xA8

class UPCGGenSourceComponent : public UActorComponent
{
}; // Size: 0xA8

class UPCGGenSourceEditorCamera : public UObject
{
}; // Size: 0x30

class UPCGGenSourcePlayer : public UObject
{
}; // Size: 0x38

class UPCGGenSourceWPStreamingSource : public UObject
{
}; // Size: 0x38

class UPCGGetActorPropertySettings : public UPCGSettings
{
    FPCGActorSelectorSettings ActorSelector;                                          // 0x00A8 (size: 0x20)
    bool bSelectComponent;                                                            // 0x00C8 (size: 0x1)
    TSubclassOf<class UActorComponent> ComponentClass;                                // 0x00D0 (size: 0x8)
    FName PropertyName;                                                               // 0x00D8 (size: 0x8)
    bool bForceObjectAndStructExtraction;                                             // 0x00E0 (size: 0x1)
    FName OutputAttributeName;                                                        // 0x00E4 (size: 0x8)
    bool bAlwaysRequeryActors;                                                        // 0x00EC (size: 0x1)
    EPCGActorSelection ActorSelection;                                                // 0x00ED (size: 0x1)
    FName ActorSelectionTag;                                                          // 0x00F0 (size: 0x8)
    FName ActorSelectionName;                                                         // 0x00F8 (size: 0x8)
    TSubclassOf<class AActor> ActorSelectionClass;                                    // 0x0100 (size: 0x8)
    EPCGActorFilter ActorFilter;                                                      // 0x0108 (size: 0x1)
    bool bIncludeChildren;                                                            // 0x0109 (size: 0x1)

}; // Size: 0x110

class UPCGGetBoundsSettings : public UPCGSettings
{
}; // Size: 0xA8

class UPCGGetLandscapeSettings : public UPCGDataFromActorSettings
{
    FPCGLandscapeDataProps SamplingProperties;                                        // 0x00F8 (size: 0x5)

}; // Size: 0x100

class UPCGGetLoopIndexSettings : public UPCGSettings
{
    bool bWarnIfCalledOutsideOfLoop;                                                  // 0x00A8 (size: 0x1)

}; // Size: 0xB0

class UPCGGetPCGComponentSettings : public UPCGDataFromActorSettings
{
}; // Size: 0xF8

class UPCGGetPrimitiveSettings : public UPCGDataFromActorSettings
{
}; // Size: 0xF8

class UPCGGetPropertyFromObjectPathSettings : public UPCGSettings
{
    TArray<FSoftObjectPath> ObjectPathsToExtract;                                     // 0x00A8 (size: 0x10)
    FPCGAttributePropertyInputSelector InputSource;                                   // 0x00B8 (size: 0x28)
    FName PropertyName;                                                               // 0x00E0 (size: 0x8)
    bool bForceObjectAndStructExtraction;                                             // 0x00E8 (size: 0x1)
    FName OutputAttributeName;                                                        // 0x00EC (size: 0x8)
    bool bSynchronousLoad;                                                            // 0x00F4 (size: 0x1)
    bool bPersistAllData;                                                             // 0x00F5 (size: 0x1)
    bool bSilenceErrorOnEmptyObjectPath;                                              // 0x00F6 (size: 0x1)

}; // Size: 0xF8

class UPCGGetSplineSettings : public UPCGDataFromActorSettings
{
}; // Size: 0xF8

class UPCGGetVolumeSettings : public UPCGDataFromActorSettings
{
}; // Size: 0xF8

class UPCGGraph : public UPCGGraphInterface
{
    bool bLandscapeUsesMetadata;                                                      // 0x0028 (size: 0x1)
    TArray<class UPCGNode*> Nodes;                                                    // 0x0030 (size: 0x10)
    class UPCGNode* InputNode;                                                        // 0x0040 (size: 0x8)
    class UPCGNode* OutputNode;                                                       // 0x0048 (size: 0x8)
    FInstancedPropertyBag UserParameters;                                             // 0x0050 (size: 0x10)
    bool bUseHierarchicalGeneration;                                                  // 0x0060 (size: 0x1)
    EPCGHiGenGrid HiGenGridSize;                                                      // 0x0064 (size: 0x4)
    bool bIsEditorOnly;                                                               // 0x00C0 (size: 0x1)
    FPCGRuntimeGenerationRadii GenerationRadii;                                       // 0x00C8 (size: 0x60)

    void RemoveNodes(TArray<class UPCGNode*>& InNodes);
    void RemoveNode(class UPCGNode* InNode);
    bool RemoveEdge(class UPCGNode* From, const FName& FromLabel, class UPCGNode* To, const FName& ToLabel);
    class UPCGNode* GetOutputNode();
    class UPCGNode* GetInputNode();
    class UPCGNode* AddNodeOfType(TSubclassOf<class UPCGSettings> InSettingsClass, class UPCGSettings*& DefaultNodeSettings);
    class UPCGNode* AddNodeInstance(class UPCGSettings* InSettings);
    class UPCGNode* AddNodeCopy(const class UPCGSettings* InSettings, class UPCGSettings*& DefaultNodeSettings);
    class UPCGNode* AddEdge(class UPCGNode* From, const FName& FromPinLabel, class UPCGNode* To, const FName& ToPinLabel);
}; // Size: 0x128

class UPCGGraphAuthoringTestHelperSettings : public UPCGSettings
{
}; // Size: 0xB0

class UPCGGraphInputOutputSettings : public UPCGSettings
{
    TArray<FPCGPinProperties> Pins;                                                   // 0x00A8 (size: 0x10)
    TSet<FName> PinLabels;                                                            // 0x00B8 (size: 0x50)
    TArray<FPCGPinProperties> CustomPins;                                             // 0x0108 (size: 0x10)
    bool bHasAddedDefaultPin;                                                         // 0x0118 (size: 0x1)

}; // Size: 0x120

class UPCGGraphInstance : public UPCGGraphInterface
{
    class UPCGGraphInterface* Graph;                                                  // 0x0028 (size: 0x8)
    FPCGOverrideInstancedPropertyBag ParametersOverrides;                             // 0x0030 (size: 0x60)

}; // Size: 0x90

class UPCGGraphInterface : public UObject
{

    class UPCGGraph* GetMutablePCGGraph();
    class UPCGGraph* GetConstPCGGraph();
}; // Size: 0x28

class UPCGGraphParametersHelpers : public UBlueprintFunctionLibrary
{

    void SetVectorParameter(class UPCGGraphInterface* GraphInterface, const FName Name, const FVector& Value);
    void SetVector4Parameter(class UPCGGraphInterface* GraphInterface, const FName Name, const FVector4& Value);
    void SetVector2DParameter(class UPCGGraphInterface* GraphInterface, const FName Name, const FVector2D& Value);
    void SetTransformParameter(class UPCGGraphInterface* GraphInterface, const FName Name, const FTransform& Value);
    void SetStringParameter(class UPCGGraphInterface* GraphInterface, const FName Name, const FString Value);
    void SetSoftObjectPathParameter(class UPCGGraphInterface* GraphInterface, const FName Name, const FSoftObjectPath& Value);
    void SetSoftObjectParameter(class UPCGGraphInterface* GraphInterface, const FName Name, const TSoftObjectPtr<UObject>& Value);
    void SetSoftClassParameter(class UPCGGraphInterface* GraphInterface, const FName Name, const TSoftClassPtr<UObject>& Value);
    void SetRotatorParameter(class UPCGGraphInterface* GraphInterface, const FName Name, const FRotator& Value);
    void SetQuaternionParameter(class UPCGGraphInterface* GraphInterface, const FName Name, const FQuat& Value);
    void SetObjectParameter(class UPCGGraphInterface* GraphInterface, const FName Name, class UObject* Value);
    void SetNameParameter(class UPCGGraphInterface* GraphInterface, const FName Name, const FName Value);
    void SetInt64Parameter(class UPCGGraphInterface* GraphInterface, const FName Name, const int64 Value);
    void SetInt32Parameter(class UPCGGraphInterface* GraphInterface, const FName Name, const int32 Value);
    void SetFloatParameter(class UPCGGraphInterface* GraphInterface, const FName Name, const float Value);
    void SetEnumParameter(class UPCGGraphInterface* GraphInterface, const FName Name, const uint8 Value, const class UEnum* Enum);
    void SetDoubleParameter(class UPCGGraphInterface* GraphInterface, const FName Name, const double Value);
    void SetClassParameter(class UPCGGraphInterface* GraphInterface, const FName Name, UClass* Value);
    void SetByteParameter(class UPCGGraphInterface* GraphInterface, const FName Name, const uint8 Value);
    void SetBoolParameter(class UPCGGraphInterface* GraphInterface, const FName Name, const bool bValue);
    bool IsOverridden(const class UPCGGraphInterface* GraphInterface, const FName Name);
    FVector GetVectorParameter(const class UPCGGraphInterface* GraphInterface, const FName Name);
    FVector4 GetVector4Parameter(const class UPCGGraphInterface* GraphInterface, const FName Name);
    FVector2D GetVector2DParameter(const class UPCGGraphInterface* GraphInterface, const FName Name);
    FTransform GetTransformParameter(const class UPCGGraphInterface* GraphInterface, const FName Name);
    FString GetStringParameter(const class UPCGGraphInterface* GraphInterface, const FName Name);
    FSoftObjectPath GetSoftObjectPathParameter(const class UPCGGraphInterface* GraphInterface, const FName Name);
    TSoftObjectPtr<UObject> GetSoftObjectParameter(const class UPCGGraphInterface* GraphInterface, const FName Name);
    TSoftClassPtr<UObject> GetSoftClassParameter(const class UPCGGraphInterface* GraphInterface, const FName Name);
    FRotator GetRotatorParameter(const class UPCGGraphInterface* GraphInterface, const FName Name);
    FQuat GetQuaternionParameter(const class UPCGGraphInterface* GraphInterface, const FName Name);
    class UObject* GetObjectParameter(const class UPCGGraphInterface* GraphInterface, const FName Name);
    FName GetNameParameter(const class UPCGGraphInterface* GraphInterface, const FName Name);
    int64 GetInt64Parameter(const class UPCGGraphInterface* GraphInterface, const FName Name);
    int32 GetInt32Parameter(const class UPCGGraphInterface* GraphInterface, const FName Name);
    float GetFloatParameter(const class UPCGGraphInterface* GraphInterface, const FName Name);
    uint8 GetEnumParameter(const class UPCGGraphInterface* GraphInterface, const FName Name);
    double GetDoubleParameter(const class UPCGGraphInterface* GraphInterface, const FName Name);
    UClass* GetClassParameter(const class UPCGGraphInterface* GraphInterface, const FName Name);
    uint8 GetByteParameter(const class UPCGGraphInterface* GraphInterface, const FName Name);
    bool GetBoolParameter(const class UPCGGraphInterface* GraphInterface, const FName Name);
}; // Size: 0x28

class UPCGHiGenGridSizeSettings : public UPCGSettings
{
    EPCGHiGenGrid HiGenGridSize;                                                      // 0x00A8 (size: 0x4)

}; // Size: 0xB0

class UPCGIndirectionSettings : public UPCGSettings
{
    EPCGProxyInterfaceMode ProxyInterfaceMode;                                        // 0x00A8 (size: 0x1)
    TSubclassOf<class UPCGSettings> SettingsClass;                                    // 0x00B0 (size: 0x8)
    TSubclassOf<class UPCGBlueprintElement> BlueprintElementClass;                    // 0x00B8 (size: 0x8)
    TSoftObjectPtr<UPCGSettings> Settings;                                            // 0x00C0 (size: 0x28)
    bool bTagOutputsBasedOnOutputPins;                                                // 0x00E8 (size: 0x1)

}; // Size: 0xF0

class UPCGInnerIntersectionSettings : public UPCGSettings
{
    EPCGIntersectionDensityFunction DensityFunction;                                  // 0x00A8 (size: 0x1)
    bool bKeepZeroDensityPoints;                                                      // 0x00A9 (size: 0x1)

}; // Size: 0xB0

class UPCGInstanceDataPackerBase : public UObject
{

    void PackInstances(FPCGContext& Context, const class UPCGSpatialData* InSpatialData, const FPCGMeshInstanceList& InstanceList, FPCGPackedCustomData& OutPackedCustomData);
    void PackCustomDataFromAttributes(const FPCGMeshInstanceList& InstanceList, const class UPCGMetadata* MetaData, const TArray<FName>& AttributeNames, FPCGPackedCustomData& OutPackedCustomData);
    bool AddTypeToPacking(int32 TypeId, FPCGPackedCustomData& OutPackedCustomData);
}; // Size: 0x28

class UPCGInstanceDataPackerByAttribute : public UPCGInstanceDataPackerBase
{
    TArray<FName> AttributeNames;                                                     // 0x0028 (size: 0x10)

}; // Size: 0x38

class UPCGInstanceDataPackerByRegex : public UPCGInstanceDataPackerBase
{
    TArray<FString> RegexPatterns;                                                    // 0x0028 (size: 0x10)

}; // Size: 0x38

class UPCGIntersectionData : public UPCGSpatialDataWithPointCache
{
    EPCGIntersectionDensityFunction DensityFunction;                                  // 0x00D0 (size: 0x1)
    class UPCGSpatialData* A;                                                         // 0x00D8 (size: 0x8)
    class UPCGSpatialData* B;                                                         // 0x00E0 (size: 0x8)
    FBox CachedBounds;                                                                // 0x00E8 (size: 0x38)
    FBox CachedStrictBounds;                                                          // 0x0120 (size: 0x38)

    void Initialize(const class UPCGSpatialData* InA, const class UPCGSpatialData* InB);
}; // Size: 0x158

class UPCGLandscapeCache : public UObject
{
    EPCGLandscapeCacheSerializationMode SerializationMode;                            // 0x0028 (size: 0x1)
    EPCGLandscapeCacheSerializationContents CookedSerializedContents;                 // 0x0029 (size: 0x1)
    TSet<FName> CachedLayerNames;                                                     // 0x0080 (size: 0x50)

    void PrimeCache();
    void ClearCache();
}; // Size: 0xE0

class UPCGLandscapeData : public UPCGSurfaceData
{
    TArray<TSoftObjectPtr<ALandscapeProxy>> Landscapes;                               // 0x0130 (size: 0x10)
    FBox Bounds;                                                                      // 0x0140 (size: 0x38)
    FPCGLandscapeDataProps DataProps;                                                 // 0x0178 (size: 0x5)

}; // Size: 0x1B0

class UPCGLandscapeSplineData : public UPCGPolyLineData
{
    TWeakObjectPtr<class ULandscapeSplinesComponent> Spline;                          // 0x00D0 (size: 0x8)

}; // Size: 0xF0

class UPCGLinearDensityRemapSettings : public UPCGSettings
{
    float RemapMin;                                                                   // 0x00A8 (size: 0x4)
    float RemapMax;                                                                   // 0x00AC (size: 0x4)
    bool bMultiplyDensity;                                                            // 0x00B0 (size: 0x1)

}; // Size: 0xB8

class UPCGLoadDataAssetSettings : public UPCGSettings
{
    TSoftObjectPtr<UPCGDataAsset> Asset;                                              // 0x00A8 (size: 0x28)
    TArray<FPCGPinProperties> Pins;                                                   // 0x00D0 (size: 0x10)
    FString AssetName;                                                                // 0x00E0 (size: 0x10)
    bool bWarnIfNoAsset;                                                              // 0x00F0 (size: 0x1)
    bool bSynchronousLoad;                                                            // 0x00F1 (size: 0x1)
    bool bTagOutputsBasedOnOutputPins;                                                // 0x00F2 (size: 0x1)

}; // Size: 0xF8

class UPCGLoadDataTableSettings : public UPCGExternalDataSettings
{
    TSoftObjectPtr<UDataTable> DataTable;                                             // 0x00F8 (size: 0x28)
    EPCGExclusiveDataType OutputType;                                                 // 0x0120 (size: 0x1)
    bool bSynchronousLoad;                                                            // 0x0121 (size: 0x1)

}; // Size: 0x128

class UPCGLoopSettings : public UPCGSubgraphSettings
{
    bool bUseGraphDefaultPinUsage;                                                    // 0x00B8 (size: 0x1)
    FString LoopPins;                                                                 // 0x00C0 (size: 0x10)
    FString FeedbackPins;                                                             // 0x00D0 (size: 0x10)

}; // Size: 0xE0

class UPCGMakeConcreteSettings : public UPCGSettings
{
}; // Size: 0xA8

class UPCGManagedActors : public UPCGManagedResource
{
    TSet<TSoftObjectPtr<AActor>> GeneratedActors;                                     // 0x0038 (size: 0x50)

}; // Size: 0x88

class UPCGManagedComponent : public UPCGManagedResource
{
    TSoftObjectPtr<UActorComponent> GeneratedComponent;                               // 0x0038 (size: 0x28)

}; // Size: 0x60

class UPCGManagedDebugDrawComponent : public UPCGManagedComponent
{
}; // Size: 0x60

class UPCGManagedDebugStringMessageKey : public UPCGManagedResource
{
    uint64 HashKey;                                                                   // 0x0038 (size: 0x8)

}; // Size: 0x40

class UPCGManagedISMComponent : public UPCGManagedComponent
{
    bool bHasDescriptor;                                                              // 0x0060 (size: 0x1)
    FISMComponentDescriptor Descriptor;                                               // 0x0068 (size: 0x218)
    bool bHasRootLocation;                                                            // 0x0280 (size: 0x1)
    FVector RootLocation;                                                             // 0x0288 (size: 0x18)
    uint64 SettingsUID;                                                               // 0x02A0 (size: 0x8)

}; // Size: 0x2B0

class UPCGManagedResource : public UObject
{
    FPCGCrc Crc;                                                                      // 0x0028 (size: 0x8)
    bool bIsMarkedUnused;                                                             // 0x0030 (size: 0x1)

}; // Size: 0x38

class UPCGMatchAndSetAttributesSettings : public UPCGSettings
{
    bool bMatchAttributes;                                                            // 0x00A8 (size: 0x1)
    FPCGAttributePropertyInputSelector InputAttribute;                                // 0x00B0 (size: 0x28)
    FName MatchAttribute;                                                             // 0x00D8 (size: 0x8)
    bool bKeepUnmatched;                                                              // 0x00E0 (size: 0x1)
    bool bFindNearest;                                                                // 0x00E1 (size: 0x1)
    EPCGMatchMaxDistanceMode MaxDistanceMode;                                         // 0x00E4 (size: 0x4)
    FPCGMetadataTypesConstantStruct MaxDistanceForNearestMatch;                       // 0x00F0 (size: 0x170)
    FPCGAttributePropertyInputSelector MaxDistanceInputAttribute;                     // 0x0260 (size: 0x28)
    bool bUseInputWeightAttribute;                                                    // 0x0288 (size: 0x1)
    FPCGAttributePropertyInputSelector InputWeightAttribute;                          // 0x0290 (size: 0x28)
    bool bUseWeightAttribute;                                                         // 0x02B8 (size: 0x1)
    FName WeightAttribute;                                                            // 0x02BC (size: 0x8)
    bool bWarnIfNoMatchData;                                                          // 0x02C4 (size: 0x1)

}; // Size: 0x2D0

class UPCGMatchAndSetBase : public UObject
{
    EPCGMetadataTypes Type;                                                           // 0x0028 (size: 0x1)
    EPCGMetadataTypesConstantStructStringMode StringMode;                             // 0x002C (size: 0x4)

    bool ValidatePreconditions(const class UPCGPointData* InPointData);
    void MatchAndSet(FPCGContext& Context, const class UPCGPointMatchAndSetSettings* InSettings, const class UPCGPointData* InPointData, class UPCGPointData* OutPointData);
}; // Size: 0x30

class UPCGMatchAndSetByAttribute : public UPCGMatchAndSetBase
{
    FName MatchSourceAttribute;                                                       // 0x0030 (size: 0x8)
    EPCGMetadataTypes MatchSourceType;                                                // 0x0038 (size: 0x1)
    EPCGMetadataTypesConstantStructStringMode MatchSourceStringMode;                  // 0x003C (size: 0x4)
    TArray<FPCGMatchAndSetByAttributeEntry> Entries;                                  // 0x0040 (size: 0x10)

}; // Size: 0x50

class UPCGMatchAndSetWeighted : public UPCGMatchAndSetBase
{
    TArray<FPCGMatchAndSetWeightedEntry> Entries;                                     // 0x0030 (size: 0x10)
    bool bShouldMutateSeed;                                                           // 0x0040 (size: 0x1)

}; // Size: 0x48

class UPCGMatchAndSetWeightedByCategory : public UPCGMatchAndSetBase
{
    FName CategoryAttribute;                                                          // 0x0030 (size: 0x8)
    EPCGMetadataTypes CategoryType;                                                   // 0x0038 (size: 0x1)
    EPCGMetadataTypesConstantStructStringMode CategoryStringMode;                     // 0x003C (size: 0x4)
    TArray<FPCGMatchAndSetWeightedByCategoryEntryList> Categories;                    // 0x0040 (size: 0x10)
    bool bShouldMutateSeed;                                                           // 0x0050 (size: 0x1)

}; // Size: 0x58

class UPCGMergeAttributesSettings : public UPCGSettings
{
}; // Size: 0xA8

class UPCGMergeSettings : public UPCGSettings
{
    bool bMergeMetadata;                                                              // 0x00A8 (size: 0x1)

}; // Size: 0xB0

class UPCGMeshSelectorBase : public UObject
{
}; // Size: 0x28

class UPCGMeshSelectorByAttribute : public UPCGMeshSelectorBase
{
    FName AttributeName;                                                              // 0x0028 (size: 0x8)
    FSoftISMComponentDescriptor TemplateDescriptor;                                   // 0x0030 (size: 0x258)
    bool bUseAttributeMaterialOverrides;                                              // 0x0288 (size: 0x1)
    TArray<FName> MaterialOverrideAttributes;                                         // 0x0290 (size: 0x10)

}; // Size: 0x2A0

class UPCGMeshSelectorWeighted : public UPCGMeshSelectorBase
{
    TArray<FPCGMeshSelectorWeightedEntry> MeshEntries;                                // 0x0028 (size: 0x10)
    bool bUseAttributeMaterialOverrides;                                              // 0x0038 (size: 0x1)
    TArray<FName> MaterialOverrideAttributes;                                         // 0x0040 (size: 0x10)

}; // Size: 0x50

class UPCGMeshSelectorWeightedByCategory : public UPCGMeshSelectorBase
{
    FName CategoryAttribute;                                                          // 0x0028 (size: 0x8)
    TArray<FPCGWeightedByCategoryEntryList> Entries;                                  // 0x0030 (size: 0x10)
    bool bUseAttributeMaterialOverrides;                                              // 0x0040 (size: 0x1)
    TArray<FName> MaterialOverrideAttributes;                                         // 0x0048 (size: 0x10)

}; // Size: 0x58

class UPCGMetadata : public UObject
{
    class UPCGMetadata* Parent;                                                       // 0x0028 (size: 0x8)
    TSet<TWeakObjectPtr<UPCGMetadata>> OtherParents;                                  // 0x0030 (size: 0x50)

    void SetPointAttributes(const FPCGPoint& Point, const class UPCGMetadata* MetaData, FPCGPoint& OutPoint);
    void SetAttributesByKey(int64 Key, const class UPCGMetadata* InMetaData, int64 TargetKey, int64& OutKey);
    void ResetWeightedAttributesByKey(int64 TargetKey, int64& OutKey);
    void ResetPointWeightedAttributes(FPCGPoint& OutPoint);
    bool RenameAttribute(FName AttributeToRename, FName NewAttributeName);
    void MergePointAttributes(const FPCGPoint& PointA, const class UPCGMetadata* MetadataA, const FPCGPoint& PointB, const class UPCGMetadata* MetadataB, FPCGPoint& TargetPoint, EPCGMetadataOp Op);
    void MergeAttributesByKey(int64 KeyA, const class UPCGMetadata* MetadataA, int64 KeyB, const class UPCGMetadata* MetadataB, int64 TargetKey, EPCGMetadataOp Op, int64& OutKey);
    void K2_InitializeAsCopyWithAttributeFilter(const class UPCGMetadata* InMetadataToCopy, const TSet<FName>& InFilteredAttributes, const TArray<int64>& InOptionalEntriesToCopy, EPCGMetadataFilterMode InFilterMode);
    void K2_InitializeAsCopy(const class UPCGMetadata* InMetadataToCopy, const TArray<int64>& InOptionalEntriesToCopy);
    void InitializeWithAttributeFilter(const class UPCGMetadata* InParent, const TSet<FName>& InFilteredAttributes, EPCGMetadataFilterMode InFilterMode);
    void Initialize(const class UPCGMetadata* InParent);
    bool HasCommonAttributes(const class UPCGMetadata* InMetaData);
    bool HasAttribute(FName AttributeName);
    int64 GetItemCountForChild();
    void GetAttributes(TArray<FName>& AttributeNames, TArray<EPCGMetadataTypes>& AttributeTypes);
    int32 GetAttributeCount();
    void Flatten();
    void DeleteAttribute(FName AttributeName);
    class UPCGMetadata* CreateVectorAttribute(FName AttributeName, FVector DefaultValue, bool bAllowsInterpolation, bool bOverrideParent);
    class UPCGMetadata* CreateVector4Attribute(FName AttributeName, FVector4 DefaultValue, bool bAllowsInterpolation, bool bOverrideParent);
    class UPCGMetadata* CreateVector2Attribute(FName AttributeName, FVector2D DefaultValue, bool bAllowsInterpolation, bool bOverrideParent);
    class UPCGMetadata* CreateTransformAttribute(FName AttributeName, FTransform DefaultValue, bool bAllowsInterpolation, bool bOverrideParent);
    class UPCGMetadata* CreateStringAttribute(FName AttributeName, FString DefaultValue, bool bAllowsInterpolation, bool bOverrideParent);
    class UPCGMetadata* CreateSoftObjectPathAttribute(FName AttributeName, const FSoftObjectPath& DefaultValue, bool bAllowsInterpolation, bool bOverrideParent);
    class UPCGMetadata* CreateSoftClassPathAttribute(FName AttributeName, const FSoftClassPath& DefaultValue, bool bAllowsInterpolation, bool bOverrideParent);
    class UPCGMetadata* CreateRotatorAttribute(FName AttributeName, FRotator DefaultValue, bool bAllowsInterpolation, bool bOverrideParent);
    class UPCGMetadata* CreateQuatAttribute(FName AttributeName, FQuat DefaultValue, bool bAllowsInterpolation, bool bOverrideParent);
    class UPCGMetadata* CreateNameAttribute(FName AttributeName, FName DefaultValue, bool bAllowsInterpolation, bool bOverrideParent);
    class UPCGMetadata* CreateInteger64Attribute(FName AttributeName, int64 DefaultValue, bool bAllowsInterpolation, bool bOverrideParent);
    class UPCGMetadata* CreateInteger32Attribute(FName AttributeName, int32 DefaultValue, bool bAllowsInterpolation, bool bOverrideParent);
    class UPCGMetadata* CreateFloatAttribute(FName AttributeName, float DefaultValue, bool bAllowsInterpolation, bool bOverrideParent);
    class UPCGMetadata* CreateDoubleAttribute(FName AttributeName, double DefaultValue, bool bAllowsInterpolation, bool bOverrideParent);
    class UPCGMetadata* CreateBoolAttribute(FName AttributeName, bool DefaultValue, bool bAllowsInterpolation, bool bOverrideParent);
    bool CopyExistingAttribute(FName AttributeToCopy, FName NewAttributeName, bool bKeepParent);
    void CopyAttributes(const class UPCGMetadata* InOther);
    void CopyAttribute(const class UPCGMetadata* InOther, FName AttributeToCopy, FName NewAttributeName);
    void ClearAttribute(FName AttributeToClear);
    int64 AddEntry(int64 ParentEntryKey);
    void AddAttributesFiltered(const class UPCGMetadata* InOther, const TSet<FName>& InFilteredAttributes, EPCGMetadataFilterMode InFilterMode);
    void AddAttributes(const class UPCGMetadata* InOther);
    void AddAttribute(const class UPCGMetadata* InOther, FName AttributeName);
    void AccumulateWeightedAttributesByKey(int64 Key, const class UPCGMetadata* MetaData, float Weight, bool bSetNonInterpolableAttributes, int64 TargetKey, int64& OutKey);
    void AccumulatePointWeightedAttributes(const FPCGPoint& InPoint, const class UPCGMetadata* InMetaData, float Weight, bool bSetNonInterpolableAttributes, FPCGPoint& OutPoint);
}; // Size: 0x108

class UPCGMetadataAccessorHelpers : public UBlueprintFunctionLibrary
{

    void SetVectorAttributeByMetadataKey(int64& Key, class UPCGMetadata* MetaData, FName AttributeName, const FVector& Value);
    void SetVectorAttribute(FPCGPoint& Point, class UPCGMetadata* MetaData, FName AttributeName, const FVector& Value);
    void SetVector4AttributeByMetadataKey(int64& Key, class UPCGMetadata* MetaData, FName AttributeName, const FVector4& Value);
    void SetVector4Attribute(FPCGPoint& Point, class UPCGMetadata* MetaData, FName AttributeName, const FVector4& Value);
    void SetVector2AttributeByMetadataKey(int64& Key, class UPCGMetadata* MetaData, FName AttributeName, const FVector2D& Value);
    void SetVector2Attribute(FPCGPoint& Point, class UPCGMetadata* MetaData, FName AttributeName, const FVector2D& Value);
    void SetTransformAttributeByMetadataKey(int64& Key, class UPCGMetadata* MetaData, FName AttributeName, const FTransform& Value);
    void SetTransformAttribute(FPCGPoint& Point, class UPCGMetadata* MetaData, FName AttributeName, const FTransform& Value);
    void SetStringAttributeByMetadataKey(int64& Key, class UPCGMetadata* MetaData, FName AttributeName, FString Value);
    void SetStringAttribute(FPCGPoint& Point, class UPCGMetadata* MetaData, FName AttributeName, FString Value);
    void SetSoftObjectPathAttributeByMetadataKey(int64& Key, class UPCGMetadata* MetaData, FName AttributeName, const FSoftObjectPath& Value);
    void SetSoftObjectPathAttribute(FPCGPoint& Point, class UPCGMetadata* MetaData, FName AttributeName, const FSoftObjectPath& Value);
    void SetSoftClassPathAttributeByMetadataKey(int64& Key, class UPCGMetadata* MetaData, FName AttributeName, const FSoftClassPath& Value);
    void SetSoftClassPathAttribute(FPCGPoint& Point, class UPCGMetadata* MetaData, FName AttributeName, const FSoftClassPath& Value);
    void SetRotatorAttributeByMetadataKey(int64& Key, class UPCGMetadata* MetaData, FName AttributeName, const FRotator& Value);
    void SetRotatorAttribute(FPCGPoint& Point, class UPCGMetadata* MetaData, FName AttributeName, const FRotator& Value);
    void SetQuatAttributeByMetadataKey(int64& Key, class UPCGMetadata* MetaData, FName AttributeName, const FQuat& Value);
    void SetQuatAttribute(FPCGPoint& Point, class UPCGMetadata* MetaData, FName AttributeName, const FQuat& Value);
    void SetNameAttribute(FPCGPoint& Point, class UPCGMetadata* MetaData, FName AttributeName, const FName& Value);
    void SetInteger64AttributeByMetadataKey(int64& Key, class UPCGMetadata* MetaData, FName AttributeName, int64 Value);
    void SetInteger64Attribute(FPCGPoint& Point, class UPCGMetadata* MetaData, FName AttributeName, int64 Value);
    void SetInteger32AttributeByMetadataKey(int64& Key, class UPCGMetadata* MetaData, FName AttributeName, int32 Value);
    void SetInteger32Attribute(FPCGPoint& Point, class UPCGMetadata* MetaData, FName AttributeName, int32 Value);
    void SetFloatAttributeByMetadataKey(int64& Key, class UPCGMetadata* MetaData, FName AttributeName, float Value);
    void SetFloatAttribute(FPCGPoint& Point, class UPCGMetadata* MetaData, FName AttributeName, float Value);
    void SetDoubleAttributeByMetadataKey(int64& Key, class UPCGMetadata* MetaData, FName AttributeName, double Value);
    void SetDoubleAttribute(FPCGPoint& Point, class UPCGMetadata* MetaData, FName AttributeName, double Value);
    void SetBoolAttributeByMetadataKey(int64& Key, class UPCGMetadata* MetaData, FName AttributeName, bool Value);
    void SetBoolAttribute(FPCGPoint& Point, class UPCGMetadata* MetaData, FName AttributeName, bool Value);
    bool SetAttributeFromPropertyByMetadataKey(int64& Key, class UPCGMetadata* MetaData, FName AttributeName, const class UObject* Object, FName PropertyName);
    void InitializeMetadata(FPCGPoint& Point, class UPCGMetadata* MetaData, const FPCGPoint& ParentPoint, const class UPCGMetadata* ParentMetadata);
    bool HasAttributeSetByMetadataKey(int64 Key, const class UPCGMetadata* MetaData, FName AttributeName);
    bool HasAttributeSet(const FPCGPoint& Point, const class UPCGMetadata* MetaData, FName AttributeName);
    FVector GetVectorAttributeByMetadataKey(int64 Key, const class UPCGMetadata* MetaData, FName AttributeName);
    FVector GetVectorAttribute(const FPCGPoint& Point, const class UPCGMetadata* MetaData, FName AttributeName);
    FVector4 GetVector4AttributeByMetadataKey(int64 Key, const class UPCGMetadata* MetaData, FName AttributeName);
    FVector4 GetVector4Attribute(const FPCGPoint& Point, const class UPCGMetadata* MetaData, FName AttributeName);
    FVector2D GetVector2AttributeByMetadataKey(int64 Key, const class UPCGMetadata* MetaData, FName AttributeName);
    FVector2D GetVector2Attribute(const FPCGPoint& Point, const class UPCGMetadata* MetaData, FName AttributeName);
    FTransform GetTransformAttributeByMetadataKey(int64 Key, const class UPCGMetadata* MetaData, FName AttributeName);
    FTransform GetTransformAttribute(const FPCGPoint& Point, const class UPCGMetadata* MetaData, FName AttributeName);
    FString GetStringAttributeByMetadataKey(int64 Key, const class UPCGMetadata* MetaData, FName AttributeName);
    FString GetStringAttribute(const FPCGPoint& Point, const class UPCGMetadata* MetaData, FName AttributeName);
    FSoftObjectPath GetSoftObjectPathAttributeByMetadataKey(int64 Key, const class UPCGMetadata* MetaData, FName AttributeName);
    FSoftObjectPath GetSoftObjectPathAttribute(const FPCGPoint& Point, const class UPCGMetadata* MetaData, FName AttributeName);
    FSoftClassPath GetSoftClassPathAttributeByMetadataKey(int64 Key, const class UPCGMetadata* MetaData, FName AttributeName);
    FSoftClassPath GetSoftClassPathAttribute(const FPCGPoint& Point, const class UPCGMetadata* MetaData, FName AttributeName);
    FRotator GetRotatorAttributeByMetadataKey(int64 Key, const class UPCGMetadata* MetaData, FName AttributeName);
    FRotator GetRotatorAttribute(const FPCGPoint& Point, const class UPCGMetadata* MetaData, FName AttributeName);
    FQuat GetQuatAttributeByMetadataKey(int64 Key, const class UPCGMetadata* MetaData, FName AttributeName);
    FQuat GetQuatAttribute(const FPCGPoint& Point, const class UPCGMetadata* MetaData, FName AttributeName);
    FName GetNameAttribute(const FPCGPoint& Point, const class UPCGMetadata* MetaData, FName AttributeName);
    int64 GetInteger64AttributeByMetadataKey(int64 Key, const class UPCGMetadata* MetaData, FName AttributeName);
    int64 GetInteger64Attribute(const FPCGPoint& Point, const class UPCGMetadata* MetaData, FName AttributeName);
    int32 GetInteger32AttributeByMetadataKey(int64 Key, const class UPCGMetadata* MetaData, FName AttributeName);
    int32 GetInteger32Attribute(const FPCGPoint& Point, const class UPCGMetadata* MetaData, FName AttributeName);
    float GetFloatAttributeByMetadataKey(int64 Key, const class UPCGMetadata* MetaData, FName AttributeName);
    float GetFloatAttribute(const FPCGPoint& Point, const class UPCGMetadata* MetaData, FName AttributeName);
    double GetDoubleAttributeByMetadataKey(int64 Key, const class UPCGMetadata* MetaData, FName AttributeName);
    double GetDoubleAttribute(const FPCGPoint& Point, const class UPCGMetadata* MetaData, FName AttributeName);
    bool GetBoolAttributeByMetadataKey(int64 Key, const class UPCGMetadata* MetaData, FName AttributeName);
    bool GetBoolAttribute(const FPCGPoint& Point, const class UPCGMetadata* MetaData, FName AttributeName);
    void CopyPoint(const FPCGPoint& InPoint, FPCGPoint& OutPoint, bool bCopyMetadata, const class UPCGMetadata* InMetaData, class UPCGMetadata* OutMetadata);
}; // Size: 0x28

class UPCGMetadataBitwiseSettings : public UPCGMetadataSettingsBase
{
    EPCGMetadataBitwiseOperation Operation;                                           // 0x00D8 (size: 0x2)
    FPCGAttributePropertyInputSelector InputSource1;                                  // 0x00E0 (size: 0x28)
    FPCGAttributePropertyInputSelector InputSource2;                                  // 0x0108 (size: 0x28)

}; // Size: 0x130

class UPCGMetadataBooleanSettings : public UPCGMetadataSettingsBase
{
    EPCGMetadataBooleanOperation Operation;                                           // 0x00D8 (size: 0x2)
    FPCGAttributePropertyInputSelector InputSource1;                                  // 0x00E0 (size: 0x28)
    FPCGAttributePropertyInputSelector InputSource2;                                  // 0x0108 (size: 0x28)

}; // Size: 0x130

class UPCGMetadataBreakTransformSettings : public UPCGMetadataSettingsBase
{
    FPCGAttributePropertyInputSelector InputSource;                                   // 0x00D8 (size: 0x28)

}; // Size: 0x100

class UPCGMetadataBreakVectorSettings : public UPCGMetadataSettingsBase
{
    FPCGAttributePropertyInputSelector InputSource;                                   // 0x00D8 (size: 0x28)

}; // Size: 0x100

class UPCGMetadataCompareSettings : public UPCGMetadataSettingsBase
{
    EPCGMetadataCompareOperation Operation;                                           // 0x00D8 (size: 0x2)
    FPCGAttributePropertyInputSelector InputSource1;                                  // 0x00E0 (size: 0x28)
    FPCGAttributePropertyInputSelector InputSource2;                                  // 0x0108 (size: 0x28)
    double Tolerance;                                                                 // 0x0130 (size: 0x8)

}; // Size: 0x138

class UPCGMetadataMakeRotatorSettings : public UPCGMetadataSettingsBase
{
    FPCGAttributePropertyInputSelector InputSource1;                                  // 0x00D8 (size: 0x28)
    FPCGAttributePropertyInputSelector InputSource2;                                  // 0x0100 (size: 0x28)
    FPCGAttributePropertyInputSelector InputSource3;                                  // 0x0128 (size: 0x28)
    EPCGMetadataMakeRotatorOp Operation;                                              // 0x0150 (size: 0x1)

}; // Size: 0x158

class UPCGMetadataMakeTransformSettings : public UPCGMetadataSettingsBase
{
    FPCGAttributePropertyInputSelector InputSource1;                                  // 0x00D8 (size: 0x28)
    FPCGAttributePropertyInputSelector InputSource2;                                  // 0x0100 (size: 0x28)
    FPCGAttributePropertyInputSelector InputSource3;                                  // 0x0128 (size: 0x28)

}; // Size: 0x150

class UPCGMetadataMakeVectorSettings : public UPCGMetadataSettingsBase
{
    FPCGAttributePropertyInputSelector InputSource1;                                  // 0x00D8 (size: 0x28)
    FPCGAttributePropertyInputSelector InputSource2;                                  // 0x0100 (size: 0x28)
    FPCGAttributePropertyInputSelector InputSource3;                                  // 0x0128 (size: 0x28)
    FPCGAttributePropertyInputSelector InputSource4;                                  // 0x0150 (size: 0x28)
    EPCGMetadataTypes OutputType;                                                     // 0x0178 (size: 0x1)
    EPCGMetadataMakeVector3 MakeVector3Op;                                            // 0x0179 (size: 0x1)
    EPCGMetadataMakeVector4 MakeVector4Op;                                            // 0x017A (size: 0x1)

}; // Size: 0x180

class UPCGMetadataMathsSettings : public UPCGMetadataSettingsBase
{
    EPCGMetadataMathsOperation Operation;                                             // 0x00D8 (size: 0x2)
    bool bForceRoundingOpToInt;                                                       // 0x00DA (size: 0x1)
    bool bForceOpToDouble;                                                            // 0x00DB (size: 0x1)
    FPCGAttributePropertyInputSelector InputSource1;                                  // 0x00E0 (size: 0x28)
    FPCGAttributePropertyInputSelector InputSource2;                                  // 0x0108 (size: 0x28)
    FPCGAttributePropertyInputSelector InputSource3;                                  // 0x0130 (size: 0x28)

}; // Size: 0x158

class UPCGMetadataOperationSettings : public UPCGSettings
{
    FPCGAttributePropertyInputSelector InputSource;                                   // 0x00A8 (size: 0x28)
    FPCGAttributePropertyOutputSelector OutputTarget;                                 // 0x00D0 (size: 0x28)
    bool bCopyAllAttributes;                                                          // 0x00F8 (size: 0x1)

}; // Size: 0x100

class UPCGMetadataPartitionSettings : public UPCGSettings
{
    TArray<FPCGAttributePropertyInputSelector> PartitionAttributeSelectors;           // 0x00A8 (size: 0x10)
    FString PartitionAttributeNames;                                                  // 0x00B8 (size: 0x10)

}; // Size: 0xC8

class UPCGMetadataRenameSettings : public UPCGSettings
{
    FName AttributeToRename;                                                          // 0x00A8 (size: 0x8)
    FName NewAttributeName;                                                           // 0x00B0 (size: 0x8)

}; // Size: 0xB8

class UPCGMetadataRotatorSettings : public UPCGMetadataSettingsBase
{
    EPCGMetadataRotatorOperation Operation;                                           // 0x00D8 (size: 0x2)
    FPCGAttributePropertyInputSelector InputSource1;                                  // 0x00E0 (size: 0x28)
    FPCGAttributePropertyInputSelector InputSource2;                                  // 0x0108 (size: 0x28)
    FPCGAttributePropertyInputSelector InputSource3;                                  // 0x0130 (size: 0x28)

}; // Size: 0x158

class UPCGMetadataSettingsBase : public UPCGSettings
{
    FPCGAttributePropertyOutputSelector OutputTarget;                                 // 0x00A8 (size: 0x28)
    FName OutputDataFromPin;                                                          // 0x00D0 (size: 0x8)

    TArray<FName> GetOutputDataFromPinOptions();
}; // Size: 0xD8

class UPCGMetadataStringOpSettings : public UPCGMetadataSettingsBase
{
    EPCGMetadataStringOperation Operation;                                            // 0x00D8 (size: 0x2)
    FPCGAttributePropertyInputSelector InputSource1;                                  // 0x00E0 (size: 0x28)
    FPCGAttributePropertyInputSelector InputSource2;                                  // 0x0108 (size: 0x28)

}; // Size: 0x130

class UPCGMetadataTransformSettings : public UPCGMetadataSettingsBase
{
    EPCGMetadataTransformOperation Operation;                                         // 0x00D8 (size: 0x2)
    EPCGTransformLerpMode TransformLerpMode;                                          // 0x00DA (size: 0x2)
    FPCGAttributePropertyInputSelector InputSource1;                                  // 0x00E0 (size: 0x28)
    FPCGAttributePropertyInputSelector InputSource2;                                  // 0x0108 (size: 0x28)
    FPCGAttributePropertyInputSelector InputSource3;                                  // 0x0130 (size: 0x28)

}; // Size: 0x158

class UPCGMetadataTrigSettings : public UPCGMetadataSettingsBase
{
    EPCGMetadataTrigOperation Operation;                                              // 0x00D8 (size: 0x2)
    FPCGAttributePropertyInputSelector InputSource1;                                  // 0x00E0 (size: 0x28)
    FPCGAttributePropertyInputSelector InputSource2;                                  // 0x0108 (size: 0x28)

}; // Size: 0x130

class UPCGMetadataVectorSettings : public UPCGMetadataSettingsBase
{
    EPCGMetadataVectorOperation Operation;                                            // 0x00D8 (size: 0x2)
    FPCGAttributePropertyInputSelector InputSource1;                                  // 0x00E0 (size: 0x28)
    FPCGAttributePropertyInputSelector InputSource2;                                  // 0x0108 (size: 0x28)
    FPCGAttributePropertyInputSelector InputSource3;                                  // 0x0130 (size: 0x28)

}; // Size: 0x158

class UPCGMultiSelectSettings : public UPCGSettings
{
    EPCGControlFlowSelectionMode SelectionMode;                                       // 0x00A8 (size: 0x1)
    int32 IntegerSelection;                                                           // 0x00AC (size: 0x4)
    TArray<int32> IntOptions;                                                         // 0x00B0 (size: 0x10)
    FString StringSelection;                                                          // 0x00C0 (size: 0x10)
    TArray<FString> StringOptions;                                                    // 0x00D0 (size: 0x10)
    FEnumSelector EnumSelection;                                                      // 0x00E0 (size: 0x10)
    TArray<FName> CachedPinLabels;                                                    // 0x00F0 (size: 0x10)

}; // Size: 0x100

class UPCGMutateSeedSettings : public UPCGSettings
{
}; // Size: 0xA8

class UPCGNamedRerouteBaseSettings : public UPCGRerouteSettings
{
}; // Size: 0xA8

class UPCGNamedRerouteDeclarationSettings : public UPCGNamedRerouteBaseSettings
{
}; // Size: 0xA8

class UPCGNamedRerouteUsageSettings : public UPCGNamedRerouteBaseSettings
{
    class UPCGNamedRerouteDeclarationSettings* Declaration;                           // 0x00A8 (size: 0x8)

}; // Size: 0xB0

class UPCGNode : public UObject
{
    FName NodeTitle;                                                                  // 0x0028 (size: 0x8)
    class UPCGSettingsInterface* SettingsInterface;                                   // 0x0030 (size: 0x8)
    TArray<class UPCGNode*> OutboundNodes;                                            // 0x0038 (size: 0x10)
    TArray<class UPCGEdge*> InboundEdges;                                             // 0x0048 (size: 0x10)
    TArray<class UPCGEdge*> OutboundEdges;                                            // 0x0058 (size: 0x10)
    TArray<class UPCGPin*> InputPins;                                                 // 0x0068 (size: 0x10)
    TArray<class UPCGPin*> OutputPins;                                                // 0x0078 (size: 0x10)

    bool RemoveEdgeTo(FName FromPinLable, class UPCGNode* To, FName ToPinLabel);
    class UPCGSettings* GetSettings();
    class UPCGGraph* GetGraph();
    class UPCGNode* AddEdgeTo(FName FromPinLabel, class UPCGNode* To, FName ToPinLabel);
}; // Size: 0x88

class UPCGNormalToDensitySettings : public UPCGSettings
{
    FVector Normal;                                                                   // 0x00A8 (size: 0x18)
    double Offset;                                                                    // 0x00C0 (size: 0x8)
    double Strength;                                                                  // 0x00C8 (size: 0x8)
    PCGNormalToDensityMode DensityMode;                                               // 0x00D0 (size: 0x1)

}; // Size: 0xD8

class UPCGNumberOfElementsBaseSettings : public UPCGSettings
{
    FName OutputAttributeName;                                                        // 0x00A8 (size: 0x8)

}; // Size: 0xB0

class UPCGNumberOfEntriesSettings : public UPCGNumberOfElementsBaseSettings
{
}; // Size: 0xB0

class UPCGNumberOfPointsSettings : public UPCGNumberOfElementsBaseSettings
{
}; // Size: 0xB0

class UPCGOuterIntersectionSettings : public UPCGSettingsWithDynamicInputs
{
    EPCGIntersectionDensityFunction DensityFunction;                                  // 0x00B8 (size: 0x1)
    bool bIgnorePinsWithNoInput;                                                      // 0x00B9 (size: 0x1)
    bool bKeepZeroDensityPoints;                                                      // 0x00BA (size: 0x1)

}; // Size: 0xC0

class UPCGParamData : public UPCGData
{
    class UPCGMetadata* MetaData;                                                     // 0x0038 (size: 0x8)
    TMap<FName, int64> NameMap;                                                       // 0x0040 (size: 0x50)
    bool bHasCachedLastSelector;                                                      // 0x0090 (size: 0x1)
    FPCGAttributePropertyInputSelector CachedLastSelector;                            // 0x0098 (size: 0x28)

    class UPCGMetadata* MutableMetadata();
    int64 FindOrAddMetadataKey(const FName& InName);
    int64 FindMetadataKey(const FName& InName);
    class UPCGParamData* FilterParamsByName(const FName& InName);
    class UPCGParamData* FilterParamsByKey(int64 InKey);
    class UPCGMetadata* ConstMetadata();
}; // Size: 0xC0

class UPCGPin : public UObject
{
    class UPCGNode* node;                                                             // 0x0028 (size: 0x8)
    FName Label;                                                                      // 0x0030 (size: 0x8)
    TArray<class UPCGEdge*> Edges;                                                    // 0x0038 (size: 0x10)
    FPCGPinProperties Properties;                                                     // 0x0048 (size: 0x14)

    void SetToolTip(const FText& InTooltip);
    FText GetTooltip();
}; // Size: 0x60

class UPCGPinPropertiesBlueprintHelpers : public UBlueprintFunctionLibrary
{

    void SetRequiredPin(FPCGPinProperties& PinProperties);
    void SetNormalPin(FPCGPinProperties& PinProperties);
    void SetAllowMultipleConnections(FPCGPinProperties& PinProperties, bool bAllowMultipleConnections);
    void SetAdvancedPin(FPCGPinProperties& PinProperties);
    bool IsRequiredPin(const FPCGPinProperties& PinProperties);
    bool IsNormalPin(const FPCGPinProperties& PinProperties);
    bool IsAdvancedPin(const FPCGPinProperties& PinProperties);
    bool AllowsMultipleConnections(const FPCGPinProperties& PinProperties);
}; // Size: 0x28

class UPCGPointData : public UPCGSpatialData
{
    TArray<FPCGPoint> Points;                                                         // 0x0080 (size: 0x10)

    void SetPoints(const TArray<FPCGPoint>& InPoints);
    TArray<FPCGPoint> GetPointsCopy();
    TArray<FPCGPoint> GetPoints();
    FPCGPoint GetPoint(int32 Index);
    void CopyPointsFrom(const class UPCGPointData* InData, const TArray<int32>& InDataIndices);
}; // Size: 0x1B0

class UPCGPointExtentsModifierSettings : public UPCGSettings
{
    FVector Extents;                                                                  // 0x00A8 (size: 0x18)
    EPCGPointExtentsModifierMode Mode;                                                // 0x00C0 (size: 0x1)

}; // Size: 0xC8

class UPCGPointFromMeshSettings : public UPCGSettings
{
    TSoftObjectPtr<UStaticMesh> StaticMesh;                                           // 0x00A8 (size: 0x28)
    FName MeshPathAttributeName;                                                      // 0x00D0 (size: 0x8)
    bool bSynchronousLoad;                                                            // 0x00D8 (size: 0x1)

}; // Size: 0xE0

class UPCGPointMatchAndSetSettings : public UPCGSettings
{
    TSubclassOf<class UPCGMatchAndSetBase> MatchAndSetType;                           // 0x00A8 (size: 0x8)
    class UPCGMatchAndSetBase* MatchAndSetInstance;                                   // 0x00B0 (size: 0x8)
    FPCGAttributePropertyOutputSelector SetTarget;                                    // 0x00B8 (size: 0x28)
    EPCGMetadataTypes SetTargetType;                                                  // 0x00E0 (size: 0x1)

    void SetMatchAndSetType(TSubclassOf<class UPCGMatchAndSetBase> InMatchAndSetType);
}; // Size: 0xE8

class UPCGPointNeighborhoodSettings : public UPCGSettings
{
    double SearchDistance;                                                            // 0x00A8 (size: 0x8)
    bool bSetDistanceToAttribute;                                                     // 0x00B0 (size: 0x1)
    FName DistanceAttribute;                                                          // 0x00B4 (size: 0x8)
    bool bSetAveragePositionToAttribute;                                              // 0x00BC (size: 0x1)
    FName AveragePositionAttribute;                                                   // 0x00C0 (size: 0x8)
    EPCGPointNeighborhoodDensityMode SetDensity;                                      // 0x00C8 (size: 0x4)
    bool bSetAveragePosition;                                                         // 0x00CC (size: 0x1)
    bool bSetAverageColor;                                                            // 0x00CD (size: 0x1)
    bool bWeightedAverage;                                                            // 0x00CE (size: 0x1)

}; // Size: 0xD0

class UPCGPolyLineData : public UPCGSpatialDataWithPointCache
{
}; // Size: 0xD0

class UPCGPrimitiveData : public UPCGSpatialDataWithPointCache
{
    FVector VoxelSize;                                                                // 0x00D0 (size: 0x18)
    TWeakObjectPtr<class UPrimitiveComponent> Primitive;                              // 0x00E8 (size: 0x8)
    FBox CachedBounds;                                                                // 0x00F0 (size: 0x38)
    FBox CachedStrictBounds;                                                          // 0x0128 (size: 0x38)

}; // Size: 0x160

class UPCGPrintElementSettings : public UPCGSettings
{
    FString PrintString;                                                              // 0x00A8 (size: 0x10)
    EPCGPrintVerbosity Verbosity;                                                     // 0x00B8 (size: 0x1)
    FString CustomPrefix;                                                             // 0x00C0 (size: 0x10)
    bool bDisplayOnNode;                                                              // 0x00D0 (size: 0x1)
    bool bPrintPerComponent;                                                          // 0x00D1 (size: 0x1)
    bool bPrefixWithOwner;                                                            // 0x00D2 (size: 0x1)
    bool bPrefixWithComponent;                                                        // 0x00D3 (size: 0x1)
    bool bPrefixWithGraph;                                                            // 0x00D4 (size: 0x1)
    bool bPrefixWithNode;                                                             // 0x00D5 (size: 0x1)
    bool bEnablePrint;                                                                // 0x00D6 (size: 0x1)

}; // Size: 0xD8

class UPCGProjectionData : public UPCGSpatialDataWithPointCache
{
    class UPCGSpatialData* Source;                                                    // 0x00D0 (size: 0x8)
    class UPCGSpatialData* Target;                                                    // 0x00D8 (size: 0x8)
    FBox CachedBounds;                                                                // 0x00E0 (size: 0x38)
    FBox CachedStrictBounds;                                                          // 0x0118 (size: 0x38)
    FPCGProjectionParams ProjectionParams;                                            // 0x0150 (size: 0x20)

}; // Size: 0x170

class UPCGProjectionSettings : public UPCGSettings
{
    FPCGProjectionParams ProjectionParams;                                            // 0x00A8 (size: 0x20)
    bool bForceCollapseToPoint;                                                       // 0x00C8 (size: 0x1)
    bool bKeepZeroDensityPoints;                                                      // 0x00C9 (size: 0x1)

}; // Size: 0xD0

class UPCGQualityBranchSettings : public UPCGSettings
{
    bool bUseLowPin;                                                                  // 0x00A8 (size: 0x1)
    bool bUseMediumPin;                                                               // 0x00A9 (size: 0x1)
    bool bUseHighPin;                                                                 // 0x00AA (size: 0x1)
    bool bUseEpicPin;                                                                 // 0x00AB (size: 0x1)
    bool bUseCinematicPin;                                                            // 0x00AC (size: 0x1)

}; // Size: 0xB0

class UPCGQualitySelectSettings : public UPCGSettings
{
    bool bUseLowPin;                                                                  // 0x00A8 (size: 0x1)
    bool bUseMediumPin;                                                               // 0x00A9 (size: 0x1)
    bool bUseHighPin;                                                                 // 0x00AA (size: 0x1)
    bool bUseEpicPin;                                                                 // 0x00AB (size: 0x1)
    bool bUseCinematicPin;                                                            // 0x00AC (size: 0x1)

}; // Size: 0xB0

class UPCGRenderTargetData : public UPCGBaseTextureData
{
    class UTextureRenderTarget2D* RenderTarget;                                       // 0x01E0 (size: 0x8)

    void Initialize(class UTextureRenderTarget2D* InRenderTarget, const FTransform& InTransform);
}; // Size: 0x1F0

class UPCGReplaceTagsSettings : public UPCGSettings
{
    FString SelectedTags;                                                             // 0x00A8 (size: 0x10)
    FString ReplacedTags;                                                             // 0x00B8 (size: 0x10)

}; // Size: 0xC8

class UPCGRerouteSettings : public UPCGSettings
{
}; // Size: 0xA8

class UPCGResetPointCenterSettings : public UPCGSettings
{
    FVector PointCenterLocation;                                                      // 0x00A8 (size: 0x18)

}; // Size: 0xC0

class UPCGSampleTextureSettings : public UPCGSettings
{
    EPCGTextureMappingMethod TextureMappingMethod;                                    // 0x00A8 (size: 0x1)
    FPCGAttributePropertyInputSelector UVCoordinatesAttribute;                        // 0x00B0 (size: 0x28)
    EPCGTextureAddressMode TilingMode;                                                // 0x00D8 (size: 0x1)

}; // Size: 0xE0

class UPCGSanityCheckPointDataSettings : public UPCGSettings
{
    int32 MinPointCount;                                                              // 0x00A8 (size: 0x4)
    int32 MaxPointCount;                                                              // 0x00AC (size: 0x4)

}; // Size: 0xB0

class UPCGSchedulingPolicyBase : public UObject
{
}; // Size: 0x28

class UPCGSchedulingPolicyDistanceAndDirection : public UPCGSchedulingPolicyBase
{
    bool bUseDistance;                                                                // 0x0028 (size: 0x1)
    float DistanceWeight;                                                             // 0x002C (size: 0x4)
    bool bUseDirection;                                                               // 0x0030 (size: 0x1)
    float DirectionWeight;                                                            // 0x0034 (size: 0x4)

}; // Size: 0x38

class UPCGSelectPointsSettings : public UPCGSettings
{
    float Ratio;                                                                      // 0x00A8 (size: 0x4)

}; // Size: 0xB0

class UPCGSelfPruningSettings : public UPCGSettings
{
    FPCGSelfPruningParameters Parameters;                                             // 0x00A8 (size: 0x38)

}; // Size: 0xE0

class UPCGSettings : public UPCGSettingsInterface
{
    int32 Seed;                                                                       // 0x0040 (size: 0x4)
    bool bUseSeed;                                                                    // 0x0050 (size: 0x1)
    TArray<FPCGSettingsOverridableParam> CachedOverridableParams;                     // 0x0090 (size: 0x10)

}; // Size: 0xA8

class UPCGSettingsInstance : public UPCGSettingsInterface
{
    class UPCGSettings* Settings;                                                     // 0x0040 (size: 0x8)

}; // Size: 0x48

class UPCGSettingsInterface : public UPCGData
{
    bool bEnabled;                                                                    // 0x0038 (size: 0x1)
    bool bDebug;                                                                      // 0x0039 (size: 0x1)

}; // Size: 0x40

class UPCGSettingsWithDynamicInputs : public UPCGSettings
{
    TArray<FPCGPinProperties> DynamicInputPinProperties;                              // 0x00A8 (size: 0x10)

}; // Size: 0xB8

class UPCGSortAttributesSettings : public UPCGSettings
{
    FPCGAttributePropertyInputSelector InputSource;                                   // 0x00A8 (size: 0x28)
    EPCGSortMethod SortMethod;                                                        // 0x00D0 (size: 0x1)

}; // Size: 0xD8

class UPCGSpatialData : public UPCGData
{
    TWeakObjectPtr<class AActor> TargetActor;                                         // 0x0038 (size: 0x8)
    bool bKeepZeroDensityPoints;                                                      // 0x0040 (size: 0x1)
    class UPCGMetadata* MetaData;                                                     // 0x0048 (size: 0x8)
    bool bHasCachedLastSelector;                                                      // 0x0050 (size: 0x1)
    FPCGAttributePropertyInputSelector CachedLastSelector;                            // 0x0058 (size: 0x28)

    class UPCGUnionData* UnionWith(const class UPCGSpatialData* InOther);
    class UPCGPointData* ToPointDataWithContext(FPCGContext& Context);
    class UPCGPointData* ToPointData();
    class UPCGDifferenceData* Subtract(const class UPCGSpatialData* InOther);
    class UPCGSpatialData* ProjectOn(const class UPCGSpatialData* InOther, const FPCGProjectionParams& InParams);
    class UPCGMetadata* MutableMetadata();
    bool K2_SamplePoint(const FTransform& Transform, const FBox& Bounds, FPCGPoint& OutPoint, class UPCGMetadata* OutMetadata);
    bool K2_ProjectPoint(const FTransform& InTransform, const FBox& InBounds, const FPCGProjectionParams& InParams, FPCGPoint& OutPoint, class UPCGMetadata* OutMetadata);
    class UPCGIntersectionData* IntersectWith(const class UPCGSpatialData* InOther);
    void InitializeFromData(const class UPCGSpatialData* InSource, const class UPCGMetadata* InMetadataParentOverride, bool bInheritMetadata, bool bInheritAttributes);
    bool HasNonTrivialTransform();
    FBox GetStrictBounds();
    FVector GetNormal();
    int32 GetDimension();
    float GetDensityAtPosition(const FVector& InPosition);
    FBox GetBounds();
    class UPCGMetadata* CreateEmptyMetadata();
    class UPCGMetadata* ConstMetadata();
}; // Size: 0x80

class UPCGSpatialDataWithPointCache : public UPCGSpatialData
{
    class UPCGPointData* CachedPointData;                                             // 0x0080 (size: 0x8)
    TArray<FBox> CachedBoundedPointDataBoxes;                                         // 0x0088 (size: 0x10)
    TArray<class UPCGPointData*> CachedBoundedPointData;                              // 0x0098 (size: 0x10)

}; // Size: 0xD0

class UPCGSpatialNoiseSettings : public UPCGSettings
{
    PCGSpatialNoiseMode Mode;                                                         // 0x00A8 (size: 0x4)
    PCGSpatialNoiseMask2DMode EdgeMask2DMode;                                         // 0x00AC (size: 0x4)
    int32 Iterations;                                                                 // 0x00B0 (size: 0x4)
    bool bTiling;                                                                     // 0x00B4 (size: 0x1)
    float Brightness;                                                                 // 0x00B8 (size: 0x4)
    float Contrast;                                                                   // 0x00BC (size: 0x4)
    FPCGAttributePropertyOutputNoSourceSelector ValueTarget;                          // 0x00C0 (size: 0x28)
    FVector RandomOffset;                                                             // 0x00E8 (size: 0x18)
    FTransform Transform;                                                             // 0x0100 (size: 0x60)
    double VoronoiCellRandomness;                                                     // 0x0160 (size: 0x8)
    FPCGAttributePropertyOutputNoSourceSelector VoronoiCellIDTarget;                  // 0x0168 (size: 0x28)
    bool bVoronoiOrientSamplesToCellEdge;                                             // 0x0190 (size: 0x1)
    int32 TiledVoronoiResolution;                                                     // 0x0194 (size: 0x4)
    int32 TiledVoronoiEdgeBlendCellCount;                                             // 0x0198 (size: 0x4)
    float EdgeBlendDistance;                                                          // 0x019C (size: 0x4)
    float EdgeBlendCurveOffset;                                                       // 0x01A0 (size: 0x4)
    float EdgeBlendCurveIntensity;                                                    // 0x01A4 (size: 0x4)
    bool bForceNoUseSeed;                                                             // 0x01A8 (size: 0x1)

}; // Size: 0x1B0

class UPCGSpawnActorNode : public UPCGBaseSubgraphNode
{
}; // Size: 0x88

class UPCGSpawnActorSettings : public UPCGBaseSubgraphSettings
{
    TArray<FName> PostSpawnFunctionNames;                                             // 0x00A8 (size: 0x10)
    EPCGSpawnActorOption Option;                                                      // 0x00B8 (size: 0x1)
    bool bForceDisableActorParsing;                                                   // 0x00B9 (size: 0x1)
    EPCGSpawnActorGenerationTrigger GenerationTrigger;                                // 0x00BA (size: 0x1)
    bool bInheritActorTags;                                                           // 0x00BB (size: 0x1)
    TArray<FName> TagsToAddOnActors;                                                  // 0x00C0 (size: 0x10)
    class AActor* TemplateActor;                                                      // 0x00D0 (size: 0x8)
    TArray<FPCGObjectPropertyOverrideDescription> SpawnedActorPropertyOverrideDescriptions; // 0x00D8 (size: 0x10)
    TSoftObjectPtr<AActor> RootActor;                                                 // 0x00E8 (size: 0x28)
    EPCGAttachOptions AttachOptions;                                                  // 0x0110 (size: 0x4)
    bool bSpawnByAttribute;                                                           // 0x0114 (size: 0x1)
    FName SpawnAttribute;                                                             // 0x0118 (size: 0x8)
    TSubclassOf<class AActor> TemplateActorClass;                                     // 0x0120 (size: 0x8)
    bool bAllowTemplateActorEditing;                                                  // 0x0128 (size: 0x1)

}; // Size: 0x130

class UPCGSplineData : public UPCGPolyLineData
{
    FPCGSplineStruct SplineStruct;                                                    // 0x00D0 (size: 0x160)
    FBox CachedBounds;                                                                // 0x0230 (size: 0x38)

}; // Size: 0x270

class UPCGSplineInteriorSurfaceData : public UPCGSurfaceData
{
    FPCGSplineStruct SplineStruct;                                                    // 0x0130 (size: 0x160)
    FBox CachedBounds;                                                                // 0x0290 (size: 0x38)
    TArray<FVector> CachedSplinePoints;                                               // 0x02C8 (size: 0x10)
    TArray<FVector2D> CachedSplinePoints2D;                                           // 0x02D8 (size: 0x10)

}; // Size: 0x2F0

class UPCGSplineProjectionData : public UPCGProjectionData
{
    FInterpCurveVector2D ProjectedPosition;                                           // 0x0170 (size: 0x18)

}; // Size: 0x188

class UPCGSplineSamplerSettings : public UPCGSettings
{
    FPCGSplineSamplerParams SamplerParams;                                            // 0x00A8 (size: 0x120)

}; // Size: 0x1C8

class UPCGSplitPointsSettings : public UPCGSettings
{
    float SplitPosition;                                                              // 0x00A8 (size: 0x4)
    EPCGSplitAxis SplitAxis;                                                          // 0x00AC (size: 0x4)

}; // Size: 0xB0

class UPCGStaticMeshSpawnerSettings : public UPCGSettings
{
    TSubclassOf<class UPCGMeshSelectorBase> MeshSelectorType;                         // 0x00A8 (size: 0x8)
    class UPCGMeshSelectorBase* MeshSelectorParameters;                               // 0x00B0 (size: 0x8)
    TSubclassOf<class UPCGInstanceDataPackerBase> InstanceDataPackerType;             // 0x00B8 (size: 0x8)
    class UPCGInstanceDataPackerBase* InstanceDataPackerParameters;                   // 0x00C0 (size: 0x8)
    TArray<FPCGObjectPropertyOverrideDescription> StaticMeshComponentPropertyOverrides; // 0x00C8 (size: 0x10)
    FName OutAttributeName;                                                           // 0x00D8 (size: 0x8)
    bool bApplyMeshBoundsToPoints;                                                    // 0x00E0 (size: 0x1)
    TSoftObjectPtr<AActor> TargetActor;                                               // 0x00E8 (size: 0x28)
    TArray<FName> PostProcessFunctionNames;                                           // 0x0110 (size: 0x10)
    bool bSynchronousLoad;                                                            // 0x0120 (size: 0x1)
    bool bSilenceOverrideAttributeNotFoundErrors;                                     // 0x0121 (size: 0x1)

    void SetMeshSelectorType(TSubclassOf<class UPCGMeshSelectorBase> InMeshSelectorType);
    void SetInstancePackerType(TSubclassOf<class UPCGInstanceDataPackerBase> InInstancePackerType);
}; // Size: 0x128

class UPCGSubgraphNode : public UPCGBaseSubgraphNode
{
}; // Size: 0x88

class UPCGSubgraphSettings : public UPCGBaseSubgraphSettings
{
    class UPCGGraphInstance* SubgraphInstance;                                        // 0x00A8 (size: 0x8)
    class UPCGGraphInterface* SubgraphOverride;                                       // 0x00B0 (size: 0x8)

}; // Size: 0xB8

class UPCGSubsystem : public UTickableWorldSubsystem
{
}; // Size: 0x490

class UPCGSurfaceData : public UPCGSpatialDataWithPointCache
{
    FTransform Transform;                                                             // 0x00D0 (size: 0x60)

}; // Size: 0x130

class UPCGSurfaceSamplerSettings : public UPCGSettings
{
    float PointsPerSquaredMeter;                                                      // 0x00A8 (size: 0x4)
    FVector PointExtents;                                                             // 0x00B0 (size: 0x18)
    float Looseness;                                                                  // 0x00C8 (size: 0x4)
    bool bUnbounded;                                                                  // 0x00CC (size: 0x1)
    bool bApplyDensityToPoints;                                                       // 0x00CD (size: 0x1)
    float PointSteepness;                                                             // 0x00D0 (size: 0x4)

}; // Size: 0xD8

class UPCGSwitchSettings : public UPCGSettings
{
    EPCGControlFlowSelectionMode SelectionMode;                                       // 0x00A8 (size: 0x1)
    int32 IntegerSelection;                                                           // 0x00AC (size: 0x4)
    TArray<int32> IntOptions;                                                         // 0x00B0 (size: 0x10)
    FString StringSelection;                                                          // 0x00C0 (size: 0x10)
    TArray<FString> StringOptions;                                                    // 0x00D0 (size: 0x10)
    FEnumSelector EnumSelection;                                                      // 0x00E0 (size: 0x10)

}; // Size: 0x100

class UPCGTextureData : public UPCGBaseTextureData
{
    TWeakObjectPtr<class UTexture> Texture;                                           // 0x01E0 (size: 0x8)
    int32 TextureIndex;                                                               // 0x01E8 (size: 0x4)

}; // Size: 0x1F0

class UPCGTextureSamplerSettings : public UPCGSettings
{
    FTransform Transform;                                                             // 0x00B0 (size: 0x60)
    bool bUseAbsoluteTransform;                                                       // 0x0110 (size: 0x1)
    int32 TextureArrayIndex;                                                          // 0x0114 (size: 0x4)
    EPCGTextureDensityFunction DensityFunction;                                       // 0x0118 (size: 0x1)
    EPCGTextureColorChannel ColorChannel;                                             // 0x0119 (size: 0x1)
    EPCGTextureFilter Filter;                                                         // 0x011A (size: 0x1)
    float TexelSize;                                                                  // 0x011C (size: 0x4)
    bool bUseAdvancedTiling;                                                          // 0x0120 (size: 0x1)
    FVector2D Tiling;                                                                 // 0x0128 (size: 0x10)
    FVector2D CenterOffset;                                                           // 0x0138 (size: 0x10)
    float Rotation;                                                                   // 0x0148 (size: 0x4)
    bool bUseTileBounds;                                                              // 0x014C (size: 0x1)
    FVector2D TileBoundsMin;                                                          // 0x0150 (size: 0x10)
    FVector2D TileBoundsMax;                                                          // 0x0160 (size: 0x10)
    bool bSynchronousLoad;                                                            // 0x0170 (size: 0x1)
    TSoftObjectPtr<UTexture> Texture;                                                 // 0x0178 (size: 0x28)

}; // Size: 0x1A0

class UPCGTransformPointsSettings : public UPCGSettings
{
    bool bApplyToAttribute;                                                           // 0x00A8 (size: 0x1)
    FName AttributeName;                                                              // 0x00AC (size: 0x8)
    FVector OffsetMin;                                                                // 0x00B8 (size: 0x18)
    FVector OffsetMax;                                                                // 0x00D0 (size: 0x18)
    bool bAbsoluteOffset;                                                             // 0x00E8 (size: 0x1)
    FRotator RotationMin;                                                             // 0x00F0 (size: 0x18)
    FRotator RotationMax;                                                             // 0x0108 (size: 0x18)
    bool bAbsoluteRotation;                                                           // 0x0120 (size: 0x1)
    FVector ScaleMin;                                                                 // 0x0128 (size: 0x18)
    FVector ScaleMax;                                                                 // 0x0140 (size: 0x18)
    bool bAbsoluteScale;                                                              // 0x0158 (size: 0x1)
    bool bUniformScale;                                                               // 0x0159 (size: 0x1)
    bool bRecomputeSeed;                                                              // 0x015A (size: 0x1)

}; // Size: 0x160

class UPCGTrivialSettings : public UPCGSettings
{
}; // Size: 0xA8

class UPCGUnionData : public UPCGSpatialDataWithPointCache
{
    TArray<class UPCGSpatialData*> Data;                                              // 0x00D0 (size: 0x10)
    class UPCGSpatialData* FirstNonTrivialTransformData;                              // 0x00E0 (size: 0x8)
    EPCGUnionType UnionType;                                                          // 0x00E8 (size: 0x1)
    EPCGUnionDensityFunction DensityFunction;                                         // 0x00E9 (size: 0x1)
    FBox CachedBounds;                                                                // 0x00F0 (size: 0x38)
    FBox CachedStrictBounds;                                                          // 0x0128 (size: 0x38)
    int32 CachedDimension;                                                            // 0x0160 (size: 0x4)

    void Initialize(const class UPCGSpatialData* InA, const class UPCGSpatialData* InB);
    void AddData(const class UPCGSpatialData* InData);
}; // Size: 0x168

class UPCGUnionSettings : public UPCGSettings
{
    EPCGUnionType Type;                                                               // 0x00A8 (size: 0x1)
    EPCGUnionDensityFunction DensityFunction;                                         // 0x00A9 (size: 0x1)

}; // Size: 0xB0

class UPCGUnitTestDummyComponent : public UActorComponent
{
    int32 IntProperty;                                                                // 0x00A0 (size: 0x4)

}; // Size: 0xA8

class UPCGUserParameterGetSettings : public UPCGSettings
{
    FGuid PropertyGuid;                                                               // 0x00A8 (size: 0x10)
    FName PropertyName;                                                               // 0x00B8 (size: 0x8)
    bool bForceObjectAndStructExtraction;                                             // 0x00C0 (size: 0x1)

}; // Size: 0xC8

class UPCGUserParametersData : public UPCGData
{
    FInstancedStruct UserParameters;                                                  // 0x0038 (size: 0x10)

}; // Size: 0x48

class UPCGVisualizeAttributeSettings : public UPCGSettings
{
    FPCGAttributePropertyInputSelector AttributeSource;                               // 0x00A8 (size: 0x28)
    FString CustomPrefixString;                                                       // 0x00D0 (size: 0x10)
    bool bPrefixWithIndex;                                                            // 0x00E0 (size: 0x1)
    bool bPrefixWithAttributeName;                                                    // 0x00E1 (size: 0x1)
    FVector LocalOffset;                                                              // 0x00E8 (size: 0x18)
    FColor Color;                                                                     // 0x0100 (size: 0x4)
    double Duration;                                                                  // 0x0108 (size: 0x8)
    int32 PointLimit;                                                                 // 0x0110 (size: 0x4)
    bool bVisualizeEnabled;                                                           // 0x0114 (size: 0x1)

}; // Size: 0x118

class UPCGVolumeData : public UPCGSpatialDataWithPointCache
{
    FVector VoxelSize;                                                                // 0x00D0 (size: 0x18)
    TWeakObjectPtr<class AVolume> Volume;                                             // 0x00E8 (size: 0x8)
    FBox Bounds;                                                                      // 0x00F0 (size: 0x38)
    FBox StrictBounds;                                                                // 0x0128 (size: 0x38)

}; // Size: 0x168

class UPCGVolumeSamplerSettings : public UPCGSettings
{
    FVector VoxelSize;                                                                // 0x00A8 (size: 0x18)
    bool bUnbounded;                                                                  // 0x00C0 (size: 0x1)
    float PointSteepness;                                                             // 0x00C4 (size: 0x4)

}; // Size: 0xC8

class UPCGWorldQuerySettings : public UPCGSettings
{
    FPCGWorldVolumetricQueryParams QueryParams;                                       // 0x00A8 (size: 0x78)

}; // Size: 0x120

class UPCGWorldRayHitData : public UPCGSurfaceData
{
    TWeakObjectPtr<class UWorld> World;                                               // 0x0130 (size: 0x8)
    TWeakObjectPtr<class UPCGComponent> OriginatingComponent;                         // 0x0138 (size: 0x8)
    FBox Bounds;                                                                      // 0x0140 (size: 0x38)
    FPCGWorldRayHitQueryParams QueryParams;                                           // 0x0178 (size: 0xB8)

}; // Size: 0x230

class UPCGWorldRayHitSettings : public UPCGSettings
{
    FPCGWorldRayHitQueryParams QueryParams;                                           // 0x00A8 (size: 0xB8)

}; // Size: 0x160

class UPCGWorldVolumetricData : public UPCGVolumeData
{
    TWeakObjectPtr<class UWorld> World;                                               // 0x0168 (size: 0x8)
    TWeakObjectPtr<class UPCGComponent> OriginatingComponent;                         // 0x0170 (size: 0x8)
    FPCGWorldVolumetricQueryParams QueryParams;                                       // 0x0178 (size: 0x78)

}; // Size: 0x1F0

#endif
