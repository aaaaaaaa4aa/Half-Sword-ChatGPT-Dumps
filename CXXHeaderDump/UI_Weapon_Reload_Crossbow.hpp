#ifndef UE4SS_SDK_UI_Weapon_Reload_Crossbow_HPP
#define UE4SS_SDK_UI_Weapon_Reload_Crossbow_HPP

class UUI_Weapon_Reload_Crossbow_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UButton* Button_0;                                                          // 0x02E8 (size: 0x8)
    class UButton* Button_1;                                                          // 0x02F0 (size: 0x8)
    class UButton* Button_3;                                                          // 0x02F8 (size: 0x8)
    class UImage* Image_0;                                                            // 0x0300 (size: 0x8)
    class UImage* Image_1;                                                            // 0x0308 (size: 0x8)
    class UImage* Image_2;                                                            // 0x0310 (size: 0x8)
    class UImage* Image_3;                                                            // 0x0318 (size: 0x8)
    class USlider* Slider_0;                                                          // 0x0320 (size: 0x8)
    class ABP_Weapon_Ranged_Weapon_Crossbow_Light_C* My Crossbow;                     // 0x0328 (size: 0x8)
    bool String Clicked;                                                              // 0x0330 (size: 0x1)
    float Mouse Location Y Past;                                                      // 0x0334 (size: 0x4)
    double Mouse Y Velocity;                                                          // 0x0338 (size: 0x8)
    bool Bolt Button Disabled;                                                        // 0x0340 (size: 0x1)
    bool Time Elapsed;                                                                // 0x0341 (size: 0x1)
    bool Hold;                                                                        // 0x0342 (size: 0x1)
    class AWillie_BP_C* MyMaster;                                                     // 0x0348 (size: 0x8)
    bool R Key Pressed;                                                               // 0x0350 (size: 0x1)
    bool String Hovered;                                                              // 0x0351 (size: 0x1)
    bool Bolt Hovered;                                                                // 0x0352 (size: 0x1)
    bool Bolt Clicked;                                                                // 0x0353 (size: 0x1)
    bool Quiver Hovered;                                                              // 0x0354 (size: 0x1)
    bool Cloase Widget Fail Safe;                                                     // 0x0355 (size: 0x1)

    ESlateVisibility GetVisibility_3();
    ESlateVisibility GetVisibility_2();
    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    bool GetbIsEnabled();
    ESlateVisibility GetVisibility_1();
    ESlateVisibility GetVisibility_0();
    FEventReply OnMouseButtonUp(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnDragDetected(FGeometry MyGeometry, const FPointerEvent& PointerEvent, class UDragDropOperation*& Operation);
    FEventReply OnPreviewMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    float GetValue();
    void Close Widget();
    void BndEvt__UI_Weapon_Reload_Crossbow_Slider_0_K2Node_ComponentBoundEvent_0_OnMouseCaptureBeginEvent__DelegateSignature();
    void BndEvt__UI_Weapon_Reload_Crossbow_Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_Weapon_Reload_Crossbow_Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_Weapon_Reload_Crossbow_Button_3_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_Weapon_Reload_Crossbow_Button_3_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_Weapon_Reload_Crossbow_Button_1_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_Weapon_Reload_Crossbow_Button_1_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__UI_Weapon_Reload_Crossbow_Button_2_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_UI_Weapon_Reload_Crossbow(int32 EntryPoint);
}; // Size: 0x356

#endif
