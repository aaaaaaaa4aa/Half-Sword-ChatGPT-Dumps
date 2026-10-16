#ifndef UE4SS_SDK_BP_GameItem_Armor_HPP
#define UE4SS_SDK_BP_GameItem_Armor_HPP

class UBP_GameItem_Armor_C : public UBP_GameItem_C
{
    FStr_Passport_Armor1 Armor Passport;                                              // 0x0068 (size: 0xD8)
    TSubclassOf<class ABP_Armor_Modular_Core_Master_C> Armor to Spawn;                // 0x0140 (size: 0x8)

    void Initialize();
}; // Size: 0x148

#endif
