#ifndef UE4SS_SDK_BP_GameWeapon_HPP
#define UE4SS_SDK_BP_GameWeapon_HPP

class UBP_GameWeapon_C : public UBP_GameItem_C
{
    TSubclassOf<class AModular_Weapon_Module_C> Module Head;                          // 0x0068 (size: 0x8)
    TSubclassOf<class AModular_Weapon_SubModule_C> Head Sub Module 1;                 // 0x0070 (size: 0x8)
    TSubclassOf<class AModular_Weapon_SubModule_C> Head Sub Module 2;                 // 0x0078 (size: 0x8)
    TSubclassOf<class AModular_Weapon_Module_C> Module Guard;                         // 0x0080 (size: 0x8)
    TSubclassOf<class AModular_Weapon_Grip_C> Module Grip;                            // 0x0088 (size: 0x8)
    TSubclassOf<class AModular_Weapon_Module_C> Module Pommel;                        // 0x0090 (size: 0x8)
    FVector Head Size;                                                                // 0x0098 (size: 0x18)
    FVector Guard Size;                                                               // 0x00B0 (size: 0x18)
    FVector Grip Size;                                                                // 0x00C8 (size: 0x18)
    FVector Pommel Size;                                                              // 0x00E0 (size: 0x18)
    double Custom Mass Scale Head;                                                    // 0x00F8 (size: 0x8)
    double Custom Mass Scale Guard;                                                   // 0x0100 (size: 0x8)
    double Custom Mass Scale Grip;                                                    // 0x0108 (size: 0x8)
    double Custom Mass Scale Pommel;                                                  // 0x0110 (size: 0x8)
    TEnumAsByte<Enum_MaterialLayer::Type> Custom Material Head;                       // 0x0118 (size: 0x1)
    TEnumAsByte<Enum_MaterialLayer::Type> Custom Material Guard;                      // 0x0119 (size: 0x1)
    TEnumAsByte<Enum_MaterialLayer::Type> Custom Material Grip;                       // 0x011A (size: 0x1)
    TEnumAsByte<Enum_MaterialLayer::Type> Custom Material Pommel;                     // 0x011B (size: 0x1)
    FLinearColor Custom Color Head;                                                   // 0x011C (size: 0x10)
    FLinearColor Custom Color Guard;                                                  // 0x012C (size: 0x10)
    FLinearColor Custom Color Grip;                                                   // 0x013C (size: 0x10)
    FLinearColor Custom Color Pommel;                                                 // 0x014C (size: 0x10)

}; // Size: 0x15C

#endif
