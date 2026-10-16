#ifndef UE4SS_SDK_Str_Passport_CombatEvent1_HPP
#define UE4SS_SDK_Str_Passport_CombatEvent1_HPP

struct FStr_Passport_CombatEvent1
{
    FText Name_33_80AE82094EAE943B065BE3B5C7F1C41B;                                   // 0x0000 (size: 0x10)
    int32 ID_41_28B71F884E3E0E8E75C22DBB12DB809E;                                     // 0x0010 (size: 0x4)
    class UTexture2D* Thumbnail_19_195759B240ED112A1BABB0A6408CC99C;                  // 0x0018 (size: 0x8)
    int32 BetAmount_20_87517572431AF70989131482829E07E6;                              // 0x0020 (size: 0x4)
    int32 RewardAmount_21_39CBEA0549CBC81CD356EFB5BC1FCC24;                           // 0x0024 (size: 0x4)
    int32 EquipmentBudget_26_4FC29A0544CA0B009EAD408C59D5F8A6;                        // 0x0028 (size: 0x4)
    int32 CombatantsAmount_22_13BCA4574AA06ED5CE62EBA6B312008C;                       // 0x002C (size: 0x4)
    int32 RoundsAmount_23_0DC99BF14EE3D35571D2AAAE6C1503AD;                           // 0x0030 (size: 0x4)
    TEnumAsByte<Enum_CombatEvent_LoseConditions::Type> LoseCondition_24_E094C6EA4737C2FAB5012D9D3698B9EF; // 0x0034 (size: 0x1)
    TEnumAsByte<Enum_CombatEvent_Modes::Type> CombatMode_25_E0B1EE8946757C4CF058A2AC38196DC7; // 0x0035 (size: 0x1)
    FName LevelPath_34_BAD068394946BC2E8C65AA9092DF7B39;                              // 0x0038 (size: 0x8)
    TEnumAsByte<Enum_Ranks::Type> Tier_38_C21E98C34F256B9DCAA0628D037308BC;           // 0x0040 (size: 0x1)

}; // Size: 0x41

#endif
