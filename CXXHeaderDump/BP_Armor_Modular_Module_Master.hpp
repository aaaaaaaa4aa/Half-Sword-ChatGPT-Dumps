#ifndef UE4SS_SDK_BP_Armor_Modular_Module_Master_HPP
#define UE4SS_SDK_BP_Armor_Modular_Module_Master_HPP

class ABP_Armor_Modular_Module_Master_C : public ABP_Armor_Master_C
{
    bool Can Replace Core;                                                            // 0x0918 (size: 0x1)
    bool Force Replace Core;                                                          // 0x0919 (size: 0x1)
    TEnumAsByte<Steel_Type::Type> Parent Steel Type;                                  // 0x091A (size: 0x1)
    TEnumAsByte<SecondaryMetal_Type::Type> Parent Metal Pieces Type;                  // 0x091B (size: 0x1)

    void UserConstructionScript();
}; // Size: 0x91C

#endif
