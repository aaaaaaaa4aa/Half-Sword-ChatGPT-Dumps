#ifndef UE4SS_SDK_UI_WIN_HPP
#define UE4SS_SDK_UI_WIN_HPP

class UUI_WIN_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UWidgetAnimation* TextFadeIn;                                               // 0x02E8 (size: 0x8)
    class UWidgetAnimation* Fade;                                                     // 0x02F0 (size: 0x8)
    class UImage* Image_0;                                                            // 0x02F8 (size: 0x8)
    class UImage* Image_1;                                                            // 0x0300 (size: 0x8)
    class UImage* YOUWON;                                                             // 0x0308 (size: 0x8)
    class UWidgetAnimation* WinAnim_0;                                                // 0x0310 (size: 0x8)
    double Hold Meter;                                                                // 0x0318 (size: 0x8)
    class ABP_HalfSwordGameMode_C* BP Half Sword Game Mode;                           // 0x0320 (size: 0x8)
    class AWillie_BP_C* My Master (Willie);                                           // 0x0328 (size: 0x8)
    class UGI_Settings_C* As GI Settings;                                             // 0x0330 (size: 0x8)

    void PreConstruct(bool IsDesignTime);
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_UI_WIN(int32 EntryPoint);
}; // Size: 0x338

#endif
