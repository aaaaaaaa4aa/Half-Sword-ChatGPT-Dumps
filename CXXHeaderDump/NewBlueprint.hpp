#ifndef UE4SS_SDK_NewBlueprint_HPP
#define UE4SS_SDK_NewBlueprint_HPP

class ANewBlueprint_C : public ACharacter
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0670 (size: 0x8)
    class UGI_Settings_C* As GI Settings;                                             // 0x0678 (size: 0x8)

    void InpActEvt_Pause_K2Node_InputActionEvent_0(FKey Key);
    void InpActEvt_P_K2Node_InputKeyEvent_0(FKey Key);
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_NewBlueprint(int32 EntryPoint);
}; // Size: 0x680

#endif
