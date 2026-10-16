#ifndef UE4SS_SDK_RunningBlood_BP_HPP
#define UE4SS_SDK_RunningBlood_BP_HPP

class ARunningBlood_BP_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x0298 (size: 0x8)
    class UBPC_RuntimeVertexPaintAndDetectionComponent_C* BPC_RuntimeVertexPaintAndDetectionComponent; // 0x02A0 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02A8 (size: 0x8)
    class USkeletalMeshComponent* MySkeletalMesh;                                     // 0x02B0 (size: 0x8)
    FName CurrentBone;                                                                // 0x02B8 (size: 0x8)
    TArray<class USceneComponent*> NewVar;                                            // 0x02C0 (size: 0x10)
    int32 Array Index;                                                                // 0x02D0 (size: 0x4)
    FVector NewVar_0;                                                                 // 0x02D8 (size: 0x18)
    class USceneComponent* Array Element;                                             // 0x02F0 (size: 0x8)
    TArray<bool> NewVar_1;                                                            // 0x02F8 (size: 0x10)
    TArray<class USkeletalMeshComponent*> MySkeletalMesh_0;                           // 0x0308 (size: 0x10)
    int32 LoopCount;                                                                  // 0x0318 (size: 0x4)
    bool NewVar_2;                                                                    // 0x031C (size: 0x1)
    FVector Out Point on Body;                                                        // 0x0320 (size: 0x18)
    class ABlood_BP_P4_C* Latest Blood Emitter;                                       // 0x0338 (size: 0x8)
    class UGI_Settings_C* GI Settings;                                                // 0x0340 (size: 0x8)
    double Blood Rate;                                                                // 0x0348 (size: 0x8)
    int32 Blood to Delete;                                                            // 0x0350 (size: 0x4)

    void UserConstructionScript();
    void ReceiveTick(float DeltaSeconds);
    void Bleed Event();
    void Destroy Self();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_RunningBlood_BP(int32 EntryPoint);
}; // Size: 0x354

#endif
