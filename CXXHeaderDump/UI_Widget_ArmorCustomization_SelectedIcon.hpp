#ifndef UE4SS_SDK_UI_Widget_ArmorCustomization_SelectedIcon_HPP
#define UE4SS_SDK_UI_Widget_ArmorCustomization_SelectedIcon_HPP

class UUI_Widget_ArmorCustomization_SelectedIcon_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UButton* Cancel_Btn;                                                        // 0x02E8 (size: 0x8)
    class UButton* ColorSwatchBackground_Btn;                                         // 0x02F0 (size: 0x8)
    class UUI_Armorer_Frank_C* UIArmorer_Ref;                                         // 0x02F8 (size: 0x8)
    TEnumAsByte<Swatch_Type::Type> SwatchType;                                        // 0x0300 (size: 0x1)
    TEnumAsByte<Enum_Ranks::Type> SwatchRank;                                         // 0x0301 (size: 0x1)
    TEnumAsByte<Steel_Type::Type> SteelType;                                          // 0x0302 (size: 0x1)
    TEnumAsByte<SecondaryMetal_Type::Type> SecondaryMetalType;                        // 0x0303 (size: 0x1)
    bool IsTempAttachmentIcon;                                                        // 0x0304 (size: 0x1)

    void Initialize();
    void BP_OnEntryReleased();
    void BP_OnItemExpansionChanged(bool bIsExpanded);
    void BP_OnItemSelectionChanged(bool bIsSelected);
    void Construct();
    void BndEvt__UI_Widget_ArmorCustomization_ColorSwatch_ColorSwatchBackground_Btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_Widget_ArmorCustomization_ColorSwatch_ColorSwatchBackground_Btn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_UI_Widget_ArmorCustomization_SelectedIcon(int32 EntryPoint);
}; // Size: 0x305

#endif
