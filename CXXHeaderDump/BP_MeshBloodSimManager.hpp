#ifndef UE4SS_SDK_BP_MeshBloodSimManager_HPP
#define UE4SS_SDK_BP_MeshBloodSimManager_HPP

class ABP_MeshBloodSimManager_C : public AActor
{
    class USceneComponent* DefaultSceneRoot;                                          // 0x0290 (size: 0x8)
    TMap<class UStaticMeshComponent*, class ABP_MeshBloodSim_C*> SimulatedObjectsMap; // 0x0298 (size: 0x50)
    TSubclassOf<class ABP_MeshBloodSim_C> BloodSimRef;                                // 0x02E8 (size: 0x8)
    double SlowFlowSpeed;                                                             // 0x02F0 (size: 0x8)
    double FastFlowSpeed;                                                             // 0x02F8 (size: 0x8)
    double DryoutSpeed;                                                               // 0x0300 (size: 0x8)
    double MaxSimTime;                                                                // 0x0308 (size: 0x8)
    double IntensityMultiplier;                                                       // 0x0310 (size: 0x8)
    TMap<class UStaticMeshComponent*, class ACSBloodSimActor*> SimulatedActors;       // 0x0318 (size: 0x50)
    double VelocityDecrement;                                                         // 0x0368 (size: 0x8)
    class ACSBloodSimActor* BloodSimActor;                                            // 0x0370 (size: 0x8)

    void UpdateSimulations(class UStaticMeshComponent* MeshToSimOn, FVector4 LocationAndSize, FVector Velocity);
    void DoMeshBloodSim(class UStaticMeshComponent* MeshToSimOn, FVector4 ParticleData, FVector ParticleVelocity);
}; // Size: 0x378

#endif
