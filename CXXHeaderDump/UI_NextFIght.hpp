#ifndef UE4SS_SDK_UI_NextFIght_HPP
#define UE4SS_SDK_UI_NextFIght_HPP

class UUI_NextFIght_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UImage* Bck;                                                                // 0x02E8 (size: 0x8)
    class UButton* Button;                                                            // 0x02F0 (size: 0x8)
    class UButton* Button_0;                                                          // 0x02F8 (size: 0x8)
    class UButton* Button_1;                                                          // 0x0300 (size: 0x8)
    class UButton* Button_2;                                                          // 0x0308 (size: 0x8)
    class UCanvasPanel* CanvasPanel_28;                                               // 0x0310 (size: 0x8)
    class UTextBlock* TextBlock;                                                      // 0x0318 (size: 0x8)
    class UTextBlock* TextBlock_0;                                                    // 0x0320 (size: 0x8)
    class UGI_Settings_C* As GI Settings;                                             // 0x0328 (size: 0x8)
    class ABP_HalfSwordGameMode_C* As BP Half Sword Game Mode;                        // 0x0330 (size: 0x8)
    class UDA_Equipment_Loadout_Master_C* DA Baron Equipment;                         // 0x0338 (size: 0x8)
    bool Canvas Panel Visible;                                                        // 0x0340 (size: 0x1)
    TEnumAsByte<Enum_Maps::Type> NewVar;                                              // 0x0341 (size: 0x1)

    ESlateVisibility GetVisibility_4();
    ESlateVisibility GetVisibility_3();
    ESlateVisibility GetVisibility_2();
    ESlateVisibility GetVisibility_1();
    ESlateVisibility GetVisibility_0();
    FText GetText_0();
    FText GetText();
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void BndEvt__UI_NextFIght_Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_NextFIght_Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_NextFIght_Button_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_NextFIght_Button_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void BndEvt__UI_NextFIght_Button_1_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_NextFIght_Button_1_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_NextFIght_Button_2_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_NextFIght_Button_2_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_UI_NextFIght(int32 EntryPoint);
}; // Size: 0x342

#endif
