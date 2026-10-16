#ifndef UE4SS_SDK_UI_KeyBinds_HPP
#define UE4SS_SDK_UI_KeyBinds_HPP

class UUI_KeyBinds_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UWidgetAnimation* HoverBack;                                                // 0x02E8 (size: 0x8)
    class UWidgetAnimation* HoverAudio;                                               // 0x02F0 (size: 0x8)
    class UWidgetAnimation* HoverControls;                                            // 0x02F8 (size: 0x8)
    class UWidgetAnimation* HoverGame;                                                // 0x0300 (size: 0x8)
    class UWidgetAnimation* HoverDisplay;                                             // 0x0308 (size: 0x8)
    class UTextBlock* ArrowTimeText;                                                  // 0x0310 (size: 0x8)
    class UButton* BackButton_1;                                                      // 0x0318 (size: 0x8)
    class UButton* Button;                                                            // 0x0320 (size: 0x8)
    class UButton* Button_1;                                                          // 0x0328 (size: 0x8)
    class UButton* Button_2;                                                          // 0x0330 (size: 0x8)
    class UButton* Button_27;                                                         // 0x0338 (size: 0x8)
    class UButton* Button_ArrowTime;                                                  // 0x0340 (size: 0x8)
    class UButton* Button_Crouch;                                                     // 0x0348 (size: 0x8)
    class UButton* Button_Forward;                                                    // 0x0350 (size: 0x8)
    class UButton* Button_Giveup;                                                     // 0x0358 (size: 0x8)
    class UButton* Button_Inventory;                                                  // 0x0360 (size: 0x8)
    class UButton* Button_LeftHandGrab;                                               // 0x0368 (size: 0x8)
    class UButton* Button_LeftHandSwing;                                              // 0x0370 (size: 0x8)
    class UButton* Button_LockOnTarget;                                               // 0x0378 (size: 0x8)
    class UButton* Button_PhotoMode;                                                  // 0x0380 (size: 0x8)
    class UButton* Button_RightHandGrab;                                              // 0x0388 (size: 0x8)
    class UButton* Button_RightHandSwing;                                             // 0x0390 (size: 0x8)
    class UButton* Button_Run;                                                        // 0x0398 (size: 0x8)
    class UButton* Button_SheatheLeft;                                                // 0x03A0 (size: 0x8)
    class UButton* Button_SheatheRight;                                               // 0x03A8 (size: 0x8)
    class UButton* Button_SwapHands;                                                  // 0x03B0 (size: 0x8)
    class UButton* Button_SwitchView;                                                 // 0x03B8 (size: 0x8)
    class UButton* Button_Thrust;                                                     // 0x03C0 (size: 0x8)
    class UButton* Button_ThrustMode;                                                 // 0x03C8 (size: 0x8)
    class UButton* ButtonBack;                                                        // 0x03D0 (size: 0x8)
    class UButton* ButtonRight;                                                       // 0x03D8 (size: 0x8)
    class UTextBlock* CrouchText;                                                     // 0x03E0 (size: 0x8)
    class UButton* DuttonLeft;                                                        // 0x03E8 (size: 0x8)
    class UTextBlock* GiveUpText;                                                     // 0x03F0 (size: 0x8)
    class UImage* Image;                                                              // 0x03F8 (size: 0x8)
    class UImage* Image_0;                                                            // 0x0400 (size: 0x8)
    class UImage* Image_1;                                                            // 0x0408 (size: 0x8)
    class UImage* Image_2;                                                            // 0x0410 (size: 0x8)
    class UTextBlock* InventoryText;                                                  // 0x0418 (size: 0x8)
    class UTextBlock* LeftHandGrabText;                                               // 0x0420 (size: 0x8)
    class UTextBlock* LeftHandSwingText;                                              // 0x0428 (size: 0x8)
    class UTextBlock* LockOnTargetText;                                               // 0x0430 (size: 0x8)
    class UTextBlock* PhotoModeText;                                                  // 0x0438 (size: 0x8)
    class UTextBlock* RightHandGrabText;                                              // 0x0440 (size: 0x8)
    class UTextBlock* RightHandSwingText;                                             // 0x0448 (size: 0x8)
    class UTextBlock* RunText;                                                        // 0x0450 (size: 0x8)
    class UTextBlock* SheatheLeftText;                                                // 0x0458 (size: 0x8)
    class UTextBlock* SheatheRightText;                                               // 0x0460 (size: 0x8)
    class UTextBlock* SwapHandsText;                                                  // 0x0468 (size: 0x8)
    class UTextBlock* SwitchViewText;                                                 // 0x0470 (size: 0x8)
    class UTextBlock* TextBack;                                                       // 0x0478 (size: 0x8)
    class UTextBlock* TextForward;                                                    // 0x0480 (size: 0x8)
    class UTextBlock* TextLeft;                                                       // 0x0488 (size: 0x8)
    class UTextBlock* TextRight;                                                      // 0x0490 (size: 0x8)
    class UTextBlock* ThrustModeText;                                                 // 0x0498 (size: 0x8)
    class UTextBlock* ThrustText;                                                     // 0x04A0 (size: 0x8)
    TSubclassOf<class UUserWidget> Go Back To;                                        // 0x04A8 (size: 0x8)
    bool IsStartedRebind;                                                             // 0x04B0 (size: 0x1)
    bool IsAxis;                                                                      // 0x04B1 (size: 0x1)
    FInputAxisKeyMapping CurrentAxisKeyMapping;                                       // 0x04B8 (size: 0x28)
    FInputActionKeyMapping CurrentActionKeyMapping;                                   // 0x04E0 (size: 0x28)
    class UButton* CurrentButton;                                                     // 0x0508 (size: 0x8)
    class UTextBlock* CurrentButtonText;                                              // 0x0510 (size: 0x8)
    FButtonStyle HoveredButtonStyle;                                                  // 0x0520 (size: 0x3F0)
    FButtonStyle DefaultButtonStyle;                                                  // 0x0910 (size: 0x3F0)
    class UGI_Settings_C* As GI Settings;                                             // 0x0D00 (size: 0x8)

    FText Get_RunText_4_Text();
    FText Get_RunText_3_Text();
    FText Get_RunText_2_Text();
    FText Get_RunText_1_Text();
    FEventReply OnMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void Start Rebind(FName ActionName, class UButton* ActionButton, class UTextBlock* ActionButtonText);
    FText Get Switch View Text();
    FText Get Photo Mode Text();
    FText Get Give Up Text();
    FText Get Lock On Target Text();
    FText Get Arrow Time Text();
    FText Get Inventory Text();
    FText Get Swap Hands Text();
    FText Get Sheathe Left Text();
    FText Get Sheathe Right Text();
    FText Get Thrust Mode Text();
    FText Get Thrust Text();
    FText Get Left Hand Grab Text();
    FText Get Left Hand Swing Text();
    FText Get Right Hand Grab Text();
    FText Get Right Hand Swing Text();
    FText Get Crouch Text();
    FText Get Run Key Text();
    FText Get Text From Action Mapping(FName ActionName);
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void BndEvt__UI_KeyBinds_BackButton_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_KeyBinds_Button_27_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_KeyBinds_Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_KeyBinds_Button_1_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_KeyBinds_Button_27_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_KeyBinds_Button_27_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_KeyBinds_Button_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_KeyBinds_Button_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_KeyBinds_Button_1_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_KeyBinds_Button_1_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_KeyBinds_Button_2_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_KeyBinds_Button_2_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_KeyBinds_Button_2_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_KeyBinds_BackButton_1_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_KeyBinds_BackButton_1_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void BndEvt__UI_KeyBinds_Button_Run_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_KeyBinds_Button_Crouch_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_KeyBinds_Button_RightHandSwing_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_KeyBinds_Button_RightHandGrab_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_KeyBinds_Button_LeftHandSwing_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_KeyBinds_Button_LeftHandGrab_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_KeyBinds_Button_ThrustMode_K2Node_ComponentBoundEvent_22_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_KeyBinds_Button_SwapHands_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_KeyBinds_Button_Inventory_K2Node_ComponentBoundEvent_26_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_KeyBinds_Button_ArrowTime_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_KeyBinds_Button_LockOnTarget_K2Node_ComponentBoundEvent_28_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_KeyBinds_Button_Giveup_K2Node_ComponentBoundEvent_29_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_KeyBinds_Button_PhotoMode_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_KeyBinds_Button_SwitchView_K2Node_ComponentBoundEvent_31_OnButtonClickedEvent__DelegateSignature();
    void Construct();
    void BndEvt__UI_KeyBinds_Button_Run_1_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_KeyBinds_Button_Run_2_K2Node_ComponentBoundEvent_23_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_KeyBinds_Button_Run_3_K2Node_ComponentBoundEvent_24_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_KeyBinds_Button_Run_4_K2Node_ComponentBoundEvent_32_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_UI_KeyBinds(int32 EntryPoint);
}; // Size: 0xD08

#endif
