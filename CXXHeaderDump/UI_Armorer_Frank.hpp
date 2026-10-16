#ifndef UE4SS_SDK_UI_Armorer_Frank_HPP
#define UE4SS_SDK_UI_Armorer_Frank_HPP

class UUI_Armorer_Frank_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UImage* ArmorClassFrame_Img;                                                // 0x02E8 (size: 0x8)
    class UImage* ArmorClassIcon_Img;                                                 // 0x02F0 (size: 0x8)
    class UWidgetSwitcher* ArmorClassSpecificSwatches_Switcher;                       // 0x02F8 (size: 0x8)
    class UTextBlock* ArmorItemName_Txt;                                              // 0x0300 (size: 0x8)
    class UButton* Attachment1_Btn;                                                   // 0x0308 (size: 0x8)
    class UButton* Attachment2_Btn;                                                   // 0x0310 (size: 0x8)
    class UButton* Attachment3_Btn;                                                   // 0x0318 (size: 0x8)
    class UImage* Background_Img;                                                     // 0x0320 (size: 0x8)
    class UButton* BevorFilter_Btn;                                                   // 0x0328 (size: 0x8)
    class UButton* Clean_Btn;                                                         // 0x0330 (size: 0x8)
    class UButton* Core_Btn;                                                          // 0x0338 (size: 0x8)
    class UButton* Craft_Btn;                                                         // 0x0340 (size: 0x8)
    class UTextBlock* CraftCostAmount_Txt;                                            // 0x0348 (size: 0x8)
    class UButton* CuirassFilter_Btn;                                                 // 0x0350 (size: 0x8)
    class UListView* Customizable_Items_List;                                         // 0x0358 (size: 0x8)
    class UImage* Fabric1_Img;                                                        // 0x0360 (size: 0x8)
    class UImage* Fabric2_Img;                                                        // 0x0368 (size: 0x8)
    class UImage* Fabric2_Img_1;                                                      // 0x0370 (size: 0x8)
    class UButton* Furbish_Btn;                                                       // 0x0378 (size: 0x8)
    class UButton* GauntletFilter_Btn;                                                // 0x0380 (size: 0x8)
    class UButton* HelmetFilter_Btn;                                                  // 0x0388 (size: 0x8)
    class UImage* LeatherColor_Img;                                                   // 0x0390 (size: 0x8)
    class UButton* Leave_Btn;                                                         // 0x0398 (size: 0x8)
    class UButton* LegsFilter_Btn;                                                    // 0x03A0 (size: 0x8)
    class UImage* MainMetal_Img;                                                      // 0x03A8 (size: 0x8)
    class UWidgetSwitcher* MainSwitcher;                                              // 0x03B0 (size: 0x8)
    class UImage* MoneyStrip_Img;                                                     // 0x03B8 (size: 0x8)
    class UImage* MoneyStrip_Img_1;                                                   // 0x03C0 (size: 0x8)
    class UButton* NoFilter_Btn;                                                      // 0x03C8 (size: 0x8)
    class UImage* NoItemSelectedCover_Img;                                            // 0x03D0 (size: 0x8)
    class UTextBlock* NoItemSelectedCover_Txt;                                        // 0x03D8 (size: 0x8)
    class UButton* PauldronFilter_Btn;                                                // 0x03E0 (size: 0x8)
    class UTextBlock* PlayerMoney;                                                    // 0x03E8 (size: 0x8)
    class UButton* SabatonFilter_Btn;                                                 // 0x03F0 (size: 0x8)
    class UImage* SecondaryMetal_Img;                                                 // 0x03F8 (size: 0x8)
    class UButton* SelectCustomizePanel_Btn;                                          // 0x0400 (size: 0x8)
    class UUI_Widget_ArmorCustomization_SelectedIcon_C* SelectedFabricColor1_Btn;     // 0x0408 (size: 0x8)
    class UUI_Widget_ArmorCustomization_SelectedIcon_C* SelectedFabricColor2_Btn;     // 0x0410 (size: 0x8)
    class UUI_Widget_ArmorCustomization_SelectedIcon_C* SelectedFabricColor3_Btn;     // 0x0418 (size: 0x8)
    class UUI_Widget_ArmorCustomization_SelectedIcon_C* SelectedLeatherColor_Btn;     // 0x0420 (size: 0x8)
    class UUI_Widget_ArmorCustomization_SelectedIcon_C* SelectedMainMetal_Btn;        // 0x0428 (size: 0x8)
    class UUI_Widget_ArmorCustomization_SelectedIcon_C* SelectedSecondaryMetal_Btn;   // 0x0430 (size: 0x8)
    class UUI_Widget_ArmorCustomization_SelectedIcon_C* SelectedTemporaryAttachmentMetal_Btn; // 0x0438 (size: 0x8)
    class UButton* SelectUpgradePanel_Btn;                                            // 0x0440 (size: 0x8)
    class UImage* Swatches_Background_Img;                                            // 0x0448 (size: 0x8)
    class UScrollBox* Swatches_ScrollBox;                                             // 0x0450 (size: 0x8)
    class UImage* TemporaryAttachmentMetal_Img;                                       // 0x0458 (size: 0x8)
    class UTextBlock* TextBlock_0;                                                    // 0x0460 (size: 0x8)
    class UTextBlock* TextBlock_7;                                                    // 0x0468 (size: 0x8)
    class UTextBlock* TextBlock_8;                                                    // 0x0470 (size: 0x8)
    class UTextBlock* TextBlock_9;                                                    // 0x0478 (size: 0x8)
    class UButton* VambraceFilter_Btn;                                                // 0x0480 (size: 0x8)
    class UButton* WaistFilter_Btn;                                                   // 0x0488 (size: 0x8)
    class UGI_Settings_C* As GI Settings;                                             // 0x0490 (size: 0x8)
    class AWillie_BP_C* MyDressUpDarling;                                             // 0x0498 (size: 0x8)
    FStr_Passport_Armor1 Customized Armor;                                            // 0x04A0 (size: 0xD8)
    bool Core Removable;                                                              // 0x0578 (size: 0x1)
    bool Module 1 Available;                                                          // 0x0579 (size: 0x1)
    bool Module 2 Available;                                                          // 0x057A (size: 0x1)
    bool Module 3 Available;                                                          // 0x057B (size: 0x1)
    TEnumAsByte<ArmorSlots_Enum::Type> Selected Item Armor Slot;                      // 0x057C (size: 0x1)
    FStr_Passport_Armor1 Customized Armor Before Changes;                             // 0x0580 (size: 0xD8)
    bool Customized Armor is Worn;                                                    // 0x0658 (size: 0x1)
    bool Requires Module Hierarchy;                                                   // 0x0659 (size: 0x1)
    FName Core Name;                                                                  // 0x065C (size: 0x8)
    FName Attachment 1 Name;                                                          // 0x0664 (size: 0x8)
    FName Attachment 2 Name;                                                          // 0x066C (size: 0x8)
    FName Attachment 3 Name;                                                          // 0x0674 (size: 0x8)
    bool Armor is being Customized;                                                   // 0x067C (size: 0x1)
    double Current Fee;                                                               // 0x0680 (size: 0x8)
    class UBP_ArmorTextureSwatch_C* MetalTextures;                                    // 0x0688 (size: 0x8)
    class UBP_ArmorTextureSwatch_C* SecondaryMetalTextures;                           // 0x0690 (size: 0x8)
    class UBP_ArmorColorSwatch_C* FabricColors;                                       // 0x0698 (size: 0x8)
    class UBP_ArmorColorSwatch_C* LeatherColors;                                      // 0x06A0 (size: 0x8)
    class UBP_ArmorColorSwatch_C* TempAttachmentColors;                               // 0x06A8 (size: 0x8)
    TArray<TEnumAsByte<ArmorSlots_Enum::Type>> FilteredSlotType;                      // 0x06B0 (size: 0x10)
    bool UseFilter;                                                                   // 0x06C0 (size: 0x1)
    class UBP_GameItem_Armor_C* CurrentSelectedItem;                                  // 0x06C8 (size: 0x8)
    FStr_Passport_Armor1 UnmodifiedPassport;                                          // 0x06D0 (size: 0xD8)
    bool AllowCrafting;                                                               // 0x07A8 (size: 0x1)
    class ABP_FreeCamera_C* My Controller;                                            // 0x07B0 (size: 0x8)
    bool SettingAttachmentMaterial;                                                   // 0x07B8 (size: 0x1)

    FText Get_PlayerMoney_Text();
    ESlateVisibility Get_ArmorClassIcon_Img_Visibility();
    bool Get_Attachment3_Btn_bIsEnabled();
    bool Get_Attachment2_Btn_bIsEnabled();
    bool Get_Attachment1_Btn_bIsEnabled();
    bool Get_Core_Btn_bIsEnabled();
    void SetAttachmentButtonVisibility();
    void RefreshSelectedSwatches();
    void AnimateFilterButton(class UButton* FilterButton, bool IsHovered);
    void UnsetItemsFilter();
    void SetItemsFilter(TArray<TEnumAsByte<ArmorSlots_Enum::Type>>& PressedFilterType);
    void FillItemsList();
    void FillSwatchesOfType(TEnumAsByte<Swatch_Type::Type> Type);
    void OnItemSelected(class UBP_GameItem_Armor_C* SelectedArmor);
    void OnSwatchesClick();
    void OnSwatchesHover(FLinearColor NewColor, TEnumAsByte<Swatch_Type::Type> SwatchType, TEnumAsByte<Steel_Type::Type> SteelType, TEnumAsByte<SecondaryMetal_Type::Type> SecondaryMetalType);
    FText GetMoneyCostText();
    FText GetText_7();
    FText Attachment3_GetName();
    FText Attachment2_GetName();
    FText Attachment1_GetName();
    FText AttachmentCore_GetName();
    FText GetText_2();
    FText GetText_1();
    FText GetText_0();
    FText GetText();
    void Add Armor to List(FStr_Passport_Armor1 InputPin, bool Is Equipped);
    ECheckBoxState GetCheckedState_2();
    ECheckBoxState GetCheckedState_1();
    ECheckBoxState GetCheckedState_0();
    ESlateVisibility GetVisibility_0();
    ECheckBoxState GetCheckedState();
    void Set Up List Item(class UObject* Item, class UObject* Widget);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__UI_Armorer_Frank_Customizable_Items_List_K2Node_ComponentBoundEvent_0_OnListEntryInitializedDynamic__DelegateSignature(class UObject* Item, class UUserWidget* Widget);
    void BndEvt__UI_Armorer_Frank_Button_1_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_Armorer_Frank_Button_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_Armorer_Frank_Button_0_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_Armorer_Frank_Button_2_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_Armorer_Frank_Button_3_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_Armorer_Frank_Button_4_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_Armorer_Frank_Customizable_Items_List_K2Node_ComponentBoundEvent_13_OnItemIsHoveredChangedDynamic__DelegateSignature(class UObject* Item, bool bIsHovered);
    void BndEvt__UI_Armorer_Frank_Button_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_Armorer_Frank_Button_0_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_Armorer_Frank_Button_2_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_Armorer_Frank_Button_3_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_Armorer_Frank_Button_4_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_Armorer_Frank_Button_1_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature();
    void UpdateMoneyCost();
    void BndEvt__UI_Armorer_Frank_HelmetFilter_Btn_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_Armorer_Frank_BevorFilter_Btn_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_Armorer_Frank_PauldronFilter_Btn_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_Armorer_Frank_CuirassFilter_Btn_K2Node_ComponentBoundEvent_24_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_Armorer_Frank_VambraceFilter_Btn_K2Node_ComponentBoundEvent_26_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_Armorer_Frank_LegsFilter_Btn_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_Armorer_Frank_SabatonFilter_Btn_K2Node_ComponentBoundEvent_28_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_Armorer_Frank_GauntletFilter_Btn_K2Node_ComponentBoundEvent_29_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_Armorer_Frank_HelmetFilter_Btn_K2Node_ComponentBoundEvent_30_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_Armorer_Frank_HelmetFilter_Btn_K2Node_ComponentBoundEvent_31_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_Armorer_Frank_BevorFilter_Btn_K2Node_ComponentBoundEvent_32_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_Armorer_Frank_BevorFilter_Btn_K2Node_ComponentBoundEvent_33_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_Armorer_Frank_PauldronFilter_Btn_K2Node_ComponentBoundEvent_34_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_Armorer_Frank_PauldronFilter_Btn_K2Node_ComponentBoundEvent_35_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_Armorer_Frank_CuirassFilter_Btn_K2Node_ComponentBoundEvent_36_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_Armorer_Frank_CuirassFilter_Btn_K2Node_ComponentBoundEvent_37_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_Armorer_Frank_VambraceFilter_Btn_K2Node_ComponentBoundEvent_40_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_Armorer_Frank_VambraceFilter_Btn_K2Node_ComponentBoundEvent_41_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_Armorer_Frank_LegsFilter_Btn_K2Node_ComponentBoundEvent_42_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_Armorer_Frank_LegsFilter_Btn_K2Node_ComponentBoundEvent_43_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_Armorer_Frank_SabatonFilter_Btn_K2Node_ComponentBoundEvent_44_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_Armorer_Frank_SabatonFilter_Btn_K2Node_ComponentBoundEvent_45_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_Armorer_Frank_GauntletFilter_Btn_K2Node_ComponentBoundEvent_46_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_Armorer_Frank_GauntletFilter_Btn_K2Node_ComponentBoundEvent_47_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_Armorer_Frank_NoFilter_Btn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_Armorer_Frank_NoFilter_Btn_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_Armorer_Frank_NoFilter_Btn_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_Armorer_Frank_WaistFilter_Btn_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_Armorer_Frank_WaistFilter_Btn_K2Node_ComponentBoundEvent_23_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_Armorer_Frank_WaistFilter_Btn_K2Node_ComponentBoundEvent_25_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_Armorer_Frank_SelectCustomizePanel_Btn_K2Node_ComponentBoundEvent_22_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_Armorer_Frank_SelectUpgradePanel_Btn_K2Node_ComponentBoundEvent_38_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_UI_Armorer_Frank(int32 EntryPoint);
}; // Size: 0x7B9

#endif
