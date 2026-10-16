#ifndef UE4SS_SDK_BP_ScreenshotManager_HPP
#define UE4SS_SDK_BP_ScreenshotManager_HPP

class ABP_ScreenshotManager_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0298 (size: 0x8)
    FPostProcessSettings CurrentPostProcess;                                          // 0x02A0 (size: 0x6F0)
    double CurrentFOV;                                                                // 0x0990 (size: 0x8)
    class UTextureRenderTarget2D* RenderTargetTexture;                                // 0x0998 (size: 0x8)
    double CurrentTimeDilation;                                                       // 0x09A0 (size: 0x8)
    class UUI_PhotoMode_C* PhotoModeWidgetRef;                                        // 0x09A8 (size: 0x8)

    void UserConstructionScript();
    void ReceiveTick(float DeltaSeconds);
    void TakeScreenshot(FIntPoint Size, FString Path, FString Filename);
    void ExecuteUbergraph_BP_ScreenshotManager(int32 EntryPoint);
}; // Size: 0x9B0

#endif
