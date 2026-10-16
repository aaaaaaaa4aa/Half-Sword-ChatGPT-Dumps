#ifndef UE4SS_SDK_BP_Trash_ColoredBall_HPP
#define UE4SS_SDK_BP_Trash_ColoredBall_HPP

class ABP_Trash_ColoredBall_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class UStaticMeshComponent* Sphere;                                               // 0x0298 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02A0 (size: 0x8)

    void ReceiveBeginPlay();
    void Turn Yellow();
    void Turn Green();
    void Turn Blue();
    void Turn Red();
    void ExecuteUbergraph_BP_Trash_ColoredBall(int32 EntryPoint);
}; // Size: 0x2A8

#endif
