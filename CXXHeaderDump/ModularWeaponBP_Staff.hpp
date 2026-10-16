#ifndef UE4SS_SDK_ModularWeaponBP_Staff_HPP
#define UE4SS_SDK_ModularWeaponBP_Staff_HPP

class AModularWeaponBP_Staff_C : public AModularWeaponBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0BF8 (size: 0x8)
    class USceneComponent* Base1_1;                                                   // 0x0C00 (size: 0x8)
    class USceneComponent* Tip2;                                                      // 0x0C08 (size: 0x8)
    class UArrowComponent* Arrow3;                                                    // 0x0C10 (size: 0x8)
    class UStaticMeshComponent* Grip_0;                                               // 0x0C18 (size: 0x8)

    void UserConstructionScript();
    void BndEvt__ModularWeaponBP_Axe_Grip_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void ExecuteUbergraph_ModularWeaponBP_Staff(int32 EntryPoint);
}; // Size: 0xC20

#endif
