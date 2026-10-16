#ifndef UE4SS_SDK_ModularWeaponBP_WarStaff_A_HPP
#define UE4SS_SDK_ModularWeaponBP_WarStaff_A_HPP

class AModularWeaponBP_WarStaff_A_C : public AModularWeaponBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0BF8 (size: 0x8)
    class USceneComponent* Tip24;                                                     // 0x0C00 (size: 0x8)
    class USceneComponent* Tip23;                                                     // 0x0C08 (size: 0x8)
    class USceneComponent* Tip22;                                                     // 0x0C10 (size: 0x8)
    class USceneComponent* Tip21;                                                     // 0x0C18 (size: 0x8)
    class USceneComponent* Tip20;                                                     // 0x0C20 (size: 0x8)
    class USceneComponent* Tip19;                                                     // 0x0C28 (size: 0x8)
    class USceneComponent* Tip18;                                                     // 0x0C30 (size: 0x8)
    class USceneComponent* Tip17;                                                     // 0x0C38 (size: 0x8)
    class USceneComponent* Tip16;                                                     // 0x0C40 (size: 0x8)
    class USceneComponent* Tip15;                                                     // 0x0C48 (size: 0x8)
    class USceneComponent* Tip14;                                                     // 0x0C50 (size: 0x8)
    class USceneComponent* Tip13;                                                     // 0x0C58 (size: 0x8)
    class USceneComponent* Tip12;                                                     // 0x0C60 (size: 0x8)
    class USceneComponent* Tip11;                                                     // 0x0C68 (size: 0x8)
    class USceneComponent* Tip10;                                                     // 0x0C70 (size: 0x8)
    class USceneComponent* Tip9;                                                      // 0x0C78 (size: 0x8)
    class USceneComponent* Tip8;                                                      // 0x0C80 (size: 0x8)
    class USceneComponent* Tip7;                                                      // 0x0C88 (size: 0x8)
    class USceneComponent* Tip6;                                                      // 0x0C90 (size: 0x8)
    class USceneComponent* Tip5;                                                      // 0x0C98 (size: 0x8)
    class USceneComponent* Tip4;                                                      // 0x0CA0 (size: 0x8)
    class USceneComponent* Tip3;                                                      // 0x0CA8 (size: 0x8)
    class USceneComponent* Tip2;                                                      // 0x0CB0 (size: 0x8)
    class USceneComponent* Base1_1;                                                   // 0x0CB8 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0CC0 (size: 0x8)
    class USceneComponent* Base1_0;                                                   // 0x0CC8 (size: 0x8)
    class USceneComponent* Tip1;                                                      // 0x0CD0 (size: 0x8)
    class UArrowComponent* Arrow3;                                                    // 0x0CD8 (size: 0x8)
    class UStaticMeshComponent* Blade;                                                // 0x0CE0 (size: 0x8)
    class UStaticMeshComponent* Grip_0;                                               // 0x0CE8 (size: 0x8)

    void UserConstructionScript();
    void BndEvt__ModularWeaponBP_Axe_Blade_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void BndEvt__ModularWeaponBP_Axe_Grip_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void ExecuteUbergraph_ModularWeaponBP_WarStaff_A(int32 EntryPoint);
}; // Size: 0xCF0

#endif
