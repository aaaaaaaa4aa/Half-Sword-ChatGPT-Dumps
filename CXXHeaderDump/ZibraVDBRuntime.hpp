#ifndef UE4SS_SDK_ZibraVDBRuntime_HPP
#define UE4SS_SDK_ZibraVDBRuntime_HPP

#include "ZibraVDBRuntime_enums.hpp"

struct FCompressionSettings
{
    float Quality;                                                                    // 0x0000 (size: 0x4)

}; // Size: 0x4

class AZibraVDBActor : public AActor
{
    class UZibraVDBAssetComponent* AssetComponent;                                    // 0x0298 (size: 0x8)
    class UZibraVDBMaterialComponent* MaterialComponent;                              // 0x02A0 (size: 0x8)
    class UZibraVDBPlaybackComponent* PlaybackComponent;                              // 0x02A8 (size: 0x8)
    class UZibraVdbReflectionsManagerComponent* ReflectionManagerComponent;           // 0x02B0 (size: 0x8)

}; // Size: 0x2B8

class AZibraVDBHUD : public AHUD
{
}; // Size: 0x380

class UZibraVDBAssetComponent : public UActorComponent
{
    class UZibraVDBVolume4* ZibraVDBVolume;                                           // 0x00B8 (size: 0x8)

    void SetZibraVDBVolume(class UZibraVDBVolume4* InZibraVDBVolume);
    void SetZibraVDBPlaybackComponent(class UZibraVDBPlaybackComponent* InZibraVDBPlaybackComponent);
    void SetZibraVDBMaterialComponent(class UZibraVDBMaterialComponent* InZibraVDBMaterialComponent);
    bool HasZibraVDBVolume();
    class UZibraVDBVolume4* GetZibraVDBVolume();
}; // Size: 0xE0

class UZibraVDBMaterialComponent : public UPrimitiveComponent
{
    class UStaticMeshComponent* BBoxMeshComponent;                                    // 0x0518 (size: 0x8)
    class UHeterogeneousVolumeComponent* VolumeComponent;                             // 0x0520 (size: 0x8)
    bool bDifferentVoxelSizeWarning;                                                  // 0x0529 (size: 0x1)
    class UMaterialInterface* Material;                                               // 0x0530 (size: 0x8)
    class UMaterialInterface* VolumeMaterial;                                         // 0x0538 (size: 0x8)
    bool bUseHeterogeneousVolume;                                                     // 0x0540 (size: 0x1)
    float DensityScale;                                                               // 0x0544 (size: 0x4)
    ColorMode ScatteringColorMode;                                                    // 0x0548 (size: 0x1)
    class UCurveLinearColor* ScatteringColorGradient;                                 // 0x0550 (size: 0x8)
    FLinearColor ScatteringColor;                                                     // 0x0558 (size: 0x10)
    FLinearColor AbsorptionColor;                                                     // 0x0568 (size: 0x10)
    float FlameScale;                                                                 // 0x0578 (size: 0x4)
    ColorMode FlameColorMode;                                                         // 0x057C (size: 0x1)
    FLinearColor FlameColor;                                                          // 0x0580 (size: 0x10)
    class UCurveLinearColor* FlameColorGradient;                                      // 0x0590 (size: 0x8)
    float TemperatureScale;                                                           // 0x0598 (size: 0x4)
    ColorMode TemperatureColorMode;                                                   // 0x059C (size: 0x1)
    class UCurveLinearColor* TemperatureColorGradient;                                // 0x05A0 (size: 0x8)
    FLinearColor TemperatureColor;                                                    // 0x05A8 (size: 0x10)
    float DirectionalLightBrightness;                                                 // 0x05B8 (size: 0x4)
    float PointLightBrightness;                                                       // 0x05BC (size: 0x4)
    float SpotLightBrightness;                                                        // 0x05C0 (size: 0x4)
    float IlluminatedVolumeResolutionScale;                                           // 0x05C4 (size: 0x4)
    ResolutionDownscaleFactors IlluminationResolution;                                // 0x05C8 (size: 0x1)
    float RayMarchingMainStepSize;                                                    // 0x05CC (size: 0x4)
    int32 RayMarchingMaxMainSteps;                                                    // 0x05D0 (size: 0x4)
    bool AmbientLightingWarning;                                                      // 0x05D4 (size: 0x1)
    bool EnableAmbientLighting;                                                       // 0x05D5 (size: 0x1)
    float AmbientLightIntensity;                                                      // 0x05D8 (size: 0x4)
    float AmbientOcclusionContrast;                                                   // 0x05DC (size: 0x4)
    float ShadowIntensity;                                                            // 0x05E0 (size: 0x4)
    bool EnableDirectionalLightShadows;                                               // 0x05E4 (size: 0x1)
    bool EnablePointLightShadows;                                                     // 0x05E5 (size: 0x1)
    bool EnableSpotLightShadows;                                                      // 0x05E6 (size: 0x1)
    float RayMarchingSelfShadowStepSize;                                              // 0x05E8 (size: 0x4)
    int32 RayMarchingMaxSelfShadowSteps;                                              // 0x05EC (size: 0x4)
    bool ReceivedShadowsWarning;                                                      // 0x05F0 (size: 0x1)
    bool EnableDirectionalLightReceivedShadows;                                       // 0x05F1 (size: 0x1)
    bool EnablePointLightReceivedShadows;                                             // 0x05F2 (size: 0x1)
    bool EnableSpotLightReceivedShadows;                                              // 0x05F3 (size: 0x1)
    int32 RayMarchingMaxReceivedShadowSteps;                                          // 0x05F4 (size: 0x4)
    float ReceivedShadowHitThreshold;                                                 // 0x05F8 (size: 0x4)
    bool ProjectedShadowsWarning;                                                     // 0x05FC (size: 0x1)
    float ProjectedShadowsIntensity;                                                  // 0x0600 (size: 0x4)
    bool EnableDirectionalLightProjectedShadows;                                      // 0x0604 (size: 0x1)
    bool EnablePointAndSpotLightProjectedShadows;                                     // 0x0605 (size: 0x1)
    int32 RayMarchingMaxProjectedShadowSteps;                                         // 0x0608 (size: 0x4)
    bool AllowSkipDecompression;                                                      // 0x060C (size: 0x1)
    bool bRayMarchingFilteringInitialized;                                            // 0x060D (size: 0x1)
    ERayMarchingFiltering RayMarchingFiltering;                                       // 0x060E (size: 0x1)
    ResolutionDownscaleFactors VolumeResolution;                                      // 0x060F (size: 0x1)
    bool bEnableEmissionMasking;                                                      // 0x0610 (size: 0x1)
    bool bEnableFlameMasking;                                                         // 0x0611 (size: 0x1)
    bool bEnableTemperatureMasking;                                                   // 0x0612 (size: 0x1)
    float MaskCenter;                                                                 // 0x0614 (size: 0x4)
    float MaskWidth;                                                                  // 0x0618 (size: 0x4)
    float MaskIntensity;                                                              // 0x061C (size: 0x4)
    float MaskRamp;                                                                   // 0x0620 (size: 0x4)
    bool bEnableSphereMasking;                                                        // 0x0624 (size: 0x1)
    float MaskingSphereRadius;                                                        // 0x0628 (size: 0x4)
    FVector3f MaskingSpherePosition;                                                  // 0x062C (size: 0xC)
    float MaskingSphereFalloff;                                                       // 0x0638 (size: 0x4)
    int32 VolumeTranslucencySortPriority;                                             // 0x063C (size: 0x4)
    float VolumeTranslucencySortDistanceOffset;                                       // 0x0640 (size: 0x4)
    float HVStepFactor;                                                               // 0x0644 (size: 0x4)
    float HVShadowStepFactor;                                                         // 0x0648 (size: 0x4)
    float HVShadowBiasFactor;                                                         // 0x064C (size: 0x4)
    float HVLightingDownsampleFactor;                                                 // 0x0650 (size: 0x4)
    bool HVCastShadows;                                                               // 0x0654 (size: 0x1)
    FLightingChannels HVLightingChannels;                                             // 0x0655 (size: 0x1)
    bool bAllowFrustumCulling;                                                        // 0x0656 (size: 0x1)
    float ZibraVDBBoundsScale;                                                        // 0x0658 (size: 0x4)
    float MaxDrawDistance;                                                            // 0x065C (size: 0x4)

    void SetZibraVDBAssetComponent(class UZibraVDBAssetComponent* InZibraVDBAssetComponent);
    void SetDensityScale(float NewDensityScale);
    void SetAbsorptionColor(FLinearColor NewAbsorptionColor);
}; // Size: 0x690

class UZibraVDBPlaybackComponent : public UActorComponent
{
    float CurrentFrame;                                                               // 0x00A0 (size: 0x4)
    bool Animate;                                                                     // 0x00A4 (size: 0x1)
    float FrameRate;                                                                  // 0x00A8 (size: 0x4)
    bool Visible;                                                                     // 0x00AC (size: 0x1)
    int32 FrameCount;                                                                 // 0x00B0 (size: 0x4)

}; // Size: 0xC0

class UZibraVDBRenderingResourcesSubsystem : public UEngineSubsystem
{
}; // Size: 0x80

class UZibraVDBVolume : public UObject
{
    float OriginalVDBSize;                                                            // 0x0028 (size: 0x4)
    float VRAMUsage;                                                                  // 0x002C (size: 0x4)
    FIntVector VDBSize;                                                               // 0x0030 (size: 0xC)
    float CompressionRate;                                                            // 0x003C (size: 0x4)
    bool bIsLoadedFromZibraVDB;                                                       // 0x0040 (size: 0x1)
    float CompressionQuality;                                                         // 0x0044 (size: 0x4)
    bool bUseAdvancedCompressionSettings;                                             // 0x0048 (size: 0x1)
    float CompressionContrast;                                                        // 0x004C (size: 0x4)
    float CompressionDetails;                                                         // 0x0050 (size: 0x4)
    FFilePath SourceZibraVDBFile;                                                     // 0x0058 (size: 0x10)
    bool bIsDensityChannelUsed;                                                       // 0x0068 (size: 0x1)
    bool bIsTemperatureChannelUsed;                                                   // 0x0069 (size: 0x1)
    bool bIsFlameChannelUsed;                                                         // 0x006A (size: 0x1)
    FDirectoryPath SourceOpenVDBDirectory;                                            // 0x0070 (size: 0x10)
    TArray<FString> AvailableChannels;                                                // 0x0080 (size: 0x10)
    FString DensityChannelName;                                                       // 0x0090 (size: 0x10)
    FString TemperatureChannelName;                                                   // 0x00A0 (size: 0x10)
    FString FlameChannelName;                                                         // 0x00B0 (size: 0x10)

}; // Size: 0x118

class UZibraVDBVolume4 : public UObject
{
    FString DensityChannel;                                                           // 0x0028 (size: 0x10)
    FString TemperatureChannel;                                                       // 0x0038 (size: 0x10)
    FString FlamesChannel;                                                            // 0x0048 (size: 0x10)
    int32 FrameCount;                                                                 // 0x0058 (size: 0x4)
    float OriginalVDBSize;                                                            // 0x005C (size: 0x4)
    float VRAMUsage;                                                                  // 0x0060 (size: 0x4)
    FIntVector VDBSize;                                                               // 0x0064 (size: 0xC)
    float CompressionRate;                                                            // 0x0070 (size: 0x4)
    bool bIsLoadedFromZibraVDB;                                                       // 0x0074 (size: 0x1)
    float Quality;                                                                    // 0x0078 (size: 0x4)
    bool UsePerChannelCompressionSettings;                                            // 0x007C (size: 0x1)
    TMap<class FString, class FCompressionSettings> PerChannelCompressionSettings;    // 0x0080 (size: 0x50)
    FFilePath SourceZibraVDBFile;                                                     // 0x00D0 (size: 0x10)
    FFilePath SourceOpenVDBFilePath;                                                  // 0x00E0 (size: 0x10)
    TArray<FString> ChannelNames;                                                     // 0x00F0 (size: 0x10)

    TArray<FString> GetChannelNamesUI();
}; // Size: 0x178

class UZibraVdbReflectionsManagerComponent : public UActorComponent
{
    TArray<class AActor*> ActorsToApplyReflections;                                   // 0x00A0 (size: 0x10)
    ResolutionDownscaleFactors ReflectionsResolution;                                 // 0x00B0 (size: 0x1)

}; // Size: 0xE0

#endif
