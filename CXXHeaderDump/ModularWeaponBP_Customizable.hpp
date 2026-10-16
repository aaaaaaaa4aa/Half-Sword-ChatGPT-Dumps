#ifndef UE4SS_SDK_ModularWeaponBP_Customizable_HPP
#define UE4SS_SDK_ModularWeaponBP_Customizable_HPP

class AModularWeaponBP_Customizable_C : public AModularWeaponBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0BF8 (size: 0x8)

    void Refresh Weapon();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_ModularWeaponBP_Customizable(int32 EntryPoint);
}; // Size: 0xC00

#endif
