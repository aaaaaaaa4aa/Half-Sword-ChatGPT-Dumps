#ifndef UE4SS_SDK_DA_Equipment_Weapons_Types_Master_HPP
#define UE4SS_SDK_DA_Equipment_Weapons_Types_Master_HPP

class UDA_Equipment_Weapons_Types_Master_C : public UPrimaryDataAsset
{
    TArray<class TSubclassOf<UBP_GameWeapon_Customizable_Master_C>> Types;            // 0x0030 (size: 0x10)

}; // Size: 0x40

#endif
