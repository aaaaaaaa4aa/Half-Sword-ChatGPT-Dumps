#ifndef UE4SS_SDK_Modular_Sword_Pommel_Master_HPP
#define UE4SS_SDK_Modular_Sword_Pommel_Master_HPP

class AModular_Sword_Pommel_Master_C : public AModular_Weapon_Module_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0420 (size: 0x8)
    class UStaticMesh* New Mesh;                                                      // 0x0428 (size: 0x8)
    double Mass;                                                                      // 0x0430 (size: 0x8)
    int32 Materian Int Min;                                                           // 0x0438 (size: 0x4)
    int32 Materian Int Max;                                                           // 0x043C (size: 0x4)
    double Squash Scale (Temp);                                                       // 0x0440 (size: 0x8)
    double Overall Scale (Temp);                                                      // 0x0448 (size: 0x8)

    void UserConstructionScript();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_Modular_Sword_Pommel_Master(int32 EntryPoint);
}; // Size: 0x450

#endif
