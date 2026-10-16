#ifndef UE4SS_SDK_BP_CombatEvent_Master_HPP
#define UE4SS_SDK_BP_CombatEvent_Master_HPP

class ABP_CombatEvent_Master_C : public AActor
{
    class USceneComponent* DefaultSceneRoot;                                          // 0x0290 (size: 0x8)
    FText Name ;                                                                      // 0x0298 (size: 0x10)
    FText Name Prefix;                                                                // 0x02A8 (size: 0x10)
    class UTexture2D* Thumbnail;                                                      // 0x02B8 (size: 0x8)
    TSoftObjectPtr<UWorld> Level;                                                     // 0x02C0 (size: 0x28)
    TMap<TEnumAsByte<Enum_CombatEvent_LoseConditions::Type>, bool> Available Lose Conditions; // 0x02E8 (size: 0x50)
    TMap<TEnumAsByte<Enum_CombatEvent_Modes::Type>, bool> Available Combat Modes;     // 0x0338 (size: 0x50)
    int32 NPC Equipment Budget Range;                                                 // 0x0388 (size: 0x4)
    int32 Combatants Amount;                                                          // 0x038C (size: 0x4)
    int32 Reward;                                                                     // 0x0390 (size: 0x4)
    int32 Amount of Rounds;                                                           // 0x0394 (size: 0x4)
    TEnumAsByte<Enum_CombatEvent_LoseConditions::Type> Lose Condition;                // 0x0398 (size: 0x1)
    TEnumAsByte<Enum_CombatEvent_Modes::Type> Combat Mode;                            // 0x0399 (size: 0x1)
    int32 NPC Equipment Budget (Final);                                               // 0x039C (size: 0x4)
    int32 Bet;                                                                        // 0x03A0 (size: 0x4)
    FStr_Passport_CombatEvent1 Passport;                                              // 0x03A8 (size: 0x48)
    TEnumAsByte<Enum_Ranks::Type> Tier;                                               // 0x03F0 (size: 0x1)
    TArray<TEnumAsByte<Enum_Ranks::Type>> Available Tiers;                            // 0x03F8 (size: 0x10)
    class UGI_Settings_C* As GI Settings;                                             // 0x0408 (size: 0x8)

    void UserConstructionScript();
}; // Size: 0x410

#endif
