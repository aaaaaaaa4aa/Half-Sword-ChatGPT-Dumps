#ifndef UE4SS_SDK_BP_GameWeapon_Customizable_Master_HPP
#define UE4SS_SDK_BP_GameWeapon_Customizable_Master_HPP

class UBP_GameWeapon_Customizable_Master_C : public UBP_GameWeapon_C
{
    TEnumAsByte<Enum_Weapon_Customization_Type::Type> Customization Type;             // 0x015C (size: 0x1)
    TArray<class TSubclassOf<AModular_Weapon_Module_C>> Module Heads Array;           // 0x0160 (size: 0x10)
    TArray<class TSubclassOf<AModular_Weapon_Module_C>> Head Sub Module 1 Array;      // 0x0170 (size: 0x10)
    TArray<class TSubclassOf<AModular_Weapon_Module_C>> Head Sub Module 2 Array;      // 0x0180 (size: 0x10)
    TArray<class TSubclassOf<AModular_Weapon_Module_C>> Module Guards Array;          // 0x0190 (size: 0x10)
    TArray<class TSubclassOf<AModular_Weapon_Grip_C>> Module Grips Array;             // 0x01A0 (size: 0x10)
    TArray<class TSubclassOf<AModular_Weapon_Module_C>> Module Pommels Array;         // 0x01B0 (size: 0x10)
    double Grip Notch Lower;                                                          // 0x01C0 (size: 0x8)
    double Grip Notch Upper;                                                          // 0x01C8 (size: 0x8)
    TSubclassOf<class UBP_GameWeapon_Customizable_Master_C> Smaller Size Game Weapon; // 0x01D0 (size: 0x8)
    TSubclassOf<class UBP_GameWeapon_Customizable_Master_C> Bigger Size Game Weapon;  // 0x01D8 (size: 0x8)
    double Mass Scale;                                                                // 0x01E0 (size: 0x8)
    FName Custom Name;                                                                // 0x01E8 (size: 0x8)

    void Initialize();
}; // Size: 0x1F0

#endif
