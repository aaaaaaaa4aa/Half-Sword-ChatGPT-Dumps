#ifndef UE4SS_SDK_UI_Mercenaries_Expired_HPP
#define UE4SS_SDK_UI_Mercenaries_Expired_HPP

class UUI_Mercenaries_Expired_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UImage* Back;                                                               // 0x02E8 (size: 0x8)
    class UButton* Button;                                                            // 0x02F0 (size: 0x8)
    class UButton* Button_0;                                                          // 0x02F8 (size: 0x8)
    class UButton* Button_1;                                                          // 0x0300 (size: 0x8)
    class UImage* Image_0;                                                            // 0x0308 (size: 0x8)
    class UImage* Image_Banner_Low;                                                   // 0x0310 (size: 0x8)
    class UTextBlock* TextBlock;                                                      // 0x0318 (size: 0x8)
    class UTextBlock* TextBlock_0;                                                    // 0x0320 (size: 0x8)
    class UTextBlock* TextBlock_86;                                                   // 0x0328 (size: 0x8)
    class UGI_Settings_C* As GI Settings;                                             // 0x0330 (size: 0x8)
    double Price;                                                                     // 0x0338 (size: 0x8)

    FText GetText_0();
    FText Get_TextBlock_Text();
    FText GetText();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__UI_Mercenaries_Expired_Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_Mercenaries_Expired_Button_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_Mercenaries_Expired_Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_Mercenaries_Expired_Button_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_Mercenaries_Expired_Button_1_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_Mercenaries_Expired_Button_0_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_UI_Mercenaries_Expired(int32 EntryPoint);
}; // Size: 0x340

#endif
