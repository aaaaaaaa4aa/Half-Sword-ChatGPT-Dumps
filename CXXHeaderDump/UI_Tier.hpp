#ifndef UE4SS_SDK_UI_Tier_HPP
#define UE4SS_SDK_UI_Tier_HPP

class UUI_Tier_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UWidgetAnimation* Fade;                                                     // 0x02E8 (size: 0x8)
    class UImage* Image_0;                                                            // 0x02F0 (size: 0x8)
    int32 Level;                                                                      // 0x02F8 (size: 0x4)

    FSlateBrush GetBrush();
    void Construct();
    void ExecuteUbergraph_UI_Tier(int32 EntryPoint);
}; // Size: 0x2FC

#endif
