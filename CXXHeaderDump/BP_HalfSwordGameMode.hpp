#ifndef UE4SS_SDK_BP_HalfSwordGameMode_HPP
#define UE4SS_SDK_BP_HalfSwordGameMode_HPP

class ABP_HalfSwordGameMode_C : public AGameModeBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0328 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0330 (size: 0x8)
    TMap<int32, bool> ProxyModelLocation;                                             // 0x0338 (size: 0x50)
    class UGI_Settings_C* GI Settings;                                                // 0x0388 (size: 0x8)
    int32 Enemy Count;                                                                // 0x0390 (size: 0x4)
    bool Match Won;                                                                   // 0x0394 (size: 0x1)
    bool Player DED;                                                                  // 0x0395 (size: 0x1)
    double Map Size X;                                                                // 0x0398 (size: 0x8)
    double Map Size Y;                                                                // 0x03A0 (size: 0x8)
    bool All Enemies Dead;                                                            // 0x03A8 (size: 0x1)
    class UAudioComponent* Background Music;                                          // 0x03B0 (size: 0x8)
    TEnumAsByte<Enum_PlayCards::Type> Current PlayCard (Outdated);                    // 0x03B8 (size: 0x1)
    class USG_Settings_C* As SG Settings;                                             // 0x03C0 (size: 0x8)
    class USG_PlayerProgression_C* As SG Gauntlet Player Progress;                    // 0x03C8 (size: 0x8)
    int32 Player Rank;                                                                // 0x03D0 (size: 0x4)
    int32 Player Team;                                                                // 0x03D4 (size: 0x4)
    int32 Current Points;                                                             // 0x03D8 (size: 0x4)
    int32 Due Points;                                                                 // 0x03DC (size: 0x4)
    int32 Available Rank;                                                             // 0x03E0 (size: 0x4)
    int32 Ranks Unlocked;                                                             // 0x03E4 (size: 0x4)
    bool Gauntlet Mode Enabled;                                                       // 0x03E8 (size: 0x1)
    bool Baron Rank Opened;                                                           // 0x03E9 (size: 0x1)
    bool Level Up Available;                                                          // 0x03EA (size: 0x1)
    bool Free Armor;                                                                  // 0x03EB (size: 0x1)
    bool Faction Chosen;                                                              // 0x03EC (size: 0x1)
    bool Body Chosen;                                                                 // 0x03ED (size: 0x1)
    bool Boss Fight In Progress;                                                      // 0x03EE (size: 0x1)
    class UAudioComponent* Boss Music;                                                // 0x03F0 (size: 0x8)
    bool BARON Spawned;                                                               // 0x03F8 (size: 0x1)
    bool Wait for music change;                                                       // 0x03F9 (size: 0x1)
    class USoundBase* Music Playing;                                                  // 0x0400 (size: 0x8)
    bool Local Multiplayer;                                                           // 0x0408 (size: 0x1)
    int32 Current Rounds Amount;                                                      // 0x040C (size: 0x4)
    int32 Rounds Won;                                                                 // 0x0410 (size: 0x4)
    int32 Current Reward;                                                             // 0x0414 (size: 0x4)

    void Multiplayer Match Win Check();
    void Add Rank Points();
    void DED();
    void Minus Enemy();
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void OnAudioFinished_Event();
    void Clear Proxy Model Locations();
    void ReceiveTick(float DeltaSeconds);
    void Event Spawn DED UI();
    void ExecuteUbergraph_BP_HalfSwordGameMode(int32 EntryPoint);
}; // Size: 0x418

#endif
