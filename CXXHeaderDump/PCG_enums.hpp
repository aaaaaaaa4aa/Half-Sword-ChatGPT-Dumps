enum class EDeterminismLevel {
    None = 0,
    NoDeterminism = 0,
    Basic = 1,
    OrderOrthogonal = 2,
    OrderConsistent = 3,
    OrderIndependent = 4,
    Deterministic = 4,
    EDeterminismLevel_MAX = 5,
};

enum class EPCGActorFilter {
    Self = 0,
    Parent = 1,
    Root = 2,
    AllWorldActors = 3,
    Original = 4,
    EPCGActorFilter_MAX = 5,
};

enum class EPCGActorSelection {
    ByTag = 0,
    ByName = 1,
    ByClass = 2,
    ByPath = 3,
    Unknown = 4,
    EPCGActorSelection_MAX = 5,
};

enum class EPCGAttachOptions {
    NotAttached = 0,
    Attached = 1,
    InFolder = 2,
    EPCGAttachOptions_MAX = 3,
};

enum class EPCGAttributeAccessorFlags {
    StrictType = 1,
    AllowBroadcast = 2,
    AllowConstructible = 4,
    AllowSetDefaultValue = 8,
    EPCGAttributeAccessorFlags_MAX = 9,
};

enum class EPCGAttributeFilterOperation {
    KeepSelectedAttributes = 0,
    DeleteSelectedAttributes = 1,
    EPCGAttributeFilterOperation_MAX = 2,
};

enum class EPCGAttributeFilterOperator {
    Greater = 0,
    GreaterOrEqual = 1,
    Lesser = 2,
    LesserOrEqual = 3,
    Equal = 4,
    NotEqual = 5,
    InRange = 6,
    Substring = 7,
    Matches = 8,
    EPCGAttributeFilterOperator_MAX = 9,
};

enum class EPCGAttributeNoiseMode {
    Set = 0,
    Minimum = 1,
    Maximum = 2,
    Add = 3,
    Multiply = 4,
    EPCGAttributeNoiseMode_MAX = 5,
};

enum class EPCGAttributePropertySelection {
    Attribute = 0,
    PointProperty = 1,
    ExtraProperty = 2,
    EPCGAttributePropertySelection_MAX = 3,
};

enum class EPCGAttributeReduceOperation {
    Average = 0,
    Max = 1,
    Min = 2,
    Sum = 3,
};

enum class EPCGAttributeSelectAxis {
    X = 0,
    Y = 1,
    Z = 2,
    W = 3,
    CustomAxis = 4,
    EPCGAttributeSelectAxis_MAX = 5,
};

enum class EPCGAttributeSelectOperation {
    Min = 0,
    Max = 1,
    Median = 2,
};

enum class EPCGBoundsModifierMode {
    Set = 0,
    Intersect = 1,
    Include = 2,
    Translate = 3,
    Scale = 4,
    EPCGBoundsModifierMode_MAX = 5,
};

enum class EPCGChangeType {
    None = 0,
    Cosmetic = 1,
    Settings = 2,
    Input = 4,
    Edge = 8,
    Node = 16,
    Structural = 32,
    GenerationGrid = 64,
    EPCGChangeType_MAX = 65,
};

enum class EPCGComponentDirtyFlag {
    None = 0,
    Actor = 1,
    Landscape = 2,
    Input = 4,
    Data = 8,
    All = 15,
    EPCGComponentDirtyFlag_MAX = 16,
};

enum class EPCGComponentGenerationTrigger {
    GenerateOnLoad = 0,
    GenerateOnDemand = 1,
    GenerateAtRuntime = 2,
    EPCGComponentGenerationTrigger_MAX = 3,
};

enum class EPCGComponentInput {
    Actor = 0,
    Landscape = 1,
    Other = 2,
    EPCGComponentInput_MAX = 3,
};

enum class EPCGControlFlowSelectionMode {
    Integer = 0,
    Enum = 1,
    String = 2,
    EPCGControlFlowSelectionMode_MAX = 3,
};

enum class EPCGCoordinateSpace {
    World = 0,
    OriginalComponent = 1,
    LocalComponent = 2,
    EPCGCoordinateSpace_MAX = 3,
};

enum class EPCGCopyPointsInheritanceMode {
    Relative = 0,
    Source = 1,
    Target = 2,
    EPCGCopyPointsInheritanceMode_MAX = 3,
};

enum class EPCGCopyPointsMetadataInheritanceMode {
    SourceFirst = 0,
    TargetFirst = 1,
    SourceOnly = 2,
    TargetOnly = 3,
    None = 4,
    EPCGCopyPointsMetadataInheritanceMode_MAX = 5,
};

enum class EPCGCopyPointsTagInheritanceMode {
    Both = 0,
    Source = 1,
    Target = 2,
    EPCGCopyPointsTagInheritanceMode_MAX = 3,
};

enum class EPCGCreateSplineMode {
    CreateDataOnly = 0,
    CreateComponent = 1,
    CreateNewActor = 2,
    EPCGCreateSplineMode_MAX = 3,
};

enum class EPCGDataType {
    None = 0,
    Point = 2,
    Spline = 4,
    LandscapeSpline = 8,
    PolyLine = 12,
    Landscape = 16,
    Texture = 32,
    RenderTarget = 64,
    BaseTexture = 96,
    Surface = 112,
    Volume = 128,
    Primitive = 256,
    Concrete = 510,
    Composite = 512,
    Spatial = 1022,
    Param = 134217728,
    PointOrParam = 134217730,
    Settings = 268435456,
    Other = 536870912,
    Any = 1073741823,
    EPCGDataType_MAX = 1073741824,
};

enum class EPCGDebugVisScaleMethod {
    Relative = 0,
    Absolute = 1,
    Extents = 2,
    EPCGDebugVisScaleMethod_MAX = 3,
};

enum class EPCGDifferenceDensityFunction {
    Minimum = 0,
    ClampedSubstraction = 1,
    Binary = 2,
    EPCGDifferenceDensityFunction_MAX = 3,
};

enum class EPCGDifferenceMode {
    Inferred = 0,
    Continuous = 1,
    Discrete = 2,
    EPCGDifferenceMode_MAX = 3,
};

enum class EPCGEditorDirtyMode {
    Normal = 0,
    Preview = 1,
    LoadAsPreview = 2,
    EPCGEditorDirtyMode_MAX = 3,
};

enum class EPCGExclusiveDataType {
    None = 0,
    Point = 1,
    Spline = 2,
    LandscapeSpline = 3,
    PolyLine = 4,
    Landscape = 5,
    Texture = 6,
    RenderTarget = 7,
    BaseTexture = 8,
    Surface = 9,
    Volume = 10,
    Primitive = 11,
    Concrete = 12,
    Composite = 13,
    Spatial = 14,
    Param = 15,
    Settings = 16,
    Other = 17,
    Any = 18,
    PointOrParam = 19,
    EPCGExclusiveDataType_MAX = 20,
};

enum class EPCGExecutionPhase {
    NotExecuted = 0,
    PrepareData = 1,
    Execute = 2,
    PostExecute = 3,
    Done = 4,
    EPCGExecutionPhase_MAX = 5,
};

enum class EPCGExtraProperties {
    Index = 0,
    EPCGExtraProperties_MAX = 1,
};

enum class EPCGFilterByTagOperation {
    KeepTagged = 0,
    RemoveTagged = 1,
    EPCGFilterByTagOperation_MAX = 2,
};

enum class EPCGGetDataFromActorMode {
    ParseActorComponents = 0,
    GetSinglePoint = 1,
    GetDataFromProperty = 2,
    GetDataFromPCGComponent = 3,
    GetDataFromPCGComponentOrParseComponents = 4,
    EPCGGetDataFromActorMode_MAX = 5,
};

enum class EPCGGridPivot {
    Global = 0,
    OriginalComponent = 1,
    LocalComponent = 2,
    EPCGGridPivot_MAX = 3,
};

enum class EPCGHiGenGrid {
    Uninitialized = 0,
    Grid4 = 4,
    Grid8 = 8,
    Grid16 = 16,
    Grid32 = 32,
    Grid64 = 64,
    Grid128 = 128,
    Grid256 = 256,
    Grid512 = 512,
    Grid1024 = 1024,
    Grid2048 = 2048,
    GridMin = 4,
    GridMax = 2048,
    Unbounded = 2147483648,
    EPCGHiGenGrid_MAX = 2147483649,
};

enum class EPCGIntersectionDensityFunction {
    Multiply = 0,
    Minimum = 1,
    EPCGIntersectionDensityFunction_MAX = 2,
};

enum class EPCGLandscapeCacheSerializationContents {
    SerializeOnlyPositionsAndNormals = 0,
    SerializeOnlyLayerData = 1,
    SerializeAll = 2,
    EPCGLandscapeCacheSerializationContents_MAX = 3,
};

enum class EPCGLandscapeCacheSerializationMode {
    SerializeOnlyAtCook = 0,
    NeverSerialize = 1,
    AlwaysSerialize = 2,
    EPCGLandscapeCacheSerializationMode_MAX = 3,
};

enum class EPCGLocalGridPivot {
    Global = 0,
    OriginalComponent = 1,
    LocalComponent = 2,
    EPCGLocalGridPivot_MAX = 3,
};

enum class EPCGMatchMaxDistanceMode {
    NoMaxDistance = 0,
    UseConstantMaxDistance = 1,
    AttributeMaxDistance = 2,
    EPCGMatchMaxDistanceMode_MAX = 3,
};

enum class EPCGMeshSelectorMaterialOverrideMode {
    NoOverride = 0,
    StaticOverride = 1,
    ByAttributeOverride = 2,
    EPCGMeshSelectorMaterialOverrideMode_MAX = 3,
};

enum class EPCGMetadataBitwiseOperation {
    And = 0,
    Not = 1,
    Or = 2,
    Xor = 3,
    EPCGMetadataBitwiseOperation_MAX = 4,
};

enum class EPCGMetadataBooleanOperation {
    And = 0,
    Not = 1,
    Or = 2,
    Xor = 3,
    EPCGMetadataBooleanOperation_MAX = 4,
};

enum class EPCGMetadataCompareOperation {
    Equal = 0,
    NotEqual = 1,
    Greater = 2,
    GreaterOrEqual = 3,
    Less = 4,
    LessOrEqual = 5,
    EPCGMetadataCompareOperation_MAX = 6,
};

enum class EPCGMetadataFilterMode {
    ExcludeAttributes = 0,
    IncludeAttributes = 1,
    EPCGMetadataFilterMode_MAX = 2,
};

enum class EPCGMetadataMakeRotatorOp {
    MakeRotFromX = 0,
    MakeRotFromY = 1,
    MakeRotFromZ = 2,
    MakeRotFromXY = 3,
    MakeRotFromYX = 4,
    MakeRotFromXZ = 5,
    MakeRotFromZX = 6,
    MakeRotFromYZ = 7,
    MakeRotFromZY = 8,
    MakeRotFromAxes = 9,
    MakeRotFromAngles = 10,
    EPCGMetadataMakeRotatorOp_MAX = 11,
};

enum class EPCGMetadataMakeVector3 {
    ThreeValues = 0,
    Vector2AndValue = 1,
    EPCGMetadataMakeVector3_MAX = 2,
};

enum class EPCGMetadataMakeVector4 {
    FourValues = 0,
    Vector2AndTwoValues = 1,
    TwoVector2 = 2,
    Vector3AndValue = 3,
    EPCGMetadataMakeVector4_MAX = 4,
};

enum class EPCGMetadataMathsOperation {
    UnaryOp = 1024,
    Sign = 1025,
    Frac = 1026,
    Truncate = 1027,
    Round = 1028,
    Sqrt = 1029,
    Abs = 1030,
    Floor = 1031,
    Ceil = 1032,
    OneMinus = 1033,
    BinaryOp = 2048,
    Add = 2049,
    Subtract = 2050,
    Multiply = 2051,
    Divide = 2052,
    Max = 2053,
    Min = 2054,
    Pow = 2055,
    ClampMin = 2056,
    ClampMax = 2057,
    Modulo = 2058,
    Set = 2059,
    TernaryOp = 4096,
    Clamp = 4097,
    Lerp = 4098,
};

enum class EPCGMetadataOp {
    Min = 0,
    Max = 1,
    Sub = 2,
    Add = 3,
    Mul = 4,
    Div = 5,
    SourceValue = 6,
    TargetValue = 7,
};

enum class EPCGMetadataRotatorOperation {
    RotatorOp = 0,
    Combine = 1,
    Invert = 2,
    Lerp = 3,
    Normalize = 4,
    TransformOp = 100,
    TransformRotation = 101,
    InverseTransformRotation = 102,
    EPCGMetadataRotatorOperation_MAX = 103,
};

enum class EPCGMetadataSettingsBaseMode {
    Inferred = 0,
    NoBroadcast = 1,
    Broadcast = 2,
    EPCGMetadataSettingsBaseMode_MAX = 3,
};

enum class EPCGMetadataSettingsBaseTypes {
    AutoUpcastTypes = 0,
    StrictTypes = 1,
    EPCGMetadataSettingsBaseTypes_MAX = 2,
};

enum class EPCGMetadataStringOperation {
    Append = 0,
    EPCGMetadataStringOperation_MAX = 1,
};

enum class EPCGMetadataTransformOperation {
    Compose = 0,
    Invert = 1,
    Lerp = 2,
    EPCGMetadataTransformOperation_MAX = 3,
};

enum class EPCGMetadataTrigOperation {
    Acos = 0,
    Asin = 1,
    Atan = 2,
    Atan2 = 3,
    Cos = 4,
    Sin = 5,
    Tan = 6,
    DegToRad = 7,
    RadToDeg = 8,
    EPCGMetadataTrigOperation_MAX = 9,
};

enum class EPCGMetadataTypes {
    Float = 0,
    Double = 1,
    Integer32 = 2,
    Integer64 = 3,
    Vector2 = 4,
    Vector = 5,
    Vector4 = 6,
    Quaternion = 7,
    Transform = 8,
    String = 9,
    Boolean = 10,
    Rotator = 11,
    Name = 12,
    SoftObjectPath = 13,
    SoftClassPath = 14,
    Count = 15,
    Unknown = 255,
    EPCGMetadataTypes_MAX = 256,
};

enum class EPCGMetadataTypesConstantStructStringMode {
    String = 0,
    SoftObjectPath = 1,
    SoftClassPath = 2,
    EPCGMetadataTypesConstantStructStringMode_MAX = 3,
};

enum class EPCGMetadataVectorOperation {
    VectorOp = 0,
    Cross = 1,
    Dot = 2,
    Distance = 3,
    Normalize = 4,
    Length = 5,
    RotateAroundAxis = 6,
    TransformOp = 100,
    TransformDirection = 101,
    TransformLocation = 102,
    InverseTransformDirection = 103,
    InverseTransformLocation = 104,
    EPCGMetadataVectorOperation_MAX = 105,
};

enum class EPCGNodeTitleType {
    FullTitle = 0,
    ListView = 1,
    EPCGNodeTitleType_MAX = 2,
};

enum class EPCGPinStatus {
    Normal = 0,
    Required = 1,
    Advanced = 2,
    EPCGPinStatus_MAX = 3,
};

enum class EPCGPinUsage {
    Normal = 0,
    Loop = 1,
    Feedback = 2,
    DependencyOnly = 3,
    EPCGPinUsage_MAX = 4,
};

enum class EPCGPointExtentsModifierMode {
    Set = 0,
    Minimum = 1,
    Maximum = 2,
    Add = 3,
    Multiply = 4,
    EPCGPointExtentsModifierMode_MAX = 5,
};

enum class EPCGPointNeighborhoodDensityMode {
    None = 0,
    SetNormalizedDistanceToDensity = 1,
    SetAverageDensity = 2,
    EPCGPointNeighborhoodDensityMode_MAX = 3,
};

enum class EPCGPointPosition {
    CellCenter = 0,
    CellCorners = 1,
    EPCGPointPosition_MAX = 2,
};

enum class EPCGPointProperties {
    Density = 0,
    BoundsMin = 1,
    BoundsMax = 2,
    Extents = 3,
    Color = 4,
    Position = 5,
    Rotation = 6,
    Scale = 7,
    Transform = 8,
    Steepness = 9,
    LocalCenter = 10,
    Seed = 11,
    EPCGPointProperties_MAX = 12,
};

enum class EPCGPrintVerbosity {
    Log = 5,
    Warning = 3,
    Error = 2,
    EPCGPrintVerbosity_MAX = 6,
};

enum class EPCGProjectionColorBlendMode {
    SourceValue = 0,
    TargetValue = 1,
    Add = 2,
    Subtract = 3,
    Multiply = 4,
    EPCGProjectionColorBlendMode_MAX = 5,
};

enum class EPCGProjectionTagMergeMode {
    Source = 0,
    Target = 1,
    Both = 2,
    EPCGProjectionTagMergeMode_MAX = 3,
};

enum class EPCGProxyInterfaceMode {
    ByNativeElement = 0,
    ByBlueprintElement = 1,
    BySettings = 2,
    EPCGProxyInterfaceMode_MAX = 3,
};

enum class EPCGSelfPruningType {
    LargeToSmall = 0,
    SmallToLarge = 1,
    AllEqual = 2,
    None = 3,
    RemoveDuplicates = 4,
    EPCGSelfPruningType_MAX = 5,
};

enum class EPCGSettingsExecutionMode {
    Enabled = 0,
    Debug = 1,
    Isolated = 2,
    Disabled = 3,
    EPCGSettingsExecutionMode_MAX = 4,
};

enum class EPCGSettingsType {
    InputOutput = 0,
    Spatial = 1,
    Density = 2,
    Blueprint = 3,
    Metadata = 4,
    Filter = 5,
    Sampler = 6,
    Spawner = 7,
    Subgraph = 8,
    Debug = 9,
    Generic = 10,
    Param = 11,
    HierarchicalGeneration = 12,
    ControlFlow = 13,
    PointOps = 14,
    GraphParameters = 15,
    Reroute = 16,
    EPCGSettingsType_MAX = 17,
};

enum class EPCGSortMethod {
    Ascending = 0,
    Descending = 1,
    EPCGSortMethod_MAX = 2,
};

enum class EPCGSpawnActorGenerationTrigger {
    Default = 0,
    ForceGenerate = 1,
    DoNotGenerateInEditor = 2,
    DoNotGenerate = 3,
    EPCGSpawnActorGenerationTrigger_MAX = 4,
};

enum class EPCGSpawnActorOption {
    CollapseActors = 0,
    MergePCGOnly = 1,
    NoMerging = 2,
    EPCGSpawnActorOption_MAX = 3,
};

enum class EPCGSplineSamplingDimension {
    OnSpline = 0,
    OnHorizontal = 1,
    OnVertical = 2,
    OnVolume = 3,
    OnInterior = 4,
    EPCGSplineSamplingDimension_MAX = 5,
};

enum class EPCGSplineSamplingFill {
    Fill = 0,
    EdgesOnly = 1,
    EPCGSplineSamplingFill_MAX = 2,
};

enum class EPCGSplineSamplingInteriorOrientation {
    Uniform = 0,
    FollowCurvature = 1,
    EPCGSplineSamplingInteriorOrientation_MAX = 2,
};

enum class EPCGSplineSamplingMode {
    Subdivision = 0,
    Distance = 1,
    NumberOfSamples = 2,
    EPCGSplineSamplingMode_MAX = 3,
};

enum class EPCGSplitAxis {
    X = 0,
    Y = 1,
    Z = 2,
    EPCGSplitAxis_MAX = 3,
};

enum class EPCGTagFilterOperation {
    KeepOnlySelectedTags = 0,
    DeleteSelectedTags = 1,
    EPCGTagFilterOperation_MAX = 2,
};

enum class EPCGTextureAddressMode {
    Clamp = 0,
    Wrap = 1,
    EPCGTextureAddressMode_MAX = 2,
};

enum class EPCGTextureColorChannel {
    Red = 0,
    Green = 1,
    Blue = 2,
    Alpha = 3,
    EPCGTextureColorChannel_MAX = 4,
};

enum class EPCGTextureDensityFunction {
    Ignore = 0,
    Multiply = 1,
    EPCGTextureDensityFunction_MAX = 2,
};

enum class EPCGTextureFilter {
    Point = 0,
    Bilinear = 1,
    EPCGTextureFilter_MAX = 2,
};

enum class EPCGTextureMappingMethod {
    Planar = 0,
    UVCoordinates = 1,
    EPCGTextureMappingMethod_MAX = 2,
};

enum class EPCGTransformLerpMode {
    QuatInterp = 0,
    EulerInterp = 1,
    DualQuatInterp = 2,
    EPCGTransformLerpMode_MAX = 3,
};

enum class EPCGTypeConversion {
    NoConversionRequired = 0,
    CollapseToPoint = 1,
    Filter = 2,
    MakeConcrete = 3,
    SplineToSurface = 4,
    Failed = 5,
    EPCGTypeConversion_MAX = 6,
};

enum class EPCGUnionDensityFunction {
    Maximum = 0,
    ClampedAddition = 1,
    Binary = 2,
    EPCGUnionDensityFunction_MAX = 3,
};

enum class EPCGUnionType {
    LeftToRightPriority = 0,
    RightToLeftPriority = 1,
    KeepAll = 2,
    EPCGUnionType_MAX = 3,
};

enum class EPCGUnitTestDummyEnum {
    One = 0,
    Two = 1,
    Three = 2,
    EPCGUnitTestDummyEnum_MAX = 3,
};

enum class EPCGWorldQueryFilterByTag {
    NoTagFilter = 0,
    IncludeTagged = 1,
    ExcludeTagged = 2,
    EPCGWorldQueryFilterByTag_MAX = 3,
};

enum class PCGDistanceShape {
    SphereBounds = 0,
    BoxBounds = 1,
    Center = 2,
    PCGDistanceShape_MAX = 3,
};

enum class PCGNormalToDensityMode {
    Set = 0,
    Minimum = 1,
    Maximum = 2,
    Add = 3,
    Subtract = 4,
    Multiply = 5,
    Divide = 6,
    PCGNormalToDensityMode_MAX = 7,
};

enum class PCGSpatialNoiseMask2DMode {
    Perlin = 0,
    Caustic = 1,
    FractionalBrownian = 2,
    PCGSpatialNoiseMask2DMode_MAX = 3,
};

enum class PCGSpatialNoiseMode {
    Perlin2D = 0,
    Caustic2D = 1,
    Voronoi2D = 2,
    FractionalBrownian2D = 3,
    EdgeMask2D = 4,
    PCGSpatialNoiseMode_MAX = 5,
};

