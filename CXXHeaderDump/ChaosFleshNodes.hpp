#ifndef UE4SS_SDK_ChaosFleshNodes_HPP
#define UE4SS_SDK_ChaosFleshNodes_HPP

#include "ChaosFleshNodes_enums.hpp"

struct FAddKinematicParticlesDataflowNode : public FDataflowNode
{
    float Radius;                                                                     // 0x00E8 (size: 0x4)
    FTransform Transform;                                                             // 0x00F0 (size: 0x60)
    ESkeletalSeletionMode SkeletalSelectionMode;                                      // 0x0150 (size: 0x1)
    FManagedArrayCollection Collection;                                               // 0x0158 (size: 0xB0)
    class USkeletalMesh* SkeletalMeshIn;                                              // 0x0208 (size: 0x8)
    TArray<int32> VertexIndicesIn;                                                    // 0x0210 (size: 0x10)
    int32 BoneIndexIn;                                                                // 0x0220 (size: 0x4)
    TArray<int32> TargetIndicesOut;                                                   // 0x0228 (size: 0x10)

}; // Size: 0x240

struct FAppendTetrahedralCollectionDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection1;                                              // 0x00E8 (size: 0xB0)
    FManagedArrayCollection Collection2;                                              // 0x0198 (size: 0xB0)
    TArray<FString> GeometryGroupGuidsOut1;                                           // 0x0248 (size: 0x10)
    TArray<FString> GeometryGroupGuidsOut2;                                           // 0x0258 (size: 0x10)

}; // Size: 0x268

struct FAppendToCollectionTransformAttributeDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x00E8 (size: 0xB0)
    FTransform TransformIn;                                                           // 0x01A0 (size: 0x60)
    FString AttributeName;                                                            // 0x0200 (size: 0x10)
    FString GroupName;                                                                // 0x0210 (size: 0x10)

}; // Size: 0x220

struct FAuthorSceneCollisionCandidates : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x00E8 (size: 0xB0)
    bool bSurfaceVerticesOnly;                                                        // 0x0198 (size: 0x1)
    TArray<int32> VertexIndices;                                                      // 0x01A0 (size: 0x10)
    int32 OriginBoneIndex;                                                            // 0x01B0 (size: 0x4)

}; // Size: 0x1B8

struct FBindForRenderToSkeletalMeshDataflowNode : public FDataflowNode
{
    class USkeletalMesh* SkeletalMesh;                                                // 0x00E8 (size: 0x8)
    FManagedArrayCollection Collection;                                               // 0x00F0 (size: 0xB0)

}; // Size: 0x1A0

struct FBindVerticesToSkeleton : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x00E8 (size: 0xB0)
    TArray<int32> VertexIndices;                                                      // 0x0198 (size: 0x10)
    int32 OriginBoneIndex;                                                            // 0x01A8 (size: 0x4)

}; // Size: 0x1B0

struct FCalculateTetMetrics : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x00E8 (size: 0xB0)

}; // Size: 0x198

struct FComputeFiberFieldNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x00E8 (size: 0xB0)
    TArray<int32> OriginIndices;                                                      // 0x0198 (size: 0x10)
    TArray<int32> InsertionIndices;                                                   // 0x01A8 (size: 0x10)
    FString OriginInsertionGroupName;                                                 // 0x01B8 (size: 0x10)
    FString OriginVertexFieldName;                                                    // 0x01C8 (size: 0x10)
    FString InsertionVertexFieldName;                                                 // 0x01D8 (size: 0x10)
    int32 MaxIterations;                                                              // 0x01E8 (size: 0x4)
    float Tolerance;                                                                  // 0x01EC (size: 0x4)

}; // Size: 0x1F0

struct FComputeIslandsNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x00E8 (size: 0xB0)

}; // Size: 0x198

struct FConstructTetGridNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x00E8 (size: 0xB0)
    FIntVector GridCellCount;                                                         // 0x0198 (size: 0xC)
    FVector GridDomain;                                                               // 0x01A8 (size: 0x18)
    bool bDiscardInteriorTriangles;                                                   // 0x01C0 (size: 0x1)

}; // Size: 0x1C8

struct FExtractGEOFloatVector : public FDataflowNode
{
    FGEOMapStringArrayFloat FloatVectorVars;                                          // 0x00E8 (size: 0x50)
    FString VarName;                                                                  // 0x0138 (size: 0x10)
    TArray<float> Value;                                                              // 0x0148 (size: 0x10)

}; // Size: 0x158

struct FExtractGEOInt : public FDataflowNode
{
    FGEOMapStringInt IntVars;                                                         // 0x00E8 (size: 0x50)
    FString VarName;                                                                  // 0x0138 (size: 0x10)
    int32 Value;                                                                      // 0x0148 (size: 0x4)

}; // Size: 0x150

struct FExtractGEOIntVector : public FDataflowNode
{
    FGEOMapStringArrayInt IntVectorVars;                                              // 0x00E8 (size: 0x50)
    FString VarName;                                                                  // 0x0138 (size: 0x10)
    TArray<int32> Value;                                                              // 0x0148 (size: 0x10)

}; // Size: 0x158

struct FFleshAssetTerminalDataflowNode : public FDataflowTerminalNode
{
    FManagedArrayCollection Collection;                                               // 0x00E8 (size: 0xB0)

}; // Size: 0x198

struct FGEOMapStringArrayFloat
{
}; // Size: 0x50

struct FGEOMapStringArrayInt
{
}; // Size: 0x50

struct FGEOMapStringInt
{
}; // Size: 0x50

struct FGenerateFiberDirectionsDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x00E8 (size: 0xB0)

}; // Size: 0x198

struct FGenerateOriginInsertionNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x00E8 (size: 0xB0)
    TArray<int32> OriginIndicesIn;                                                    // 0x0198 (size: 0x10)
    TArray<int32> InsertionIndicesIn;                                                 // 0x01A8 (size: 0x10)
    TArray<int32> OriginIndicesOut;                                                   // 0x01B8 (size: 0x10)
    TArray<int32> InsertionIndicesOut;                                                // 0x01C8 (size: 0x10)
    float Radius;                                                                     // 0x01D8 (size: 0x4)

}; // Size: 0x1E0

struct FGenerateSkeletalBindings : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x00E8 (size: 0xB0)
    int32 BoneIndexIn;                                                                // 0x0198 (size: 0x4)
    class USkeletalMesh* SkeletalMeshIn;                                              // 0x01A0 (size: 0x8)

}; // Size: 0x1A8

struct FGenerateSurfaceBindings : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x00E8 (size: 0xB0)
    class UStaticMesh* StaticMeshIn;                                                  // 0x0198 (size: 0x8)
    class USkeletalMesh* SkeletalMeshIn;                                              // 0x01A0 (size: 0x8)
    TArray<FString> GeometryGroupGuidsIn;                                             // 0x01A8 (size: 0x10)
    bool bDoSurfaceProjection;                                                        // 0x01B8 (size: 0x1)
    uint32 SurfaceProjectionIterations;                                               // 0x01BC (size: 0x4)
    bool bDoOrphanReparenting;                                                        // 0x01C0 (size: 0x1)

}; // Size: 0x1C8

struct FGenerateTetrahedralCollectionDataflowNodes : public FDataflowNode
{
    TEnumAsByte<TetMeshingMethod> Method;                                             // 0x00E8 (size: 0x1)
    int32 NumCells;                                                                   // 0x00EC (size: 0x4)
    double OffsetPercent;                                                             // 0x00F0 (size: 0x8)
    double IdealEdgeLength;                                                           // 0x00F8 (size: 0x8)
    int32 MaxIterations;                                                              // 0x0100 (size: 0x4)
    double StopEnergy;                                                                // 0x0108 (size: 0x8)
    double EpsRel;                                                                    // 0x0110 (size: 0x8)
    bool bCoarsen;                                                                    // 0x0118 (size: 0x1)
    bool bExtractManifoldBoundarySurface;                                             // 0x0119 (size: 0x1)
    bool bSkipSimplification;                                                         // 0x011A (size: 0x1)
    bool bInvertOutputTets;                                                           // 0x011B (size: 0x1)
    class UStaticMesh* StaticMesh;                                                    // 0x0120 (size: 0x8)
    class USkeletalMesh* SkeletalMesh;                                                // 0x0128 (size: 0x8)
    bool bComputeByComponent;                                                         // 0x0130 (size: 0x1)
    FManagedArrayCollection Collection;                                               // 0x0138 (size: 0xB0)
    bool bDiscardInteriorTriangles;                                                   // 0x01E8 (size: 0x1)

}; // Size: 0x1F0

struct FGetFleshAssetDataflowNode : public FDataflowNode
{
    class UFleshAsset* FleshAsset;                                                    // 0x00E8 (size: 0x8)
    FManagedArrayCollection Output;                                                   // 0x00F0 (size: 0xB0)

}; // Size: 0x1A0

struct FGetSurfaceIndicesNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x00E8 (size: 0xB0)
    TArray<FString> GeometryGroupGuidsIn;                                             // 0x0198 (size: 0x10)
    TArray<int32> SurfaceIndicesOut;                                                  // 0x01A8 (size: 0x10)

}; // Size: 0x1B8

struct FImportGEO : public FDataflowNode
{
    FFilePath Filename;                                                               // 0x00E8 (size: 0x10)
    FManagedArrayCollection Collection;                                               // 0x00F8 (size: 0xB0)
    bool bImportTetrahedronMesh;                                                      // 0x01A8 (size: 0x1)
    bool bDiscardInteriorTriangles;                                                   // 0x01A9 (size: 0x1)
    FGEOMapStringInt IntVarsOutput;                                                   // 0x01B0 (size: 0x50)
    FGEOMapStringArrayInt IntVectorVarsOutput;                                        // 0x0200 (size: 0x50)
    FGEOMapStringArrayFloat FloatVectorVarsOutput;                                    // 0x0250 (size: 0x50)

}; // Size: 0x3F8

struct FIsolateComponentNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x00E8 (size: 0xB0)
    bool bDeleteHiddenFaces;                                                          // 0x0198 (size: 0x1)
    FString TargetComponentIndex;                                                     // 0x01A0 (size: 0x10)

}; // Size: 0x1B0

struct FKinematicBodySetupInitializationDataflowNode : public FDataflowNode
{
    FTransform Transform;                                                             // 0x00F0 (size: 0x60)
    FManagedArrayCollection Collection;                                               // 0x0150 (size: 0xB0)
    class USkeletalMesh* SkeletalMeshIn;                                              // 0x0200 (size: 0x8)

}; // Size: 0x210

struct FKinematicInitializationDataflowNode : public FDataflowNode
{
    float Radius;                                                                     // 0x00E8 (size: 0x4)
    ESkeletalSeletionMode SkeletalSelectionMode;                                      // 0x00EC (size: 0x1)
    FManagedArrayCollection Collection;                                               // 0x00F0 (size: 0xB0)
    class USkeletalMesh* SkeletalMeshIn;                                              // 0x01A0 (size: 0x8)
    TArray<int32> VertexIndicesIn;                                                    // 0x01A8 (size: 0x10)
    int32 BoneIndexIn;                                                                // 0x01B8 (size: 0x4)

}; // Size: 0x1C0

struct FKinematicOriginInsertionInitializationDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x00E8 (size: 0xB0)
    TArray<int32> OriginVertexIndicesIn;                                              // 0x0198 (size: 0x10)
    TArray<int32> InsertionVertexIndicesIn;                                           // 0x01A8 (size: 0x10)
    class USkeletalMesh* BoneSkeletalMeshIn;                                          // 0x01B8 (size: 0x8)

}; // Size: 0x1C0

struct FKinematicSkeletalMeshInitializationDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x00E8 (size: 0xB0)
    class USkeletalMesh* SkeletalMeshIn;                                              // 0x0198 (size: 0x8)
    TArray<int32> IndicesOut;                                                         // 0x01A0 (size: 0x10)

}; // Size: 0x1B0

struct FKinematicTetrahedralBindingsDataflowNode : public FDataflowNode
{
    class USkeletalMesh* SkeletalMeshIn;                                              // 0x00E8 (size: 0x8)
    FManagedArrayCollection Collection;                                               // 0x00F0 (size: 0xB0)
    FString ExclusionList;                                                            // 0x01A0 (size: 0x10)

}; // Size: 0x1B0

struct FRadialTetrahedronDataflowNodes : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x00E8 (size: 0xB0)
    double InnerRadius;                                                               // 0x0198 (size: 0x8)
    double OuterRadius;                                                               // 0x01A0 (size: 0x8)
    double Height;                                                                    // 0x01A8 (size: 0x8)
    int32 RadialSample;                                                               // 0x01B0 (size: 0x4)
    int32 AngularSample;                                                              // 0x01B4 (size: 0x4)
    int32 VerticalSample;                                                             // 0x01B8 (size: 0x4)
    double BulgeRatio;                                                                // 0x01C0 (size: 0x8)
    bool bDiscardInteriorTriangles;                                                   // 0x01C8 (size: 0x1)

}; // Size: 0x1D0

struct FSetFleshBonePositionTargetBindingDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x00E8 (size: 0xB0)
    ESkeletalBindingMode SkeletalBindingMode;                                         // 0x0198 (size: 0x1)
    float PositionTargetStiffness;                                                    // 0x019C (size: 0x4)
    class USkeletalMesh* SkeletalMeshIn;                                              // 0x01A0 (size: 0x8)
    float VertexRadiusRatio;                                                          // 0x01A8 (size: 0x4)

}; // Size: 0x1B0

struct FSetFleshDefaultPropertiesNode : public FDataflowNode
{
    float Density;                                                                    // 0x00E8 (size: 0x4)
    float VertexStiffness;                                                            // 0x00EC (size: 0x4)
    float VertexDamping;                                                              // 0x00F0 (size: 0x4)
    float VertexIncompressibility;                                                    // 0x00F4 (size: 0x4)
    float VertexInflation;                                                            // 0x00F8 (size: 0x4)
    FManagedArrayCollection Collection;                                               // 0x0100 (size: 0xB0)

}; // Size: 0x1B0

struct FSetVertexTetrahedraPositionTargetBindingDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x00E8 (size: 0xB0)
    TArray<int32> TargetIndicesIn;                                                    // 0x0198 (size: 0x10)
    TArray<FString> GeometryGroupGuidsIn;                                             // 0x01A8 (size: 0x10)
    float PositionTargetStiffness;                                                    // 0x01B8 (size: 0x4)

}; // Size: 0x1C0

struct FSetVertexTrianglePositionTargetBindingDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x00E8 (size: 0xB0)
    float PositionTargetStiffness;                                                    // 0x0198 (size: 0x4)
    float VertexRadiusRatio;                                                          // 0x019C (size: 0x4)

}; // Size: 0x1A0

struct FSetVertexVertexPositionTargetBindingDataflowNode : public FDataflowNode
{
    float RadiusRatio;                                                                // 0x00E8 (size: 0x4)
    FManagedArrayCollection Collection;                                               // 0x00F0 (size: 0xB0)
    TArray<int32> TargetIndicesIn;                                                    // 0x01A0 (size: 0x10)
    float PositionTargetStiffness;                                                    // 0x01B0 (size: 0x4)

}; // Size: 0x1B8

struct FSetVerticesKinematicDataflowNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x00E8 (size: 0xB0)
    TArray<int32> VertexIndicesIn;                                                    // 0x0198 (size: 0x10)

}; // Size: 0x1A8

struct FVisualizeFiberFieldNode : public FDataflowNode
{
    FManagedArrayCollection Collection;                                               // 0x00E8 (size: 0xB0)
    float VectorScale;                                                                // 0x0198 (size: 0x4)
    FFieldCollection VectorField;                                                     // 0x01A0 (size: 0xB0)

}; // Size: 0x250

#endif
