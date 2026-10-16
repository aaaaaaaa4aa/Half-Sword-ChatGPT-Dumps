#ifndef UE4SS_SDK_UI_Selector_HPP
#define UE4SS_SDK_UI_Selector_HPP

class UUI_Selector_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UBorder* Border;                                                            // 0x02E8 (size: 0x8)
    class UButton* btn_left;                                                          // 0x02F0 (size: 0x8)
    class UButton* btn_right;                                                         // 0x02F8 (size: 0x8)
    class UHorizontalBox* HorizontalBox-ElementsContainer;                            // 0x0300 (size: 0x8)
    class UImage* img_left_btn;                                                       // 0x0308 (size: 0x8)
    class UImage* img_right_btn;                                                      // 0x0310 (size: 0x8)
    class USizeBox* SizeBox;                                                          // 0x0318 (size: 0x8)
    class USlider* Slider;                                                            // 0x0320 (size: 0x8)
    class UTextBlock* SliderName;                                                     // 0x0328 (size: 0x8)
    class USizeBox* SliderSizeBox;                                                    // 0x0330 (size: 0x8)
    class UTextBlock* SliderValue;                                                    // 0x0338 (size: 0x8)
    FText SliderTitle;                                                                // 0x0340 (size: 0x10)
    FText Unit;                                                                       // 0x0350 (size: 0x10)
    FText UnitPrefix;                                                                 // 0x0360 (size: 0x10)
    FText SliderDefaultValueTip;                                                      // 0x0370 (size: 0x10)
    bool bChangeTextColorWhenFocused;                                                 // 0x0380 (size: 0x1)
    FLinearColor FocusedSliderAndTextColor;                                           // 0x0384 (size: 0x10)
    FLinearColor UnfocusedSliderAndTextColor;                                         // 0x0394 (size: 0x10)
    FVector2D SliderSize;                                                             // 0x03A8 (size: 0x10)
    double DefaultValue;                                                              // 0x03B8 (size: 0x8)
    TArray<FText> Options;                                                            // 0x03C0 (size: 0x10)
    class UUI_PhotoMode_C* PhotoModeWidgetReference;                                  // 0x03D0 (size: 0x8)
    FMargin MarginSize;                                                               // 0x03D8 (size: 0x10)
    FLinearColor BackgroundColor;                                                     // 0x03E8 (size: 0x10)
    bool bShouldFocus;                                                                // 0x03F8 (size: 0x1)
    FUI_Selector_CResetDispatcher ResetDispatcher;                                    // 0x0400 (size: 0x10)
    void ResetDispatcher();
    FUI_Selector_COnOptionChanged OnOptionChanged;                                    // 0x0410 (size: 0x10)
    void OnOptionChanged(int32 OptionIndex, FText OptionText);

    void ClearOptions();
    void AddOptions(Name)(TArray<FName>& Options);
    void AddOptions(Text)(TArray<FText>& Options);
    void AddOptions(String)(TArray<FString>& Options);
    void SetDefaultOptionByIndex(int32 DefaultIndex);
    void SetDefaultOptionByName(const FText& ItemToFind, bool& bSuccess);
    void GetSelectedOption(int32& SelectedIndex, FText& SelectedOption);
    void RemoveOption(const FText& Item);
    void AddOption(const FText& NewOption);
    FEventReply OnMouseButtonDoubleClick(FGeometry InMyGeometry, const FPointerEvent& InMouseEvent);
    FEventReply OnMouseWheel(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    FSlateBrush getRightButtonSettings();
    FSlateBrush getLeftButtonSettings();
    void getFocusedOrUnfocusedColor(bool bChangeSliderColorWhenFocused, bool bChangeTextColorWhenFocused, class USlider* Slider, class UImage* imgLeftButton, class UImage* imgRightButton, class UWidget* SliderTitle, class UWidget* SliderValue, bool bSetMargin, FSlateBrush& LeftButtonColor, FSlateBrush& RightButtonColor);
    FText getTxtValue();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__btn_left_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__btn_right_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Slider_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void ResetSlider(bool bShouldFocus, bool bResetThisSlider);
    void SetSliderFocus();
    void ResetSliderFocus();
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void ChangeValue(double Value, bool bShouldFocus);
    void FocusWithMouseWheel();
    void OnMouseLeave(const FPointerEvent& MouseEvent);
    void Construct();
    void FocusThisWidget();
    void ExecuteUbergraph_UI_Selector(int32 EntryPoint);
    void OnOptionChanged__DelegateSignature(int32 OptionIndex, FText OptionText);
    void ResetDispatcher__DelegateSignature();
}; // Size: 0x420

#endif
