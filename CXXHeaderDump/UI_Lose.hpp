#ifndef UE4SS_SDK_UI_Lose_HPP
#define UE4SS_SDK_UI_Lose_HPP

class UUI_Lose_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UWidgetAnimation* DethPicUnfade;                                            // 0x02E8 (size: 0x8)
    class UWidgetAnimation* RestartHover;                                             // 0x02F0 (size: 0x8)
    class UWidgetAnimation* RestartButtonAppear;                                      // 0x02F8 (size: 0x8)
    class UWidgetAnimation* TextAppear;                                               // 0x0300 (size: 0x8)
    class UWidgetAnimation* Fade;                                                     // 0x0308 (size: 0x8)
    class UImage* Black;                                                              // 0x0310 (size: 0x8)
    class UImage* DeathPic;                                                           // 0x0318 (size: 0x8)
    class UTextBlock* TextBlock_32;                                                   // 0x0320 (size: 0x8)
    class AWillie_BP_C* My Master (Willie);                                           // 0x0328 (size: 0x8)
    double Current Opacity;                                                           // 0x0330 (size: 0x8)
    bool Can Restart;                                                                 // 0x0338 (size: 0x1)
    class UGI_Settings_C* As GI Settings;                                             // 0x0340 (size: 0x8)
    class ABP_HalfSwordGameMode_C* BP Half Sword Game Mode;                           // 0x0348 (size: 0x8)

    FText GetText_0();
    FText GetText();
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_UI_Lose(int32 EntryPoint);
}; // Size: 0x350

#endif
