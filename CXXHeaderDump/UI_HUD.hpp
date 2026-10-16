#ifndef UE4SS_SDK_UI_HUD_HPP
#define UE4SS_SDK_UI_HUD_HPP

class UUI_HUD_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UWidgetAnimation* AimLockOff;                                               // 0x02E8 (size: 0x8)
    class UWidgetAnimation* AimLockOn;                                                // 0x02F0 (size: 0x8)
    class UImage* Aim;                                                                // 0x02F8 (size: 0x8)
    class UImage* AimLock;                                                            // 0x0300 (size: 0x8)
    class UImage* ArmLDmg;                                                            // 0x0308 (size: 0x8)
    class UImage* ArmRDmg;                                                            // 0x0310 (size: 0x8)
    class UImage* Black;                                                              // 0x0318 (size: 0x8)
    class UImage* HeadDmg;                                                            // 0x0320 (size: 0x8)
    class UImage* HPDmg1;                                                             // 0x0328 (size: 0x8)
    class UImage* HPDmg2;                                                             // 0x0330 (size: 0x8)
    class UImage* HPDmg3;                                                             // 0x0338 (size: 0x8)
    class UImage* LegLDmg;                                                            // 0x0340 (size: 0x8)
    class UImage* LegRDmg;                                                            // 0x0348 (size: 0x8)
    class UTextBlock* TextDisabled;                                                   // 0x0350 (size: 0x8)
    class UTextBlock* TextDisabled_1;                                                 // 0x0358 (size: 0x8)
    class UTextBlock* TextHurt;                                                       // 0x0360 (size: 0x8)
    class UTextBlock* TextWin;                                                        // 0x0368 (size: 0x8)
    class UImage* Vignette;                                                           // 0x0370 (size: 0x8)
    class UImage* Vignette_Pain;                                                      // 0x0378 (size: 0x8)
    class UImage* Vignette_WakeUp;                                                    // 0x0380 (size: 0x8)
    class UImage* WaterMark;                                                          // 0x0388 (size: 0x8)
    class AWillie_BP_C* My Player;                                                    // 0x0390 (size: 0x8)
    class UGI_Settings_C* GI Settings;                                                // 0x0398 (size: 0x8)
    class ABP_HalfSwordGameMode_C* As BP Half Sword Game Mode;                        // 0x03A0 (size: 0x8)
    double Time Fallen;                                                               // 0x03A8 (size: 0x8)

    FText Get_TextDisabled_1_Text();
    void Aim Lock Is On();
    void Aim Lock Is Off();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_UI_HUD(int32 EntryPoint);
}; // Size: 0x3B0

#endif
