#ifndef UE4SS_SDK_UI_Widget_InventorySlot_HPP
#define UE4SS_SDK_UI_Widget_InventorySlot_HPP

class UUI_Widget_InventorySlot_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UButton* Button_117;                                                        // 0x02E8 (size: 0x8)
    TEnumAsByte<Enum_InventorySlot::Type> NewVar;                                     // 0x02F0 (size: 0x1)
    FUI_Widget_InventorySlot_CED Slot Hovered ED Slot Hovered;                        // 0x02F8 (size: 0x10)
    void ED Slot Hovered();
    FUI_Widget_InventorySlot_CED Slot Unhovered ED Slot Unhovered;                    // 0x0308 (size: 0x10)
    void ED Slot Unhovered();

    void BndEvt__ABUBUBA_Button_117_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_Widget_InventorySlot_Button_117_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_UI_Widget_InventorySlot(int32 EntryPoint);
    void ED Slot Unhovered__DelegateSignature();
    void ED Slot Hovered__DelegateSignature();
}; // Size: 0x318

#endif
