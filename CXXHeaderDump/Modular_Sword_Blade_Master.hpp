#ifndef UE4SS_SDK_Modular_Sword_Blade_Master_HPP
#define UE4SS_SDK_Modular_Sword_Blade_Master_HPP

class AModular_Sword_Blade_Master_C : public AModular_Weapon_Module_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0420 (size: 0x8)
    int32 Length SB;                                                                  // 0x0428 (size: 0x4)
    int32 Mass Rate SB;                                                               // 0x042C (size: 0x4)
    int32 Point SB;                                                                   // 0x0430 (size: 0x4)
    int32 Edge SB;                                                                    // 0x0434 (size: 0x4)
    int32 Dism Sharp;                                                                 // 0x0438 (size: 0x4)
    int32 Xx100;                                                                      // 0x043C (size: 0x4)
    int32 Yx100;                                                                      // 0x0440 (size: 0x4)

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_Modular_Sword_Blade_Master(int32 EntryPoint);
}; // Size: 0x444

#endif
