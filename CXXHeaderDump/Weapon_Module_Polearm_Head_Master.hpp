#ifndef UE4SS_SDK_Weapon_Module_Polearm_Head_Master_HPP
#define UE4SS_SDK_Weapon_Module_Polearm_Head_Master_HPP

class AWeapon_Module_Polearm_Head_Master_C : public AModular_Weapon_Module_C
{
    int32 Materian Int Min;                                                           // 0x041C (size: 0x4)
    int32 Materian Int Max;                                                           // 0x0420 (size: 0x4)
    TSubclassOf<class AModular_Weapon_Module_C> Sub Module;                           // 0x0428 (size: 0x8)

    void UserConstructionScript();
}; // Size: 0x430

#endif
