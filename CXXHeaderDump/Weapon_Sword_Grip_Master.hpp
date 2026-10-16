#ifndef UE4SS_SDK_Weapon_Sword_Grip_Master_HPP
#define UE4SS_SDK_Weapon_Sword_Grip_Master_HPP

class AWeapon_Sword_Grip_Master_C : public AModular_Weapon_Grip_C
{
    TArray<class UStaticMesh*> Random Mesh;                                           // 0x05F8 (size: 0x10)
    double Start Mass;                                                                // 0x0608 (size: 0x8)
    double Blade Length (Unscaled);                                                   // 0x0610 (size: 0x8)
    TArray<class TSubclassOf<AModular_Weapon_Module_C>> Blades 1;                     // 0x0618 (size: 0x10)
    TArray<class TSubclassOf<AModular_Weapon_Module_C>> Blades 2;                     // 0x0628 (size: 0x10)
    TArray<class TSubclassOf<AModular_Weapon_Module_C>> Blades 3;                     // 0x0638 (size: 0x10)
    double Blade Length Notch 1;                                                      // 0x0648 (size: 0x8)
    double Blade Length Notch 2;                                                      // 0x0650 (size: 0x8)
    double Blade Length Notch 3;                                                      // 0x0658 (size: 0x8)
    double Blade Length Min;                                                          // 0x0660 (size: 0x8)
    double Blade Length Max;                                                          // 0x0668 (size: 0x8)

    void UserConstructionScript();
}; // Size: 0x670

#endif
