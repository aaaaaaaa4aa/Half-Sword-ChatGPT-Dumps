#ifndef UE4SS_SDK_CreditWid_HPP
#define UE4SS_SDK_CreditWid_HPP

class UCreditWid_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UWidgetAnimation* HoverBack;                                                // 0x02E8 (size: 0x8)
    class UButton* BackButton;                                                        // 0x02F0 (size: 0x8)
    class UButton* Button;                                                            // 0x02F8 (size: 0x8)
    class UButton* Button_0;                                                          // 0x0300 (size: 0x8)
    class UImage* Image_2;                                                            // 0x0308 (size: 0x8)
    class UImage* Image_5;                                                            // 0x0310 (size: 0x8)
    class UImage* NakedCover;                                                         // 0x0318 (size: 0x8)
    class UTextBlock* TextBlock;                                                      // 0x0320 (size: 0x8)
    class UTextBlock* TextBlock_0;                                                    // 0x0328 (size: 0x8)
    TSubclassOf<class UUserWidget> LastOpenedWidget;                                  // 0x0330 (size: 0x8)
    int32 Page Int;                                                                   // 0x0338 (size: 0x4)

    ESlateVisibility GetVisibility_1();
    ESlateVisibility GetVisibility_0();
    FSlateBrush GetBrush();
    void SetLastOpenedWidget(TSubclassOf<class UUserWidget> UW);
    void GetLastOpenedWidget();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__CreditWid_BackButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__CreditWid_BackButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__CreditWid_BackButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__CreditWid_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__CreditWid_Button_0_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__CreditWid_Button_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__CreditWid_Button_0_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_CreditWid(int32 EntryPoint);
}; // Size: 0x33C

#endif
