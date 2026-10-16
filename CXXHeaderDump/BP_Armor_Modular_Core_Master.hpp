#ifndef UE4SS_SDK_BP_Armor_Modular_Core_Master_HPP
#define UE4SS_SDK_BP_Armor_Modular_Core_Master_HPP

class ABP_Armor_Modular_Core_Master_C : public ABP_Armor_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0918 (size: 0x8)
    TArray<class TSubclassOf<ABP_Armor_Modular_Module_Master_C>> Available Modules 1; // 0x0920 (size: 0x10)
    TArray<class TSubclassOf<ABP_Armor_Modular_Module_Master_C>> Available Modules 2; // 0x0930 (size: 0x10)
    TArray<class TSubclassOf<ABP_Armor_Modular_Module_Master_C>> Available Modules 3; // 0x0940 (size: 0x10)
    TArray<class USkeletalMesh*> Skel Meshes To Merge;                                // 0x0950 (size: 0x10)
    int32 Installed Module 1 Int;                                                     // 0x0960 (size: 0x4)
    int32 Installed Module 2 Int;                                                     // 0x0964 (size: 0x4)
    int32 Installed Module 3 Int;                                                     // 0x0968 (size: 0x4)
    bool Core Removable;                                                              // 0x096C (size: 0x1)
    bool Core Removed;                                                                // 0x096D (size: 0x1)
    TArray<class UStaticMesh*> Collision Meshes Module 1;                             // 0x0970 (size: 0x10)
    TArray<class UStaticMesh*> Collision Meshes Module 2;                             // 0x0980 (size: 0x10)
    TArray<class UStaticMesh*> Collision Meshes Module 3;                             // 0x0990 (size: 0x10)
    FStr_ArmorProtection Protection Core;                                             // 0x09A0 (size: 0x20)
    FStr_ArmorProtection Protection Module 1;                                         // 0x09C0 (size: 0x20)
    FStr_ArmorProtection Protection Module 2;                                         // 0x09E0 (size: 0x20)
    FStr_ArmorProtection Protection Module 3;                                         // 0x0A00 (size: 0x20)
    bool Requires Module Hierarchy;                                                   // 0x0A20 (size: 0x1)
    FName Attachment 1 Name;                                                          // 0x0A24 (size: 0x8)
    FName Attachment 2 Name;                                                          // 0x0A2C (size: 0x8)
    FName Attachment 3 Name;                                                          // 0x0A34 (size: 0x8)
    FName Core Name;                                                                  // 0x0A3C (size: 0x8)
    TEnumAsByte<Enum_Ranks::Type> Tier;                                               // 0x0A44 (size: 0x1)
    bool Block Body Muscles;                                                          // 0x0A45 (size: 0x1)
    bool Block Upper Leg Muscles;                                                     // 0x0A46 (size: 0x1)
    bool Block Lower Leg Muscles;                                                     // 0x0A47 (size: 0x1)
    bool Block Shoulder Muscles;                                                      // 0x0A48 (size: 0x1)
    bool Block Arm Muscles;                                                           // 0x0A49 (size: 0x1)
    TEnumAsByte<Steel_Type::Type> Steel Type Module;                                  // 0x0A4A (size: 0x1)
    FVector Offset Camera Position (Helmet);                                          // 0x0A50 (size: 0x18)

    void Set Up Module();
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_Armor_Modular_Core_Master(int32 EntryPoint);
}; // Size: 0xA68

#endif
