#ifndef UE4SS_SDK_VertexPaintDetectionPlugin_HPP
#define UE4SS_SDK_VertexPaintDetectionPlugin_HPP

#include "VertexPaintDetectionPlugin_enums.hpp"

struct FRVPDPAdditionalDataToPassThroughInfo
{
    class AActor* PassThrough_Actor1;                                                 // 0x0000 (size: 0x8)
    class AActor* PassThrough_Actor2;                                                 // 0x0008 (size: 0x8)
    class UPrimitiveComponent* PassThrough_PrimitiveComponent1;                       // 0x0010 (size: 0x8)
    class UPrimitiveComponent* PassThrough_PrimitiveComponent2;                       // 0x0018 (size: 0x8)
    bool PassThrough_Bool1;                                                           // 0x0020 (size: 0x1)
    bool PassThrough_Bool2;                                                           // 0x0021 (size: 0x1)
    bool PassThrough_Bool3;                                                           // 0x0022 (size: 0x1)
    uint8 PassThrough_Byte1;                                                          // 0x0023 (size: 0x1)
    uint8 PassThrough_Byte2;                                                          // 0x0024 (size: 0x1)
    float PassThrough_Float1;                                                         // 0x0028 (size: 0x4)
    float PassThrough_Float2;                                                         // 0x002C (size: 0x4)
    float PassThrough_Float3;                                                         // 0x0030 (size: 0x4)
    float PassThrough_Float4;                                                         // 0x0034 (size: 0x4)
    int32 PassThrough_Int1;                                                           // 0x0038 (size: 0x4)
    int32 PassThrough_Int2;                                                           // 0x003C (size: 0x4)
    FVector PassThrough_Vector1;                                                      // 0x0040 (size: 0x18)
    FVector PassThrough_Vector2;                                                      // 0x0058 (size: 0x18)
    FVector PassThrough_Vector3;                                                      // 0x0070 (size: 0x18)
    FVector PassThrough_Vector4;                                                      // 0x0088 (size: 0x18)
    FRotator PassThrough_Rotator1;                                                    // 0x00A0 (size: 0x18)
    FRotator PassThrough_Rotator2;                                                    // 0x00B8 (size: 0x18)
    FString PassThrough_String1;                                                      // 0x00D0 (size: 0x10)
    FString PassThrough_String2;                                                      // 0x00E0 (size: 0x10)
    FName PassThrough_Name1;                                                          // 0x00F0 (size: 0x8)
    FName PassThrough_Name2;                                                          // 0x00F8 (size: 0x8)
    TEnumAsByte<EPhysicalSurface> PassThrough_PhysicsSurface1;                        // 0x0100 (size: 0x1)
    TEnumAsByte<EPhysicalSurface> PassThrough_PhysicsSurface2;                        // 0x0101 (size: 0x1)
    class UPhysicalMaterial* PassThrough_PhysicalMaterial1;                           // 0x0108 (size: 0x8)
    TEnumAsByte<ECollisionChannel> PassThrough_ObjectCollisionChannel;                // 0x0110 (size: 0x1)
    TEnumAsByte<EObjectTypeQuery> PassThrough_ObjectType;                             // 0x0111 (size: 0x1)
    FRandomStream PassThrough_RandomStream;                                           // 0x0114 (size: 0x8)
    class UObject* PassThrough_UObject1;                                              // 0x0120 (size: 0x8)
    class UObject* PassThrough_UObject2;                                              // 0x0128 (size: 0x8)

}; // Size: 0x130

struct FRVPDPAdjustPaintStrengthToDeltaTimeSettings
{
    bool AdjustPaintStrengthsToDeltaTime;                                             // 0x0000 (size: 0x1)
    float DeltaTimeToAdjustTo;                                                        // 0x0004 (size: 0x4)
    float TargetFPS;                                                                  // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FRVPDPAmountOfColorsOfEachChannelChannelResults
{
    float AmountOfVerticesPaintedAtMinAmount;                                         // 0x0000 (size: 0x4)
    float PercentPaintedAtMinAmount;                                                  // 0x0004 (size: 0x4)
    float AverageColorAmountAtMinAmount;                                              // 0x0008 (size: 0x4)

}; // Size: 0x10

struct FRVPDPAmountOfColorsOfEachChannelPhysicsResults : public FRVPDPAmountOfColorsOfEachChannelChannelResults
{
    TEnumAsByte<EPhysicalSurface> PhysicsSurface;                                     // 0x0010 (size: 0x1)

}; // Size: 0x14

struct FRVPDPAmountOfColorsOfEachChannelResults
{
    bool SuccessfullyGotColorChannelResultsAtMinAmount;                               // 0x0000 (size: 0x1)
    FRVPDPAmountOfColorsOfEachChannelChannelResults RedChannelResult;                 // 0x0004 (size: 0x10)
    FRVPDPAmountOfColorsOfEachChannelChannelResults GreenChannelResult;               // 0x0014 (size: 0x10)
    FRVPDPAmountOfColorsOfEachChannelChannelResults BlueChannelResult;                // 0x0024 (size: 0x10)
    FRVPDPAmountOfColorsOfEachChannelChannelResults AlphaChannelResult;               // 0x0034 (size: 0x10)
    bool SuccessfullyGotPhysicsSurfaceResultsAtMinAmount;                             // 0x0044 (size: 0x1)
    TArray<FRVPDPAmountOfColorsOfEachChannelPhysicsResults> PhysicsSurfacesResults;   // 0x0048 (size: 0x10)

}; // Size: 0x58

struct FRVPDPApplyColorSetting : public FRVPDPPaintTaskSettings
{
    FRVPDPApplyColorSettings ApplyVertexColorSettings;                                // 0x0148 (size: 0x2D0)

}; // Size: 0x418

struct FRVPDPApplyColorSettings
{
    FRVPDPApplyColorsUsingPhysicsSurfaceSettings ApplyColorsUsingPhysicsSurface;      // 0x0000 (size: 0x20)
    FRVPDPApplyColorsUsingVertexChannelSettings ApplyColorsOnRedChannel;              // 0x0020 (size: 0xA8)
    FRVPDPApplyColorsUsingVertexChannelSettings ApplyColorsOnGreenChannel;            // 0x00C8 (size: 0xA8)
    FRVPDPApplyColorsUsingVertexChannelSettings ApplyColorsOnBlueChannel;             // 0x0170 (size: 0xA8)
    FRVPDPApplyColorsUsingVertexChannelSettings ApplyColorsOnAlphaChannel;            // 0x0218 (size: 0xA8)
    FRVPDPAdjustPaintStrengthToDeltaTimeSettings AdjustPaintStrengthToDeltaTimeSettings; // 0x02C0 (size: 0xC)

}; // Size: 0x2D0

struct FRVPDPApplyColorsUsingPhysicsSurfaceSettings
{
    bool ApplyVertexColorUsingPhysicsSurface;                                         // 0x0000 (size: 0x1)
    TArray<FRVPDPPhysicsSurfaceToApplySettings> PhysicalSurfacesToApply;              // 0x0008 (size: 0x10)
    float StrengtOnChannelsWithoutThePhysicsSurfaces;                                 // 0x0018 (size: 0x4)
    EApplyVertexColorSetting ApplyWithSettingOnChannelsWithoutThePhysicsSurface;      // 0x001C (size: 0x1)

}; // Size: 0x20

struct FRVPDPApplyColorsUsingVertexChannelSettings
{
    float AmountToApply;                                                              // 0x0000 (size: 0x4)
    FRVPDPLerpVertexColorToTargetSettings LerpVertexColorToTarget;                    // 0x0004 (size: 0xC)
    EApplyVertexColorSetting ApplyWithSetting;                                        // 0x0010 (size: 0x1)
    FRVPDPPaintConditionSettings PaintConditions;                                     // 0x0018 (size: 0x80)
    FRVPDPPaintLimitSettings PaintLimit;                                              // 0x0098 (size: 0xC)

}; // Size: 0xA8

struct FRVPDPAtLocationTasksSettings
{
    FVector HitLocation;                                                              // 0x0000 (size: 0x18)
    FVector HitLocationInComponentSpace;                                              // 0x0018 (size: 0x18)
    FVector HitNormal;                                                                // 0x0030 (size: 0x18)
    FName HitBone;                                                                    // 0x0048 (size: 0x8)
    FString RunTaskFor;                                                               // 0x0050 (size: 0x10)

}; // Size: 0x60

struct FRVPDPAutoAddColorSettings
{
    bool CanEverGetPaused;                                                            // 0x0000 (size: 0x1)
    float DelayBetweenTasks;                                                          // 0x0004 (size: 0x4)
    bool StopAutoPaintingMeshIfFullyPainted;                                          // 0x0008 (size: 0x1)
    bool StopAutoPaintingMeshIfCompletelyEmpty;                                       // 0x0009 (size: 0x1)
    bool OnlyStartNewTaskIfChangeWasMadeByOwningPaintComponent;                       // 0x000A (size: 0x1)

}; // Size: 0x318

struct FRVPDPAutoPaintTaskResults
{
    class UPrimitiveComponent* MeshComponent;                                         // 0x0000 (size: 0x8)
    FRVPDPTaskResults TaskResultInfo;                                                 // 0x0008 (size: 0x1A0)
    FRVPDPPaintTaskResultInfo PaintTaskResultInfo;                                    // 0x01A8 (size: 0x28)
    FRVPDPAdditionalDataToPassThroughInfo AdditionalData;                             // 0x01D0 (size: 0x130)

}; // Size: 0x300

struct FRVPDPAverageColorInAreaInfo
{
    bool GotAvarageVertexColorsWithinAreaOfEffect;                                    // 0x0000 (size: 0x1)
    FLinearColor AvarageVertexColorsWithinAreaOfEffect;                               // 0x0004 (size: 0x10)
    FRVPDPPhysicsSurfaceDataInfo AvaragePhysicalSurfaceInfoBasedOffTheClosestVertexMaterial; // 0x0018 (size: 0x110)

}; // Size: 0x128

struct FRVPDPBoneVertexColorsInfo
{
    FName BoneName;                                                                   // 0x0000 (size: 0x8)
    TArray<FColor> BoneVertexColors;                                                  // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FRVPDPCalculateColorsInfo
{
    class UMaterialInterface* PaintAtLocation_ClosestVertexMaterial;                  // 0x01D8 (size: 0x8)
    class UMaterialInterface* GetClosestVertexData_ClosestVertexMaterial;             // 0x0220 (size: 0x8)
    TMap<class UClothingAssetBase*, class FRVPDPChaosClothPhysicsSettings> ClothPhysicsSettings; // 0x27B0 (size: 0x50)
    class AActor* VertexPaintActor;                                                   // 0x2800 (size: 0x8)
    class UPrimitiveComponent* VertexPaintComponent;                                  // 0x2808 (size: 0x8)
    class UStaticMeshComponent* VertexPaintStaticMeshComponent;                       // 0x2810 (size: 0x8)
    class UInstancedStaticMeshComponent* VertexPaintInstancedStaticMeshComponent;     // 0x2818 (size: 0x8)
    class USplineMeshComponent* VertexPaintSplineMeshComponent;                       // 0x2820 (size: 0x8)
    class USkeletalMeshComponent* VertexPaintSkelComponent;                           // 0x2828 (size: 0x8)
    class USkeletalMesh* VertexPaintSkelComponentsSkeletalMesh;                       // 0x2830 (size: 0x8)
    class USkinnedMeshComponent* VertexPaintSkelComponentsMasterSkinnedComp;          // 0x2838 (size: 0x8)
    class UObject* VertexPaintSourceMesh;                                             // 0x2840 (size: 0x8)
    class UVertexPaintMaterialDataAsset* VertexPaintMaterialDataAsset;                // 0x2848 (size: 0x8)
    class UDynamicMeshComponent* VertexPaintDynamicMeshComponent;                     // 0x2850 (size: 0x8)
    class UGeometryCollectionComponent* VertexPaintGeometryCollectionComponent;       // 0x2858 (size: 0x8)
    class UGeometryCollection* VertexPaintGeometryCollection;                         // 0x2860 (size: 0x8)

}; // Size: 0x2870

struct FRVPDPCallbackFromSpecifiedMeshComponentsInfo
{
    TArray<class UObject*> RunCallbacksOnObjects;                                     // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FRVPDPChaosClothPhysicsAtVertexColorChannelSettings
{
    bool SetDamping;                                                                  // 0x0000 (size: 0x1)
    FRVPDPClothPhysicsDampingSettings ClothDampingSettingsWithNoColorPaintedAtChannel; // 0x0004 (size: 0x4)
    FRVPDPClothPhysicsDampingSettings ClothDampingSettingsWithFullColorPaintedAtChannel; // 0x0008 (size: 0x4)
    bool SetGravity;                                                                  // 0x000C (size: 0x1)
    FRVPDPClothPhysicsGravitySettings ClothGravitySettingsWithNoColorPaintedAtChannel; // 0x0010 (size: 0x20)
    FRVPDPClothPhysicsGravitySettings ClothGravitySettingsWithFullColorPaintedAtChannel; // 0x0030 (size: 0x20)
    bool SetWind;                                                                     // 0x0050 (size: 0x1)
    FRVPDPClothPhysicsWindSettings ClothWindSettingsWithNoColorPaintedAtChannel;      // 0x0058 (size: 0x40)
    FRVPDPClothPhysicsWindSettings ClothWindSettingsWithFullColorPaintedAtChannel;    // 0x0098 (size: 0x40)
    bool SetAnimDrive;                                                                // 0x00D8 (size: 0x1)
    FRVPDPClothPhysicsAnimDriveSettings ClothAnimDriveSettingsWithNoColorPaintedAtChannel; // 0x00E0 (size: 0x20)
    FRVPDPClothPhysicsAnimDriveSettings ClothAnimDriveSettingsWithFullColorPaintedAtChannel; // 0x0100 (size: 0x20)
    bool SetCollision;                                                                // 0x0120 (size: 0x1)
    FRVPDPClothPhysicsCollisionSettings ClothCollisionSettingsWithNoColorPaintedAtChannel; // 0x0124 (size: 0x10)
    FRVPDPClothPhysicsCollisionSettings ClothCollisionSettingsWithFullColorPaintedAtChannel; // 0x0134 (size: 0x10)
    bool SetLongRangeAttachment;                                                      // 0x0144 (size: 0x1)
    FRVPDPClothPhysicsLongRangeAttachmentSettings ClothLongRangeAttachmentSettingsWithNoColorPaintedAtChannel; // 0x0148 (size: 0x20)
    FRVPDPClothPhysicsLongRangeAttachmentSettings ClothLongRangeAttachmentSettingsWithFullColorPaintedAtChannel; // 0x0168 (size: 0x20)
    bool SetMaterial;                                                                 // 0x0188 (size: 0x1)
    FRVPDPClothPhysicsMaterialSettings ClothMaterialSettingsWithNoColorPaintedAtChannel; // 0x0190 (size: 0x30)
    FRVPDPClothPhysicsMaterialSettings ClothMaterialSettingsWithFullColorPaintedAtChannel; // 0x01C0 (size: 0x30)
    bool SetPhysicsVelocityScale;                                                     // 0x01F0 (size: 0x1)
    FRVPDPClothPhysicsVelocityScaleSettings ClothPhysicsVelocityScaleSettingsWithNoColorPaintedAtChannel; // 0x01F8 (size: 0x20)
    FRVPDPClothPhysicsVelocityScaleSettings ClothPhysicsVelocityScaleSettingsWithFullColorPaintedAtChannel; // 0x0218 (size: 0x20)
    bool SetAirPressure;                                                              // 0x0238 (size: 0x1)
    FRVPDPClothPhysicsSetAirPressureSettings ClothPhysicssAirPressureWithNoColorPaintedAtChannel; // 0x0240 (size: 0x10)
    FRVPDPClothPhysicsSetAirPressureSettings ClothPhysicssAirPressureWithFullColorPaintedAtChannel; // 0x0250 (size: 0x10)

}; // Size: 0x260

struct FRVPDPChaosClothPhysicsSettings
{
    bool SetDamping;                                                                  // 0x0000 (size: 0x1)
    FRVPDPClothPhysicsDampingSettings ClothDampingSettings;                           // 0x0004 (size: 0x4)
    bool SetGravity;                                                                  // 0x0008 (size: 0x1)
    FRVPDPClothPhysicsGravitySettings ClothGravitySettings;                           // 0x0010 (size: 0x20)
    bool SetWind;                                                                     // 0x0030 (size: 0x1)
    FRVPDPClothPhysicsWindSettings ClothWindSettings;                                 // 0x0038 (size: 0x40)
    bool SetAnimDrive;                                                                // 0x0078 (size: 0x1)
    FRVPDPClothPhysicsAnimDriveSettings ClothAnimDriveSettings;                       // 0x0080 (size: 0x20)
    bool SetCollision;                                                                // 0x00A0 (size: 0x1)
    FRVPDPClothPhysicsCollisionSettings ClothCollisionSettings;                       // 0x00A4 (size: 0x10)
    bool SetLongRangeAttachment;                                                      // 0x00B4 (size: 0x1)
    FRVPDPClothPhysicsLongRangeAttachmentSettings ClothLongRangeAttachmentSettings;   // 0x00B8 (size: 0x20)
    bool SetMaterial;                                                                 // 0x00D8 (size: 0x1)
    FRVPDPClothPhysicsMaterialSettings ClothMaterialSettings;                         // 0x00E0 (size: 0x30)
    bool SetPhysicsVelocityScale;                                                     // 0x0110 (size: 0x1)
    FRVPDPClothPhysicsVelocityScaleSettings ClothPhysicsVelocityScaleSettings;        // 0x0118 (size: 0x20)
    bool SetAirPressure;                                                              // 0x0138 (size: 0x1)
    FRVPDPClothPhysicsSetAirPressureSettings ClothPhysicssAirPressureSettings;        // 0x0140 (size: 0x10)

}; // Size: 0x150

struct FRVPDPClosestVertexDataOptimizationSettings
{
    int32 OptionalStaticMeshFaceIndex;                                                // 0x0000 (size: 0x4)
    bool AcceptClosestVertexDataIfVertexIsWithinMinRange;                             // 0x0004 (size: 0x1)
    float AcceptClosestVertexDataIfVertexIsWithinRange;                               // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FRVPDPClosestVertexDataResults
{
    bool ClosestVertexDataSuccessfullyAcquired;                                       // 0x0000 (size: 0x1)
    FRVPDPClosestVertexInfo ClosestVertexGeneralInfo;                                 // 0x0008 (size: 0x90)
    FRVPDPPhysicsSurfaceDataInfo ClosestVertexPhysicalSurfaceInfo;                    // 0x0098 (size: 0x110)

}; // Size: 0x1A8

struct FRVPDPClosestVertexInfo
{
    int32 ClosestVertexIndex;                                                         // 0x0000 (size: 0x4)
    int32 ClosestSection;                                                             // 0x0004 (size: 0x4)
    FLinearColor ClosestVertexColors;                                                 // 0x0008 (size: 0x10)
    FRVPDPClosestVertexPositionInfo ClosestVertexPositionInfo;                        // 0x0018 (size: 0x30)
    FRVPDPClosestVertexNormalInfo ClosestVertexNormalInfo;                            // 0x0048 (size: 0x30)
    class UMaterialInterface* ClosestVertexMaterial;                                  // 0x0078 (size: 0x8)
    TArray<FVector2D> ClosestVertexUVAtEachUVChannel;                                 // 0x0080 (size: 0x10)

}; // Size: 0x90

struct FRVPDPClosestVertexNormalInfo
{
    FVector ClosestVertexNormal;                                                      // 0x0000 (size: 0x18)
    FVector ClosestVertexNormalLocal;                                                 // 0x0018 (size: 0x18)

}; // Size: 0x30

struct FRVPDPClosestVertexPositionInfo
{
    FVector ClosestVertexPositionWorld;                                               // 0x0000 (size: 0x18)
    FVector ClosestVertexPositionActorLocal;                                          // 0x0018 (size: 0x18)

}; // Size: 0x30

struct FRVPDPClothPhysicsAnimDriveSettings
{
    FVector2D SetAnimDrive_Stiffness;                                                 // 0x0000 (size: 0x10)
    FVector2D SetAnimDrive_Damping;                                                   // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FRVPDPClothPhysicsCollisionSettings
{
    float SetCollision_CollisionThickness;                                            // 0x0000 (size: 0x4)
    float SetCollision_FrictionCoefficient;                                           // 0x0004 (size: 0x4)
    bool SetCollision_UseCCD;                                                         // 0x0008 (size: 0x1)
    float SetCollision_SelfCollisionThickness;                                        // 0x000C (size: 0x4)

}; // Size: 0x10

struct FRVPDPClothPhysicsDampingSettings
{
    float SetDamping_dampingCoefficient;                                              // 0x0000 (size: 0x4)

}; // Size: 0x4

struct FRVPDPClothPhysicsGravitySettings
{
    float SetGravity_gravityScale;                                                    // 0x0000 (size: 0x4)
    bool SetGravity_overrideGravity;                                                  // 0x0004 (size: 0x1)
    FVector SetGravity_gravityOverride;                                               // 0x0008 (size: 0x18)

}; // Size: 0x20

struct FRVPDPClothPhysicsLongRangeAttachmentSettings
{
    FVector2D LongRangeAttachment_TetherThickness;                                    // 0x0000 (size: 0x10)
    FVector2D LongRangeAttachment_TetherScale;                                        // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FRVPDPClothPhysicsMaterialSettings
{
    FVector2D Material_EdgeStiffness;                                                 // 0x0000 (size: 0x10)
    FVector2D Material_BendingStiffness;                                              // 0x0010 (size: 0x10)
    FVector2D Material_AreaStiffness;                                                 // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FRVPDPClothPhysicsSetAirPressureSettings
{
    FVector2D SetPressure_Pressure;                                                   // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FRVPDPClothPhysicsVelocityScaleSettings
{
    FVector PhysicsVelocityScale_LinearVelocityScale;                                 // 0x0000 (size: 0x18)
    float PhysicVelocityScale_AngularVelocityScale;                                   // 0x0018 (size: 0x4)
    float PhysicsVelocityScale_FictitiousAngularVelocityScale;                        // 0x001C (size: 0x4)

}; // Size: 0x20

struct FRVPDPClothPhysicsWindSettings
{
    FVector2D SetWind_drag;                                                           // 0x0000 (size: 0x10)
    FVector2D SetWind_lift;                                                           // 0x0010 (size: 0x10)
    float SetWind_airDensity;                                                         // 0x0020 (size: 0x4)
    FVector SetWind_windVelocity;                                                     // 0x0028 (size: 0x18)

}; // Size: 0x40

struct FRVPDPColorSnippetDataAssetInfo
{
    FString ColorSnippetID;                                                           // 0x0000 (size: 0x10)
    class UVertexPaintColorSnippetDataAsset* ColorSnippetDataAssetSnippetIsStoredIn;  // 0x0010 (size: 0x8)

}; // Size: 0x18

struct FRVPDPColorSnippetDataInfo
{
    TSoftObjectPtr<UObject> ObjectColorSnippetBelongsTo;                              // 0x0000 (size: 0x28)
    TArray<FVertexDetectMeshDataPerLODStruct> ColorSnippetDataPerLOD;                 // 0x0028 (size: 0x10)

}; // Size: 0x38

struct FRVPDPColorSnippetReferenceDataInfo
{
    TMap<class FString, class FRVPDPStoredColorSnippetInfo> ColorSnippetsStorageInfo; // 0x0000 (size: 0x50)

}; // Size: 0x50

struct FRVPDPCompareMeshVertexColorsSettings
{
    bool SkipEmptyVertices;                                                           // 0x0000 (size: 0x1)
    FLinearColor EmptyVertexColor;                                                    // 0x0004 (size: 0x10)
    float ComparisonErrorTolerance;                                                   // 0x0014 (size: 0x4)
    bool CompareRedChannel;                                                           // 0x0018 (size: 0x1)
    bool CompareGreenChannel;                                                         // 0x0019 (size: 0x1)
    bool CompareBlueChannel;                                                          // 0x001A (size: 0x1)
    bool CompareAlphaChannel;                                                         // 0x001B (size: 0x1)

}; // Size: 0x24

struct FRVPDPCompareMeshVertexColorsToColorArrayResult
{
    bool SuccessfullyComparedMeshVertexColorsToColorArray;                            // 0x0000 (size: 0x1)
    float MatchingPercent;                                                            // 0x0004 (size: 0x4)
    bool SkippedAllVertices;                                                          // 0x0008 (size: 0x1)

}; // Size: 0xC

struct FRVPDPCompareMeshVertexColorsToColorArraySettings : public FRVPDPCompareMeshVertexColorsSettings
{
    TArray<FColor> ColorArrayToCompareWith;                                           // 0x0028 (size: 0x10)

}; // Size: 0x38

struct FRVPDPCompareMeshVertexColorsToColorSnippetResult
{
    bool SuccessfullyComparedMeshVertexColorsToColorSnippet;                          // 0x0000 (size: 0x1)
    TMap<FGameplayTag, float> MatchingPercentPerColorSnippet;                         // 0x0008 (size: 0x50)
    TMap<class FGameplayTag, class bool> SkippedAllVerticesPerSnippet;                // 0x0058 (size: 0x50)

}; // Size: 0xA8

struct FRVPDPCompareMeshVertexColorsToColorSnippetsSettings : public FRVPDPCompareMeshVertexColorsSettings
{
    TArray<FGameplayTag> CompareWithColorsSnippetTag;                                 // 0x0028 (size: 0x10)
    TArray<FRVPDPColorSnippetDataAssetInfo> CompareWithColorsSnippetDataAssetInfo;    // 0x0038 (size: 0x10)

}; // Size: 0x48

struct FRVPDPComponentToCheckIfIsWithinAreaInfo
{
    class UPrimitiveComponent* ComponentToCheckIfIsWithin;                            // 0x0000 (size: 0x8)
    EPaintWithinAreaShape PaintWithinAreaShape;                                       // 0x0008 (size: 0x1)
    bool TraceComplexIfComplexShape;                                                  // 0x0009 (size: 0x1)

}; // Size: 0x2D0

struct FRVPDPDebugSettings
{
    class UWorld* WorldTaskWasCreatedIn;                                              // 0x0000 (size: 0x8)
    bool PrintLogsToScreen;                                                           // 0x0008 (size: 0x1)
    float PrintLogsToScreen_Duration;                                                 // 0x000C (size: 0x4)
    bool PrintLogsToOutputLog;                                                        // 0x0010 (size: 0x1)
    FRVPDPGameThreadSpecificDebugSettings GameThreadSpecificDebugSymbols;             // 0x0014 (size: 0xC)
    FRVPDPTaskSpecificDebugSymbolsSettings TaskSpecificDebugSymbols;                  // 0x0020 (size: 0x8)

}; // Size: 0x28

struct FRVPDPDetectTaskSettings : public FRVPDPTaskFundamentalSettings
{
}; // Size: 0x110

struct FRVPDPDoesVertexHasLineOfSightPaintConditionSettings : public FRVPDPPaintConditionBase
{
    class AActor* IfVertexHasLineOfSightToActor;                                      // 0x0008 (size: 0x8)
    FVector IfVertexHasLineOfSightToPosition;                                         // 0x0010 (size: 0x18)
    float DistanceFromVertexPositionToStartTrace;                                     // 0x0028 (size: 0x4)
    TArray<TEnumAsByte<EObjectTypeQuery>> CheckLineOfSightAgainstObjectTypes;         // 0x0030 (size: 0x10)
    bool TraceForComplex;                                                             // 0x0040 (size: 0x1)
    TArray<class AActor*> LineOfSightTraceActorsToIgnore;                             // 0x0048 (size: 0x10)
    TArray<class UPrimitiveComponent*> LineOfSightTraceMeshComponentsToIgnore;        // 0x0058 (size: 0x10)

}; // Size: 0xE8

struct FRVPDPEstimatedColorAtHitLocationInfo
{
    bool EstimatedColorAtHitLocationDataSuccessfullyAcquired;                         // 0x0000 (size: 0x1)
    FLinearColor EstimatedColorAtHitLocation;                                         // 0x0004 (size: 0x10)
    FRVPDPPhysicsSurfaceDataInfo PhysicalSurfaceInfo;                                 // 0x0018 (size: 0x110)
    FVector WorldSpaceLocationWeEstimatedTheColorAt;                                  // 0x0128 (size: 0x18)

}; // Size: 0x140

struct FRVPDPEstimatedColorAtHitLocationSettings
{
    bool GetEstimatedColorAtHitLocation;                                              // 0x0000 (size: 0x1)
    bool OnlyGetIfMeshHasMaxAmountOfVertices;                                         // 0x0001 (size: 0x1)
    int32 MaxAmountOfVertices;                                                        // 0x0004 (size: 0x4)
    float MinHitNormalToVertexNormalDotRequired;                                      // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FRVPDPGameThreadSpecificDebugSettings
{
    bool DrawVertexPositionDebugPoint;                                                // 0x0000 (size: 0x1)
    bool DrawVertexPositionDebugPointIfGotPaintApplied;                               // 0x0001 (size: 0x1)
    bool DrawClothVertexPositionDebugPoint;                                           // 0x0002 (size: 0x1)
    bool DrawVertexNormalDebugArrow;                                                  // 0x0003 (size: 0x1)
    bool DrawPaintConditionsDebugSymbols;                                             // 0x0004 (size: 0x1)
    float DrawGameThreadSpecificDebugSymbolsDuration;                                 // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FRVPDPGetAverageColorSettings
{
    bool GetAverageColor;                                                             // 0x0000 (size: 0x1)
    float AreaRangeToGetAvarageColorFrom;                                             // 0x0004 (size: 0x4)
    float VertexNormalToHitNormal_MinimumDotProductToBeAccountedFor;                  // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FRVPDPGetClosestVertexDataComboPaintAtLocationSettings
{
    bool RunGetClosestVertexDataOnMeshBeforeApplyingPaint;                            // 0x0000 (size: 0x1)
    bool RunGetClosestVertexDataOnMeshAfterApplyingPaint;                             // 0x0001 (size: 0x1)
    FRVPDPGetAverageColorSettings GetAverageColorBeforeApplyingColorSettings;         // 0x0004 (size: 0xC)
    bool UseCustomHitSettings;                                                        // 0x0010 (size: 0x1)
    FRVPDPAtLocationTasksSettings CustomHitSettings;                                  // 0x0018 (size: 0x60)

}; // Size: 0x78

struct FRVPDPGetClosestVertexDataSettings : public FRVPDPDetectTaskSettings
{
    FRVPDPGetAverageColorSettings GetAverageColorInAreaSettings;                      // 0x0110 (size: 0xC)
    FRVPDPAtLocationTasksSettings HitFundementals;                                    // 0x0120 (size: 0x60)
    FRVPDPEstimatedColorAtHitLocationSettings GetEstimatedColorAtHitLocationSettings; // 0x0180 (size: 0xC)
    FRVPDPClosestVertexDataOptimizationSettings ClosestVertexDataOptimizationSettings; // 0x018C (size: 0xC)

}; // Size: 0x198

struct FRVPDPGetColorsOnlySettings : public FRVPDPDetectTaskSettings
{
}; // Size: 0x110

struct FRVPDPGetColorsWithinAreaSettings : public FRVPDPDetectTaskSettings
{
    FRVPDPWithinAreaSettings WithinAreaSettings;                                      // 0x0110 (size: 0x48)

}; // Size: 0x158

struct FRVPDPGroupColorSnippetInfo
{
    FString GroupSnippetID;                                                           // 0x0000 (size: 0x10)
    TSoftObjectPtr<UVertexPaintColorSnippetDataAsset> ColorSnippetDataAssetStoredOn;  // 0x0010 (size: 0x28)
    TArray<TSoftObjectPtr<UObject>> AssociatedGroupMeshes;                            // 0x0038 (size: 0x10)

}; // Size: 0x48

struct FRVPDPIncludeAmountOfPaintedColorsOfEachChannelSettings
{
    bool IncludeVertexColorChannelResultOfEachChannel;                                // 0x0000 (size: 0x1)
    bool IncludePhysicsSurfaceResultOfEachChannel;                                    // 0x0001 (size: 0x1)
    float IncludeIfMinColorAmountIs;                                                  // 0x0004 (size: 0x4)
    TArray<TEnumAsByte<EPhysicalSurface>> IncludeOnlyIfPhysicsSurfacesIsRegisteredToAnyVertexChannel; // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FRVPDPIsVertexAboveOrBelowWorldZPaintConditionSettings : public FRVPDPPaintConditionBase
{
    float IfVertexIsAboveOrBelowWorldZ;                                               // 0x0008 (size: 0x4)
    bool CheckIfAboveInsteadOfBelowZ;                                                 // 0x000C (size: 0x1)

}; // Size: 0x10

struct FRVPDPIsVertexColorWithinColorRangePaintConditionSettings : public FRVPDPPaintConditionBase
{
    TEnumAsByte<EPhysicalSurface> IfChannelWithPhysicsSurfaceIsWithinColorRange;      // 0x0008 (size: 0x1)
    ESurfaceAtChannel IfVertexColorChannelWithinColorRange;                           // 0x0009 (size: 0x1)
    float IfCurrentVertexColorValueIsHigherOrEqualThan;                               // 0x000C (size: 0x4)
    float IfCurrentVertexColorValueIsLessOrEqualThan;                                 // 0x0010 (size: 0x4)

}; // Size: 0x18

struct FRVPDPIsVertexDirectionTowardLocationPaintConditionSettings : public FRVPDPPaintConditionBase
{
    class AActor* Actor;                                                              // 0x0008 (size: 0x8)
    FVector Location;                                                                 // 0x0010 (size: 0x18)
    float MinDotProductToActorOrLocation;                                             // 0x0028 (size: 0x4)

}; // Size: 0x30

struct FRVPDPIsVertexNormalWithinDotToDirectionPaintConditionSettings : public FRVPDPPaintConditionBase
{
    FVector DirectionToCheckAgainst;                                                  // 0x0008 (size: 0x18)
    float MinDotProductToDirectionRequired;                                           // 0x0020 (size: 0x4)
    class AActor* GetDirectionFromActorRotation;                                      // 0x0028 (size: 0x8)

}; // Size: 0x30

struct FRVPDPIsVertexOnBonePaintConditionSettings : public FRVPDPPaintConditionBase
{
    FName IfVertexIsAtBone;                                                           // 0x0008 (size: 0x8)
    float MinBoneWeight;                                                              // 0x0010 (size: 0x4)

}; // Size: 0x14

struct FRVPDPIsVertexOnMaterialPaintConditionSettings : public FRVPDPPaintConditionBase
{
    class UMaterialInterface* IfVertexIsOnMaterial;                                   // 0x0008 (size: 0x8)
    class UMaterialInterface* IfVertexIsOnMaterialParent;                             // 0x0010 (size: 0x8)
    bool CheckMaterialParents;                                                        // 0x0018 (size: 0x1)

}; // Size: 0x20

struct FRVPDPIsVertexWithinDirectionFromLocationPaintConditionSettings : public FRVPDPPaintConditionBase
{
    class AActor* Actor;                                                              // 0x0008 (size: 0x8)
    FVector Location;                                                                 // 0x0010 (size: 0x18)
    FVector Direction;                                                                // 0x0028 (size: 0x18)
    float MinDotProductToDirection;                                                   // 0x0040 (size: 0x4)

}; // Size: 0x48

struct FRVPDPLerpVertexColorToTargetSettings
{
    bool LerpToTarget;                                                                // 0x0000 (size: 0x1)
    float TargetValue;                                                                // 0x0004 (size: 0x4)
    float LerpStrength;                                                               // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FRVPDPMostDominantPhysicsSurfaceInfo
{
    TEnumAsByte<EPhysicalSurface> MostDominantPhysicsSurface;                         // 0x0000 (size: 0x1)
    FString MostDominantPhysicsSurfaceAsString;                                       // 0x0008 (size: 0x10)
    float MostDominantPhysicstSurfaceValue;                                           // 0x0018 (size: 0x4)
    TArray<ESurfaceAtChannel> MostDominantPhysicsSurfaceAtVertexColorChannels;        // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FRVPDPMultiThreadSettings
{
    bool UseMultithreadingForCalculations;                                            // 0x0000 (size: 0x1)

}; // Size: 0x1

struct FRVPDPOverrideColorsToApplySettings
{
    bool OverrideVertexColorsToApply;                                                 // 0x0000 (size: 0x1)
    class UObject* ObjectToRunOverrideVertexColorsInterface;                          // 0x0008 (size: 0x8)
    int32 OverrideVertexColorsToApplyID;                                              // 0x0010 (size: 0x4)
    bool OnlyRunOverrideInterfaceIfTryingToApplyColorToVertex;                        // 0x0014 (size: 0x1)
    bool IncludeMostDominantPhysicsSurface;                                           // 0x0015 (size: 0x1)

}; // Size: 0x18

struct FRVPDPOverrideLODToPaintUpToSettings
{
    bool OverrideLODToPaintUpTo;                                                      // 0x0000 (size: 0x1)
    int32 AmountOfLODsToPaint;                                                        // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FRVPDPPaintAtLocationAreaOfEffectSettings
{
    float AreaOfEffectRangeStart;                                                     // 0x0000 (size: 0x4)
    float AreaOfEffectRangeEnd;                                                       // 0x0004 (size: 0x4)
    FRVPDPPaintAtLocationFallOffSettings FallOffSettings;                             // 0x0008 (size: 0x18)
    FRVPDPGetAverageColorSettings GetAverageColorAfterApplyingColorSettings;          // 0x0020 (size: 0xC)
    TArray<FName> SpecificBonesToPaint;                                               // 0x0030 (size: 0x10)

}; // Size: 0x48

struct FRVPDPPaintAtLocationFallOffSettings : public FRVPDPVertexPaintFallOffSettings
{
    EVertexPaintAtLocationFallOffType PaintAtLocationFallOffType;                     // 0x0014 (size: 0x1)

}; // Size: 0x18

struct FRVPDPPaintAtLocationSettings : public FRVPDPApplyColorSetting
{
    FRVPDPAtLocationTasksSettings HitFundementals;                                    // 0x0418 (size: 0x60)
    FRVPDPPaintAtLocationAreaOfEffectSettings PaintAtAreaSettings;                    // 0x0478 (size: 0x48)
    FRVPDPEstimatedColorAtHitLocationSettings GetEstimatedColorAtHitLocationSettings; // 0x04C0 (size: 0xC)
    FRVPDPGetClosestVertexDataComboPaintAtLocationSettings GetClosestVertexDataCombo; // 0x04D0 (size: 0x78)

}; // Size: 0x548

struct FRVPDPPaintColorSnippetSettings : public FRVPDPPaintDirectlyTaskSettings
{
    FGameplayTag ColorSnippetTag;                                                     // 0x0178 (size: 0x8)
    FRVPDPPaintColorSnippetSetting PaintColorSnippetSetting;                          // 0x0180 (size: 0x1)
    bool RandomizeSnippetUnderChosenTagCategory;                                      // 0x0181 (size: 0x1)
    TArray<class UPrimitiveComponent*> PaintGroupSnippetMeshes;                       // 0x0188 (size: 0x10)
    FRVPDPColorSnippetDataAssetInfo ColorSnippetDataAssetInfo;                        // 0x0198 (size: 0x18)

}; // Size: 0x1B0

struct FRVPDPPaintConditionBase
{
    float ColorStrengthIfThisConditionIsNotMet;                                       // 0x0000 (size: 0x4)
    EApplyVertexColorSetting SettingIfConditionIsNotMet;                              // 0x0004 (size: 0x1)

}; // Size: 0x8

struct FRVPDPPaintConditionSettings
{
    TArray<FRVPDPIsVertexNormalWithinDotToDirectionPaintConditionSettings> IsVertexNormalWithinDotToDirection; // 0x0000 (size: 0x10)
    TArray<FRVPDPIsVertexDirectionTowardLocationPaintConditionSettings> OnlyAffectVerticesWithDirectionToActorOrLocation; // 0x0010 (size: 0x10)
    TArray<FRVPDPIsVertexWithinDirectionFromLocationPaintConditionSettings> OnlyAffectVerticesWithinDirectionFromActorOrLocation; // 0x0020 (size: 0x10)
    TArray<FRVPDPIsVertexAboveOrBelowWorldZPaintConditionSettings> IfVertexIsAboveOrBelowWorldZ; // 0x0030 (size: 0x10)
    TArray<FRVPDPIsVertexColorWithinColorRangePaintConditionSettings> IfVertexColorIsWithinRange; // 0x0040 (size: 0x10)
    TArray<FRVPDPIsVertexOnBonePaintConditionSettings> IfVertexIsOnBone;              // 0x0050 (size: 0x10)
    TArray<FRVPDPIsVertexOnMaterialPaintConditionSettings> IfVertexIsOnMaterial;      // 0x0060 (size: 0x10)
    TArray<FRVPDPDoesVertexHasLineOfSightPaintConditionSettings> IfVertexHasLineOfSightTo; // 0x0070 (size: 0x10)

}; // Size: 0x80

struct FRVPDPPaintDirectlyTaskSettings : public FRVPDPPaintTaskSettings
{
    FRVPDPPaintLimitSettings VertexColorRedChannelsLimit;                             // 0x0148 (size: 0xC)
    FRVPDPPaintLimitSettings VertexColorGreenChannelsLimit;                           // 0x0154 (size: 0xC)
    FRVPDPPaintLimitSettings VertexColorBlueChannelsLimit;                            // 0x0160 (size: 0xC)
    FRVPDPPaintLimitSettings VertexColorAlphaChannelsLimit;                           // 0x016C (size: 0xC)

}; // Size: 0x178

struct FRVPDPPaintGroupSnippetSettings : public FRVPDPPaintColorSnippetSettings
{
}; // Size: 0x1B0

struct FRVPDPPaintLimitSettings
{
    bool UsePaintLimits;                                                              // 0x0000 (size: 0x1)
    float PaintLimit;                                                                 // 0x0004 (size: 0x4)
    bool LimitColorIfTheColorWasAlreadyOverTheLimit;                                  // 0x0008 (size: 0x1)

}; // Size: 0xC

struct FRVPDPPaintOnEntireMeshAtRandomVerticesSettings
{
    bool PaintAtRandomVerticesSpreadOutOverTheEntireMesh;                             // 0x0000 (size: 0x1)
    float PaintAtRandomVerticesSpreadOutOverTheEntireMesh_PercentToPaint;             // 0x0004 (size: 0x4)
    EPaintEntireMeshPropogateToLODsMethod PaintAtRandomVerticesSpreadOutOverTheEntireMesh_PropogateLOD0ToAllLODsMethod; // 0x0008 (size: 0x1)
    bool OnlyRandomizeWithinAreaOfEffectAtLocation;                                   // 0x0009 (size: 0x1)
    float OnlyRandomizeWithinAreaOfEffectAtLocation_AreaOfEffect;                     // 0x000C (size: 0x4)
    FVector OnlyRandomizeWithinAreaOfEffectAtLocation_Location;                       // 0x0010 (size: 0x18)
    float OnlyRandomizeWithinAreaOfEffectAtLocation_ProbabilityFactor;                // 0x0028 (size: 0x4)
    bool OverrideRandomSeeds;                                                         // 0x002C (size: 0x1)
    FRandomStream SeedToOverrideWith;                                                 // 0x0030 (size: 0x8)
    FRandomStream RandomSeedsUsedInPaintJob;                                          // 0x0038 (size: 0x8)

}; // Size: 0x40

struct FRVPDPPaintOnEntireMeshSettings : public FRVPDPApplyColorSetting
{
    FRVPDPPaintOnEntireMeshAtRandomVerticesSettings PaintOnRandomVerticesSettings;    // 0x0418 (size: 0x40)

}; // Size: 0x458

struct FRVPDPPaintOnLODSettings
{
    int32 MaxAmountOfLODsToPaint;                                                     // 0x0000 (size: 0x4)

}; // Size: 0x4

struct FRVPDPPaintSettingsOutsideOfArea
{
    float RedVertexColorToApply;                                                      // 0x0000 (size: 0x4)
    float GreenVertexColorToApply;                                                    // 0x0004 (size: 0x4)
    float BlueVertexColorToApply;                                                     // 0x0008 (size: 0x4)
    float AlphaVertexColorToApply;                                                    // 0x000C (size: 0x4)

}; // Size: 0x10

struct FRVPDPPaintTaskResultInfo
{
    bool AnyVertexColorGotChanged;                                                    // 0x0000 (size: 0x1)
    TArray<FName> VertexColorAppliedToBones;                                          // 0x0008 (size: 0x10)
    TArray<EVertexColorChannel> ColorAppliedToVertexColorChannels;                    // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FRVPDPPaintTaskSettings : public FRVPDPTaskFundamentalSettings
{
    bool ApplyPaintJobToVertexColors;                                                 // 0x0110 (size: 0x1)
    FRVPDPOverrideLODToPaintUpToSettings OverrideLOD;                                 // 0x0114 (size: 0x8)
    bool AffectClothPhysics;                                                          // 0x011C (size: 0x1)
    TArray<class AActor*> CanOnlyApplyPaintOnTheseActors;                             // 0x0120 (size: 0x10)
    FRVPDPOverrideColorsToApplySettings OverrideVertexColorsToApplySettings;          // 0x0130 (size: 0x18)

}; // Size: 0x148

struct FRVPDPPaintWithinAreaFallOffSettings : public FRVPDPVertexPaintFallOffSettings
{
    EVertexPaintWithinAreaFallOffType PaintWithinAreaFallOffType;                     // 0x0014 (size: 0x1)

}; // Size: 0x18

struct FRVPDPPaintWithinAreaSettings : public FRVPDPApplyColorSetting
{
    FRVPDPWithinAreaSettings WithinAreaSettings;                                      // 0x0418 (size: 0x48)
    bool GetColorsWithinAreaCombo;                                                    // 0x0460 (size: 0x1)
    float ExtraExtentToApplyPaintOn;                                                  // 0x0464 (size: 0x4)
    FRVPDPPaintWithinAreaFallOffSettings FallOffSettings;                             // 0x0468 (size: 0x18)
    FRVPDPPaintSettingsOutsideOfArea ColorToApplyToVerticesOutsideOfArea;             // 0x0480 (size: 0x10)

}; // Size: 0x490

struct FRVPDPPhysicsSurfaceBlendSettings
{
    TSoftObjectPtr<UMaterialInterface> AssociatedMaterial;                            // 0x0000 (size: 0x28)
    TArray<TEnumAsByte<EPhysicalSurface>> PhysicsSurfacesThatCanBlend;                // 0x0028 (size: 0x10)
    float MinAmountOnEachSurfaceToBeAbleToBlend;                                      // 0x0038 (size: 0x4)
    TEnumAsByte<EPhysicalSurface> PhysicsSurfaceToResultIn;                           // 0x003C (size: 0x1)

}; // Size: 0x40

struct FRVPDPPhysicsSurfaceDataAtChannelInfo
{
    TEnumAsByte<EPhysicalSurface> PhysicalSurfaceAtChannel;                           // 0x0000 (size: 0x1)
    FString PhysicalSurfaceAsStringAtChannel;                                         // 0x0008 (size: 0x10)
    float PhysicalSurfaceValueAtChannel;                                              // 0x0018 (size: 0x4)

}; // Size: 0x20

struct FRVPDPPhysicsSurfaceDataInfo
{
    bool PhysicsSurfaceSuccessfullyAcquired;                                          // 0x0000 (size: 0x1)
    FRVPDPMostDominantPhysicsSurfaceInfo MostDominantPhysicsSurfaceInfo;              // 0x0008 (size: 0x30)
    bool MaterialRegisteredToIncludeDefaultChannel;                                   // 0x0038 (size: 0x1)
    FRVPDPPhysicsSurfaceDataAtChannelInfo PhysicsSurface_AtDefault;                   // 0x0040 (size: 0x20)
    FRVPDPPhysicsSurfaceDataAtChannelInfo PhysicsSurface_AtRed;                       // 0x0060 (size: 0x20)
    FRVPDPPhysicsSurfaceDataAtChannelInfo PhysicsSurface_AtGreen;                     // 0x0080 (size: 0x20)
    FRVPDPPhysicsSurfaceDataAtChannelInfo PhysicsSurface_AtBlue;                      // 0x00A0 (size: 0x20)
    FRVPDPPhysicsSurfaceDataAtChannelInfo PhysicsSurface_AtAlpha;                     // 0x00C0 (size: 0x20)
    TArray<TEnumAsByte<EPhysicalSurface>> PhysicalSurfacesAsArray;                    // 0x00E0 (size: 0x10)
    TArray<FString> SurfacesAsStringArray;                                            // 0x00F0 (size: 0x10)
    TArray<float> SurfaceValuesArray;                                                 // 0x0100 (size: 0x10)

}; // Size: 0x110

struct FRVPDPPhysicsSurfaceToApplySettings
{
    TEnumAsByte<EPhysicalSurface> SurfaceToApply;                                     // 0x0000 (size: 0x1)
    float StrengthToApply;                                                            // 0x0004 (size: 0x4)
    EApplyVertexColorSetting SettingToApplyWith;                                      // 0x0008 (size: 0x1)
    FRVPDPPaintConditionSettings PaintConditions;                                     // 0x0010 (size: 0x80)
    FRVPDPLerpVertexColorToTargetSettings LerpPhysicsSurfaceToTarget;                 // 0x0090 (size: 0xC)
    FRVPDPPaintLimitSettings SurfacePaintLimit;                                       // 0x009C (size: 0xC)

}; // Size: 0xA8

struct FRVPDPRegisteredMaterialSetting
{
    bool IncludeDefaultChannelWhenDetecting;                                          // 0x0000 (size: 0x1)
    TEnumAsByte<EPhysicalSurface> AtDefault;                                          // 0x0001 (size: 0x1)
    TEnumAsByte<EPhysicalSurface> PaintedAtRed;                                       // 0x0002 (size: 0x1)
    TEnumAsByte<EPhysicalSurface> PaintedAtGreen;                                     // 0x0003 (size: 0x1)
    TEnumAsByte<EPhysicalSurface> PaintedAtBlue;                                      // 0x0004 (size: 0x1)
    TEnumAsByte<EPhysicalSurface> PaintedAtAlpha;                                     // 0x0005 (size: 0x1)
    TMap<TEnumAsByte<EPhysicalSurface>, FRVPDPPhysicsSurfaceBlendSettings> PhysicsSurfaceBlendingSettings; // 0x0008 (size: 0x50)

}; // Size: 0x58

struct FRVPDPRegisteredPhysicsSurfacesSettings
{
    TArray<TEnumAsByte<EPhysicalSurface>> ChildSurfaces;                              // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FRVPDPRegisteredSkeletalMeshInfo
{
    int32 TotalAmountsOfPaintableBonesWithCollision;                                  // 0x0000 (size: 0x4)
    TArray<FRVPDPSkeletalMeshBoneInfoPerLOD> SkeletalMeshBoneInfoPerLOD;              // 0x0008 (size: 0x10)
    TMap<class FName, class FRVPDPSkeletalMeshBonesToIncludeInfo> SkeletalMeshBonesToInclude; // 0x0018 (size: 0x50)

}; // Size: 0x68

struct FRVPDPSerializedColorsPerLODInfo
{
    int32 Lod;                                                                        // 0x0000 (size: 0x4)
    FString ColorsAtLODAsJSonString;                                                  // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FRVPDPSetVertexColorsSettings : public FRVPDPPaintDirectlyTaskSettings
{
    TArray<FColor> VertexColorsAtLOD0ToSet;                                           // 0x0178 (size: 0x10)

}; // Size: 0x188

struct FRVPDPSetVertexColorsUsingSerializedStringSettings : public FRVPDPPaintDirectlyTaskSettings
{
    FString SerializedColorDataAtLOD0;                                                // 0x0178 (size: 0x10)

}; // Size: 0x188

struct FRVPDPSkeletalMeshBoneInfoPerLOD
{
    int32 Lod;                                                                        // 0x0000 (size: 0x4)
    TMap<int32, FRVPDPSkeletalMeshSectionInfo> SkeletalMeshSectionInfo;               // 0x0008 (size: 0x50)

}; // Size: 0x58

struct FRVPDPSkeletalMeshBoneVertexInfo
{
    int32 BoneFirstVertex;                                                            // 0x0000 (size: 0x4)
    int32 BoneFirstSectionVertex;                                                     // 0x0004 (size: 0x4)
    FName BoneName;                                                                   // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FRVPDPSkeletalMeshBonesToIncludeInfo
{
    FName ParentBoneName;                                                             // 0x0000 (size: 0x8)
    TArray<FName> BoneParentsToInclude;                                               // 0x0008 (size: 0x10)
    TArray<FName> BoneChildsToInclude;                                                // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FRVPDPSkeletalMeshSectionInfo
{
    int32 AtSection;                                                                  // 0x0000 (size: 0x4)
    TMap<int32, FRVPDPSkeletalMeshBoneVertexInfo> SkeletalMeshBoneVertexInfo;         // 0x0008 (size: 0x50)

}; // Size: 0x58

struct FRVPDPStartNewRoundOfTasksInfo
{
    TMap<class UPrimitiveComponent*, class FRVPDPAutoPaintTaskResults> NewRoundOfTasks; // 0x0000 (size: 0x50)

}; // Size: 0x50

struct FRVPDPStoredColorSnippetInfo
{
    TSoftObjectPtr<UVertexPaintColorSnippetDataAsset> ColorSnippetDataAssetStoredOn;  // 0x0000 (size: 0x28)
    TSoftObjectPtr<UObject> ObjectColorSnippetBelongsTo;                              // 0x0028 (size: 0x28)
    bool IsPartOfAGroupSnippet;                                                       // 0x0050 (size: 0x1)
    FString GroupSnippetID;                                                           // 0x0058 (size: 0x10)
    FVector RelativeLocationToGroupCenterPoint;                                       // 0x0068 (size: 0x18)
    float DotProductToGroupCenterPoint;                                               // 0x0080 (size: 0x4)

}; // Size: 0x88

struct FRVPDPTaskCallbackSettings
{
    bool RunCallbackDelegate;                                                         // 0x0000 (size: 0x1)
    bool RunCallbackInterfacesOnObject;                                               // 0x0001 (size: 0x1)
    class UObject* ObjectToRunInterfacesOn;                                           // 0x0008 (size: 0x8)
    bool RunCallbackInterfacesOnObjectComponents;                                     // 0x0010 (size: 0x1)
    bool IncludeVertexDataOnlyForLOD0;                                                // 0x0011 (size: 0x1)
    bool IncludeColorsOfEachBone;                                                     // 0x0012 (size: 0x1)
    FRVPDPIncludeAmountOfPaintedColorsOfEachChannelSettings IncludeAmountOfPaintedColorsOfEachChannel; // 0x0018 (size: 0x18)
    FRVPDPCompareMeshVertexColorsToColorArraySettings CompareMeshVertexColorsToColorArray; // 0x0030 (size: 0x38)
    FRVPDPCompareMeshVertexColorsToColorSnippetsSettings CompareMeshVertexColorsToColorSnippets; // 0x0068 (size: 0x48)
    bool IncludeVertexColorData;                                                      // 0x00B0 (size: 0x1)
    bool IncludeSerializedVertexColorData;                                            // 0x00B1 (size: 0x1)
    bool IncludeVertexPositionData;                                                   // 0x00B2 (size: 0x1)
    bool IncludeVertexNormalData;                                                     // 0x00B3 (size: 0x1)
    bool IncludeVertexIndexes;                                                        // 0x00B4 (size: 0x1)
    FRVPDPCallbackFromSpecifiedMeshComponentsInfo CallbacksOnObjectsForMeshComponent; // 0x00B8 (size: 0x10)

}; // Size: 0xC8

struct FRVPDPTaskFundamentalSettings
{
    class UWorld* TaskWorld;                                                          // 0x0000 (size: 0x8)
    class UPrimitiveComponent* MeshComponent;                                         // 0x0008 (size: 0x8)
    int32 ComponentItem;                                                              // 0x0010 (size: 0x4)
    FRVPDPTaskCallbackSettings CallbackSettings;                                      // 0x0018 (size: 0xC8)
    FRVPDPMultiThreadSettings MultiThreadSettings;                                    // 0x00E0 (size: 0x1)
    bool IgnoreTaskQueueLimit;                                                        // 0x00E1 (size: 0x1)
    FRVPDPDebugSettings DebugSettings;                                                // 0x00E8 (size: 0x28)

}; // Size: 0x110

struct FRVPDPTaskQueueIDInfo
{
}; // Size: 0x10

struct FRVPDPTaskResults
{
    bool TaskSuccessfull;                                                             // 0x0000 (size: 0x1)
    float TaskDuration;                                                               // 0x0004 (size: 0x4)
    class UVertexPaintDetectionComponent* AssociatedPaintComponent;                   // 0x0008 (size: 0x8)
    class UPrimitiveComponent* MeshComponent;                                         // 0x0010 (size: 0x8)
    FRVPDPVertexDataInfo MeshVertexData;                                              // 0x0018 (size: 0x60)
    FRVPDPCompareMeshVertexColorsToColorArrayResult CompareMeshVertexColorsToColorArrayResult; // 0x0078 (size: 0xC)
    FRVPDPCompareMeshVertexColorsToColorSnippetResult CompareMeshVertexColorsToColorSnippetResult; // 0x0088 (size: 0xA8)
    FRVPDPAmountOfColorsOfEachChannelResults AmountOfPaintedColorsOfEachChannel;      // 0x0130 (size: 0x58)
    FRVPDPVertexColorsOnEachBoneResult VertexColorsOnEachBone;                        // 0x0188 (size: 0x18)

}; // Size: 0x1A0

struct FRVPDPTaskSpecificDebugSymbolsSettings
{
    bool DrawTaskDebugSymbols;                                                        // 0x0000 (size: 0x1)
    float DrawTaskDebugSymbolsDuration;                                               // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FRVPDPTraceForClosestUniqueMeshesAndBonesPrerequisite
{
    TArray<FName> MeshBonesWithinTrace;                                               // 0x0000 (size: 0x10)
    FHitResult ClosestHitResultOfMesh;                                                // 0x0010 (size: 0xF8)

}; // Size: 0x108

struct FRVPDPVertexChannelsChaosClothPhysicsSettings
{
    FRVPDPChaosClothPhysicsAtVertexColorChannelSettings ClothPhysicsSettingsAtRedChannel; // 0x0000 (size: 0x260)
    FRVPDPChaosClothPhysicsAtVertexColorChannelSettings ClothPhysicsSettingsAtGreenChannel; // 0x0260 (size: 0x260)
    FRVPDPChaosClothPhysicsAtVertexColorChannelSettings ClothPhysicsSettingsAtBlueChannel; // 0x04C0 (size: 0x260)
    FRVPDPChaosClothPhysicsAtVertexColorChannelSettings ClothPhysicsSettingsAtAlphaChannel; // 0x0720 (size: 0x260)

}; // Size: 0x980

struct FRVPDPVertexColorChannels
{
    TArray<EVertexColorChannel> VertexColorChannels;                                  // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FRVPDPVertexColorsOnEachBoneResult
{
    bool SuccessFullyGotColorsForEachBone;                                            // 0x0000 (size: 0x1)
    TArray<FRVPDPBoneVertexColorsInfo> ColorsOfEachBone;                              // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FRVPDPVertexDataInfo
{
    TSoftObjectPtr<UObject> MeshSource;                                               // 0x0000 (size: 0x28)
    TSoftObjectPtr<UPrimitiveComponent> MeshComp;                                     // 0x0028 (size: 0x28)
    TArray<FVertexDetectMeshDataPerLODStruct> MeshDataPerLOD;                         // 0x0050 (size: 0x10)

}; // Size: 0x60

struct FRVPDPVertexPaintFallOffSettings
{
    float FallOffStrength;                                                            // 0x0000 (size: 0x4)
    FRVPDPStartFallOffDistanceFromSetting StartFallOffDistanceFrom;                   // 0x0004 (size: 0x1)
    float DistanceToStartFallOffFrom;                                                 // 0x0008 (size: 0x4)
    bool LimitFallOffColor;                                                           // 0x000C (size: 0x1)
    float ColorLimitAtFallOffEdge;                                                    // 0x0010 (size: 0x4)

}; // Size: 0x14

struct FRVPDPWithinAreaResults
{
    TArray<FVertexDetectMeshDataPerLODStruct> MeshVertexDataWithinArea;               // 0x0000 (size: 0x10)
    FRVPDPAmountOfColorsOfEachChannelResults AmountOfPaintedColorsOfEachChannelWithinArea; // 0x0010 (size: 0x58)

}; // Size: 0x68

struct FRVPDPWithinAreaSettings
{
    TArray<FRVPDPComponentToCheckIfIsWithinAreaInfo> ComponentsToCheckIfIsWithin;     // 0x0000 (size: 0x10)
    bool IncludeVertexColorsWithinArea;                                               // 0x0010 (size: 0x1)
    bool IncludeVertexPositionsWithinrea;                                             // 0x0011 (size: 0x1)
    bool IncludeVertexNormalsWithinArea;                                              // 0x0012 (size: 0x1)
    bool IncludeVertexIndexesWithinArea;                                              // 0x0013 (size: 0x1)
    FRVPDPIncludeAmountOfPaintedColorsOfEachChannelSettings IncludeAmountOfColorsOfEachChannelWithinArea; // 0x0018 (size: 0x18)
    bool TraceForSpecificBonesWithinArea;                                             // 0x0030 (size: 0x1)

}; // Size: 0x48

struct FVertexDetectMeshDataPerLODStruct
{
    int32 Lod;                                                                        // 0x0000 (size: 0x4)
    int32 AmountOfVerticesAtLOD;                                                      // 0x0004 (size: 0x4)
    TArray<FColor> MeshVertexColorsPerLODArray;                                       // 0x0008 (size: 0x10)
    FRVPDPSerializedColorsPerLODInfo SerializedVertexColorsData;                      // 0x0018 (size: 0x18)
    TArray<FVector> MeshVertexPositionsInComponentSpacePerLODArray;                   // 0x0030 (size: 0x10)
    TArray<FVector> MeshVertexNormalsPerLODArray;                                     // 0x0040 (size: 0x10)
    TArray<int32> MeshVertexIndexes;                                                  // 0x0050 (size: 0x10)

}; // Size: 0x60

class IVertexPaintDetectionInterface : public IInterface
{

    void PaintTaskFinishedOnRegisteredMeshComponent(const FRVPDPTaskResults& TaskResultInfo, const FRVPDPPaintTaskResultInfo& PaintTaskResultInfo, const FRVPDPAdditionalDataToPassThroughInfo& AdditionalData);
    void PaintedOnActor_WithinArea(const FRVPDPTaskResults& TaskResultInfo, const FRVPDPPaintTaskResultInfo& PaintTaskResultInfo, const FRVPDPPaintWithinAreaSettings& PaintedWithinAreaSettings, const FRVPDPWithinAreaResults& WithinAreaResults, const FRVPDPAdditionalDataToPassThroughInfo& AdditionalData);
    void PaintedOnActor_SetMeshComponentVertexColorsUsingSerializedString(const FRVPDPTaskResults& TaskResultInfo, const FRVPDPPaintTaskResultInfo& PaintTaskResultInfo, const FRVPDPSetVertexColorsUsingSerializedStringSettings& SetMeshComponentVertexColorUsingSerializedStringSettings, const FRVPDPAdditionalDataToPassThroughInfo& AdditionalData);
    void PaintedOnActor_SetMeshComponentVertexColors(const FRVPDPTaskResults& TaskResultInfo, const FRVPDPPaintTaskResultInfo& PaintTaskResultInfo, const FRVPDPSetVertexColorsSettings& SetMeshComponentVertexColorSettings, const FRVPDPAdditionalDataToPassThroughInfo& AdditionalData);
    void PaintedOnActor_PaintColorSnippet(const FRVPDPTaskResults& TaskResultInfo, const FRVPDPPaintTaskResultInfo& PaintTaskResultInfo, const FRVPDPPaintColorSnippetSettings& PaintedColorSnippetSettings, const FRVPDPAdditionalDataToPassThroughInfo& AdditionalData);
    void PaintedOnActor_EntireMesh(const FRVPDPTaskResults& TaskResultInfo, const FRVPDPPaintTaskResultInfo& PaintTaskResultInfo, const FRVPDPPaintOnEntireMeshSettings& PaintedEntireMeshSettings, const FRVPDPAdditionalDataToPassThroughInfo& AdditionalData);
    void PaintedOnActor_AtLocation(const FRVPDPTaskResults& TaskResultInfo, const FRVPDPPaintTaskResultInfo& PaintTaskResultInfo, const FRVPDPPaintAtLocationSettings& PaintedAtLocationSettings, const FRVPDPClosestVertexDataResults& ClosestVertexColorResult, const FRVPDPEstimatedColorAtHitLocationInfo& EstimatedColorAtHitLocationResult, const FRVPDPAverageColorInAreaInfo& AverageColorInAreaInfo, const FRVPDPAdditionalDataToPassThroughInfo& AdditionalData);
    void OverrideVertexColorToApply(int32 OverrideID, class UVertexPaintDetectionComponent* AssociatedPaintComponent, class UPrimitiveComponent* MeshApplyingColorsTo, int32 CurrentLOD, int32 CurrentVertexIndex, class UMaterialInterface* MaterialVertexIsOn, bool IsVertexOnCloth, const FName& BoneVertexIsOn, const FVector& VertexPositionInWorldSpace, const FVector& VertexNormal, const FColor& CurrentVertexColor, TEnumAsByte<EPhysicalSurface> CurrentVertexMostDominantPhysicsSurface, float CurrentVertexMostDominantPhysicsSurfaceValue, const FColor& UpdatedVertexColorToApply, bool WantsToApplyUpdatedVertexColor, bool& ApplyUpdatedOrOverridenVertexColors, bool& OverrideVertexColorsToApply, FColor& VertexColorsToOverrideWith);
    TMap<class UClothingAssetBase*, class FRVPDPVertexChannelsChaosClothPhysicsSettings> GetSkeletalMeshClothPhysicsSettings(class USkeletalMeshComponent* SkeletalMeshComponentTryingToGetClothSettingsFor);
    void GetColorsWithinArea(const FRVPDPTaskResults& TaskResultInfo, const FRVPDPGetColorsWithinAreaSettings& GetColorsWithinAreaSettings, const FRVPDPWithinAreaResults& WithinAreaResults, const FRVPDPAdditionalDataToPassThroughInfo& AdditionalData);
    void GetClosestVertexDataOnActor(const FRVPDPTaskResults& TaskResultInfo, const FRVPDPGetClosestVertexDataSettings& GetClosestVertexDataSettings, const FRVPDPClosestVertexDataResults& ClosestVertexColorResult, const FRVPDPEstimatedColorAtHitLocationInfo& EstimatedColorAtHitLocationResult, const FRVPDPAverageColorInAreaInfo& AverageColorInAreaInfo, const FRVPDPAdditionalDataToPassThroughInfo& AdditionalData);
    void GetAllVertexColorsOnlyOnActor(const FRVPDPTaskResults& TaskResultInfo, const FRVPDPGetColorsOnlySettings& GotAllVertexColorsWithSettings, const FRVPDPAdditionalDataToPassThroughInfo& AdditionalData);
    void DetectTaskFinishedOnRegisteredMeshComponent(const FRVPDPTaskResults& TaskResultInfo, const FRVPDPAdditionalDataToPassThroughInfo& AdditionalData);
    void ColorsAppliedOnActor(const FRVPDPTaskResults& TaskResultInfo, const FRVPDPPaintTaskResultInfo& PaintTaskResultInfo, const FRVPDPPaintTaskSettings& PaintedOnActorSettings, const FRVPDPAdditionalDataToPassThroughInfo& AdditionalData);
    void ClothEndOverlappingMesh(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 Item);
    void ClothBeginOverlappingMesh(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 Item);
}; // Size: 0x28

class UAutoAddColorComponent : public UVertexPaintDetectionComponent
{
    FAutoAddColorComponentStartedNewRoundOfTasksDelegate StartedNewRoundOfTasksDelegate; // 0x04B0 (size: 0x10)
    void StartedNewRoundOfTasks(FRVPDPStartNewRoundOfTasksInfo StartedNewRoundOfTasksOnMeshes);
    FAutoAddColorComponentStartedAutoPaintingMeshDelegate StartedAutoPaintingMeshDelegate; // 0x04C0 (size: 0x10)
    void StartedAutoPaintingMesh(class UPrimitiveComponent* MeshComponent);
    FAutoAddColorComponentVerifiedAutoPaintingMeshesDelegate VerifiedAutoPaintingMeshesDelegate; // 0x04D0 (size: 0x10)
    void VerifiedAutoPaintingMeshComponents();
    float ConsiderMeshFullyPaintedIfOverOrEqual;                                      // 0x04E0 (size: 0x4)
    bool ApplyOneFrameDelayBetweenTasksForInstigatingComponent;                       // 0x04E4 (size: 0x1)
    float VerifyMeshComponentsInterval;                                               // 0x04E8 (size: 0x4)
    bool OnlyStartNewRoundOfTasksIfAllHasBeenFinished;                                // 0x04EC (size: 0x1)
    float MinimumDurationOfRoundOfTasks;                                              // 0x04F0 (size: 0x4)
    bool IsAllowedToAutoPaintAtBeginPlay;                                             // 0x04F4 (size: 0x1)
    bool AutoPaintRootMeshAtBeginPlay;                                                // 0x04F5 (size: 0x1)
    FRVPDPAutoAddColorSettings AutoPaintRootMeshAtBeginPlay_DelaySettings;            // 0x04F8 (size: 0x318)
    bool PrintDebugLogsToScreen;                                                      // 0x0810 (size: 0x1)
    float PrintDebugLogsToScreen_Duration;                                            // 0x0814 (size: 0x4)
    bool PrintDebugLogsToOutputLog;                                                   // 0x0818 (size: 0x1)
    TMap<class UPrimitiveComponent*, class FRVPDPAutoAddColorSettings> AutoPaintingMeshes; // 0x0820 (size: 0x50)

    void StopAutoPaintingMesh(class UPrimitiveComponent* MeshComponent);
    void StopAllAutoPainting();
    void StartNewRoundOfTasks();
    void SetIfAutoPaintedMeshShouldOnlyStartNewTaskIfChangeWasMade(class UPrimitiveComponent* MeshComponent, bool OnlyStartNewTaskIfChangeWasMade);
    void ResumeAutoPaintingMesh(class UPrimitiveComponent* MeshComponent);
    void ResumeAllAutoPainting();
    void PauseAutoPaintingMesh(class UPrimitiveComponent* MeshComponent);
    void PauseAllAutoPainting();
    bool IsNewRoundOfTasksGoingToStartAfterDelay();
    bool IsAutoPaintedMeshPaused(const class UPrimitiveComponent* MeshComponent);
    TMap<class UPrimitiveComponent*, class FRVPDPAutoAddColorSettings> GetMeshesBeingAutoPainted();
    bool GetIsAutoPainting();
    bool GetIfMeshShouldOnlyStartNewTaskIfChangeWasMade(const class UPrimitiveComponent* MeshComponent);
    bool CanAutoPaintedMeshGetPaused(const class UPrimitiveComponent* MeshComponent);
    void AutoPaintedActorDestroyed(class AActor* DestroyedActor);
    void AutoPaintDelayFinished(class UPrimitiveComponent* MeshComponent);
}; // Size: 0x8B8

class UAutoAddColorEntireMeshComponent : public UAutoAddColorComponent
{
    FRVPDPPaintOnEntireMeshSettings AutoPaintRootMeshAtBeginPlay_PaintEntireMeshSettings; // 0x08B8 (size: 0x458)
    TMap<class UPrimitiveComponent*, class FRVPDPPaintOnEntireMeshSettings> AutoPaintingEntireMeshesWithSettings; // 0x0D10 (size: 0x50)
    TMap<class UPrimitiveComponent*, class FRVPDPAdditionalDataToPassThroughInfo> AutoPaintingEntireMeshesAdditionalDataSettings; // 0x0D60 (size: 0x50)

    void UpdateAutoPaintedEntireMesh(class UPrimitiveComponent* MeshComponent, FRVPDPPaintOnEntireMeshSettings PaintEntireMeshSettings, FRVPDPAdditionalDataToPassThroughInfo AdditionalData, FRVPDPAutoAddColorSettings AutoAddColorSettings);
    TMap<class UPrimitiveComponent*, class FRVPDPPaintOnEntireMeshSettings> GetAutoPaintingEntireMeshesPaintSettings();
    TMap<class UPrimitiveComponent*, class FRVPDPAdditionalDataToPassThroughInfo> GetAutoPaintingEntireMeshesAdditionalDataSettings();
    bool AddAutoPaintEntireMesh(class UPrimitiveComponent* MeshComponent, FRVPDPPaintOnEntireMeshSettings PaintEntireMeshSettings, FRVPDPAdditionalDataToPassThroughInfo AdditionalData, FRVPDPAutoAddColorSettings AutoAddColorSettings, bool ResumeIfPaused);
}; // Size: 0xDB0

class UAutoAddColorPaintAtLocComponent : public UAutoAddColorComponent
{
    TMap<class UPrimitiveComponent*, class FRVPDPPaintAtLocationSettings> AutoPaintingAtLocationWithSettings; // 0x08B8 (size: 0x50)
    TMap<class UPrimitiveComponent*, class FRVPDPAdditionalDataToPassThroughInfo> AutoPaintingAtLocationAdditionalDataSettings; // 0x0908 (size: 0x50)

    void UpdateAutoPaintedAtLocation(class UPrimitiveComponent* MeshComponent, FRVPDPPaintAtLocationSettings PaintAtLocationSettings, FRVPDPAdditionalDataToPassThroughInfo AdditionalData, FRVPDPAutoAddColorSettings AutoAddColorSettings);
    TMap<class UPrimitiveComponent*, class FRVPDPPaintAtLocationSettings> GetAutoPaintingAtLocationPaintSettings();
    TMap<class UPrimitiveComponent*, class FRVPDPAdditionalDataToPassThroughInfo> GetAutoPaintingAtLocationAdditionalDataSettings();
    bool AddAutoPaintAtLocation(class UPrimitiveComponent* MeshComponent, FRVPDPPaintAtLocationSettings PaintAtLocationSettings, FRVPDPAdditionalDataToPassThroughInfo AdditionalData, FRVPDPAutoAddColorSettings AutoAddColorSettings, bool ResumeIfPaused);
}; // Size: 0x958

class UAutoAddColorWithinAreaComponent : public UAutoAddColorComponent
{
    int32 MaxAmountOfMeshesToCheckIfChangedPerFrame;                                  // 0x08B8 (size: 0x4)
    bool OnlyPaintOnMovingMeshZ;                                                      // 0x08BC (size: 0x1)
    bool OnlyPaintOnMovingMeshXY;                                                     // 0x08BD (size: 0x1)
    bool OnlyPaintOnRotatedMesh;                                                      // 0x08BE (size: 0x1)
    bool OnlyPaintOnReScaledMesh;                                                     // 0x08BF (size: 0x1)
    TMap<class UPrimitiveComponent*, class FRVPDPPaintWithinAreaSettings> AutoPaintingWithinAreaWithSettings; // 0x08C0 (size: 0x50)
    TMap<class UPrimitiveComponent*, class FRVPDPAdditionalDataToPassThroughInfo> AutoPaintingWithinAreaAdditionalDataSettings; // 0x0910 (size: 0x50)
    TMap<class UPrimitiveComponent*, class FTransform> MeshComponentsToCheckIfMoved;  // 0x0960 (size: 0x50)

    void UpdateAutoPaintedWithinArea(class UPrimitiveComponent* MeshComponent, FRVPDPPaintWithinAreaSettings PaintWithinAreaSettings, FRVPDPAdditionalDataToPassThroughInfo AdditionalData, FRVPDPAutoAddColorSettings AutoAddColorSettings);
    TMap<class UPrimitiveComponent*, class FRVPDPPaintWithinAreaSettings> GetAutoPaintingWithinAreaPaintSettings();
    TMap<class UPrimitiveComponent*, class FRVPDPAdditionalDataToPassThroughInfo> GetAutoPaintingWithinAreaAdditionalDataSettings();
    bool AddAutoPaintWithinArea(class UPrimitiveComponent* MeshComponent, FRVPDPPaintWithinAreaSettings PaintWithinAreaSettings, FRVPDPAdditionalDataToPassThroughInfo AdditionalData, FRVPDPAutoAddColorSettings AutoAddColorSettings, bool ResumeIfPaused);
}; // Size: 0x9B8

class UVertexPaintClothOverlapComponent : public USceneComponent
{
    bool ClothOverlapTracingEnabled;                                                  // 0x0230 (size: 0x1)
    float ClothVertexTraceRadius;                                                     // 0x0234 (size: 0x4)
    int32 ClothVertexTraceInterval;                                                   // 0x0238 (size: 0x4)
    TArray<TEnumAsByte<EObjectTypeQuery>> ClothObjectsToSphereTrace;                  // 0x0240 (size: 0x10)
    bool DebugClothSphereTraces;                                                      // 0x0250 (size: 0x1)
    float DebugClothSphereTracesDuration;                                             // 0x0254 (size: 0x4)
    class USkeletalMeshComponent* AttachedSkeletalMeshComponent;                      // 0x0258 (size: 0x8)
    TArray<class UClothingAssetBase*> AttachedSkeletalMeshComponentClothingAssets;    // 0x0260 (size: 0x10)
    TMap<UPrimitiveComponent*, int32> ClothOverlappingComponentAndItemsCache;         // 0x0270 (size: 0x50)
    TMap<class UClothingAssetBase*, class FTransform> ClothBoneTransformsInComponentSpace; // 0x02C0 (size: 0x50)
    TMap<class UClothingAssetBase*, class FQuat> ClothBoneQuaternionsInComponentSpace; // 0x0310 (size: 0x50)
    TMap<UPrimitiveComponent*, int32> CurrentTraceOverlappingComponentAndItemsCache;  // 0x0360 (size: 0x50)

    void SetClothOverlapTracingEnabled(bool EnableClothTracing);
    void SetClothObjectsTypesToSphereTrace(TArray<TEnumAsByte<EObjectTypeQuery>> ClothObjectTypes);
    void OnRep_ClothOverlapTracingEnabled();
    TArray<TEnumAsByte<EObjectTypeQuery>> GetClothObjectsToSphereTrace();
}; // Size: 0x3C0

class UVertexPaintColorSnippetDataAsset : public UDataAsset
{
    TMap<class FString, class FRVPDPColorSnippetDataInfo> SnippetColorData;           // 0x0030 (size: 0x50)

}; // Size: 0x80

class UVertexPaintColorSnippetRefs : public UDataAsset
{
    TMap<class TSoftObjectPtr<UObject>, class FRVPDPColorSnippetReferenceDataInfo> StaticMeshesColorSnippets; // 0x0030 (size: 0x50)
    TMap<class TSoftObjectPtr<UObject>, class FRVPDPColorSnippetReferenceDataInfo> SkeletalMeshesColorSnippets; // 0x0080 (size: 0x50)
    TMap<class FString, class FRVPDPGroupColorSnippetInfo> GroupSnippetsAndAssociatedMeshes; // 0x00D0 (size: 0x50)
    FGameplayTagContainer AllAvailableColorSnippets;                                  // 0x0120 (size: 0x20)

    TSoftObjectPtr<UObject> GetObjectFromSnippetID(FString SnippetID);
    TMap<class FString, class FRVPDPStoredColorSnippetInfo> GetChildSnippetInfosAssociatedWithGroupSnippetID(const class UObject* WorldContextObject, FString GroupSnippetID);
    TMap<class FString, class FRVPDPGroupColorSnippetInfo> GetAllGroupSnippetsInSpecifiedDataAsset(const class UVertexPaintColorSnippetDataAsset* ColorSnippetDataAsset);
    TMap<class FString, class FRVPDPStoredColorSnippetInfo> GetAllColorSnippetsInSpecifiedDataAsset(const class UVertexPaintColorSnippetDataAsset* ColorSnippetDataAsset, bool IncludeChildGroupSnippets);
    TMap<class FString, class FRVPDPStoredColorSnippetInfo> GetAllColorSnippetsAndDataAssetForObject(const class UObject* Object);
    bool ContainsColorSnippet(FString SnippetID, bool OptionalHasToBeStoredInDataAsset, class UVertexPaintColorSnippetDataAsset* DataAsset);
    bool CheckAndGetTheComponentsThatMatchGroupChildSnippets(const class UObject* WorldContextObject, FString GroupSnippetID, TArray<class UPrimitiveComponent*> MeshComponents, TMap<class FString, class UPrimitiveComponent*>& ChildSnippetsAndMatchingMeshes);
}; // Size: 0x140

class UVertexPaintDetectionComponent : public UActorComponent
{
    FVertexPaintDetectionComponentGetClosestVertexDataDelegate GetClosestVertexDataDelegate; // 0x00A0 (size: 0x10)
    void VertexColorGetClosestVertexData(const FRVPDPTaskResults& TaskResultInfo, const FRVPDPGetClosestVertexDataSettings& DetectedMeshWithSettings, const FRVPDPClosestVertexDataResults& ClosestVertexInfo, const FRVPDPEstimatedColorAtHitLocationInfo& EstimatedColorAtHitLocationInfo, const FRVPDPAverageColorInAreaInfo& AvarageColorInAreaInfo, const FRVPDPAdditionalDataToPassThroughInfo& AdditionalData);
    FVertexPaintDetectionComponentGetAllVertexColorsOnlyDelegate GetAllVertexColorsOnlyDelegate; // 0x00B0 (size: 0x10)
    void VertexColorGetAllVertexColorsOnly(const FRVPDPTaskResults& TaskResultInfo, const FRVPDPGetColorsOnlySettings& GotAllVertexColorsWithSettings, const FRVPDPAdditionalDataToPassThroughInfo& AdditionalData);
    FVertexPaintDetectionComponentGetColorsWithinAreaDelegate GetColorsWithinAreaDelegate; // 0x00C0 (size: 0x10)
    void GetColorsWithinArea(const FRVPDPTaskResults& TaskResultInfo, const FRVPDPGetColorsWithinAreaSettings& GetColorsWithinAreaSettings, const FRVPDPWithinAreaResults& WithinAreaResults, const FRVPDPAdditionalDataToPassThroughInfo& AdditionalData);
    FVertexPaintDetectionComponentVertexColorsPaintedAtLocationDelegate VertexColorsPaintedAtLocationDelegate; // 0x00D0 (size: 0x10)
    void VertexColorPaintedAtLocation(const FRVPDPTaskResults& TaskResultInfo, const FRVPDPPaintTaskResultInfo& PaintTaskResultInfo, const FRVPDPPaintAtLocationSettings& PaintedAtLocationWithSettings, const FRVPDPClosestVertexDataResults& ClosestVertexInfoAfterApplyingColor, const FRVPDPEstimatedColorAtHitLocationInfo& EstimatedColorAtHitLocationInfo, const FRVPDPAverageColorInAreaInfo& AvarageColorInAreaInfo, const FRVPDPAdditionalDataToPassThroughInfo& AdditionalData);
    FVertexPaintDetectionComponentVertexColorsPaintedMeshWithinAreaDelegate VertexColorsPaintedMeshWithinAreaDelegate; // 0x00E0 (size: 0x10)
    void VertexColorPaintedWithinArea(const FRVPDPTaskResults& TaskResultInfo, const FRVPDPPaintTaskResultInfo& PaintTaskResultInfo, const FRVPDPPaintWithinAreaSettings& PaintedWithinAreaWithSettings, const FRVPDPWithinAreaResults& WithinAreaResults, const FRVPDPAdditionalDataToPassThroughInfo& AdditionalData);
    FVertexPaintDetectionComponentVertexColorsPaintedEntireMeshDelegate VertexColorsPaintedEntireMeshDelegate; // 0x00F0 (size: 0x10)
    void VertexColorPaintedEntireMesh(const FRVPDPTaskResults& TaskResultInfo, const FRVPDPPaintTaskResultInfo& PaintTaskResultInfo, const FRVPDPPaintOnEntireMeshSettings& EntireMeshPaintedWithSettings, const FRVPDPAdditionalDataToPassThroughInfo& AdditionalData);
    FVertexPaintDetectionComponentVertexColorsPaintColorSnippetDelegate VertexColorsPaintColorSnippetDelegate; // 0x0100 (size: 0x10)
    void VertexColorPaintColorSnippet(const FRVPDPTaskResults& TaskResultInfo, const FRVPDPPaintTaskResultInfo& PaintTaskResultInfo, const FRVPDPPaintColorSnippetSettings& PaintColorSnippetWithSettings, const FRVPDPAdditionalDataToPassThroughInfo& AdditionalData);
    FVertexPaintDetectionComponentVertexColorsSetMeshColorsDelegate VertexColorsSetMeshColorsDelegate; // 0x0110 (size: 0x10)
    void SetMeshComponentVertexColors(const FRVPDPTaskResults& TaskResultInfo, const FRVPDPPaintTaskResultInfo& PaintTaskResultInfo, const FRVPDPSetVertexColorsSettings& SetMeshComponentVertexColorWithSettings, const FRVPDPAdditionalDataToPassThroughInfo& AdditionalData);
    FVertexPaintDetectionComponentVertexColorsSetMeshColorsUsingSerializedStringDelegate VertexColorsSetMeshColorsUsingSerializedStringDelegate; // 0x0120 (size: 0x10)
    void SetMeshComponentVertexColorsUsingSerializedString(const FRVPDPTaskResults& TaskResultInfo, const FRVPDPPaintTaskResultInfo& PaintTaskResultInfo, const FRVPDPSetVertexColorsUsingSerializedStringSettings& SetMeshComponentVertexColorUsingSerializedStringWithSettings, const FRVPDPAdditionalDataToPassThroughInfo& AdditionalData);
    TMap<int32, UPrimitiveComponent*> CurrentGetClosestVertexDataTasks;               // 0x0180 (size: 0x50)
    TMap<int32, UPrimitiveComponent*> CurrentGetAllVertexColorsOnlyTasks;             // 0x01D0 (size: 0x50)
    TMap<int32, UPrimitiveComponent*> CurrentGetColorsWithinAreaTasks;                // 0x0220 (size: 0x50)
    TMap<int32, UPrimitiveComponent*> CurrentPaintAtLocationTasks;                    // 0x0270 (size: 0x50)
    TMap<int32, UPrimitiveComponent*> CurrentPaintWithinAreaTasks;                    // 0x02C0 (size: 0x50)
    TMap<int32, UPrimitiveComponent*> CurrentPaintEntireMeshTasks;                    // 0x0310 (size: 0x50)
    TMap<int32, UPrimitiveComponent*> CurrentPaintColorSnippetTasks;                  // 0x0360 (size: 0x50)
    TMap<int32, UPrimitiveComponent*> CurrentSetMeshComponentVertexColorsTasks;       // 0x03B0 (size: 0x50)
    TMap<int32, UPrimitiveComponent*> CurrentSetMeshComponentVertexColorsUsingSerializedStringTasks; // 0x0400 (size: 0x50)
    TMap<class FString, class UVertexPaintColorSnippetDataAsset*> LoadedCompareColorSnippetDataAssets; // 0x0450 (size: 0x50)

    void TaskRemovedByTaskQueue(const FRVPDPCalculateColorsInfo& CalculateColorsInfo);
    bool HasAnyTasksQueuedUp();
    int32 GetTotalTasksInitiatedByComponent();
    TArray<class UPrimitiveComponent*> GetCurrentTasksMeshComponents();
    void GetCurrentTasksInitiatedByComponent(int32& TotalAmountOfTasks, int32& AmountOfGetClosestVertexDataTasks, int32& AmountOfGetAllVertexColorsOnlyTasks, int32& AmountOfGetColorsWithinAreaTasks, int32& AmountOfPaintAtLocationTasks, int32& AmountOfPaintWithinAreaTasks, int32& AmountOfPaintEntireMeshTasks, int32& AmountOfPaintColorSnippetTasks, int32& AmountOfSetMeshComponentVertexColorsTasks, int32& AmountOfSetMeshComponentVertexColorsUsingSerializedStringTasks);
    TMap<int32, UPrimitiveComponent*> GetCurrentSetMeshComponentVertexColorsUsingSerializedStringTasks();
    TMap<int32, UPrimitiveComponent*> GetCurrentSetMeshComponentVertexColorsTasks();
    TMap<int32, UPrimitiveComponent*> GetCurrentPaintWithinAreaTasks();
    TMap<int32, UPrimitiveComponent*> GetCurrentPaintEntireMeshTasks();
    TMap<int32, UPrimitiveComponent*> GetCurrentPaintColorSnippetTasks();
    TMap<int32, UPrimitiveComponent*> GetCurrentPaintAtLocationTasks();
    TMap<int32, UPrimitiveComponent*> GetCurrentGetColorsWithinAreaTasks();
    TMap<int32, UPrimitiveComponent*> GetCurrentGetClosestVertexDataTasks();
    TMap<int32, UPrimitiveComponent*> GetCurrentGetAllVertexColorsOnlyTasks();
}; // Size: 0x4A8

class UVertexPaintDetectionGISubSystem : public UGameInstanceSubsystem
{
    FVertexPaintDetectionGISubSystemVertexPaintTaskFinished VertexPaintTaskFinished;  // 0x0038 (size: 0x10)
    void VertexPaintTaskFinished(const FRVPDPTaskResults& TaskResultInfo, const FRVPDPPaintTaskResultInfo& PaintTaskResultInfo, const FRVPDPAdditionalDataToPassThroughInfo& AdditionalData);
    FVertexPaintDetectionGISubSystemVertexDetectTaskFinished VertexDetectTaskFinished; // 0x0048 (size: 0x10)
    void VertexDetectTaskFinished(const FRVPDPTaskResults& TaskResultInfo, const FRVPDPAdditionalDataToPassThroughInfo& AdditionalData);
    class UVertexPaintDetectionTaskQueue* TaskQueue;                                  // 0x0058 (size: 0x8)
    TMap<class UPrimitiveComponent*, class FRVPDPCallbackFromSpecifiedMeshComponentsInfo> PaintTaskCallbacksFromSpecificMeshComponents; // 0x0060 (size: 0x50)
    TMap<class UPrimitiveComponent*, class FRVPDPCallbackFromSpecifiedMeshComponentsInfo> DetectTaskCallbacksFromSpecificMeshComponents; // 0x00B0 (size: 0x50)
    TMap<TEnumAsByte<EPhysicalSurface>, UPhysicalMaterial*> PhysicalMaterialAssets;   // 0x0110 (size: 0x50)
    class UVertexPaintColorSnippetRefs* ColorSnippetReferenceDataAsset;               // 0x0160 (size: 0x8)
    class UVertexPaintOptimizationDataAsset* OptimizationDataAsset;                   // 0x0168 (size: 0x8)
    class UVertexPaintMaterialDataAsset* MaterialDataAsset;                           // 0x0170 (size: 0x8)

    void RegisteredPaintTaskCallbackOwnerDestroyed(class AActor* DestroyedActor);
    void RegisteredDetectTaskCallbackOwnerDestroyed(class AActor* DestroyedActor);
}; // Size: 0x1D0

class UVertexPaintDetectionSettings : public UDeveloperSettings
{
    TSoftObjectPtr<UVertexPaintOptimizationDataAsset> OptimizationDataAssetToUse;     // 0x0038 (size: 0x28)
    TSoftObjectPtr<UVertexPaintMaterialDataAsset> MaterialsDataAssetToUse;            // 0x0060 (size: 0x28)
    TSoftObjectPtr<UVertexPaintColorSnippetRefs> ColorSnippetReferencesDataAssetToUse; // 0x0088 (size: 0x28)
    bool EditorWidgetNotificationEnabled;                                             // 0x00B0 (size: 0x1)
    float EditorWidgetNotificationDuration;                                           // 0x00B4 (size: 0x4)
    TArray<FDirectoryPath> EditorWidgetAdditionalPathsToLookUpAssets;                 // 0x00B8 (size: 0x10)
    int32 MaxAmountOfAllowedTasksPerMesh;                                             // 0x00C8 (size: 0x4)
    ETVertexPaintThreadPriority MultithreadPriority;                                  // 0x00CC (size: 0x1)
    bool UseMaximumAmountOfCoresForMultithreading;                                    // 0x00CD (size: 0x1)

}; // Size: 0xD0

class UVertexPaintDetectionTaskQueue : public UObject
{
    FTimerHandle TaskQueueThreadPoolResetTimer;                                       // 0x0068 (size: 0x8)
    TMap<int32, FRVPDPCalculateColorsInfo> CalculateColorsPaintQueue;                 // 0x0078 (size: 0x50)
    TMap<class UPrimitiveComponent*, class FRVPDPTaskQueueIDInfo> ComponentPaintTaskIDs; // 0x00C8 (size: 0x50)
    TMap<int32, FRVPDPCalculateColorsInfo> CalculateColorsDetectionQueue;             // 0x0118 (size: 0x50)
    TMap<class UPrimitiveComponent*, class FRVPDPTaskQueueIDInfo> ComponentDetectTaskIDs; // 0x0168 (size: 0x50)

}; // Size: 0x1C0

class UVertexPaintFunctionLibrary : public UBlueprintFunctionLibrary
{

    TArray<FString> VertexPaintDetectionPlugin_SortStringArrayAlphabetically(TArray<FString> Strings);
    TMap<int32, FString> VertexPaintDetectionPlugin_SortAssetsNamesAlphabetically(TMap<int32, FString> AssetIndexAndName);
    class USkeletalMesh* VertexPaintDetectionPlugin_GetSkeletalMesh(class USkeletalMeshComponent* SkeletalMeshComp);
    void UpdateChaosClothPhysicsWithExistingColorsAsync(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, class USkeletalMeshComponent* SkeletalMesh);
    void UpdateChaosClothPhysicsWithExistingColors(class USkeletalMeshComponent* SkeletalMeshComponent);
    void UnRegisterPaintTaskCallbacksToObjectFromSpecifiedMeshComponent_Wrapper(class UPrimitiveComponent* MeshComponent, class UObject* ObjectToUnregisterForCallbacks);
    void UnRegisterDetectTaskCallbacksToObjectFromSpecifiedMeshComponent_Wrapper(class UPrimitiveComponent* MeshComponent, class UObject* ObjectToUnregisterForCallbacks);
    void SetStaticMeshAndReleaseResources(class UStaticMeshComponent* StaticMeshComponent, class UStaticMesh* NewMesh, bool ClearVertexColorsOfChangedMesh);
    void SetSkeletalMeshAndReleaseResources(class USkeletalMeshComponent* SkeletalMeshComponent, class USkeletalMesh* NewMesh, bool ClearVertexColorsOfChangedMesh);
    class UDynamicMesh* SetMeshConstantVertexColorsAndEnablesThem(class UDynamicMesh* TargetMesh, FLinearColor Color, FGeometryScriptColorFlags Flags, bool bClearExisting, class UGeometryScriptDebug* Debug);
    void SetChaosWheeledVehicleFrictionMultiplier_Wrapper(class UChaosWheeledVehicleMovementComponent* ChaosWheeledVehicleMovementComponent, int32 WheelIndex, float Friction);
    void SetChaosClothPhysics(class USkeletalMeshComponent* SkeletalMeshComponent, class UClothingAssetBase* ClothingAsset, const FRVPDPChaosClothPhysicsSettings& ClothPhysicsSettings);
    void RemoveComponentFromPaintTaskQueue(class UPrimitiveComponent* Component);
    void RemoveComponentFromDetectTaskQueue(class UPrimitiveComponent* Component);
    FColor ReliableFLinearToFColor(FLinearColor LinearColor);
    FLinearColor ReliableFColorToFLinearColor(FColor Color);
    void RegisterPaintTaskCallbacksToObjectFromSpecifiedMeshComponent_Wrapper(class UPrimitiveComponent* MeshComponent, class UObject* ObjectToRegisterForCallbacks);
    void RegisterDetectTaskCallbacksToObjectFromSpecifiedMeshComponent_Wrapper(class UPrimitiveComponent* MeshComponent, class UObject* ObjectToRegisterForCallbacks);
    TEnumAsByte<ECollisionChannel> ObjectTypeToCollisionChannel(TEnumAsByte<EObjectTypeQuery> ObjectType);
    bool MultiSphereTraceForClosestUniqueMeshesAndBones_Wrapper(const class UObject* WorldContextObject, FVector Location, float Radius, TEnumAsByte<ETraceTypeQuery> TraceChannel, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypesToTraceFor, const TArray<class AActor*>& ActorsToIgnore, bool TraceComplex, bool IgnoreSelf, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, TArray<FRVPDPTraceForClosestUniqueMeshesAndBonesPrerequisite>& ClosestUniqueMeshesWithBones, float DebugDrawTime);
    bool IsWorldValid(const class UWorld* World);
    bool IsPlayInEditor(const class UObject* WorldContextObject);
    bool IsMaterialAddedToPaintOnMaterialDataAsset_Wrapper(const class UObject* WorldContextObject, TSoftObjectPtr<UMaterialInterface> Material);
    bool IsAssetsLoaded(class UObject* WorldContextObject, TArray<TSoftObjectPtr<UObject>> AssetsToCheck);
    TMap<class TSoftObjectPtr<UMaterialInterface>, class FRVPDPRegisteredMaterialSetting> GetVertexPaintMaterialInterface_Wrapper(const class UObject* WorldContextObject);
    class UVertexPaintMaterialDataAsset* GetVertexPaintMaterialDataAsset(const class UObject* OptionalWorldContextObject);
    bool GetTheMostDominantPhysicsSurface_Wrapper(const class UObject* WorldContextObject, class UMaterialInterface* OptionalMaterialPhysicsSurfaceWasDetectedOn, TArray<TEnumAsByte<EPhysicalSurface>> PhysicsSurfaces, TArray<float> PhysicsSurfaceValues, TEnumAsByte<EPhysicalSurface>& MostDominantPhysicsSurfaceFromArray, float& MostDominantPhysicsSurfaceColorValue);
    bool GetTheGroupSnippetAChildSnippetBelongsTo(const class UObject* WorldContextObject, FGameplayTag childSnippet, FGameplayTag& groupSnippetChildBelongsTo);
    FString GetSubstringAfterLastCharacter(FString String, FString Character);
    TArray<TEnumAsByte<EPhysicalSurface>> GetPhysicsSurfacesRegisteredToMaterial(const class UObject* WorldContextObject, class UMaterialInterface* Material);
    TMap<TEnumAsByte<EPhysicalSurface>, FRVPDPRegisteredPhysicsSurfacesSettings> GetPhysicsSurfaceFamilies_Wrapper(const class UObject* WorldContextObject);
    class UPhysicalMaterial* GetPhysicalMaterialUsingPhysicsSurface_Wrapper(const class UObject* WorldContextObject, TSubclassOf<class UPhysicalMaterial> PhysicalMaterialClass, TEnumAsByte<EPhysicalSurface> PhysicsSurface);
    TArray<TEnumAsByte<EPhysicalSurface>> GetParentsOfPhysicsSurface_Wrapper(const class UObject* WorldContextObject, TEnumAsByte<EPhysicalSurface> PhysicalSurface);
    class UVertexPaintOptimizationDataAsset* GetOptimizationDataAsset(const class UObject* OptionalWorldContextObject);
    TArray<FColor> GetMeshComponentVertexColorsAtLOD_Wrapper(class UPrimitiveComponent* MeshComponent, int32 Lod);
    FRVPDPVertexDataInfo GetMeshComponentVertexColors_Wrapper(class UPrimitiveComponent* MeshComponent, bool& Success, bool GetColorsForAllLODs, int32 GetColorsUpToLOD);
    class UObject* GetMeshComponentSourceMesh(class UPrimitiveComponent* MeshComponent);
    int32 GetMeshComponentAmountOfVerticesOnLOD(class UPrimitiveComponent* MeshComponent, int32 Lod);
    void GetMeshColorSnippetsTagsInTagCategory_Wrapper(class UPrimitiveComponent* MeshComponent, FGameplayTag TagCategory, TMap<class FGameplayTag, class TSoftObjectPtr<UVertexPaintColorSnippetDataAsset>>& AvailableColorSnippetTagsAndDataAssetsUnderTagCategory);
    FGameplayTag GetMeshColorSnippetChildFromGroupSnippet(class UPrimitiveComponent* MeshComponent, const FGameplayTag& GroupSnippet, TArray<class UPrimitiveComponent*> GroupSnippetMeshes, bool& Success);
    float GetComponentBoundsTopWorldZ(class UPrimitiveComponent* Component);
    float GetComponentBoundsBottomWorldZ(class UPrimitiveComponent* Component);
    void GetColorSnippetVertexColorsAsync(class UObject* WorldContextObject, FGameplayTag ColorSnippetTag, FLatentActionInfo LatentInfo, TSoftObjectPtr<UObject>& ObjectSnippetIsAssociatedWith, TArray<FColor>& ColorSnippetVertexColors, bool& Success);
    class UVertexPaintColorSnippetRefs* GetColorSnippetReferenceDataAsset(const class UObject* OptionalWorldContextObject);
    TArray<class UClothingAssetBase*> GetClothAssets(class USkeletalMesh* SkeletalMesh);
    void GetChannelsPhysicsSurfaceIsRegisteredTo(const class UObject* WorldContextObject, class UMaterialInterface* MaterialToApplyColorsTo, const TEnumAsByte<EPhysicalSurface>& PhysicalSurface, bool& AtRedChannel, bool& AtGreenChannel, bool& AtBlueChannel, bool& AtAlphaChannel);
    TMap<UPrimitiveComponent*, int32> GetCalculateColorsPaintTasksAmount_Wrapper(const class UObject* WorldContextObject);
    TMap<UPrimitiveComponent*, int32> GetCalculateColorsDetectionTasksAmount_Wrapper(const class UObject* WorldContextObject);
    void GetAmountOfPaintedColorsForEachChannelAsync(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, const TArray<FColor>& VertexColors, FRVPDPAmountOfColorsOfEachChannelResults& AmountOfColorsOfEachChannel, float MinColorAmountToBeConsidered);
    FRVPDPAmountOfColorsOfEachChannelResults GetAmountOfPaintedColorsForEachChannel(const TArray<FColor>& VertexColors, float MinColorAmountToBeConsidered);
    int32 GetAmountOfLODsToPaintOn(class UPrimitiveComponent* MeshComp, bool OverrideLODToPaintUpOn, int32 OverrideUpToLOD);
    int32 GetAmountOfColorSnippetChildsFromGroupSnippet(const class UObject* WorldContextObject, FGameplayTag GroupSnippet);
    TArray<ESurfaceAtChannel> GetAllVertexColorChannelsPhysicsSurfaceIsRegisteredTo_Wrapper(const class UObject* WorldContextObject, class UMaterialInterface* Material, TEnumAsByte<EPhysicalSurface> PhysicsSurface, bool& Successful);
    TArray<FGameplayTag> GetAllTagsUnderTagCategory(const class UObject* WorldContextObject, FGameplayTag TagCategory);
    TArray<TEnumAsByte<EPhysicalSurface>> GetAllPhysicsSurfaces();
    void GetAllMeshColorSnippetsTagsUnderTagCategory_Wrapper(class UPrimitiveComponent* MeshComponent, FGameplayTag TagCategory, TMap<class FGameplayTag, class TSoftObjectPtr<UVertexPaintColorSnippetDataAsset>>& AvailableColorSnippetTagsAndDataAssetsUnderTagCategory);
    void GetAllMeshColorSnippetsAsTags_Wrapper(class UPrimitiveComponent* MeshComponent, TMap<class FGameplayTag, class TSoftObjectPtr<UVertexPaintColorSnippetDataAsset>>& AvailableColorSnippetTagsAndDataAssets);
    void GetAllMeshColorSnippetsAsString_Wrapper(class UPrimitiveComponent* MeshComponent, TMap<class FString, class FRVPDPStoredColorSnippetInfo>& AvailableColorSnippetsAndDataAssets);
    TArray<FString> GetAllColorSnippetsUnderGroupSnippetAsString(const class UObject* WorldContextObject, FString GroupSnippetID);
    void DrawPrimitiveComponentBoundsBox(class UPrimitiveComponent* PrimitiveComponent, float Lifetime, float Thickness, FLinearColor ColorToDraw);
    bool DoesPhysicsSurfaceBelongToPhysicsSurfaceFamily(const class UObject* WorldContextObject, TEnumAsByte<EPhysicalSurface> PhysicsSurface, TEnumAsByte<EPhysicalSurface> ParentOfPhysicsSurfaceFamily);
    TEnumAsByte<EObjectTypeQuery> CollisionChannelToObjectType(TEnumAsByte<ECollisionChannel> CollisionChannel);
    FBox CalcAABBWithoutUniformCheck(const class USkinnedMeshComponent* MeshComponent, const FTransform& LocalToWorld);
    void AsyncLoadAssets(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, TArray<TSoftObjectPtr<UObject>> AssetsToLoad, bool PrintResultsToLog, TArray<class UObject*>& LoadedAssets, bool& Success, int32 AssetLoadPriority);
    void AdjustBoxCollisionToFillAreaBetweenTwoLocations(class UBoxComponent* BoxCollision, FVector FromLocation, FVector ToLocation, float BoxThickness);
}; // Size: 0x28

class UVertexPaintMaterialDataAsset : public UDataAsset
{
    TMap<class TSoftObjectPtr<UMaterialInterface>, class FRVPDPRegisteredMaterialSetting> VertexPaintMaterialInterfaces; // 0x0030 (size: 0x50)
    TMap<TEnumAsByte<EPhysicalSurface>, FRVPDPRegisteredPhysicsSurfacesSettings> PhysicsSurfaceFamilies; // 0x0080 (size: 0x50)

}; // Size: 0xD0

class UVertexPaintOptimizationDataAsset : public UDataAsset
{
    TMap<class UStaticMesh*, class FRVPDPPaintOnLODSettings> StaticMeshNumOfLODsToPaint; // 0x0030 (size: 0x50)
    TMap<class USkeletalMesh*, class FRVPDPPaintOnLODSettings> SkeletalMeshNumOfLODsToPaint; // 0x0080 (size: 0x50)
    TMap<class USkeletalMesh*, class FRVPDPRegisteredSkeletalMeshInfo> RegisteredSkeletalMeshInfo; // 0x00D0 (size: 0x50)

    TMap<class UStaticMesh*, class FRVPDPPaintOnLODSettings> GetStaticMeshNumOfLODsToPaint();
    TMap<class USkeletalMesh*, class FRVPDPPaintOnLODSettings> GetSkeletalMeshNumOfLODsToPaint();
    TMap<class USkeletalMesh*, class FRVPDPRegisteredSkeletalMeshInfo> GetRegisteredSkeletalMeshInfo();
}; // Size: 0x120

class UVertexPaintTasksFunctionLibrary : public UBlueprintFunctionLibrary
{

    void SetMeshComponentVertexColorsUsingSerializedString_Wrapper(class UVertexPaintDetectionComponent* RuntimeVertexPaintAndDetectionComponent, class UPrimitiveComponent* MeshComponent, FRVPDPSetVertexColorsUsingSerializedStringSettings SetMeshComponentVertexColorsUsingSerializedStringSettings, FRVPDPAdditionalDataToPassThroughInfo AdditionalDataToPassThrough);
    void SetMeshComponentVertexColors_Wrapper(class UVertexPaintDetectionComponent* RuntimeVertexPaintAndDetectionComponent, class UPrimitiveComponent* MeshComponent, FRVPDPSetVertexColorsSettings SetMeshComponentVertexColorsSettings, FRVPDPAdditionalDataToPassThroughInfo AdditionalDataToPassThrough);
    void PaintOnMeshWithinArea_Wrapper(class UVertexPaintDetectionComponent* RuntimeVertexPaintAndDetectionComponent, class UPrimitiveComponent* MeshComponent, FRVPDPPaintWithinAreaSettings PaintWithinAreaStruct, FRVPDPAdditionalDataToPassThroughInfo AdditionalDataToPassThrough);
    void PaintOnMeshAtLocation_Wrapper(class UVertexPaintDetectionComponent* RuntimeVertexPaintAndDetectionComponent, class UPrimitiveComponent* MeshComponent, FRVPDPPaintAtLocationSettings PaintAtLocationStruct, FRVPDPAdditionalDataToPassThroughInfo AdditionalDataToPassThrough);
    void PaintOnEntireMesh_Wrapper(class UVertexPaintDetectionComponent* RuntimeVertexPaintAndDetectionComponent, class UPrimitiveComponent* MeshComponent, FRVPDPPaintOnEntireMeshSettings PaintOnEntireMeshStruct, FRVPDPAdditionalDataToPassThroughInfo AdditionalDataToPassThrough);
    void PaintGroupSnippetOnMesh_Wrapper(class UVertexPaintDetectionComponent* RuntimeVertexPaintAndDetectionComponent, TArray<class UPrimitiveComponent*> GroupSnippetMeshes, FRVPDPPaintGroupSnippetSettings PaintGroupSnippetStruct, FRVPDPAdditionalDataToPassThroughInfo AdditionalDataToPassThrough);
    void PaintColorSnippetOnMesh_Wrappers(class UVertexPaintDetectionComponent* RuntimeVertexPaintAndDetectionComponent, class UPrimitiveComponent* MeshComponent, FRVPDPPaintColorSnippetSettings PaintColorSnippetStruct, FRVPDPAdditionalDataToPassThroughInfo AdditionalDataToPassThrough);
    void GetColorsWithinArea_Wrapper(class UVertexPaintDetectionComponent* RuntimeVertexPaintAndDetectionComponent, class UPrimitiveComponent* MeshComponent, FRVPDPGetColorsWithinAreaSettings GetColorsWithinAreaStruct, FRVPDPAdditionalDataToPassThroughInfo AdditionalDataToPassThrough);
    void GetClosestVertexDataOnMesh_Wrapper(class UVertexPaintDetectionComponent* RuntimeVertexPaintAndDetectionComponent, class UPrimitiveComponent* MeshComponent, FRVPDPGetClosestVertexDataSettings GetClosestVertexDataStruct, FRVPDPAdditionalDataToPassThroughInfo AdditionalDataToPassThrough);
    void GetAllVertexColorsOnly_Wrapper(class UVertexPaintDetectionComponent* RuntimeVertexPaintAndDetectionComponent, class UPrimitiveComponent* MeshComponent, FRVPDPGetColorsOnlySettings GetAllVertexColorsStruct, FRVPDPAdditionalDataToPassThroughInfo AdditionalDataToPassThrough);
}; // Size: 0x28

#endif
