#ifndef UE4SS_SDK_Str_Passport_Weapon1_HPP
#define UE4SS_SDK_Str_Passport_Weapon1_HPP

struct FStr_Passport_Weapon1
{
    TSubclassOf<class AModularWeaponBP_C> WeaponClass_54_B478ECF7499977809745A3973AD678EC; // 0x0000 (size: 0x8)
    int32 ID_70_C02CF656483647A1933EEA96314B78A6;                                     // 0x0008 (size: 0x4)
    FName Name_57_3729B51148E846FE8DD336B9419BCEE1;                                   // 0x000C (size: 0x8)
    TSubclassOf<class AModular_Weapon_Module_C> HeadSubModule1_7_ABBFD017411F42A4950B1C9F2360A30D; // 0x0018 (size: 0x8)
    TSubclassOf<class AModular_Weapon_Module_C> HeadSubModule2_9_90AAA8304C7794E1BF814C9354A1A7E9; // 0x0020 (size: 0x8)
    TSubclassOf<class AModular_Weapon_Module_C> HeadModule_11_62DF53134688807E1DA7F4A20E9F7139; // 0x0028 (size: 0x8)
    TSubclassOf<class AModular_Weapon_Module_C> GuardModule_13_6DD2B06245505E53B529D090333012F0; // 0x0030 (size: 0x8)
    TSubclassOf<class AModular_Weapon_Module_C> PommelModule_15_561B01324BFCD4360DAE9A95299BB9D6; // 0x0038 (size: 0x8)
    TSubclassOf<class AModular_Weapon_Grip_C> GripModule_18_F4DF51EB4E742195B8C6BAB17E4C5DB4; // 0x0040 (size: 0x8)
    FVector HeadSize_21_2D425E61473B8F64FBAB51B223459D57;                             // 0x0048 (size: 0x18)
    FVector GuardSize_23_5A1AA0E04708E86FEFF61E974DDA8704;                            // 0x0060 (size: 0x18)
    FVector GripSize_25_AC1660814C4C25C521AAA8830FE8ECCF;                             // 0x0078 (size: 0x18)
    FVector PommelSize_27_660CC00C49C26D503E16B2BC58CE115E;                           // 0x0090 (size: 0x18)
    double CustomMassScaleHead_30_B95872A242AD944E2CE4D493F718F9D7;                   // 0x00A8 (size: 0x8)
    double CustomMassScaleGuard_51_3A9024E74306B7BB5D186087011D1927;                  // 0x00B0 (size: 0x8)
    double CustomMassScaleGrip_32_0EAADEE0419C05C6DB38F0AE134A9B10;                   // 0x00B8 (size: 0x8)
    double CustomMassScalePommel_34_0AB28D814BDEF17D408D0DAA3A453173;                 // 0x00C0 (size: 0x8)
    TEnumAsByte<Enum_MaterialLayer::Type> MaterialMetalSteel_37_AB7A28C94B176CF81A6C8BA34AC57C36; // 0x00C8 (size: 0x1)
    TEnumAsByte<Enum_MaterialLayer::Type> MaterialMetalColored_39_DC2EAC244758A8D82855CC940784A1D2; // 0x00C9 (size: 0x1)
    TEnumAsByte<Enum_MaterialLayer::Type> MaterialWeood_41_E0B3C8DB48943B878AEFA3AB01E7B99A; // 0x00CA (size: 0x1)
    TEnumAsByte<Enum_MaterialLayer::Type> MaterialLeather_43_41D1114148FDB4FE4DACC8A2F4CA9FEB; // 0x00CB (size: 0x1)
    FLinearColor ColorWood_46_F3AE05AD4495EBCD1D354C8025D7C743;                       // 0x00CC (size: 0x10)
    FLinearColor ColorLeather_48_DC45F07E4C0C3280278212A7158EE638;                    // 0x00DC (size: 0x10)
    double Price_60_83FE5A624EA188485BBE4E9C8606AEE5;                                 // 0x00F0 (size: 0x8)
    TEnumAsByte<Enum_Ranks::Type> Tier_67_05026E6F43B7300AA8BACC9D9F9AB461;           // 0x00F8 (size: 0x1)

}; // Size: 0xF9

#endif
