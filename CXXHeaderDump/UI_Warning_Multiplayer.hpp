#ifndef UE4SS_SDK_UI_Warning_Multiplayer_HPP
#define UE4SS_SDK_UI_Warning_Multiplayer_HPP

class UUI_Warning_Multiplayer_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UButton* Button_4;                                                          // 0x02E8 (size: 0x8)
    class UImage* Image_0;                                                            // 0x02F0 (size: 0x8)
    class UImage* Image_1;                                                            // 0x02F8 (size: 0x8)

    void BndEvt__UI_Warning_Multiplayer_Button_4_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_Warning_Multiplayer_Button_4_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_UI_Warning_Multiplayer(int32 EntryPoint);
}; // Size: 0x300

#endif
