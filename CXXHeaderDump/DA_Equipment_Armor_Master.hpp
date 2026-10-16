#ifndef UE4SS_SDK_DA_Equipment_Armor_Master_HPP
#define UE4SS_SDK_DA_Equipment_Armor_Master_HPP

class UDA_Equipment_Armor_Master_C : public UPrimaryDataAsset
{
    TArray<class TSubclassOf<ABP_Armor_Modular_Core_Master_C>> Armors;                // 0x0030 (size: 0x10)

}; // Size: 0x40

#endif
