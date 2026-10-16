#ifndef UE4SS_SDK_UI_WeaponSelection_HPP
#define UE4SS_SDK_UI_WeaponSelection_HPP

class UUI_WeaponSelection_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UButton* B1;                                                                // 0x02E8 (size: 0x8)
    class UImage* Back;                                                               // 0x02F0 (size: 0x8)
    class UImage* Image_1;                                                            // 0x02F8 (size: 0x8)
    class UImage* Image_2;                                                            // 0x0300 (size: 0x8)
    class UImage* Image_3;                                                            // 0x0308 (size: 0x8)
    class UImage* Image_4;                                                            // 0x0310 (size: 0x8)
    class UImage* Image_5;                                                            // 0x0318 (size: 0x8)
    class UButton* L1;                                                                // 0x0320 (size: 0x8)
    class UButton* L2;                                                                // 0x0328 (size: 0x8)
    class UButton* R1;                                                                // 0x0330 (size: 0x8)
    class UButton* R2;                                                                // 0x0338 (size: 0x8)
    class UImage* Wheel;                                                              // 0x0340 (size: 0x8)
    class AWillie_BP_C* My Master;                                                    // 0x0348 (size: 0x8)
    int32 Selected Slot Int;                                                          // 0x0350 (size: 0x4)
    class UTexture* Slot_1;                                                           // 0x0358 (size: 0x8)
    class UTexture* Slot_2;                                                           // 0x0360 (size: 0x8)
    class UTexture* Slot_3;                                                           // 0x0368 (size: 0x8)
    class UTexture* Slot_4;                                                           // 0x0370 (size: 0x8)
    class UTexture* Slot_5;                                                           // 0x0378 (size: 0x8)
    bool Time Elapsed;                                                                // 0x0380 (size: 0x1)
    bool Hold;                                                                        // 0x0381 (size: 0x1)
    class UGI_Settings_C* GI Settings;                                                // 0x0388 (size: 0x8)

    FEventReply OnMouseMove(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    FEventReply OnMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void BndEvt__UI_WeaponSelection_R2_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_WeaponSelection_L1_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_WeaponSelection_L2_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_WeaponSelection_B1_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_WeaponSelection_R1_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_WeaponSelection_B1_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_WeaponSelection_B1_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_WeaponSelection_L2_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_WeaponSelection_L2_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
    void Mouse Click Left();
    void PreConstruct(bool IsDesignTime);
    void Mouse Click Right();
    void BndEvt__UI_WeaponSelection_R1_K2Node_ComponentBoundEvent_16_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__UI_WeaponSelection_R2_K2Node_ComponentBoundEvent_17_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__UI_WeaponSelection_L1_K2Node_ComponentBoundEvent_18_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__UI_WeaponSelection_L2_K2Node_ComponentBoundEvent_19_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__UI_WeaponSelection_B1_K2Node_ComponentBoundEvent_20_OnButtonPressedEvent__DelegateSignature();
    void Close Widget();
    void BndEvt__UI_WeaponSelection_L1_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_WeaponSelection_L1_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_WeaponSelection_R2_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_WeaponSelection_R2_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_WeaponSelection_R1_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_WeaponSelection_R1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Construct();
    void ExecuteUbergraph_UI_WeaponSelection(int32 EntryPoint);
}; // Size: 0x390

#endif
