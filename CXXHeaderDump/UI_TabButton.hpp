#ifndef UE4SS_SDK_UI_TabButton_HPP
#define UE4SS_SDK_UI_TabButton_HPP

class UUI_TabButton_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UButton* Button;                                                            // 0x02E8 (size: 0x8)
    int32 TabToOpen;                                                                  // 0x02F0 (size: 0x4)
    class UUI_PhotoMode_C* PhotoModeWidgetRef;                                        // 0x02F8 (size: 0x8)
    class UObject* TabIcon;                                                           // 0x0300 (size: 0x8)
    FVector2D ButtonSize;                                                             // 0x0308 (size: 0x10)
    FVector2D ButtonSizeWhenSelected;                                                 // 0x0318 (size: 0x10)
    FSlateColor SelectedTabColor;                                                     // 0x0328 (size: 0x14)
    FSlateColor UnselectedTabColor;                                                   // 0x033C (size: 0x14)

    void Initialize(class UUI_PhotoMode_C* PhotoModeWidgetRef);
    void SetSelectedTabStyle();
    void SetUnselectedTabStyle();
    void BndEvt__Button_99_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_UI_TabButton(int32 EntryPoint);
}; // Size: 0x350

#endif
