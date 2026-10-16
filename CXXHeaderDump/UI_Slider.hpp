#ifndef UE4SS_SDK_UI_Slider_HPP
#define UE4SS_SDK_UI_Slider_HPP

class UUI_Slider_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UButton* btn_left;                                                          // 0x02E8 (size: 0x8)
    class UButton* btn_right;                                                         // 0x02F0 (size: 0x8)
    class UHorizontalBox* HorizontalBox-ElementsContainer;                            // 0x02F8 (size: 0x8)
    class UImage* img_left_btn;                                                       // 0x0300 (size: 0x8)
    class UImage* img_right_btn;                                                      // 0x0308 (size: 0x8)
    class USizeBox* Locked;                                                           // 0x0310 (size: 0x8)
    class UImage* LockImage;                                                          // 0x0318 (size: 0x8)
    class USlider* Slider;                                                            // 0x0320 (size: 0x8)
    class USizeBox* SliderBoxSize;                                                    // 0x0328 (size: 0x8)
    class UTextBlock* SliderName;                                                     // 0x0330 (size: 0x8)
    class UTextBlock* SliderValue;                                                    // 0x0338 (size: 0x8)
    FText SliderTitle;                                                                // 0x0340 (size: 0x10)
    FText Unit;                                                                       // 0x0350 (size: 0x10)
    FText UnitPrefix;                                                                 // 0x0360 (size: 0x10)
    FText SliderDefaultValueTip;                                                      // 0x0370 (size: 0x10)
    double DefaultValue;                                                              // 0x0380 (size: 0x8)
    double MinimumValue;                                                              // 0x0388 (size: 0x8)
    double MaximumValue;                                                              // 0x0390 (size: 0x8)
    double StepSize;                                                                  // 0x0398 (size: 0x8)
    FMargin MarginSize;                                                               // 0x03A0 (size: 0x10)
    double SliderSize;                                                                // 0x03B0 (size: 0x8)
    bool bInteger;                                                                    // 0x03B8 (size: 0x1)
    FLinearColor FocusedSliderHandleAndTextColor;                                     // 0x03BC (size: 0x10)
    FLinearColor UnfocusedSliderHandleAndTextColor;                                   // 0x03CC (size: 0x10)
    class UUI_PhotoMode_C* PhotoModeWidgetReference;                                  // 0x03E0 (size: 0x8)
    FUI_Slider_COnSliderValueChanged OnSliderValueChanged;                            // 0x03E8 (size: 0x10)
    void OnSliderValueChanged(double SliderValue, bool bReset);
    bool bShouldFocus;                                                                // 0x03F8 (size: 0x1)
    FLinearColor FocusedSliderBarColor;                                               // 0x03FC (size: 0x10)
    FLinearColor UnfocusedSliderBarColor;                                             // 0x040C (size: 0x10)
    bool bMapMinMax;                                                                  // 0x041C (size: 0x1)
    double MappedMin;                                                                 // 0x0420 (size: 0x8)
    double MappedMax;                                                                 // 0x0428 (size: 0x8)
    double MappedStepSize;                                                            // 0x0430 (size: 0x8)
    bool bUseGrouping;                                                                // 0x0438 (size: 0x1)
    int32 MinimumFractionalDigits;                                                    // 0x043C (size: 0x4)
    int32 MaximumFractionalDigits;                                                    // 0x0440 (size: 0x4)
    bool bChangeSliderColorWhenFocused;                                               // 0x0444 (size: 0x1)
    bool bChangeTextColorWhenFocused;                                                 // 0x0445 (size: 0x1)
    FTimerHandle StepSizeHandler;                                                     // 0x0448 (size: 0x8)
    bool bIncreaseStepSizeDynamicallyOnHold;                                          // 0x0450 (size: 0x1)

    FEventReply OnMouseButtonDoubleClick(FGeometry InMyGeometry, const FPointerEvent& InMouseEvent);
    FEventReply OnMouseWheel(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    ESlateVisibility TextValueVisibility();
    ESlateVisibility LockVisibility();
    FSlateBrush getRightButtonSettings();
    FSlateBrush getLeftButtonSettings();
    void getFocusedOrUnfocusedColor(bool bChangeSliderColorWhenFocused, bool bChangeTextColorWhenFocused, class USlider* Slider, class UImage* imgLeftButton, class UImage* imgRightButton, class UWidget* SliderTitle, class UWidget* SliderValue, bool bSetMargin, FSlateBrush& LeftButtonColor, FSlateBrush& RightButtonColor);
    FText getTxtValue();
    void PreConstruct(bool IsDesignTime);
    void Initialize(double DefaultValue);
    void BndEvt__btn_left_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__btn_right_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Slider_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void ResetSlider(bool bShouldFocus);
    void ChangeValue(double Value, bool bSetFocus, bool bCallDispatcherNotify);
    void EnableDisableWidget(bool bEnable);
    void SetSliderFocus();
    void ResetSliderFocus();
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnMouseLeave(const FPointerEvent& MouseEvent);
    void FocusWithMouseWheel();
    void ConstantStepSizeIncrease();
    void Construct();
    void FocusThisWidget();
    void ExecuteUbergraph_UI_Slider(int32 EntryPoint);
    void OnSliderValueChanged__DelegateSignature(double SliderValue, bool bReset);
}; // Size: 0x451

#endif
