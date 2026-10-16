#ifndef UE4SS_SDK_UI_PhotoPage_HPP
#define UE4SS_SDK_UI_PhotoPage_HPP

class UUI_PhotoPage_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UUniformGridPanel* Page;                                                    // 0x02E8 (size: 0x8)
    int32 PhotosPerColumn;                                                            // 0x02F0 (size: 0x4)
    int32 PhotosPerRow;                                                               // 0x02F4 (size: 0x4)
    TArray<class UUI_PhotoThumbnail_C*> PhotosArray;                                  // 0x02F8 (size: 0x10)
    int32 PageIndex;                                                                  // 0x0308 (size: 0x4)
    class UUI_Gallery_C* GalleryReference;                                            // 0x0310 (size: 0x8)

    void PreConstruct(bool IsDesignTime);
    void Construct();
    void Initialize(class UUI_Gallery_C* GalleryReference, int32 PageIndex);
    void ResetPage();
    void UpdatePage();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_UI_PhotoPage(int32 EntryPoint);
}; // Size: 0x318

#endif
