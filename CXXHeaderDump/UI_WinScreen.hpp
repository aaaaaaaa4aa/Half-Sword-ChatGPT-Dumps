#ifndef UE4SS_SDK_UI_WinScreen_HPP
#define UE4SS_SDK_UI_WinScreen_HPP

class UUI_WinScreen_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UWidgetAnimation* FadeOut;                                                  // 0x02E8 (size: 0x8)
    class UImage* Image_1;                                                            // 0x02F0 (size: 0x8)
    class UGI_Settings_C* As GI Settings;                                             // 0x02F8 (size: 0x8)
    class ABP_HalfSwordGameMode_C* As BP Half Sword Game Mode;                        // 0x0300 (size: 0x8)
    class USG_PlayerProgression_C* As SG Gauntlet Player Progress;                    // 0x0308 (size: 0x8)

    void Construct();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_UI_WinScreen(int32 EntryPoint);
}; // Size: 0x310

#endif
