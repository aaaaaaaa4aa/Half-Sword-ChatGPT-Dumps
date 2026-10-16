#ifndef UE4SS_SDK_BP_LevelManager_HPP
#define UE4SS_SDK_BP_LevelManager_HPP

class ABP_LevelManager_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0298 (size: 0x8)
    class UGI_Settings_C* As GI Settings;                                             // 0x02A0 (size: 0x8)
    bool Player Spawned;                                                              // 0x02A8 (size: 0x1)
    class ABP_HalfSwordGameMode_C* As BP Half Sword Game Mode;                        // 0x02B0 (size: 0x8)
    bool Purge Map;                                                                   // 0x02B8 (size: 0x1)
    double Level Load Delay;                                                          // 0x02C0 (size: 0x8)
    bool P2 Spawned;                                                                  // 0x02C8 (size: 0x1)
    int32 Amount of Characters to Spawn;                                              // 0x02CC (size: 0x4)

    void Spawn Combatants_Mock();
    void Spawn Combatants();
    void Check Availabe Mercenaries();
    void Clean Up and Spawn Actors();
    void Clean Up Map();
    void ReceiveBeginPlay();
    void Fade Out Event(double Delay);
    void Event Respawn Respawnable Objects With Delay();
    void ExecuteUbergraph_BP_LevelManager(int32 EntryPoint);
}; // Size: 0x2D0

#endif
