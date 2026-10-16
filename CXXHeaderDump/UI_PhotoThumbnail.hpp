#ifndef UE4SS_SDK_UI_PhotoThumbnail_HPP
#define UE4SS_SDK_UI_PhotoThumbnail_HPP

class UUI_PhotoThumbnail_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UWidgetAnimation* NotifySelection;                                          // 0x02E8 (size: 0x8)
    class UImage* BottomLeft;                                                         // 0x02F0 (size: 0x8)
    class UImage* BottomRight;                                                        // 0x02F8 (size: 0x8)
    class UButton* Button;                                                            // 0x0300 (size: 0x8)
    class UCanvasPanel* Edges;                                                        // 0x0308 (size: 0x8)
    class UImage* Photo;                                                              // 0x0310 (size: 0x8)
    class UImage* PhotoFrame;                                                         // 0x0318 (size: 0x8)
    class UImage* TopLeft;                                                            // 0x0320 (size: 0x8)
    class UImage* TopRight;                                                           // 0x0328 (size: 0x8)
    FS_PhotosData PhotoData;                                                          // 0x0330 (size: 0x30)
    FLinearColor CurrentColor;                                                        // 0x0360 (size: 0x10)
    class UTexture2D* Texture;                                                        // 0x0370 (size: 0x8)
    class UTexture2D* Frame;                                                          // 0x0378 (size: 0x8)
    FVector2D BaseSize;                                                               // 0x0380 (size: 0x10)
    double SizeMultiplier;                                                            // 0x0390 (size: 0x8)
    class UUI_Gallery_C* GalleryReference;                                            // 0x0398 (size: 0x8)
    FUI_PhotoThumbnail_CSendPhoto SendPhoto;                                          // 0x03A0 (size: 0x10)
    void SendPhoto(FS_PhotosData PhotoData);
    class UUI_PhotoPage_C* Page;                                                      // 0x03B0 (size: 0x8)
    FLinearColor FrameFocusedColor;                                                   // 0x03B8 (size: 0x10)
    FLinearColor FrameUnfocusedColor;                                                 // 0x03C8 (size: 0x10)
    bool bFocused;                                                                    // 0x03D8 (size: 0x1)

    ESlateVisibility Edges Visibility();
    FLinearColor FrameFocusedAndUnfocusedColor();
    void PreConstruct(bool IsDesignTime);
    void SetPhotoData(FS_PhotosData PhotoInfo);
    void Initialize(class UUI_Gallery_C* GalleryReference, class UUI_PhotoPage_C* OwnPage);
    void Destruct();
    void BndEvt__ButtonPhoto_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void Animation();
    void ResetThumb();
    void UpdatePhoto();
    void DeleteData();
    void ResetThumbAnimation();
    void ExecuteUbergraph_UI_PhotoThumbnail(int32 EntryPoint);
    void SendPhoto__DelegateSignature(FS_PhotosData PhotoData);
}; // Size: 0x3D9

#endif
