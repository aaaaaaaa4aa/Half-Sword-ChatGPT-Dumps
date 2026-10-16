#ifndef UE4SS_SDK_Willie_Torso_BP_HPP
#define UE4SS_SDK_Willie_Torso_BP_HPP

class AWillie_Torso_BP_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class UPhysicalAnimationComponent* PhysicalAnimation;                             // 0x0298 (size: 0x8)
    class USkeletalMeshComponent* Mesh;                                               // 0x02A0 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02A8 (size: 0x8)
    class AWillie_BP_C* Parent WIllie;                                                // 0x02B0 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_Willie_Torso_BP(int32 EntryPoint);
}; // Size: 0x2B8

#endif
