#ifndef UE4SS_SDK_SG_PlayerProgression_HPP
#define UE4SS_SDK_SG_PlayerProgression_HPP

class USG_PlayerProgression_C : public USaveGame
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0028 (size: 0x8)
    FPlayerCharacter_Settings_Struct PlayerCharacter_Settings;                        // 0x0030 (size: 0x10)
    int32 Rank;                                                                       // 0x0040 (size: 0x4)
    int32 Team;                                                                       // 0x0044 (size: 0x4)
    FGauntlet_Progress_Struct Equipment Progression Struct;                           // 0x0048 (size: 0x4DA0)
    FStr_Loadout_Equipment Saved Equipment;                                           // 0x4DE8 (size: 0x8A0)
    bool Faction Chosen;                                                              // 0x5688 (size: 0x1)
    bool Baron Rank Opened;                                                           // 0x5689 (size: 0x1)
    bool Level Up Available;                                                          // 0x568A (size: 0x1)
    bool Free Armor;                                                                  // 0x568B (size: 0x1)
    int32 Available Rank;                                                             // 0x568C (size: 0x4)
    int32 Current Points;                                                             // 0x5690 (size: 0x4)
    bool Body Chosen;                                                                 // 0x5694 (size: 0x1)
    int32 Ranks Unlocked;                                                             // 0x5698 (size: 0x4)

    void Save Rank Equipment Event(FStr_Loadout_Equipment Saved Equipment Struct);
    void ExecuteUbergraph_SG_PlayerProgression(int32 EntryPoint);
}; // Size: 0x569C

#endif
