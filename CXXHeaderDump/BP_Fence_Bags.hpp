#ifndef UE4SS_SDK_BP_Fence_Bags_HPP
#define UE4SS_SDK_BP_Fence_Bags_HPP

class ABP_Fence_Bags_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class UNavModifierComponent* NavModifier;                                         // 0x0298 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x02A0 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02A8 (size: 0x8)
    TArray<class UStaticMesh*> Meshes Array;                                          // 0x02B0 (size: 0x10)
    double Radius;                                                                    // 0x02C0 (size: 0x8)
    class ABP_HalfSwordGameMode_C* As BP Half Sword Game Mode;                        // 0x02C8 (size: 0x8)
    bool Initialized;                                                                 // 0x02D0 (size: 0x1)

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void BndEvt__BP_Fence_Bags_Sphere_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ExecuteUbergraph_BP_Fence_Bags(int32 EntryPoint);
}; // Size: 0x2D1

#endif
