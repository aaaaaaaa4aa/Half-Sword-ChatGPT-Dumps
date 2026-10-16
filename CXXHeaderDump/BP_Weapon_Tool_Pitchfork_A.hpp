#ifndef UE4SS_SDK_BP_Weapon_Tool_Pitchfork_A_HPP
#define UE4SS_SDK_BP_Weapon_Tool_Pitchfork_A_HPP

class ABP_Weapon_Tool_Pitchfork_A_C : public AModularWeaponBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0BF8 (size: 0x8)
    class USceneComponent* Tip6;                                                      // 0x0C00 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0C08 (size: 0x8)
    class USceneComponent* Tip2;                                                      // 0x0C10 (size: 0x8)
    class USceneComponent* Base0;                                                     // 0x0C18 (size: 0x8)
    class USceneComponent* Tip1;                                                      // 0x0C20 (size: 0x8)
    class UStaticMeshComponent* Weapon;                                               // 0x0C28 (size: 0x8)

    void UserConstructionScript();
    void BndEvt__Buckler_Buckler_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void ExecuteUbergraph_BP_Weapon_Tool_Pitchfork_A(int32 EntryPoint);
}; // Size: 0xC30

#endif
