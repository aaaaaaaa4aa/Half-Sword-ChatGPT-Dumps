#ifndef UE4SS_SDK_UI_FadeToLife_HPP
#define UE4SS_SDK_UI_FadeToLife_HPP

class UUI_FadeToLife_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UWidgetAnimation* FadeToWhite;                                              // 0x02E8 (size: 0x8)
    class UImage* White;                                                              // 0x02F0 (size: 0x8)
    class UGI_Settings_C* As GI Settings;                                             // 0x02F8 (size: 0x8)

    void Construct();
    void ExecuteUbergraph_UI_FadeToLife(int32 EntryPoint);
}; // Size: 0x300

#endif
