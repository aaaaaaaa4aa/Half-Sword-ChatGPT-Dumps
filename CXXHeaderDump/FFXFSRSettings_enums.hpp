enum class EFFXFSRDeDitherMode {
    Off = 0,
    Full = 1,
    HairOnly = 2,
    EFFXFSRDeDitherMode_MAX = 3,
};

enum class EFFXFSRFrameGenUIMode {
    SlateRedraw = 0,
    UIExtraction = 1,
    EFFXFSRFrameGenUIMode_MAX = 2,
};

enum class EFFXFSRHistoryFormat {
    FloatRGBA = 0,
    FloatR11G11B10 = 1,
    EFFXFSRHistoryFormat_MAX = 2,
};

enum class EFFXFSRLandscapeHISMMode {
    Off = 0,
    AllStatic = 1,
    StaticWPO = 2,
    EFFXFSRLandscapeHISMMode_MAX = 3,
};

enum class EFFXFSRPaceRHIFrameMode {
    None = 0,
    CustomPresentVSync = 1,
    EFFXFSRPaceRHIFrameMode_MAX = 2,
};

enum class EFFXFSRQualityMode {
    NativeAA = 0,
    Quality = 1,
    Balanced = 2,
    Performance = 3,
    UltraPerformance = 4,
    EFFXFSRQualityMode_MAX = 5,
};

