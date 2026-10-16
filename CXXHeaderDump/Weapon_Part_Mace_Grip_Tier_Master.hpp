#ifndef UE4SS_SDK_Weapon_Part_Mace_Grip_Tier_Master_HPP
#define UE4SS_SDK_Weapon_Part_Mace_Grip_Tier_Master_HPP

class AWeapon_Part_Mace_Grip_Tier_Master_C : public AModular_Weapon_Shaft_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x05F8 (size: 0x8)
    TArray<class UStaticMesh*> Random Mesh;                                           // 0x0600 (size: 0x10)

    void UserConstructionScript();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_Weapon_Part_Mace_Grip_Tier_Master(int32 EntryPoint);
}; // Size: 0x610

#endif
