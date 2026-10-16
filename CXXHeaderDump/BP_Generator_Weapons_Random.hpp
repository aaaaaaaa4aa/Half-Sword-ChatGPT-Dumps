#ifndef UE4SS_SDK_BP_Generator_Weapons_Random_HPP
#define UE4SS_SDK_BP_Generator_Weapons_Random_HPP

class ABP_Generator_Weapons_Random_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0298 (size: 0x8)
    TSubclassOf<class UBP_GameWeapon_Customizable_Master_C> Customizable Modules;     // 0x02A0 (size: 0x8)
    TEnumAsByte<Enum_MaterialLayer::Type> Custom Material Steel;                      // 0x02A8 (size: 0x1)
    TEnumAsByte<Enum_MaterialLayer::Type> Custom Material Colored Metal;              // 0x02A9 (size: 0x1)
    TEnumAsByte<Enum_MaterialLayer::Type> Custom Material Colored Wood;               // 0x02AA (size: 0x1)
    TEnumAsByte<Enum_MaterialLayer::Type> Custom Material Colored Leather;            // 0x02AB (size: 0x1)
    bool Generate Greatsword;                                                         // 0x02AC (size: 0x1)
    class UGI_Settings_C* As GI Settings;                                             // 0x02B0 (size: 0x8)

    void Add Weapon Module to Array(TSubclassOf<class AModular_Weapon_Part_Master_C> Weapon Module, TEnumAsByte<Enum_Ranks::Type> Tier In, double& Module Price, TEnumAsByte<Enum_Ranks::Type>& Tier Out);
    void Generate Weapon(TEnumAsByte<Enum_WeaponType::Type> Weapon Type Enum, TEnumAsByte<Enum_Ranks::Type> Tier, bool Spawn Specific Weapon, TSubclassOf<class AModularWeaponBP_C> Specific Class, FStr_Passport_Weapon1 Specific Passport, TEnumAsByte<Enum_WeaponType_Specific::Type> Weapon Type Specific, FStr_Passport_Weapon1& Weapon Passport);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_Generator_Weapons_Random(int32 EntryPoint);
}; // Size: 0x2B8

#endif
