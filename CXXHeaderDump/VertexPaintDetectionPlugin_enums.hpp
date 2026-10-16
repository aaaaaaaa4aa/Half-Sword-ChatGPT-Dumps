enum class EApplyVertexColorSetting {
    EAddVertexColor = 0,
    ESetVertexColor = 1,
    EApplyVertexColorSetting_MAX = 2,
};

enum class ELoadColorSnippetDataAssetOptions {
    LoadPaintColorSnippetDataAsset = 0,
    LoadCompareWithColorSnippetDataAsset = 1,
    ELoadColorSnippetDataAssetOptions_MAX = 2,
};

enum class EPaintEntireMeshPropogateToLODsMethod {
    ModifiedEngineMethod = 0,
    DontPropogateLOD0ToAllLODs = 1,
    EPaintEntireMeshPropogateToLODsMethod_MAX = 2,
};

enum class EPaintWithinAreaShape {
    IsSquareOrRectangleShape = 0,
    IsSphereShape = 1,
    IsComplexShape = 2,
    EPaintWithinAreaShape_MAX = 3,
};

enum class ESurfaceAtChannel {
    Default = 0,
    RedChannel = 1,
    GreenChannel = 2,
    BlueChannel = 3,
    AlphaChannel = 4,
    ESurfaceAtChannel_MAX = 5,
};

enum class ETVertexPaintThreadPriority {
    TimeCritical = 0,
    Highest = 1,
    Normal = 2,
    Slowest = 3,
    ETVertexPaintThreadPriority_MAX = 4,
};

enum class EVertexColorChannel {
    RedChannel = 0,
    GreenChannel = 1,
    BlueChannel = 2,
    AlphaChannel = 3,
    EVertexColorChannel_MAX = 4,
};

enum class EVertexPaintAtLocationFallOffType {
    OutwardFallOff = 0,
    InwardFallOff = 1,
    SphericalFallOff = 2,
    EVertexPaintAtLocationFallOffType_MAX = 3,
};

enum class EVertexPaintWithinAreaFallOffType {
    SphericalFromCenter = 0,
    GradiantUpward = 1,
    GradiantDownward = 2,
    EVertexPaintWithinAreaFallOffType_MAX = 3,
};

enum class FRVPDPPaintColorSnippetSetting {
    PaintSingleSnippet = 0,
    PaintGroupSnippet = 1,
    FRVPDPPaintColorSnippetSetting_MAX = 2,
};

enum class FRVPDPStartFallOffDistanceFromSetting {
    BaseOfPaintShape = 0,
    EndOfPaintShape = 1,
    FRVPDPStartFallOffDistanceFromSetting_MAX = 2,
};

