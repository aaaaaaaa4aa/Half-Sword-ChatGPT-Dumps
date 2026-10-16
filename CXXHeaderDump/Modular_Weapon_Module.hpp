#ifndef UE4SS_SDK_Modular_Weapon_Module_HPP
#define UE4SS_SDK_Modular_Weapon_Module_HPP

class AModular_Weapon_Module_C : public AModular_Weapon_Part_Master_C
{
    TArray<class TSubclassOf<AModular_Weapon_Module_C>> Sub Module 1 Array;           // 0x03F8 (size: 0x10)
    TArray<class TSubclassOf<AModular_Weapon_Module_C>> Sub Module 2 Array;           // 0x0408 (size: 0x10)
    bool Is Sub Module;                                                               // 0x0418 (size: 0x1)

    void UserConstructionScript();
}; // Size: 0x419

#endif
