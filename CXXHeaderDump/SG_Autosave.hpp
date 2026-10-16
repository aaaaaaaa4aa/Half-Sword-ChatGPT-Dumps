#ifndef UE4SS_SDK_SG_Autosave_HPP
#define UE4SS_SDK_SG_Autosave_HPP

class USG_Autosave_C : public USaveGame
{
    TMap<TEnumAsByte<ArmorSlots_Enum::Type>, TSubclassOf<ABP_Armor_Master_C>> Armor Slots; // 0x0028 (size: 0x50)
    TSubclassOf<class AModularWeaponBP_C> Weapon R;                                   // 0x0078 (size: 0x8)
    TSubclassOf<class AModularWeaponBP_C> Weapon L;                                   // 0x0080 (size: 0x8)
    TSubclassOf<class AModularWeaponBP_C> Weapon Slot Back;                           // 0x0088 (size: 0x8)
    TSubclassOf<class AModularWeaponBP_C> Weapon Slot L 1;                            // 0x0090 (size: 0x8)
    TSubclassOf<class AModularWeaponBP_C> Weapon Slot L 2;                            // 0x0098 (size: 0x8)
    TSubclassOf<class AModularWeaponBP_C> Weapon Slot R 1;                            // 0x00A0 (size: 0x8)
    TSubclassOf<class AModularWeaponBP_C> Weapon Slot R 2;                            // 0x00A8 (size: 0x8)
    TArray<FName> Dismembered Array;                                                  // 0x00B0 (size: 0x10)
    double Head Health;                                                               // 0x00C0 (size: 0x8)
    double Body Health;                                                               // 0x00C8 (size: 0x8)
    double Arm_R Health;                                                              // 0x00D0 (size: 0x8)
    double Arm_L Health;                                                              // 0x00D8 (size: 0x8)
    double Neck Health;                                                               // 0x00E0 (size: 0x8)
    double Leg_R Health;                                                              // 0x00E8 (size: 0x8)
    double Leg_L Health;                                                              // 0x00F0 (size: 0x8)
    double Bleeding;                                                                  // 0x00F8 (size: 0x8)
    bool Guts Spilled;                                                                // 0x0100 (size: 0x1)
    TMap<class TSubclassOf<ABP_Armor_Master_C>, class UMaterialInstanceDynamic*> Armor Slot Materials; // 0x0108 (size: 0x50)
    double Health;                                                                    // 0x0158 (size: 0x8)
    double Score;                                                                     // 0x0160 (size: 0x8)
    double Mouse Sensitivity;                                                         // 0x0168 (size: 0x8)
    int32 Level;                                                                      // 0x0170 (size: 0x4)

}; // Size: 0x174

#endif
