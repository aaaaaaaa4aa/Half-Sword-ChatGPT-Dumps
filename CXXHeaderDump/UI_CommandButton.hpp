#ifndef UE4SS_SDK_UI_CommandButton_HPP
#define UE4SS_SDK_UI_CommandButton_HPP

class UUI_CommandButton_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UButton* Button;                                                            // 0x02E8 (size: 0x8)
    class UImage* ButtonIcon;                                                         // 0x02F0 (size: 0x8)
    class UTextBlock* ButtonTitle;                                                    // 0x02F8 (size: 0x8)
    class UOverlay* Overlay_80;                                                       // 0x0300 (size: 0x8)
    class USpacer* Spacer_219;                                                        // 0x0308 (size: 0x8)
    FUI_CommandButton_COnPressed OnPressed;                                           // 0x0310 (size: 0x10)
    void OnPressed();
    class UTexture2D* Icon;                                                           // 0x0320 (size: 0x8)
    FText Text;                                                                       // 0x0328 (size: 0x10)
    bool bIsClickable;                                                                // 0x0338 (size: 0x1)
    FDataTableRowHandle IconDT;                                                       // 0x0340 (size: 0x10)
    int32 LastIndex;                                                                  // 0x0350 (size: 0x4)
    bool bUseSpacer;                                                                  // 0x0354 (size: 0x1)

    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnMouseLeave(const FPointerEvent& MouseEvent);
    void UpdateIconByIndex(int32 Index);
    void UpdateIconDT(FDataTableRowHandle IconDT);
    void BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_UI_CommandButton(int32 EntryPoint);
    void OnPressed__DelegateSignature();
}; // Size: 0x355

#endif
