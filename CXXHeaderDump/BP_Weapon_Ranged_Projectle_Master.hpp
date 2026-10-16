#ifndef UE4SS_SDK_BP_Weapon_Ranged_Projectle_Master_HPP
#define UE4SS_SDK_BP_Weapon_Ranged_Projectle_Master_HPP

class ABP_Weapon_Ranged_Projectle_Master_C : public AModularWeaponBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0BF8 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0C00 (size: 0x8)
    class USceneComponent* Base1_0;                                                   // 0x0C08 (size: 0x8)
    class USceneComponent* Tip1;                                                      // 0x0C10 (size: 0x8)
    class UStaticMeshComponent* Cube;                                                 // 0x0C18 (size: 0x8)

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void BndEvt__BP_Weapon_Ranged_Projectle_Master_Cube_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void ExecuteUbergraph_BP_Weapon_Ranged_Projectle_Master(int32 EntryPoint);
}; // Size: 0xC20

#endif
