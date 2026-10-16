#ifndef UE4SS_SDK_UI_Hub_Tavern_HPP
#define UE4SS_SDK_UI_Hub_Tavern_HPP

class UUI_Hub_Tavern_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UImage* Background_Tavern;                                                  // 0x02E8 (size: 0x8)
    class UImage* Brestplate;                                                         // 0x02F0 (size: 0x8)
    class UButton* Button_Character;                                                  // 0x02F8 (size: 0x8)
    class UButton* Button_Fencer;                                                     // 0x0300 (size: 0x8)
    class UButton* Button_Innkeeper;                                                  // 0x0308 (size: 0x8)
    class UButton* Button_Inventory;                                                  // 0x0310 (size: 0x8)
    class UButton* Button_Jester;                                                     // 0x0318 (size: 0x8)
    class UButton* Button_Mercenaries;                                                // 0x0320 (size: 0x8)
    class UButton* Button_Merchant;                                                   // 0x0328 (size: 0x8)
    class UButton* Button_Patrons;                                                    // 0x0330 (size: 0x8)
    class UButton* Button_Seer;                                                       // 0x0338 (size: 0x8)
    class UButton* Button_Smith_1;                                                    // 0x0340 (size: 0x8)
    class UButton* Button_Smith_2;                                                    // 0x0348 (size: 0x8)
    class UImage* Image_Banner_Low;                                                   // 0x0350 (size: 0x8)
    class UImage* Patrons_1;                                                          // 0x0358 (size: 0x8)
    class UImage* Patrons_2;                                                          // 0x0360 (size: 0x8)
    class UImage* Poleaxe;                                                            // 0x0368 (size: 0x8)
    bool Patrons Bck 1 Presnt;                                                        // 0x0370 (size: 0x1)
    bool Patrons Bck 2 Presnt;                                                        // 0x0371 (size: 0x1)
    class UDA_Tavern_Character_Master_C* Jester;                                      // 0x0378 (size: 0x8)
    class UDA_Tavern_Character_Master_C* Merchant;                                    // 0x0380 (size: 0x8)
    class UDA_Tavern_Character_Master_C* Tailor;                                      // 0x0388 (size: 0x8)
    class UDA_Tavern_Character_Master_C* Armorsmith;                                  // 0x0390 (size: 0x8)
    class UDA_Tavern_Character_Master_C* Weaponsmith;                                 // 0x0398 (size: 0x8)
    class UDA_Tavern_Character_Master_C* Fencer;                                      // 0x03A0 (size: 0x8)
    class UDA_Tavern_Character_Master_C* Seer;                                        // 0x03A8 (size: 0x8)
    class UDA_Tavern_Character_Master_C* Mercenaries;                                 // 0x03B0 (size: 0x8)
    class UDA_Tavern_Character_Master_C* Patrons;                                     // 0x03B8 (size: 0x8)
    class UGI_Settings_C* As GI Settings;                                             // 0x03C0 (size: 0x8)
    TEnumAsByte<Enum_DayTime::Type> Current Day Time;                                 // 0x03C8 (size: 0x1)
    class ABP_HalfSwordGameMode_C* As BP Half Sword Game Mode;                        // 0x03D0 (size: 0x8)
    bool Time Hovered;                                                                // 0x03D8 (size: 0x1)

    ESlateVisibility Get_Button_Inventory_Visibility();
    ESlateVisibility Get_Button_Innkeeper_Visibility();
    ESlateVisibility GetVisibility_0();
    FText GetText();
    ESlateVisibility Get_Poleaxe_Visibility();
    ESlateVisibility Get_Brestplate_Visibility();
    ESlateVisibility Get_Button_Patrons_Visibility();
    ESlateVisibility Get_Button_Mercenaries_Visibility();
    ESlateVisibility Get_Button_Seer_Visibility();
    ESlateVisibility Get_Button_Jester_Visibility();
    ESlateVisibility Get_Button_Fencer_Visibility();
    ESlateVisibility Get_Button_Smith_2_Visibility();
    ESlateVisibility Get_Button_Smith_1_Visibility();
    ESlateVisibility Get_Button_Merchant_Visibility();
    ESlateVisibility Get_Patrons_2_Visibility();
    ESlateVisibility Get_Patrons_1_Visibility();
    FText Get_Text_Date_Text();
    FSlateBrush Get_Image_Time_Brush();
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void BndEvt__UI_Hub_Tavern_Button_Merchant_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_Hub_Tavern_Button_Innkeeper_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void Change Time Event();
    void BndEvt__UI_Hub_Tavern_Button_Jester_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_Hub_Tavern_Button_Smith_2_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_Hub_Tavern_Button_Smith_1_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_Hub_Tavern_Button_Fencer_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void BndEvt__UI_Hub_Tavern_Button_Inventory_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_Hub_Tavern_Button_Mercenaries_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_Hub_Tavern_Button_Merchant_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_Hub_Tavern_Button_Innkeeper_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_Hub_Tavern_Button_Jester_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_Hub_Tavern_Button_Inventory_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_Hub_Tavern_Button_Smith_1_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_Hub_Tavern_Button_Smith_2_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_Hub_Tavern_Button_Seer_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_Hub_Tavern_Button_Seer_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_Hub_Tavern_Button_Mercenaries_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_Hub_Tavern_Button_Fencer_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_UI_Hub_Tavern(int32 EntryPoint);
}; // Size: 0x3D9

#endif
