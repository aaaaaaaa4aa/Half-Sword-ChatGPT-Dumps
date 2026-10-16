#ifndef UE4SS_SDK_ChaosClothAssetEngine_HPP
#define UE4SS_SDK_ChaosClothAssetEngine_HPP

#include "ChaosClothAssetEngine_enums.hpp"

struct FChaosClothAssetLodTransitionDataCache
{
}; // Size: 0x38

struct FChaosClothSimulationLodModel
{
    TArray<FVector3f> Positions;                                                      // 0x0000 (size: 0x10)
    TArray<FVector3f> Normals;                                                        // 0x0010 (size: 0x10)
    TArray<uint32> Indices;                                                           // 0x0020 (size: 0x10)
    TArray<FClothVertBoneData> BoneData;                                              // 0x0030 (size: 0x10)
    TArray<uint16> RequiredExtraBoneIndices;                                          // 0x0040 (size: 0x10)
    TArray<FVector2f> PatternPositions;                                               // 0x0070 (size: 0x10)
    TArray<uint32> PatternIndices;                                                    // 0x0080 (size: 0x10)
    TArray<uint32> PatternToWeldedIndices;                                            // 0x0090 (size: 0x10)
    FClothTetherData TetherData;                                                      // 0x00F0 (size: 0x10)

}; // Size: 0x1F0

struct FChaosClothSimulationModel
{
    TArray<FChaosClothSimulationLodModel> ClothSimulationLodModels;                   // 0x0000 (size: 0x10)
    TArray<FName> UsedBoneNames;                                                      // 0x0010 (size: 0x10)
    TArray<int32> UsedBoneIndices;                                                    // 0x0020 (size: 0x10)
    int32 ReferenceBoneIndex;                                                         // 0x0030 (size: 0x4)

}; // Size: 0x38

class UChaosClothAsset : public USkinnedAsset
{
    class UDataflow* DataflowAsset;                                                   // 0x00D0 (size: 0x8)
    FString DataflowTerminal;                                                         // 0x00D8 (size: 0x10)
    TArray<FSkeletalMaterial> Materials;                                              // 0x00E8 (size: 0x10)
    class USkeleton* Skeleton;                                                        // 0x00F8 (size: 0x8)
    class UPhysicsAsset* PhysicsAsset;                                                // 0x0100 (size: 0x8)
    TArray<FSkeletalMeshLODInfo> LODInfo;                                             // 0x0108 (size: 0x10)
    FPerPlatformBool DisableBelowMinLodStripping;                                     // 0x0118 (size: 0x1)
    FPerPlatformInt MinLOD;                                                           // 0x011C (size: 0x4)
    uint8 bSupportRayTracing;                                                         // 0x0120 (size: 0x1)
    int32 RayTracingMinLOD;                                                           // 0x0124 (size: 0x4)
    bool bSmoothTransition;                                                           // 0x0128 (size: 0x1)
    bool bUseMultipleInfluences;                                                      // 0x0129 (size: 0x1)
    float SkinningKernelRadius;                                                       // 0x012C (size: 0x4)
    class UPhysicsAsset* ShadowPhysicsAsset;                                          // 0x0130 (size: 0x8)
    FGuid AssetGuid;                                                                  // 0x0138 (size: 0x10)

    class UPhysicsAsset* GetShadowPhysicsAsset();
}; // Size: 0x2D8

class UChaosClothComponent : public USkinnedMeshComponent
{
    uint8 bUseAttachedParentAsPoseComponent;                                          // 0x08B8 (size: 0x1)
    uint8 bWaitForParallelTask;                                                       // 0x08B8 (size: 0x1)
    uint8 bEnableSimulation;                                                          // 0x08B8 (size: 0x1)
    uint8 bSuspendSimulation;                                                         // 0x08B8 (size: 0x1)
    uint8 bBindToLeaderComponent;                                                     // 0x08B8 (size: 0x1)
    uint8 bTeleport;                                                                  // 0x08B8 (size: 0x1)
    uint8 bReset;                                                                     // 0x08B8 (size: 0x1)
    float BlendWeight;                                                                // 0x08BC (size: 0x4)

    void SuspendSimulation();
    void SetEnableSimulation(bool bEnable);
    void SetClothAsset(class UChaosClothAsset* InClothAsset);
    void ResumeSimulation();
    void ResetTeleportMode();
    void ResetConfigProperties();
    void RecreateClothSimulationProxy();
    bool IsSimulationSuspended();
    bool IsSimulationEnabled();
    class UChaosClothAsset* GetClothAsset();
    void ForceNextUpdateTeleportAndReset();
    void ForceNextUpdateTeleport();
}; // Size: 0x8F0

#endif
