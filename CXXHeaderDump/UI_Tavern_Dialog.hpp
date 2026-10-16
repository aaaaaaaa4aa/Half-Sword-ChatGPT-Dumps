#ifndef UE4SS_SDK_UI_Tavern_Dialog_HPP
#define UE4SS_SDK_UI_Tavern_Dialog_HPP

class UUI_Tavern_Dialog_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UImage* Image_0;                                                            // 0x02E8 (size: 0x8)
    class UImage* Image_45;                                                           // 0x02F0 (size: 0x8)
    class UImage* Image_85;                                                           // 0x02F8 (size: 0x8)
    class UTextBlock* TextBlock_1;                                                    // 0x0300 (size: 0x8)
    class UGI_Settings_C* As GI Settings;                                             // 0x0308 (size: 0x8)
    class UWidget* Dialog SubWidget;                                                  // 0x0310 (size: 0x8)
    TEnumAsByte<Enum_Characters_Tavern::Type> Character;                              // 0x0318 (size: 0x1)
    class UUI_Hub_Tavern_C* Parent UI;                                                // 0x0320 (size: 0x8)

    ESlateVisibility GetVisibility_0();
    FText GetText_0();
    FSlateBrush GetBrush();
    FText GetText();
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Destroy Self();
    void ExecuteUbergraph_UI_Tavern_Dialog(int32 EntryPoint);
}; // Size: 0x328

#endif
