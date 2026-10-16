#ifndef UE4SS_SDK_BP_Armor_Body_Brestplate_A_T2_HPP
#define UE4SS_SDK_BP_Armor_Body_Brestplate_A_T2_HPP

class ABP_Armor_Body_Brestplate_A_T2_C : public ABP_Armor_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0918 (size: 0x8)

    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_Armor_Body_Brestplate_A_T2(int32 EntryPoint);
}; // Size: 0x920

#endif
