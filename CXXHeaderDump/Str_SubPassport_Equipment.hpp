#ifndef UE4SS_SDK_Str_SubPassport_Equipment_HPP
#define UE4SS_SDK_Str_SubPassport_Equipment_HPP

struct FStr_SubPassport_Equipment
{
    TMap<TEnumAsByte<ArmorSlots_Enum::Type>, FStr_Passport_Armor1> ArmorinSlots_5_BD7AC6CB43FBB2FDB943E7864486F358; // 0x0000 (size: 0x50)
    TMap<TEnumAsByte<SheathSlots_Enum::Type>, FStr_Passport_Weapon1> WeaponsinSlots_11_B42349384F5EF74DE78A7F870D89656A; // 0x0050 (size: 0x50)
    TMap<TEnumAsByte<Enum_Sides_RightLeft::Type>, FStr_Passport_Weapon1> WeaponinHands_23_B3FE643741AF91A6DFE51888205C0F05; // 0x00A0 (size: 0x50)

}; // Size: 0xF0

#endif
