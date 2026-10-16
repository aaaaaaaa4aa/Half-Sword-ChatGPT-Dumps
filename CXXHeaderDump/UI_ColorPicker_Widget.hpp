#ifndef UE4SS_SDK_UI_ColorPicker_Widget_HPP
#define UE4SS_SDK_UI_ColorPicker_Widget_HPP

class UUI_ColorPicker_Widget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class USynth2DSlider* Synth2DSlider_201;                                          // 0x02E8 (size: 0x8)
    FUI_ColorPicker_Widget_COnColorChanged OnColorChanged;                            // 0x02F0 (size: 0x10)
    void OnColorChanged(FLinearColor Color);
    FLinearColor Picked Color;                                                        // 0x0300 (size: 0x10)
    FVector2D Current Color Picker Value;                                             // 0x0310 (size: 0x10)

    void BndEvt__UI_ColorPicker_Widget_Synth2DSlider_201_K2Node_ComponentBoundEvent_2_OnMouseCaptureEndEventSynth2D__DelegateSignature();
    void BndEvt__UI_ColorPicker_Widget_Synth2DSlider_201_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEventSynth2D__DelegateSignature(float Value);
    void BndEvt__UI_ColorPicker_Widget_Synth2DSlider_201_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEventSynth2D__DelegateSignature(float Value);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void PreConstruct(bool IsDesignTime);
    void Set New Value Event(const FVector2D& New Value);
    void ExecuteUbergraph_UI_ColorPicker_Widget(int32 EntryPoint);
    void OnColorChanged__DelegateSignature(FLinearColor Color);
}; // Size: 0x320

#endif
