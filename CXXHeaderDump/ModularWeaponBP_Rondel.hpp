#ifndef UE4SS_SDK_ModularWeaponBP_Rondel_HPP
#define UE4SS_SDK_ModularWeaponBP_Rondel_HPP

class AModularWeaponBP_Rondel_C : public AModularWeaponBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0BF8 (size: 0x8)
    class USceneComponent* Tip2;                                                      // 0x0C00 (size: 0x8)
    class USceneComponent* Base1_1;                                                   // 0x0C08 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0C10 (size: 0x8)
    class USceneComponent* Base1_0;                                                   // 0x0C18 (size: 0x8)
    class USceneComponent* Tip1;                                                      // 0x0C20 (size: 0x8)
    class UArrowComponent* Arrow3;                                                    // 0x0C28 (size: 0x8)
    class UStaticMeshComponent* Blade;                                                // 0x0C30 (size: 0x8)

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void BndEvt__ModularWeaponBP_Axe_Blade_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void ExecuteUbergraph_ModularWeaponBP_Rondel(int32 EntryPoint);
}; // Size: 0xC38

#endif
