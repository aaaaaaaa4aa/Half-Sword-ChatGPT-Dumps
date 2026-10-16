#ifndef UE4SS_SDK_ModularWeaponBP_Flail_D_HPP
#define UE4SS_SDK_ModularWeaponBP_Flail_D_HPP

class AModularWeaponBP_Flail_D_C : public AModularWeaponBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0BF8 (size: 0x8)
    class USceneComponent* Tip8;                                                      // 0x0C00 (size: 0x8)
    class USceneComponent* Tip5;                                                      // 0x0C08 (size: 0x8)
    class USceneComponent* Tip6;                                                      // 0x0C10 (size: 0x8)
    class USceneComponent* Tip3;                                                      // 0x0C18 (size: 0x8)
    class USceneComponent* Tip7;                                                      // 0x0C20 (size: 0x8)
    class USceneComponent* Base1_0;                                                   // 0x0C28 (size: 0x8)
    class USceneComponent* Tip10;                                                     // 0x0C30 (size: 0x8)
    class USceneComponent* Tip12;                                                     // 0x0C38 (size: 0x8)
    class USceneComponent* Tip14;                                                     // 0x0C40 (size: 0x8)
    class USceneComponent* Tip15;                                                     // 0x0C48 (size: 0x8)
    class USceneComponent* Tip13;                                                     // 0x0C50 (size: 0x8)
    class USceneComponent* Tip4;                                                      // 0x0C58 (size: 0x8)
    class USceneComponent* Tip1;                                                      // 0x0C60 (size: 0x8)
    class USceneComponent* Tip9;                                                      // 0x0C68 (size: 0x8)
    class USceneComponent* Tip11;                                                     // 0x0C70 (size: 0x8)
    class UPhysicsConstraintComponent* PhysicsConstraint1;                            // 0x0C78 (size: 0x8)
    class UStaticMeshComponent* Link 1;                                               // 0x0C80 (size: 0x8)
    class USceneComponent* Base1_1;                                                   // 0x0C88 (size: 0x8)
    class UPhysicsConstraintComponent* PhysicsConstraint;                             // 0x0C90 (size: 0x8)
    class USceneComponent* Tip2;                                                      // 0x0C98 (size: 0x8)
    class UStaticMeshComponent* Blade1;                                               // 0x0CA0 (size: 0x8)

    void UserConstructionScript();
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__ModularWeaponBP_Flail_A_Blade1_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void BndEvt__ModularWeaponBP_Flail_A_Link 1_K2Node_ComponentBoundEvent_3_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void ExecuteUbergraph_ModularWeaponBP_Flail_D(int32 EntryPoint);
}; // Size: 0xCA8

#endif
