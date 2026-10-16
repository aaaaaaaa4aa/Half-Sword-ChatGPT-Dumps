#ifndef UE4SS_SDK_Weapon_Part_Hafted_Head_BB_HPP
#define UE4SS_SDK_Weapon_Part_Hafted_Head_BB_HPP

class AWeapon_Part_Hafted_Head_BB_C : public AModular_Hafted_Head_Master_C
{
    class USceneComponent* Tip2;                                                      // 0x0430 (size: 0x8)
    class USceneComponent* Tip3;                                                      // 0x0438 (size: 0x8)
    class USceneComponent* Tip1;                                                      // 0x0440 (size: 0x8)
    class USceneComponent* Tip5;                                                      // 0x0448 (size: 0x8)
    class USceneComponent* Tip4;                                                      // 0x0450 (size: 0x8)

    void UserConstructionScript();
}; // Size: 0x458

#endif
