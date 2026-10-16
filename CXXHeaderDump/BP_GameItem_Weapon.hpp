#ifndef UE4SS_SDK_BP_GameItem_Weapon_HPP
#define UE4SS_SDK_BP_GameItem_Weapon_HPP

class UBP_GameItem_Weapon_C : public UBP_GameItem_C
{
    FStr_Passport_Weapon1 Weapon Passport;                                            // 0x0068 (size: 0x100)
    TSubclassOf<class AModularWeaponBP_C> Weapon to Spawn;                            // 0x0168 (size: 0x8)

    void Initialize();
}; // Size: 0x170

#endif
