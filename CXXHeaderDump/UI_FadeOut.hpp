#ifndef UE4SS_SDK_UI_FadeOut_HPP
#define UE4SS_SDK_UI_FadeOut_HPP

class UUI_FadeOut_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UWidgetAnimation* FadeOut;                                                  // 0x02E8 (size: 0x8)
    class UImage* Image_0;                                                            // 0x02F0 (size: 0x8)
    bool Is Opened;                                                                   // 0x02F8 (size: 0x1)
    TArray<class ALevelInstance*> Loaded Level Instances;                             // 0x0300 (size: 0x10)
    double Delay;                                                                     // 0x0310 (size: 0x8)

    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Construct();
    void ExecuteUbergraph_UI_FadeOut(int32 EntryPoint);
}; // Size: 0x318

#endif
