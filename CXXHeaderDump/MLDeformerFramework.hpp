#ifndef UE4SS_SDK_MLDeformerFramework_HPP
#define UE4SS_SDK_MLDeformerFramework_HPP

#include "MLDeformerFramework_enums.hpp"

struct FMLDeformerCompareActor
{
    FName Name;                                                                       // 0x0000 (size: 0x8)
    TSoftObjectPtr<UMLDeformerAsset> DeformerAsset;                                   // 0x0008 (size: 0x28)

}; // Size: 0x30

struct FMLDeformerCurveReference
{
    FName CurveName;                                                                  // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FMLDeformerGeomCacheTrainingInputAnim : public FMLDeformerTrainingInputAnim
{
}; // Size: 0x8

struct FMLDeformerMorphModelQualityLevel
{
    int32 MaxActiveMorphs;                                                            // 0x0000 (size: 0x4)

}; // Size: 0x4

struct FMLDeformerTrainingInputAnim
{
}; // Size: 0x8

class UMLDeformerAsset : public UObject
{
    class UMLDeformerModel* Model;                                                    // 0x0028 (size: 0x8)

}; // Size: 0x30

class UMLDeformerComponent : public UActorComponent
{
    class UMLDeformerAsset* DeformerAsset;                                            // 0x00C8 (size: 0x8)
    float Weight;                                                                     // 0x00D0 (size: 0x4)
    int32 QualityLevel;                                                               // 0x00D4 (size: 0x4)
    class UMLDeformerModelInstance* ModelInstance;                                    // 0x00D8 (size: 0x8)

    void UpdateSkeletalMeshComponent();
    void SetWeight(float NormalizedWeightValue);
    void SetQualityLevel(int32 InQualityLevel);
    void SetDeformerAsset(class UMLDeformerAsset* InDeformerAsset);
    float GetWeight();
    class USkeletalMeshComponent* GetSkeletalMeshComponent();
    int32 GetQualityLevel();
    class UMLDeformerModelInstance* GetModelInstance();
    class UMLDeformerAsset* GetDeformerAsset();
    class USkeletalMeshComponent* FindSkeletalMeshComponent(const class UMLDeformerAsset* Asset);
}; // Size: 0xE0

class UMLDeformerComponentSource : public UOptimusComponentSource
{
}; // Size: 0x28

class UMLDeformerGeomCacheModel : public UMLDeformerModel
{
}; // Size: 0xF0

class UMLDeformerGeomCacheVizSettings : public UMLDeformerVizSettings
{
}; // Size: 0x28

class UMLDeformerGraphDebugDataInterface : public UOptimusComputeDataInterface
{
}; // Size: 0x28

class UMLDeformerGraphDebugDataProvider : public UComputeDataProvider
{
    class UMLDeformerComponent* DeformerComponent;                                    // 0x0028 (size: 0x8)
    class UMLDeformerAsset* DeformerAsset;                                            // 0x0030 (size: 0x8)

}; // Size: 0x38

class UMLDeformerInputInfo : public UObject
{
    FSoftObjectPath SkeletalMesh;                                                     // 0x0028 (size: 0x20)
    TArray<FName> BoneNames;                                                          // 0x0048 (size: 0x10)
    TArray<FName> CurveNames;                                                         // 0x0058 (size: 0x10)
    int32 NumBaseMeshVertices;                                                        // 0x0068 (size: 0x4)
    int32 NumTargetMeshVertices;                                                      // 0x006C (size: 0x4)

}; // Size: 0x70

class UMLDeformerModel : public UObject
{
    int32 NumBaseMeshVerts;                                                           // 0x00C0 (size: 0x4)
    int32 NumTargetMeshVerts;                                                         // 0x00C4 (size: 0x4)
    int32 MaxNumLODs;                                                                 // 0x00C8 (size: 0x4)
    class UMLDeformerInputInfo* InputInfo;                                            // 0x00D0 (size: 0x8)
    TArray<int32> VertexMap;                                                          // 0x00D8 (size: 0x10)
    class USkeletalMesh* SkeletalMesh;                                                // 0x00E8 (size: 0x8)

}; // Size: 0xF0

class UMLDeformerModelInstance : public UObject
{
    class UMLDeformerModel* Model;                                                    // 0x0030 (size: 0x8)

}; // Size: 0x88

class UMLDeformerMorphModel : public UMLDeformerGeomCacheModel
{
    bool bClampMorphWeights;                                                          // 0x0110 (size: 0x1)
    TArray<FVector3f> MorphTargetDeltas;                                              // 0x0118 (size: 0x10)
    int32 NumMorphTargets;                                                            // 0x0128 (size: 0x4)
    uint64 CompressedMorphDataSizeInBytes;                                            // 0x0130 (size: 0x8)
    uint64 UncompressedMorphDataSizeInBytes;                                          // 0x0138 (size: 0x8)
    TArray<int32> MorphTargetErrorOrder;                                              // 0x0140 (size: 0x10)
    TArray<float> MorphTargetErrors;                                                  // 0x0150 (size: 0x10)
    TArray<float> MaxMorphWeights;                                                    // 0x0160 (size: 0x10)
    TArray<FFloatInterval> MorphTargetsMinMaxWeights;                                 // 0x0170 (size: 0x10)
    TArray<FMLDeformerMorphModelQualityLevel> QualityLevels;                          // 0x0180 (size: 0x10)
    bool bIncludeNormals;                                                             // 0x0190 (size: 0x1)
    float MorphDeltaZeroThreshold;                                                    // 0x0194 (size: 0x4)
    float MorphCompressionLevel;                                                      // 0x0198 (size: 0x4)
    EMLDeformerMaskChannel MaskChannel;                                               // 0x019C (size: 0x1)
    bool bInvertMaskChannel;                                                          // 0x019D (size: 0x1)

    void SetMorphTargetsMinMaxWeights(const TArray<float>& MinValues, const TArray<float>& MaxValues);
    void SetMorphTargetsMaxWeights(const TArray<float>& MaxWeights);
    void SetMorphTargetsErrorOrder(const TArray<int32>& MorphTargetOrder, const TArray<float>& ErrorValues);
    void SetMorphTargetDeltas(const TArray<FVector3f>& Deltas);
    void SetMorphTargetDeltaFloats(const TArray<float>& Deltas);
    bool CanDynamicallyUpdateMorphTargets();
}; // Size: 0x1A8

class UMLDeformerMorphModelInputInfo : public UMLDeformerInputInfo
{
}; // Size: 0x70

class UMLDeformerMorphModelInstance : public UMLDeformerModelInstance
{
}; // Size: 0x90

class UMLDeformerMorphModelVizSettings : public UMLDeformerGeomCacheVizSettings
{
    float MorphTargetDeltaThreshold;                                                  // 0x0028 (size: 0x4)
    int32 MorphTargetNumber;                                                          // 0x002C (size: 0x4)
    bool bDrawMorphTargets;                                                           // 0x0030 (size: 0x1)

}; // Size: 0x38

class UMLDeformerVizSettings : public UObject
{
}; // Size: 0x28

#endif
