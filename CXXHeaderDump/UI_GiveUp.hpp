#ifndef UE4SS_SDK_UI_GiveUp_HPP
#define UE4SS_SDK_UI_GiveUp_HPP

class UUI_GiveUp_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UWidgetAnimation* TextAppear;                                               // 0x02E8 (size: 0x8)
    class UWidgetAnimation* FadeToBlack;                                              // 0x02F0 (size: 0x8)
    class UWidgetAnimation* Blur;                                                     // 0x02F8 (size: 0x8)
    class UImage* Black;                                                              // 0x0300 (size: 0x8)
    class UProgressBar* ProgressBar_0;                                                // 0x0308 (size: 0x8)
    class UTextBlock* TextBlock_32;                                                   // 0x0310 (size: 0x8)
    class AWillie_BP_C* My Master (Willie);                                           // 0x0318 (size: 0x8)
    class UGI_Settings_C* As GI Settings;                                             // 0x0320 (size: 0x8)
    double Hold Meter;                                                                // 0x0328 (size: 0x8)
    class USG_Autosave_C* SaveGame;                                                   // 0x0330 (size: 0x8)
    int32 Distributed Loot;                                                           // 0x0338 (size: 0x4)
    int32 Available Loot;                                                             // 0x033C (size: 0x4)
    class ABP_HalfSwordGameMode_C* HS Game Mode;                                      // 0x0340 (size: 0x8)
    bool Gave up;                                                                     // 0x0348 (size: 0x1)

    FText GetText();
    FText GetText_0();
    float GetPercent();
    void PreConstruct(bool IsDesignTime);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Construct();
    void ExecuteUbergraph_UI_GiveUp(int32 EntryPoint);
}; // Size: 0x349

#endif
