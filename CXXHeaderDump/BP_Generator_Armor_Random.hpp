#ifndef UE4SS_SDK_BP_Generator_Armor_Random_HPP
#define UE4SS_SDK_BP_Generator_Armor_Random_HPP

class ABP_Generator_Armor_Random_C : public AActor
{
    class USceneComponent* DefaultSceneRoot;                                          // 0x0290 (size: 0x8)

    void Generate Armor(TEnumAsByte<Enum_Ranks::Type> Tier, TEnumAsByte<ArmorSlots_Enum::Type> Slot, double Module Spawn Chance, bool Mercenary Colors, bool Force Armor Metal Material, TEnumAsByte<Steel_Type::Type> Armor Steel Type Forced, TEnumAsByte<SecondaryMetal_Type::Type> Armor Metal Pieces Type Forced, FStr_Passport_Armor1& Armor Passport);
}; // Size: 0x298

#endif
