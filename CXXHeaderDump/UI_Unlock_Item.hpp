#ifndef UE4SS_SDK_UI_Unlock_Item_HPP
#define UE4SS_SDK_UI_Unlock_Item_HPP

class UUI_Unlock_Item_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UWidgetAnimation* Fade;                                                     // 0x02E8 (size: 0x8)
    class UButton* Button_0;                                                          // 0x02F0 (size: 0x8)
    class UImage* Image_0;                                                            // 0x02F8 (size: 0x8)
    class UTextBlock* TextBlock_59;                                                   // 0x0300 (size: 0x8)
    class UMaterialInstanceDynamic* NewVar;                                           // 0x0308 (size: 0x8)
    class UTexture2D* Texture;                                                        // 0x0310 (size: 0x8)
    FText Text;                                                                       // 0x0318 (size: 0x10)

    FText GetText();
    FSlateBrush GetBrush();
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_UI_Unlock_Item(int32 EntryPoint);
}; // Size: 0x328

#endif
