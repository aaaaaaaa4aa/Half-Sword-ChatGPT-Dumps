#ifndef UE4SS_SDK_BP_SoundDetection_Sphere_HPP
#define UE4SS_SDK_BP_SoundDetection_Sphere_HPP

class ABP_SoundDetection_Sphere_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x0298 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02A0 (size: 0x8)
    double Sound Amount;                                                              // 0x02A8 (size: 0x8)
    FVector Scale;                                                                    // 0x02B0 (size: 0x18)

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_SoundDetection_Sphere(int32 EntryPoint);
}; // Size: 0x2C8

#endif
