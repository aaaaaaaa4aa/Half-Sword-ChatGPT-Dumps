#ifndef UE4SS_SDK_BP_SpawnerPoint_Willies_HPP
#define UE4SS_SDK_BP_SpawnerPoint_Willies_HPP

class ABP_SpawnerPoint_Willies_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x0298 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x02A0 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02A8 (size: 0x8)
    bool NewVar;                                                                      // 0x02B0 (size: 0x1)
    FVector Latest Spawn Location;                                                    // 0x02B8 (size: 0x18)
    int32 Spawned Amount;                                                             // 0x02D0 (size: 0x4)
    double Spawn Sphere Radius;                                                       // 0x02D8 (size: 0x8)
    TArray<FVector> Spawn Locations;                                                  // 0x02E0 (size: 0x10)
    TEnumAsByte<Enum_SpwanerFaceRotation::Type> Spawn Face Rotation;                  // 0x02F0 (size: 0x1)
    int32 Spawn Team Int;                                                             // 0x02F4 (size: 0x4)
    bool Spawn Player;                                                                // 0x02F8 (size: 0x1)
    TArray<FVector> Spawn Locations Pre Purge;                                        // 0x0300 (size: 0x10)
    class UGI_Settings_C* As GI Settings;                                             // 0x0310 (size: 0x8)
    class ABP_HalfSwordGameMode_C* As BP Half Sword Game Mode;                        // 0x0318 (size: 0x8)
    bool Start in Pants;                                                              // 0x0320 (size: 0x1)
    class ABP_LevelManager_C* Level Manager;                                          // 0x0328 (size: 0x8)
    FStr_Passport_Character1 Spawned Character;                                       // 0x0330 (size: 0x140)
    TMap<TEnumAsByte<Enum_CombatEvent_Modes::Type>, bool> Works in these Combat Modes; // 0x0470 (size: 0x50)
    TMap<TEnumAsByte<Enum_GameMode::Type>, bool> Works in these Game Modes;           // 0x04C0 (size: 0x50)
    TMap<TEnumAsByte<Enum_PlayMode::Type>, bool> Works in these Play Modes;           // 0x0510 (size: 0x50)
    int32 Currently Spawned Mercenary ID;                                             // 0x0560 (size: 0x4)
    bool Spawn Mercenary;                                                             // 0x0564 (size: 0x1)
    int32 Index;                                                                      // 0x0568 (size: 0x4)
    int32 NewVar_0;                                                                   // 0x056C (size: 0x4)
    FStr_Passport_Character1 Spawned mercenary;                                       // 0x0570 (size: 0x140)
    int32 Random Sparring Partner ID;                                                 // 0x06B0 (size: 0x4)
    int32 Required Combatants Amount;                                                 // 0x06B4 (size: 0x4)
    bool Blossfechten Gear;                                                           // 0x06B8 (size: 0x1)

    void Purge Locations();
    void UserConstructionScript();
    void Spawn Willies(int32 NPC Amount);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_SpawnerPoint_Willies(int32 EntryPoint);
}; // Size: 0x6B9

#endif
