#ifndef UE4SS_SDK_Modular_Weapon_Grip_HPP
#define UE4SS_SDK_Modular_Weapon_Grip_HPP

class AModular_Weapon_Grip_C : public AModular_Weapon_Part_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03F8 (size: 0x8)
    class USceneComponent* Grip R Hand Default Pos Reverse;                           // 0x0400 (size: 0x8)
    class USceneComponent* Grip L Hand Default Pos;                                   // 0x0408 (size: 0x8)
    class USceneComponent* Grip R Hand Default Pos;                                   // 0x0410 (size: 0x8)
    class USceneComponent* AltGripPosition_2;                                         // 0x0418 (size: 0x8)
    class USceneComponent* AltGripPosition_1;                                         // 0x0420 (size: 0x8)
    class USceneComponent* OffhandGrip;                                               // 0x0428 (size: 0x8)
    class USceneComponent* Socket_Head;                                               // 0x0430 (size: 0x8)
    class USceneComponent* Socket_Guard;                                              // 0x0438 (size: 0x8)
    class USceneComponent* Socket_Pommel;                                             // 0x0440 (size: 0x8)
    TSubclassOf<class AModular_Weapon_Module_C> Module_Head;                          // 0x0448 (size: 0x8)
    TSubclassOf<class AModular_Weapon_Module_C> Module_Guard;                         // 0x0450 (size: 0x8)
    TSubclassOf<class AModular_Weapon_Module_C> Module_Pommel;                        // 0x0458 (size: 0x8)
    TArray<class TSubclassOf<AModular_Weapon_Module_C>> Array Head;                   // 0x0460 (size: 0x10)
    TArray<class TSubclassOf<AModular_Weapon_Module_C>> Array Guard;                  // 0x0470 (size: 0x10)
    TArray<class TSubclassOf<AModular_Weapon_Module_C>> Array Pommel;                 // 0x0480 (size: 0x10)
    TEnumAsByte<GripType_Enum::Type> Grip R Hand Default;                             // 0x0490 (size: 0x1)
    TEnumAsByte<GripType_Enum::Type> Grip R Hand Alternative;                         // 0x0491 (size: 0x1)
    FVector Head Size Min;                                                            // 0x0498 (size: 0x18)
    FVector Head Size Max;                                                            // 0x04B0 (size: 0x18)
    FVector Guard Size Min;                                                           // 0x04C8 (size: 0x18)
    FVector Guard Size Max;                                                           // 0x04E0 (size: 0x18)
    FVector Grip Size Min;                                                            // 0x04F8 (size: 0x18)
    FVector Grip Size Max;                                                            // 0x0510 (size: 0x18)
    FVector Pommel Size Min;                                                          // 0x0528 (size: 0x18)
    FVector Pommel Size Max;                                                          // 0x0540 (size: 0x18)
    FVector Head Size;                                                                // 0x0558 (size: 0x18)
    FVector Guard Size;                                                               // 0x0570 (size: 0x18)
    FVector Grip Size;                                                                // 0x0588 (size: 0x18)
    FVector Pommel Size;                                                              // 0x05A0 (size: 0x18)
    double Blade Length Scale;                                                        // 0x05B8 (size: 0x8)
    double Overall Scale Min;                                                         // 0x05C0 (size: 0x8)
    double Overall Scale Max;                                                         // 0x05C8 (size: 0x8)
    double Overall Scale;                                                             // 0x05D0 (size: 0x8)
    TEnumAsByte<SheathType_Enum::Type> SheathSlot;                                    // 0x05D8 (size: 0x1)
    TEnumAsByte<Weapon_Icon_Enum::Type> Icon_0;                                       // 0x05D9 (size: 0x1)
    bool Instant Unsheath;                                                            // 0x05DA (size: 0x1)
    double Pick Up Priority;                                                          // 0x05E0 (size: 0x8)
    double Grip Rate;                                                                 // 0x05E8 (size: 0x8)
    TEnumAsByte<GripType_Enum::Type> Grip L Hand Default;                             // 0x05F0 (size: 0x1)
    TEnumAsByte<SwitchGrip_Type_Enum::Type> Alt Grip Switch Type;                     // 0x05F1 (size: 0x1)
    TEnumAsByte<Enum_ReverseGripType::Type> Reverse Grip Type;                        // 0x05F2 (size: 0x1)

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_Modular_Weapon_Grip(int32 EntryPoint);
}; // Size: 0x5F3

#endif
