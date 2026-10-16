#ifndef UE4SS_SDK_DA_Equipment_Weapons_Modules_Master_HPP
#define UE4SS_SDK_DA_Equipment_Weapons_Modules_Master_HPP

class UDA_Equipment_Weapons_Modules_Master_C : public UPrimaryDataAsset
{
    TArray<class TSubclassOf<AModular_Weapon_Part_Master_C>> Modules;                 // 0x0030 (size: 0x10)

}; // Size: 0x40

#endif
