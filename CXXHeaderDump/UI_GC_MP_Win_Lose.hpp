#ifndef UE4SS_SDK_UI_GC_MP_Win_Lose_HPP
#define UE4SS_SDK_UI_GC_MP_Win_Lose_HPP

class UUI_GC_MP_Win_Lose_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UWidgetAnimation* Player2PicUnfade;                                         // 0x02E8 (size: 0x8)
    class UWidgetAnimation* Player1PicUnfade;                                         // 0x02F0 (size: 0x8)
    class UImage* Player1Pic;                                                         // 0x02F8 (size: 0x8)
    class UImage* Player2Pic;                                                         // 0x0300 (size: 0x8)
    class AWillie_BP_C* My Master (Willie);                                           // 0x0308 (size: 0x8)
    double Current Opacity;                                                           // 0x0310 (size: 0x8)
    bool Can Restart;                                                                 // 0x0318 (size: 0x1)
    class UGI_Settings_C* GI Settings;                                                // 0x0320 (size: 0x8)
    class ABP_HalfSwordGameMode_C* BP Half Sword Game Mode;                           // 0x0328 (size: 0x8)
    int32 Winner Player;                                                              // 0x0330 (size: 0x4)
    bool Started;                                                                     // 0x0334 (size: 0x1)

    ESlateVisibility GetVisibility_0();
    ESlateVisibility Get_Player2Won_Visibility();
    ESlateVisibility Get_Player1Won_Visibility();
    FSlateBrush Get_Player2_Pic_Brush();
    FSlateBrush Get_Player1_Pic_Brush();
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_UI_GC_MP_Win_Lose(int32 EntryPoint);
}; // Size: 0x335

#endif
