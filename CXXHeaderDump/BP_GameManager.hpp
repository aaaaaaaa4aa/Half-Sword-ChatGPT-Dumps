#ifndef UE4SS_SDK_BP_GameManager_HPP
#define UE4SS_SDK_BP_GameManager_HPP

class ABP_GameManager_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0298 (size: 0x8)
    class UGI_Settings_C* As GI Settings;                                             // 0x02A0 (size: 0x8)
    class ABP_HalfSwordGameMode_C* As BP Half Sword Game Mode;                        // 0x02A8 (size: 0x8)
    bool Tourney Spawned Today;                                                       // 0x02B0 (size: 0x1)
    bool Nemesis Combat Event Spawned;                                                // 0x02B1 (size: 0x1)
    TArray<FStr_Passport_Character1> Nemesis Opponents to Purge;                      // 0x02B8 (size: 0x10)

    void Rearrange Combat Events();
    void Generate Random Combat Event(int32 Amount);
    void Generate Random Characters(int32 Amount of Characters to Spawn, double Equipment Budget, bool Champion, TEnumAsByte<Enum_Ranks::Type> Tier);
    void Create Pre-Made Weapon(const FStr_Passport_Weapon1& Str_Passport_Weapon, FStr_Passport_Weapon1& Weapon Passport);
    void Generate Random Equipment();
    void ReceiveBeginPlay();
    void Generate Combat Events();
    void ExecuteUbergraph_BP_GameManager(int32 EntryPoint);
}; // Size: 0x2C8

#endif
