#ifndef UE4SS_SDK_HSComputeShaders_HPP
#define UE4SS_SDK_HSComputeShaders_HPP

class ACSBloodSimActor : public AActor
{
    class UTextureRenderTarget2D* DebugBloodRT;                                       // 0x0290 (size: 0x8)
    class UTexture2D* NormalMap;                                                      // 0x0298 (size: 0x8)
    class UTexture2D* HeightMap;                                                      // 0x02A0 (size: 0x8)
    class UTexture2D* BloodSplatters;                                                 // 0x02A8 (size: 0x8)
    class UTextureRenderTarget2D* CurrentWrite;                                       // 0x02B0 (size: 0x8)
    class UTextureRenderTarget2D* CurrentRead;                                        // 0x02B8 (size: 0x8)
    class UMaterialInstanceDynamic* BoundMeshMatInstance;                             // 0x02C0 (size: 0x8)
    TArray<class UMaterialInstanceDynamic*> BoundMeshMatInstances;                    // 0x02C8 (size: 0x10)
    class UStaticMeshComponent* BoundMesh;                                            // 0x02D8 (size: 0x8)
    int32 RTSize;                                                                     // 0x02E0 (size: 0x4)
    float VelocityDecrement;                                                          // 0x02E4 (size: 0x4)
    float SlowFlowSpeed;                                                              // 0x02E8 (size: 0x4)
    float FastFlowSpeed;                                                              // 0x02EC (size: 0x4)
    float DryoutSpeed;                                                                // 0x02F0 (size: 0x4)
    float MaxSimTime;                                                                 // 0x02F4 (size: 0x4)
    float IntensityMultiplier;                                                        // 0x02F8 (size: 0x4)
    TArray<FVector4f> LocationsAndSizes;                                              // 0x0300 (size: 0x10)
    TArray<FVector> Velocities;                                                       // 0x0310 (size: 0x10)

    void AddNewParticle(FVector4f LocationAndSize, FVector Velocity);
}; // Size: 0x330

class AHSWoundsController : public AActor
{
    class UTexture2D* SplashTexture;                                                  // 0x0290 (size: 0x8)
    FVector4f PositionRotation;                                                       // 0x02A0 (size: 0x10)

}; // Size: 0x2B0

class UHSBloodCS_AsyncExecution : public UBlueprintAsyncActionBase
{
}; // Size: 0x30

class UHSWoundsCS_AsyncExecution : public UBlueprintAsyncActionBase
{
}; // Size: 0x40

#endif
