#ifndef UE4SS_SDK_UI_Unlock_Lock_HPP
#define UE4SS_SDK_UI_Unlock_Lock_HPP

class UUI_Unlock_Lock_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UImage* Image_49;                                                           // 0x02E8 (size: 0x8)
    class UMaterialInstanceDynamic* NewVar;                                           // 0x02F0 (size: 0x8)
    float In Delta Time;                                                              // 0x02F8 (size: 0x4)

    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_UI_Unlock_Lock(int32 EntryPoint);
}; // Size: 0x2FC

#endif
