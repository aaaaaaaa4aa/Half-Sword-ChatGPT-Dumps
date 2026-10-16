#ifndef UE4SS_SDK_BP_Container_Master_HPP
#define UE4SS_SDK_BP_Container_Master_HPP

class ABP_Container_Master_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class USceneComponent* Treasure Spawn Point;                                      // 0x0298 (size: 0x8)
    class USceneComponent* Weapon Spawn Point;                                        // 0x02A0 (size: 0x8)
    class USceneComponent* Armor Spawn Point;                                         // 0x02A8 (size: 0x8)
    class USceneComponent* Random Spawn;                                              // 0x02B0 (size: 0x8)
    class USceneComponent* Random Spawn And Location;                                 // 0x02B8 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02C0 (size: 0x8)
    TArray<class AActor*> Weapon Actors Array;                                        // 0x02C8 (size: 0x10)
    int32 Level;                                                                      // 0x02D8 (size: 0x4)
    TArray<class TSubclassOf<AActor>> Armor L Array_0;                                // 0x02E0 (size: 0x10)
    TArray<class TSubclassOf<AActor>> Armor L Array_1;                                // 0x02F0 (size: 0x10)
    TArray<class TSubclassOf<AActor>> Armor L Array_2;                                // 0x0300 (size: 0x10)
    TArray<class TSubclassOf<AActor>> Armor L Array_3;                                // 0x0310 (size: 0x10)
    TArray<class TSubclassOf<AActor>> Armor L Array_4;                                // 0x0320 (size: 0x10)
    TArray<class TSubclassOf<AActor>> Armor L Array_5;                                // 0x0330 (size: 0x10)
    TArray<class TSubclassOf<AActor>> Armor L Array_6;                                // 0x0340 (size: 0x10)
    TArray<class TSubclassOf<AActor>> Armor L Array_7;                                // 0x0350 (size: 0x10)
    TArray<class TSubclassOf<AActor>> Armor L Array_8;                                // 0x0360 (size: 0x10)
    TArray<class TSubclassOf<AActor>> Armor S Array_0;                                // 0x0370 (size: 0x10)
    TArray<class TSubclassOf<AActor>> Armor S Array_1;                                // 0x0380 (size: 0x10)
    TArray<class TSubclassOf<AActor>> Armor S Array_2;                                // 0x0390 (size: 0x10)
    TArray<class TSubclassOf<AActor>> Armor S Array_3;                                // 0x03A0 (size: 0x10)
    TArray<class TSubclassOf<AActor>> Armor S Array_4;                                // 0x03B0 (size: 0x10)
    TArray<class TSubclassOf<AActor>> Armor S Array_5;                                // 0x03C0 (size: 0x10)
    TArray<class TSubclassOf<AActor>> Armor S Array_6;                                // 0x03D0 (size: 0x10)
    TArray<class TSubclassOf<AActor>> Armor S Array_7;                                // 0x03E0 (size: 0x10)
    TArray<class TSubclassOf<AActor>> Armor S Array_8;                                // 0x03F0 (size: 0x10)
    TArray<class TSubclassOf<AActor>> Weapon S Array_0;                               // 0x0400 (size: 0x10)
    TArray<class TSubclassOf<AActor>> Weapon S Array_1;                               // 0x0410 (size: 0x10)
    TArray<class TSubclassOf<AActor>> Weapon S Array_2;                               // 0x0420 (size: 0x10)
    TArray<class TSubclassOf<AActor>> Weapon S Array_3;                               // 0x0430 (size: 0x10)
    TArray<class TSubclassOf<AActor>> Weapon S Array_4;                               // 0x0440 (size: 0x10)
    TArray<class TSubclassOf<AActor>> Weapon S Array_5;                               // 0x0450 (size: 0x10)
    TArray<class TSubclassOf<AActor>> Weapon S Array_6;                               // 0x0460 (size: 0x10)
    TArray<class TSubclassOf<AActor>> Weapon S Array_7;                               // 0x0470 (size: 0x10)
    TArray<class TSubclassOf<AActor>> Weapon S Array_8;                               // 0x0480 (size: 0x10)
    TArray<class TSubclassOf<AActor>> Weapon L Array_0;                               // 0x0490 (size: 0x10)
    TArray<class TSubclassOf<AActor>> Weapon L Array_1;                               // 0x04A0 (size: 0x10)
    TArray<class TSubclassOf<AActor>> Weapon L Array_2;                               // 0x04B0 (size: 0x10)
    TArray<class TSubclassOf<AActor>> Weapon L Array_3;                               // 0x04C0 (size: 0x10)
    TArray<class TSubclassOf<AActor>> Weapon L Array_4;                               // 0x04D0 (size: 0x10)
    TArray<class TSubclassOf<AActor>> Weapon L Array_5;                               // 0x04E0 (size: 0x10)
    TArray<class TSubclassOf<AActor>> Weapon L Array_6;                               // 0x04F0 (size: 0x10)
    TArray<class TSubclassOf<AActor>> Weapon L Array_7;                               // 0x0500 (size: 0x10)
    TArray<class TSubclassOf<AActor>> Weapon L Array_8;                               // 0x0510 (size: 0x10)
    int32 Element 1 Collision Bug Int;                                                // 0x0520 (size: 0x4)
    int32 Element 2 Collision Bug Int;                                                // 0x0524 (size: 0x4)
    int32 Element 3 Collision Bug Int;                                                // 0x0528 (size: 0x4)
    int32 Element 4 Collision Bug Int;                                                // 0x052C (size: 0x4)
    int32 Element 5 Collision Bug Int_;                                               // 0x0530 (size: 0x4)
    TArray<class UStaticMeshComponent*> Static Mesh Components;                       // 0x0538 (size: 0x10)
    int32 Collision Bug Int;                                                          // 0x0548 (size: 0x4)
    TEnumAsByte<Enum_Ranks::Type> Tier;                                               // 0x054C (size: 0x1)
    FStr_Passport_Armor1 Armor Passport;                                              // 0x0550 (size: 0xD8)
    FStr_Passport_Armor1 Armor Passport (DELETE);                                     // 0x0628 (size: 0xD8)
    FStr_Passport_Weapon1 Weapon Passport;                                            // 0x0700 (size: 0x100)
    FStr_Passport_Weapon1 Weapon Passpoer (DELETE);                                   // 0x0800 (size: 0x100)
    bool Spawn Weapon L;                                                              // 0x0900 (size: 0x1)
    bool Spawn Armor L;                                                               // 0x0901 (size: 0x1)
    FStr_Passport_Weapon1 Treasure Passport;                                          // 0x0908 (size: 0x100)
    double Accumulated Noise;                                                         // 0x0A08 (size: 0x8)

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void Collision Bug Check Event(class UPrimitiveComponent* Target);
    void ReceiveTick(float DeltaSeconds);
    void Event Spawn Sound Detector(double Sound Volume, class USceneComponent* Last Hit Part);
    void ExecuteUbergraph_BP_Container_Master(int32 EntryPoint);
}; // Size: 0xA10

#endif
