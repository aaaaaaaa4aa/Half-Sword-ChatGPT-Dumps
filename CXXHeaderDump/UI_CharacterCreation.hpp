#ifndef UE4SS_SDK_UI_CharacterCreation_HPP
#define UE4SS_SDK_UI_CharacterCreation_HPP

class UUI_CharacterCreation_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UButton* Button;                                                            // 0x02E8 (size: 0x8)
    class UButton* Button_0;                                                          // 0x02F0 (size: 0x8)
    class UEditableText* EditableText_0;                                              // 0x02F8 (size: 0x8)
    class UImage* Image;                                                              // 0x0300 (size: 0x8)
    class UImage* Image_0;                                                            // 0x0308 (size: 0x8)
    class UImage* Image_1;                                                            // 0x0310 (size: 0x8)
    class UImage* Image_2;                                                            // 0x0318 (size: 0x8)
    class UListView* Player_Items_List;                                               // 0x0320 (size: 0x8)
    class USlider* Slider_Background;                                                 // 0x0328 (size: 0x8)
    class USlider* Slider_EyeColor;                                                   // 0x0330 (size: 0x8)
    class USlider* Slider_Face;                                                       // 0x0338 (size: 0x8)
    class USlider* Slider_Hair;                                                       // 0x0340 (size: 0x8)
    class USlider* Slider_HairColor;                                                  // 0x0348 (size: 0x8)
    class USlider* Slider_Stature;                                                    // 0x0350 (size: 0x8)
    class UTextBlock* TextBlock_0;                                                    // 0x0358 (size: 0x8)
    class UListView* Trader_Items_List;                                               // 0x0360 (size: 0x8)
    class UGI_Settings_C* As GI Settings;                                             // 0x0368 (size: 0x8)
    class ABP_FreeCamera_C* My Controller;                                            // 0x0370 (size: 0x8)
    class AWillie_BP_DressUp_C* MyDressUpDarling;                                     // 0x0378 (size: 0x8)
    TEnumAsByte<Enum_Ranks::Type> Current Character Tier;                             // 0x0380 (size: 0x1)
    class UDA_Equipment_Loadout_Master_C* DA_Loadout;                                 // 0x0388 (size: 0x8)
    TArray<FStr_Passport_Weapon1> Weapons Set T1;                                     // 0x0390 (size: 0x10)
    TArray<FStr_Passport_Weapon1> Weapons Set T2;                                     // 0x03A0 (size: 0x10)
    TArray<FStr_Passport_Weapon1> Weapons Set T3;                                     // 0x03B0 (size: 0x10)
    TArray<FStr_Passport_Weapon1> Weapons Set T4;                                     // 0x03C0 (size: 0x10)
    TArray<FStr_Passport_Weapon1> Weapons Set T5;                                     // 0x03D0 (size: 0x10)
    TArray<FStr_Passport_Weapon1> Weapons Set T6;                                     // 0x03E0 (size: 0x10)
    TArray<FStr_Passport_Weapon1> Weapons Set T7;                                     // 0x03F0 (size: 0x10)
    TArray<FStr_Passport_Weapon1> Weapons Set T8;                                     // 0x0400 (size: 0x10)
    class UDA_Character_Names_Master_C* DA Names;                                     // 0x0410 (size: 0x8)

    FText GetText_0();
    float Get_Slider_Stature_Value();
    FSlateBrush GetBrush();
    void Set Up Trader Item(class UObject* Item, class UObject* Widget, bool Trader);
    void Generate Tier Weapons(const TArray<FStr_Passport_Weapon1>& TargetArray, TEnumAsByte<Enum_Ranks::Type> Tier);
    float Get_Slider_Background_Value();
    FText GetText();
    FLinearColor GetColorAndOpacity_0();
    FLinearColor GetColorAndOpacity();
    float Get_Slider_EyeColor_Value();
    float Get_Slider_HairColor_Value();
    float Get_Slider_Hair_Value();
    float Get_Slider_Face_Value();
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void BndEvt__UI_CharacterCreation_Slider_5_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void BndEvt__UI_CharacterCreation_Slider_1_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void BndEvt__UI_CharacterCreation_Slider_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void BndEvt__UI_CharacterCreation_Slider_2_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void BndEvt__UI_CharacterCreation_Slider_3_K2Node_ComponentBoundEvent_4_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void BndEvt__UI_CharacterCreation_Slider_4_K2Node_ComponentBoundEvent_5_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void BndEvt__UI_CharacterCreation_EditableText_0_K2Node_ComponentBoundEvent_6_OnEditableTextChangedEvent__DelegateSignature(const FText& Text);
    void BndEvt__UI_CharacterCreation_Player_Items_List_K2Node_ComponentBoundEvent_8_OnListEntryInitializedDynamic__DelegateSignature(class UObject* Item, class UUserWidget* Widget);
    void BndEvt__UI_CharacterCreation_Trader_Items_List_K2Node_ComponentBoundEvent_9_OnListEntryInitializedDynamic__DelegateSignature(class UObject* Item, class UUserWidget* Widget);
    void BndEvt__UI_CharacterCreation_Trader_Items_List_K2Node_ComponentBoundEvent_11_SimpleListItemEventDynamic__DelegateSignature(class UObject* Item);
    void BndEvt__UI_CharacterCreation_Trader_Items_List_K2Node_ComponentBoundEvent_12_OnItemIsHoveredChangedDynamic__DelegateSignature(class UObject* Item, bool bIsHovered);
    void BndEvt__UI_CharacterCreation_Button_0_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_CharacterCreation_Button_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_CharacterCreation_Button_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_CharacterCreation_Button_0_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_UI_CharacterCreation(int32 EntryPoint);
}; // Size: 0x418

#endif
