#ifndef UE4SS_SDK_UI_Briefing_Text_Fade_HPP
#define UE4SS_SDK_UI_Briefing_Text_Fade_HPP

class UUI_Briefing_Text_Fade_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UWidgetAnimation* Fade;                                                     // 0x02E8 (size: 0x8)
    class UTextBlock* TextBlock_0;                                                    // 0x02F0 (size: 0x8)
    FText Text to write;                                                              // 0x02F8 (size: 0x10)

    FText GetText();
    void Construct();
    void ExecuteUbergraph_UI_Briefing_Text_Fade(int32 EntryPoint);
}; // Size: 0x308

#endif
