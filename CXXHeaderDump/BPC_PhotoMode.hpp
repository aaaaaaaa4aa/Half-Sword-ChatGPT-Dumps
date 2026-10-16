#ifndef UE4SS_SDK_BPC_PhotoMode_HPP
#define UE4SS_SDK_BPC_PhotoMode_HPP

class UBPC_PhotoMode_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00A0 (size: 0x8)
    class UUI_PhotoMode_C* PhotoModeWidgetRef;                                        // 0x00A8 (size: 0x8)
    class ACharacter* PlayerRef;                                                      // 0x00B0 (size: 0x8)
    class USpringArmComponent* SpringArmRef;                                          // 0x00B8 (size: 0x8)
    class UCameraComponent* CameraRef;                                                // 0x00C0 (size: 0x8)
    bool bIsUsingPhotoMode;                                                           // 0x00C8 (size: 0x1)
    bool bPauseGameInPhotoMode;                                                       // 0x00C9 (size: 0x1)
    bool bApplyMenuColor;                                                             // 0x00CA (size: 0x1)
    FSlateColor MenuColor;                                                            // 0x00CC (size: 0x14)
    bool bPauseGameInGallery;                                                         // 0x00E0 (size: 0x1)
    TEnumAsByte<E_PauseGameMethod::Type> PauseGameMethod;                             // 0x00E1 (size: 0x1)
    TEnumAsByte<E_CameraModes::Type> CameraModes;                                     // 0x00E2 (size: 0x1)
    int32 PhotoModeViewportZOrder;                                                    // 0x00E4 (size: 0x4)
    bool bShowMouseCursorByDefault;                                                   // 0x00E8 (size: 0x1)
    bool bShowPhotoResolutionOption;                                                  // 0x00E9 (size: 0x1)
    bool bShowMouseCursorOption;                                                      // 0x00EA (size: 0x1)
    bool bFreeCameraOption;                                                           // 0x00EB (size: 0x1)
    bool bUseMaximumDistanceLimit;                                                    // 0x00EC (size: 0x1)
    double FreeCameraMaximumDistance;                                                 // 0x00F0 (size: 0x8)
    bool bIsFirstPersonGame;                                                          // 0x00F8 (size: 0x1)
    bool bShowTakePictureOption;                                                      // 0x00F9 (size: 0x1)
    bool bResetControlRotationAfterClosingPM;                                         // 0x00FA (size: 0x1)
    double MaxUpDownCameraDistance;                                                   // 0x0100 (size: 0x8)
    double MaxLeftRightCameraDistance;                                                // 0x0108 (size: 0x8)
    TArray<FS_Logos> GameLogos;                                                       // 0x0110 (size: 0x10)
    TArray<FS_PostProcessFilter> Filters;                                             // 0x0120 (size: 0x10)
    double DefaultFOV;                                                                // 0x0130 (size: 0x8)
    FRotator DefaultCameraRotation;                                                   // 0x0138 (size: 0x18)
    FPostProcessSettings DefaultPostProcess;                                          // 0x0150 (size: 0x6F0)
    bool bIsUsingGallery;                                                             // 0x0840 (size: 0x1)
    FPostProcessSettings DefaultPhotoModePostProcess;                                 // 0x0850 (size: 0x6F0)
    FPostProcessSettings MenuPhotoModePostProcess;                                    // 0x0F40 (size: 0x6F0)
    int32 GamepadIconsDTIndex;                                                        // 0x1630 (size: 0x4)
    FS_InputKeys TakeScreenshotKeys;                                                  // 0x1638 (size: 0x30)
    FS_InputKeys OpenGalleryKeys;                                                     // 0x1668 (size: 0x30)
    FS_InputKeys HideMenuKeys;                                                        // 0x1698 (size: 0x30)
    FS_InputKeys ResetValuesKeys;                                                     // 0x16C8 (size: 0x30)
    FS_InputKeys NextTabKeys;                                                         // 0x16F8 (size: 0x30)
    FS_InputKeys PrevTabKeys;                                                         // 0x1728 (size: 0x30)
    FS_InputKeys OpenClosePhotoModeKeys;                                              // 0x1758 (size: 0x30)
    FS_InputKeys ClosePhotoModeWithAnotherKey;                                        // 0x1788 (size: 0x30)
    FS_InputKeys ShowOrHideMouseCursorKeys;                                           // 0x17B8 (size: 0x30)
    FS_InputKeys OpenFreeCameraKeys;                                                  // 0x17E8 (size: 0x30)
    FS_InputKeys UpCameraKeys;                                                        // 0x1818 (size: 0x30)
    FS_InputKeys DownCameraKeys;                                                      // 0x1848 (size: 0x30)
    FKey LastKey;                                                                     // 0x1878 (size: 0x18)
    double DefaultSpringArmLength;                                                    // 0x1890 (size: 0x8)
    bool bMouseCursor;                                                                // 0x1898 (size: 0x1)
    TArray<FS_PostProcessRendering> PostProcessMaterials;                             // 0x18A0 (size: 0x10)
    FVector DefaultSocketOffset;                                                      // 0x18B0 (size: 0x18)
    TEnumAsByte<E_ScreenshotMethod::Type> ScreenshotMethod;                           // 0x18C8 (size: 0x1)
    bool bUseCustomScreenshotFolder;                                                  // 0x18C9 (size: 0x1)
    FString CustomScreenshotFolderPath;                                               // 0x18D0 (size: 0x10)
    class APlayerController* PlayerControllerRef;                                     // 0x18E0 (size: 0x8)
    bool bEnableGallery;                                                              // 0x18E8 (size: 0x1)
    class UUI_Gallery_C* GalleryWidgetRef;                                            // 0x18F0 (size: 0x8)
    FS_InputKeys NextPageKeys (Gallery);                                              // 0x18F8 (size: 0x30)
    FS_InputKeys PrevPageKeys (Gallery);                                              // 0x1928 (size: 0x30)
    FS_InputKeys FullscreenKeys (Gallery);                                            // 0x1958 (size: 0x30)
    FS_InputKeys BackKeys (Gallery);                                                  // 0x1988 (size: 0x30)
    FS_InputKeys ShowMouseKeys (Gallery);                                             // 0x19B8 (size: 0x30)
    bool bAutoSizePerTab;                                                             // 0x19E8 (size: 0x1)
    bool bFocusWhenHoveringOverSlider;                                                // 0x19E9 (size: 0x1)
    FS_PhotoModeIsOnConfis PhotoModeIsOnWarning;                                      // 0x19F0 (size: 0x60)
    FRotator DefaultControlRotation;                                                  // 0x1A50 (size: 0x18)
    bool bExistingPostProcess;                                                        // 0x1A68 (size: 0x1)
    TSubclassOf<class AActor> PostProcessVolumeClass;                                 // 0x1A70 (size: 0x8)
    bool bIsUnbound;                                                                  // 0x1A78 (size: 0x1)
    FPostProcessSettings OriginalPostProcess;                                         // 0x1A80 (size: 0x6F0)
    double GlobalTimeDilationBackup;                                                  // 0x2170 (size: 0x8)
    TEnumAsByte<E_InputMode::Type> InputModeAfterClosingPhotoMode;                    // 0x2178 (size: 0x1)
    bool bShowAlbumOption;                                                            // 0x2179 (size: 0x1)
    double CurrentTimeDilation;                                                       // 0x2180 (size: 0x8)
    FS_InputKeys LeftCameraKeys;                                                      // 0x2188 (size: 0x30)
    FS_InputKeys RightCameraKeys;                                                     // 0x21B8 (size: 0x30)
    FS_InputKeys OpenPhotoModeKeys (Gallery);                                         // 0x21E8 (size: 0x30)
    FBPC_PhotoMode_CPhotoModeOpened PhotoModeOpened;                                  // 0x2218 (size: 0x10)
    void PhotoModeOpened(double CurrentTimeDilation);
    FBPC_PhotoMode_CPhotoModeClosed PhotoModeClosed;                                  // 0x2228 (size: 0x10)
    void PhotoModeClosed();
    bool bShowCharacterRotationOption;                                                // 0x2238 (size: 0x1)
    bool bControllerTickBackup;                                                       // 0x2239 (size: 0x1)
    bool bDisableControllerInputOnFreeCamera;                                         // 0x223A (size: 0x1)
    bool bDisablePawnInputOnFreeCamera;                                               // 0x223B (size: 0x1)
    bool bIsYourSpringArmTickableWhenPaused;                                          // 0x223C (size: 0x1)
    bool bIsYourCameraTickableWhenPaused;                                             // 0x223D (size: 0x1)
    FBPC_PhotoMode_CPhotoTaken PhotoTaken;                                            // 0x2240 (size: 0x10)
    void PhotoTaken(FString PhotoPath, FString ThumbPath);
    class ABP_CustomPostProcess_C* CustomPostProcessManager;                          // 0x2250 (size: 0x8)
    TArray<FS_PhotoResolutions> PhotoResolutions;                                     // 0x2258 (size: 0x10)
    bool bIncludeDefaultScreenResolutionOption;                                       // 0x2268 (size: 0x1)
    bool bIncludePhotoWithUIOption;                                                   // 0x2269 (size: 0x1)
    TMap<FString, double> Apertures;                                                  // 0x2270 (size: 0x50)
    TEnumAsByte<E_ColorGradingMode::Type> ColorGradingMode;                           // 0x22C0 (size: 0x1)
    double DefaultFocalLength;                                                        // 0x22C8 (size: 0x8)
    FCameraFocusSettings DefaultFocusSettings;                                        // 0x22D0 (size: 0x60)
    double DefaultAperture;                                                           // 0x2330 (size: 0x8)
    TMap<class FString, class TSoftObjectPtr<UTexture2D>> Borders;                    // 0x2338 (size: 0x50)
    TEnumAsByte<E_SaveSort::Type> SavePhotosSort;                                     // 0x2388 (size: 0x1)
    FBPC_PhotoMode_COnFreeCameraStart OnFreeCameraStart;                              // 0x2390 (size: 0x10)
    void OnFreeCameraStart(class ABP_FreeCamera_C* FreeCameraReference);
    FBPC_PhotoMode_COnFreenCameraEnd OnFreenCameraEnd;                                // 0x23A0 (size: 0x10)
    void OnFreenCameraEnd();
    TEnumAsByte<ETraceTypeQuery> FocusCollisionType;                                  // 0x23B0 (size: 0x1)
    FS_InputKeys ExtraFunctionDeleteKeys (Gallery);                                   // 0x23B8 (size: 0x30)
    double RotationSensitivity;                                                       // 0x23E8 (size: 0x8)
    double RotationInterpolationSpeed;                                                // 0x23F0 (size: 0x8)
    double MovementSensitivity;                                                       // 0x23F8 (size: 0x8)
    double MovementInterpolationSpeed;                                                // 0x2400 (size: 0x8)
    bool bAllowCustomMotionBlur;                                                      // 0x2408 (size: 0x1)
    TMap<class UPrimitiveComponent*, class bool> CustomDepthComponents;               // 0x2410 (size: 0x50)

    void getScreenshotPath(FString& FullPath);
    void Calculate Weight by Ref(class APostProcessVolume* PostProcessVolume, double& PropertyTotal, double& PropertyCount, double PropertyValue, double DistanceWeight);
    void UpdateReferences(bool bCheckWidgets);
    void GetCameraManager(class APlayerCameraManager*& PlayerCameraManager);
    void Get Active Camera(class UCameraComponent*& CurrentCamera, class USpringArmComponent*& CurrentSpringArm);
    void UpdateOutputFolder(FString Custom Path);
    void GetCameraLocation(FVector& CameraLocation);
    void GetSliderCameraDistance(double& CameraDistance);
    void GetSliderRoll(double& Roll);
    void GetSliderFOV(double& FOV);
    void Create Post Process();
    void UnpausedGameAxisMovementControl(double AxisValueIn, double& AxisValueOut);
    void IconSelector - Gallery(FKey Key);
    void IconSelector - Photo Mode Menu(FKey Key);
    void Photo Mode(FKey Key);
    void OpenGallery(FKey LastKey);
    void ReceiveBeginPlay();
    void InitWidgets();
    void ResetPhotoMode();
    void ResetGallery();
    void ExecuteUbergraph_BPC_PhotoMode(int32 EntryPoint);
    void OnFreenCameraEnd__DelegateSignature();
    void OnFreeCameraStart__DelegateSignature(class ABP_FreeCamera_C* FreeCameraReference);
    void PhotoTaken__DelegateSignature(FString PhotoPath, FString ThumbPath);
    void PhotoModeClosed__DelegateSignature();
    void PhotoModeOpened__DelegateSignature(double CurrentTimeDilation);
}; // Size: 0x2460

#endif
