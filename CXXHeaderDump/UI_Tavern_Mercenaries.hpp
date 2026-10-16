#ifndef UE4SS_SDK_UI_Tavern_Mercenaries_HPP
#define UE4SS_SDK_UI_Tavern_Mercenaries_HPP

class UUI_Tavern_Mercenaries_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UButton* Button;                                                            // 0x02E8 (size: 0x8)
    class UButton* Button_0;                                                          // 0x02F0 (size: 0x8)
    class UButton* Button_1;                                                          // 0x02F8 (size: 0x8)
    class UButton* Button_2;                                                          // 0x0300 (size: 0x8)
    class UButton* Button_3;                                                          // 0x0308 (size: 0x8)
    class UButton* Button_4;                                                          // 0x0310 (size: 0x8)
    class UButton* Button_Bevor;                                                      // 0x0318 (size: 0x8)
    class UButton* Button_Coif;                                                       // 0x0320 (size: 0x8)
    class UButton* Button_Cuirass;                                                    // 0x0328 (size: 0x8)
    class UButton* Button_Cuisse;                                                     // 0x0330 (size: 0x8)
    class UButton* Button_Doublet;                                                    // 0x0338 (size: 0x8)
    class UButton* Button_Fould;                                                      // 0x0340 (size: 0x8)
    class UButton* Button_Gauntlet;                                                   // 0x0348 (size: 0x8)
    class UButton* Button_Greave;                                                     // 0x0350 (size: 0x8)
    class UButton* Button_Hauberk;                                                    // 0x0358 (size: 0x8)
    class UButton* Button_Helmet;                                                     // 0x0360 (size: 0x8)
    class UButton* Button_Hood;                                                       // 0x0368 (size: 0x8)
    class UButton* Button_Hosen;                                                      // 0x0370 (size: 0x8)
    class UButton* Button_Overcoat;                                                   // 0x0378 (size: 0x8)
    class UButton* Button_Shoe;                                                       // 0x0380 (size: 0x8)
    class UButton* Button_Spaulder;                                                   // 0x0388 (size: 0x8)
    class UButton* Button_Standart;                                                   // 0x0390 (size: 0x8)
    class UButton* Button_Vambrace;                                                   // 0x0398 (size: 0x8)
    class UButton* Button_WeaponBack;                                                 // 0x03A0 (size: 0x8)
    class UButton* Button_WeaponL;                                                    // 0x03A8 (size: 0x8)
    class UButton* Button_WeaponR;                                                    // 0x03B0 (size: 0x8)
    class UButton* Button_WeaponSheathedL1;                                           // 0x03B8 (size: 0x8)
    class UButton* Button_WeaponSheathedL2;                                           // 0x03C0 (size: 0x8)
    class UButton* Button_WeaponSheathedR1;                                           // 0x03C8 (size: 0x8)
    class UButton* Button_WeaponSheathedR2;                                           // 0x03D0 (size: 0x8)
    class UCheckBox* CheckBox;                                                        // 0x03D8 (size: 0x8)
    class UImage* Image;                                                              // 0x03E0 (size: 0x8)
    class UImage* Image_0;                                                            // 0x03E8 (size: 0x8)
    class UImage* Image_1;                                                            // 0x03F0 (size: 0x8)
    class UImage* Image_2;                                                            // 0x03F8 (size: 0x8)
    class UImage* Image_3;                                                            // 0x0400 (size: 0x8)
    class UImage* Image_4;                                                            // 0x0408 (size: 0x8)
    class UImage* Image_5;                                                            // 0x0410 (size: 0x8)
    class UImage* Image_6;                                                            // 0x0418 (size: 0x8)
    class UImage* Image_7;                                                            // 0x0420 (size: 0x8)
    class UImage* Image_8;                                                            // 0x0428 (size: 0x8)
    class UImage* Image_9;                                                            // 0x0430 (size: 0x8)
    class UImage* Image_10;                                                           // 0x0438 (size: 0x8)
    class UImage* Image_11;                                                           // 0x0440 (size: 0x8)
    class UListView* Player_Items_List;                                               // 0x0448 (size: 0x8)
    class USlider* Slider;                                                            // 0x0450 (size: 0x8)
    class UTextBlock* TextBlock_0;                                                    // 0x0458 (size: 0x8)
    class UTextBlock* TextBlock_1;                                                    // 0x0460 (size: 0x8)
    class UTextBlock* TextBlock_7;                                                    // 0x0468 (size: 0x8)
    class UTextBlock* TextBlock_10;                                                   // 0x0470 (size: 0x8)
    class AWillie_BP_DressUp_C* MyDressUpDarling;                                     // 0x0478 (size: 0x8)
    class UGI_Settings_C* As GI Settings;                                             // 0x0480 (size: 0x8)
    TMap<TEnumAsByte<ArmorSlots_Enum::Type>, FStr_Passport_Armor1> Armor Slots;       // 0x0488 (size: 0x50)
    FUI_Tavern_Mercenaries_CBBBB BBBB;                                                // 0x04D8 (size: 0x10)
    void BBBB();
    class ABP_FreeCamera_C* My Controller;                                            // 0x04E8 (size: 0x8)
    class AActor* Spawned Item;                                                       // 0x04F0 (size: 0x8)
    class UObject* Item;                                                              // 0x04F8 (size: 0x8)
    class UBP_GameItem_Character_C* Selected Character Item;                          // 0x0500 (size: 0x8)
    TMap<class UObject*, class UWidget*> Item_0;                                      // 0x0508 (size: 0x50)
    bool Assigned;                                                                    // 0x0558 (size: 0x1)
    bool Party;                                                                       // 0x0559 (size: 0x1)

    ECheckBoxState GetCheckedState();
    ESlateVisibility GetVisibility_8();
    ESlateVisibility GetVisibility_7();
    ESlateVisibility GetVisibility_6();
    ESlateVisibility GetVisibility_5();
    ESlateVisibility GetVisibility_4();
    FSlateBrush GetBrush_7();
    FSlateBrush GetBrush_6();
    FSlateBrush GetBrush_5();
    FSlateBrush GetBrush_4();
    FSlateBrush GetBrush_3();
    FSlateBrush GetBrush_2();
    FSlateBrush GetBrush_1();
    FText GetText_1();
    FText GetText_0();
    float GetValue_0();
    float GetValue();
    ESlateVisibility Get_Button_WeaponSheathedL2_Visibility();
    ESlateVisibility GetVisibility_3();
    FText GetText();
    ESlateVisibility GetVisibility_2();
    ESlateVisibility Get_Button_WeaponSheathedR1_1_Visibility();
    ESlateVisibility Get_Button_WeaponSheathedR1_Visibility();
    FStr_Inventory Get Player Inventory();
    FStr_Passport_Character1 Get Player Character();
    ESlateVisibility GetVisibility_1();
    ESlateVisibility Get_Button_WeaponL_Visibility();
    ESlateVisibility Get_Button_WeaponR_Visibility();
    FSlateBrush GetBrush_0();
    FSlateBrush GetBrush();
    ESlateVisibility GetVisibility_0();
    void Remove Armor From Slot(const TEnumAsByte<ArmorSlots_Enum::Type> Slot);
    ESlateVisibility Get_Button_Shoe_Visibility();
    ESlateVisibility Get_Button_Greave_Visibility();
    ESlateVisibility Get_Button_Cuisse_Visibility();
    ESlateVisibility Get_Button_Fould_Visibility();
    ESlateVisibility Get_Button_Hosen_Visibility();
    ESlateVisibility Get_Button_Gauntlet_Visibility();
    ESlateVisibility Get_Button_Vambrace_Visibility();
    ESlateVisibility Get_Button_Spaulder_Visibility();
    ESlateVisibility Get_Button_Coif_Visibility();
    ESlateVisibility Get_Button_Helmet_Visibility();
    ESlateVisibility Get_Button_Hood_Visibility();
    ESlateVisibility Get_Button_Bevor_Visibility();
    ESlateVisibility Get_Button_Standart_Visibility();
    ESlateVisibility Get_Button_Cuirass_Visibility();
    ESlateVisibility Get_Button_Overcoat_Visibility();
    ESlateVisibility Get_Button_Hauberk_Visibility();
    ESlateVisibility Get_Button_Doublet_Visibility();
    void Set Up Trader Item(class UObject* Item, class UObject* Widget);
    void BndEvt__UI_Tavern_Inventory_Player_Items_List_K2Node_ComponentBoundEvent_1_OnListEntryInitializedDynamic__DelegateSignature(class UObject* Item, class UUserWidget* Widget);
    void BndEvt__UI_Tavern_Inventory_Button_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_Tavern_Inventory_Button_K2Node_ComponentBoundEvent_23_OnButtonClickedEvent__DelegateSignature();
    void Construct();
    void ED Check Arming Points_Event();
    void BndEvt__UI_Tavern_Mercenaries_Player_Items_List_K2Node_ComponentBoundEvent_2_SimpleListItemEventDynamic__DelegateSignature(class UObject* Item);
    void BndEvt__UI_Tavern_Mercenaries_Button_3_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_Tavern_Mercenaries_Button_2_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_Tavern_Mercenaries_Button_0_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_Tavern_Mercenaries_Button_3_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_Tavern_Mercenaries_Button_2_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
    void Event Setup DressUp Darling();
    void BndEvt__UI_Tavern_Mercenaries_Button_1_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_Tavern_Mercenaries_Button_1_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__UI_Tavern_Mercenaries_Button_0_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_Tavern_Mercenaries_Button_4_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_Tavern_Mercenaries_Button_4_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature();
    void Reset Character to 0();
    void BndEvt__UI_Tavern_Mercenaries_CheckBox_K2Node_ComponentBoundEvent_12_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void ExecuteUbergraph_UI_Tavern_Mercenaries(int32 EntryPoint);
    void BBBB__DelegateSignature();
}; // Size: 0x55A

#endif
