#ifndef UE4SS_SDK_BP_MeshBloodSim_HPP
#define UE4SS_SDK_BP_MeshBloodSim_HPP

class ABP_MeshBloodSim_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0298 (size: 0x8)
    TArray<FVector4> ParticleBaseData;                                                // 0x02A0 (size: 0x10)
    TArray<FVector> ParticleVelocities;                                               // 0x02B0 (size: 0x10)
    class UNiagaraComponent* BloodBlitRef;                                            // 0x02C0 (size: 0x8)
    class UTextureRenderTarget2D* MainRenderTarget;                                   // 0x02C8 (size: 0x8)
    class UMaterialInstanceDynamic* MaterialOfTheMesh;                                // 0x02D0 (size: 0x8)
    class UStaticMeshComponent* MeshToSimOn;                                          // 0x02D8 (size: 0x8)
    double RemainingSimulationTime;                                                   // 0x02E0 (size: 0x8)
    double MaxSimulationTime;                                                         // 0x02E8 (size: 0x8)

    void Initialize(class UStaticMeshComponent* MeshSimulatedOn, double SlowFlowSpeed, double FastFlowSpeed, double MaxSimeTime, double DryoutSpeed, double IntensityMultiplier);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_MeshBloodSim(int32 EntryPoint);
}; // Size: 0x2F0

#endif
