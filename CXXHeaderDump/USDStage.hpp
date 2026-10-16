#ifndef UE4SS_SDK_USDStage_HPP
#define UE4SS_SDK_USDStage_HPP

#include "USDStage_enums.hpp"

class AUsdStageActor : public AActor
{
    FFilePath RootLayer;                                                              // 0x0290 (size: 0x10)
    EUsdStageState StageState;                                                        // 0x02A0 (size: 0x1)
    class UUsdAssetCache2* UsdAssetCache;                                             // 0x02A8 (size: 0x8)
    EUsdInitialLoadSet InitialLoadSet;                                                // 0x02B0 (size: 0x1)
    EUsdInterpolationType InterpolationType;                                          // 0x02B1 (size: 0x1)
    int32 KindsToCollapse;                                                            // 0x02B4 (size: 0x4)
    bool bMergeIdenticalMaterialSlots;                                                // 0x02B8 (size: 0x1)
    bool bReuseIdenticalAssets;                                                       // 0x02B9 (size: 0x1)
    bool bCollapseTopLevelPointInstancers;                                            // 0x02BA (size: 0x1)
    int32 PurposesToLoad;                                                             // 0x02BC (size: 0x4)
    int32 NaniteTriangleThreshold;                                                    // 0x02C0 (size: 0x4)
    FName RenderContext;                                                              // 0x02C4 (size: 0x8)
    FName MaterialPurpose;                                                            // 0x02CC (size: 0x8)
    EUsdRootMotionHandling RootMotionHandling;                                        // 0x02D4 (size: 0x1)
    int32 SubdivisionLevel;                                                           // 0x02D8 (size: 0x4)
    FUsdMetadataImportOptions MetadataOptions;                                        // 0x02E0 (size: 0x20)
    class USceneComponent* SceneComponent;                                            // 0x03A8 (size: 0x8)
    float Time;                                                                       // 0x03B0 (size: 0x4)
    class ULevelSequence* LevelSequence;                                              // 0x03B8 (size: 0x8)
    class UUsdPrimTwin* RootUsdTwin;                                                  // 0x03C0 (size: 0x8)
    TSet<FString> PrimsToAnimate;                                                     // 0x03C8 (size: 0x50)
    TMap<class UObject*, class FString> ObjectsToWatch;                               // 0x0418 (size: 0x50)
    class UUsdAssetCache* AssetCache;                                                 // 0x0468 (size: 0x8)
    class UUsdTransactor* Transactor;                                                 // 0x0470 (size: 0x8)

    void SetTime(float InTime);
    void SetSubdivisionLevel(int32 NewLevel);
    void SetStageState(EUsdStageState NewStageState);
    void SetRootMotionHandling(EUsdRootMotionHandling NewHandlingStrategy);
    void SetRootLayer(FString RootFilePath);
    void SetReuseIdenticalAssets(bool bReuse);
    void SetRenderContext(const FName& NewRenderContext);
    void SetPurposesToLoad(int32 NewPurposesToLoad);
    void SetNaniteTriangleThreshold(int32 NewNaniteTriangleThreshold);
    void SetMergeIdenticalMaterialSlots(bool bMerge);
    void SetMaterialPurpose(const FName& NewMaterialPurpose);
    void SetKindsToCollapse(int32 NewKindsToCollapse);
    void SetIsolatedRootLayer(FString IsolatedStageRootLayer);
    void SetInvertFilters(bool bNewInvertValue);
    void SetInterpolationType(EUsdInterpolationType NewType);
    void SetInitialLoadSet(EUsdInitialLoadSet NewLoadSet);
    void SetCollectOnComponents(bool bNewCollectValue);
    void SetCollectMetadata(bool bNewCollectValue);
    void SetCollectFromEntireSubtrees(bool bNewCollectValue);
    void SetCollapseTopLevelPointInstancers(bool bCollapse);
    void SetBlockedPrefixFilters(const TArray<FString>& NewFilters);
    void SetAssetCache(class UUsdAssetCache2* NewCache);
    void NewStage();
    float GetTime();
    FString GetSourcePrimPath(class UObject* Object);
    class ULevelSequence* GetLevelSequence();
    FString GetIsolatedRootLayer();
    class USceneComponent* GetGeneratedComponent(FString PrimPath);
    TArray<class UObject*> GetGeneratedAssets(FString PrimPath);
}; // Size: 0x598

class UUsdDynamicBindingResolverLibrary : public UBlueprintFunctionLibrary
{

    FMovieSceneDynamicBindingResolveResult ResolveWithStageActor(class UObject* WorldContextObject, const FMovieSceneDynamicBindingResolveParams& Params, FString StageActorIDNameFilter, FString RootLayerFilter, FString PrimPath);
}; // Size: 0x28

class UUsdPrimTwin : public UObject
{
    FString PrimPath;                                                                 // 0x0040 (size: 0x10)
    TWeakObjectPtr<class USceneComponent> SceneComponent;                             // 0x0050 (size: 0x8)
    TMap<class FString, class UUsdPrimTwin*> Children;                                // 0x0058 (size: 0x50)
    TWeakObjectPtr<class UUsdPrimTwin> Parent;                                        // 0x00A8 (size: 0x8)

}; // Size: 0xB0

class UUsdTransactor : public UObject
{
}; // Size: 0x38

#endif
