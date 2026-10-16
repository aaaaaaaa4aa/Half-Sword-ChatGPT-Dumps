#ifndef UE4SS_SDK_ChaosFleshEngine_HPP
#define UE4SS_SDK_ChaosFleshEngine_HPP

#include "ChaosFleshEngine_enums.hpp"

struct FBodyForcesGroup
{
    bool bApplyGravity;                                                               // 0x0000 (size: 0x1)
    float DampingMultiplier;                                                          // 0x0004 (size: 0x4)
    float StiffnessMultiplier;                                                        // 0x0008 (size: 0x4)
    float IncompressibilityMultiplier;                                                // 0x000C (size: 0x4)
    float InflationMultiplier;                                                        // 0x0010 (size: 0x4)

}; // Size: 0x14

struct FCollisionSpringGroup
{
    float CollisionSearchRadius;                                                      // 0x0000 (size: 0x4)
    float CollisionSpringStiffness;                                                   // 0x0004 (size: 0x4)
    bool bAllowSliding;                                                               // 0x0008 (size: 0x1)

}; // Size: 0xC

struct FConnectedObjectsGroup
{
    TArray<class UDeformablePhysicsComponent*> DeformableComponents;                  // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FDeformableEndTickFunction : public FTickFunction
{
}; // Size: 0x30

struct FFleshDeformerParameters
{
}; // Size: 0x1

struct FFleshSimulationSpaceGroup
{
    FName SimSpaceBoneName;                                                           // 0x0000 (size: 0x8)
    TEnumAsByte<ChaosDeformableSimSpace> SimSpace;                                    // 0x0008 (size: 0x1)
    class USkeletalMesh* SimSpaceSkeletalMesh;                                        // 0x0010 (size: 0x8)

}; // Size: 0x20

struct FGameplayColllisions
{
    FRigBoundRayCasts RigBoundRayCasts;                                               // 0x0000 (size: 0x28)

}; // Size: 0x28

struct FRigBoundRayCasts
{
    bool bEnableRigBoundRaycasts;                                                     // 0x0000 (size: 0x1)
    int32 MaxNumTests;                                                                // 0x0004 (size: 0x4)
    bool bTestDownOnly;                                                               // 0x0008 (size: 0x1)
    float TestRange;                                                                  // 0x000C (size: 0x4)
    TArray<TWeakObjectPtr<UPrimitiveComponent>> EnvironmentCollisionsSkipList;        // 0x0010 (size: 0x10)
    TEnumAsByte<ECollisionChannel> CollisionChannel;                                  // 0x0020 (size: 0x1)

}; // Size: 0x28

struct FSolverCollisionsGroup
{
    bool bDoSelfCollision;                                                            // 0x0000 (size: 0x1)
    bool bUseFloor;                                                                   // 0x0001 (size: 0x1)

}; // Size: 0x2

struct FSolverConstraintsGroup
{
    bool bEnablePositionTargets;                                                      // 0x0000 (size: 0x1)
    bool bEnableKinematics;                                                           // 0x0001 (size: 0x1)
    FSolverCorotatedConstraintsGroup CorotatedConstraints;                            // 0x0004 (size: 0x8)
    FSolverGaussSeidelConstraintsGroup GaussSeidelConstraints;                        // 0x000C (size: 0x14)

}; // Size: 0x20

struct FSolverCorotatedConstraintsGroup
{
    bool bEnableCorotatedConstraint;                                                  // 0x0000 (size: 0x1)
    bool bDoBlended;                                                                  // 0x0001 (size: 0x1)
    float BlendedZeta;                                                                // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FSolverDebuggingGroup
{
    bool CacheToFile;                                                                 // 0x0000 (size: 0x1)

}; // Size: 0x1

struct FSolverEvolutionGroup
{
    FSolverQuasistaticsGroup SolverQuasistatics;                                      // 0x0000 (size: 0x1)

}; // Size: 0x1

struct FSolverForcesGroup
{
    float YoungModulus;                                                               // 0x0000 (size: 0x4)
    float Damping;                                                                    // 0x0004 (size: 0x4)
    bool bEnableGravity;                                                              // 0x0008 (size: 0x1)

}; // Size: 0xC

struct FSolverGaussSeidelConstraintsGroup
{
    bool bUseGaussSeidelConstraints;                                                  // 0x0000 (size: 0x1)
    bool bUseGSNeohookean;                                                            // 0x0001 (size: 0x1)
    bool bUseSOR;                                                                     // 0x0002 (size: 0x1)
    float OmegaSOR;                                                                   // 0x0004 (size: 0x4)
    FCollisionSpringGroup CollisionSpring;                                            // 0x0008 (size: 0xC)

}; // Size: 0x14

struct FSolverGridBasedCollisionsGroup
{
    bool bUseGridBasedConstraints;                                                    // 0x0000 (size: 0x1)
    float GridDx;                                                                     // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FSolverQuasistaticsGroup
{
    bool bDoQuasistatics;                                                             // 0x0000 (size: 0x1)

}; // Size: 0x1

struct FSolverTimingGroup
{
    int32 NumSubSteps;                                                                // 0x0000 (size: 0x4)
    int32 NumSolverIterations;                                                        // 0x0004 (size: 0x4)
    bool FixTimeStep;                                                                 // 0x0008 (size: 0x1)
    float TimeStepSize;                                                               // 0x000C (size: 0x4)
    bool bDoThreadedAdvance;                                                          // 0x0010 (size: 0x1)
    EDeformableExecutionModel ExecutionModel;                                         // 0x0011 (size: 0x1)

}; // Size: 0x14

class ADeformableCollisionsActor : public AActor
{
    class UDeformableCollisionsComponent* DeformableCollisionsComponent;              // 0x0298 (size: 0x8)
    class ADeformableSolverActor* PrimarySolver;                                      // 0x02A0 (size: 0x8)
    TArray<class AStaticMeshActor*> StaticCollisions;                                 // 0x02A8 (size: 0x10)

    void EnableSimulation(class ADeformableSolverActor* Actor);
}; // Size: 0x2B8

class ADeformableSolverActor : public AActor
{
    class UDeformableSolverComponent* SolverComponent;                                // 0x0298 (size: 0x8)
    class UBillboardComponent* SpriteComponent;                                       // 0x02A0 (size: 0x8)

}; // Size: 0x2A8

class AFleshActor : public AActor
{
    class UFleshComponent* FleshComponent;                                            // 0x0298 (size: 0x8)
    class ADeformableSolverActor* PrimarySolver;                                      // 0x02A0 (size: 0x8)

    void EnableSimulation(class ADeformableSolverActor* Actor);
}; // Size: 0x2A8

class UDIFleshDeformer : public UOptimusComputeDataInterface
{
    FFleshDeformerParameters FleshDeformerParameters;                                 // 0x0028 (size: 0x1)

}; // Size: 0x38

class UDIFleshDeformerDataProvider : public UComputeDataProvider
{
    class USkinnedMeshComponent* SkinnedMesh;                                         // 0x0028 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0030 (size: 0x8)
    class UDeformableTetrahedralComponent* FleshMesh;                                 // 0x0038 (size: 0x8)
    FFleshDeformerParameters FleshDeformerParameters;                                 // 0x0040 (size: 0x1)

}; // Size: 0x48

class UDeformableCollisionsComponent : public UDeformablePhysicsComponent
{
    TArray<class UStaticMeshComponent*> CollisionBodies;                              // 0x0530 (size: 0x10)

    void RemoveStaticMeshComponent(class UStaticMeshComponent* StaticMeshComponent);
    void AddStaticMeshComponent(class UStaticMeshComponent* StaticMeshComponent);
}; // Size: 0x600

class UDeformableGameplayComponent : public UDeformableTetrahedralComponent
{
    FGameplayColllisions GameplayColllisions;                                         // 0x06B0 (size: 0x28)

}; // Size: 0x730

class UDeformablePhysicsComponent : public UPrimitiveComponent
{
    class UDeformableSolverComponent* PrimarySolverComponent;                         // 0x0520 (size: 0x8)

    void EnableSimulationFromActor(class ADeformableSolverActor* DeformableSolverActor);
    void EnableSimulation(class UDeformableSolverComponent* DeformableSolverComponent);
}; // Size: 0x530

class UDeformableSolverComponent : public USceneComponent
{
    FConnectedObjectsGroup ConnectedObjects;                                          // 0x0238 (size: 0x10)
    FSolverTimingGroup SolverTiming;                                                  // 0x0248 (size: 0x14)
    FSolverEvolutionGroup SolverEvolution;                                            // 0x025C (size: 0x1)
    FSolverCollisionsGroup SolverCollisions;                                          // 0x025D (size: 0x2)
    FSolverConstraintsGroup SolverConstraints;                                        // 0x0260 (size: 0x20)
    FSolverForcesGroup SolverForces;                                                  // 0x0280 (size: 0xC)
    FSolverDebuggingGroup SolverDebugging;                                            // 0x028C (size: 0x1)

}; // Size: 0x2D0

class UDeformableTetrahedralComponent : public UDeformablePhysicsComponent
{
    FFleshSimulationSpaceGroup SimulationSpace;                                       // 0x0530 (size: 0x20)
    FBodyForcesGroup BodyForces;                                                      // 0x0550 (size: 0x14)
    float MassMultiplier;                                                             // 0x0564 (size: 0x4)
    class UProceduralMeshComponent* Mesh;                                             // 0x0568 (size: 0x8)
    TArray<int32> HideTetrahedra;                                                     // 0x0570 (size: 0x10)
    class UFleshAsset* RestCollection;                                                // 0x0580 (size: 0x8)
    class UFleshDynamicAsset* DynamicCollection;                                      // 0x0588 (size: 0x8)
    class USimulationAsset* SimulationCollection;                                     // 0x0590 (size: 0x8)

    TArray<FVector> GetSkeletalMeshEmbeddedPositions(const TEnumAsByte<ChaosDeformableBindingOption> Format, const FTransform TargetDeformationSkeletonOffset, const FName TargetBone, const float SimulationBlendWeight);
    TArray<FVector> GetSkeletalMeshBindingPositions(const class USkeletalMesh* InSkeletalMesh);
    TArray<FString> GetSimSpaceBoneNameOptions();
}; // Size: 0x6B0

class UFleshAsset : public UObject
{
    class UDataflow* DataflowAsset;                                                   // 0x0038 (size: 0x8)
    FString DataflowTerminal;                                                         // 0x0040 (size: 0x10)
    TArray<FStringValuePair> Overrides;                                               // 0x0050 (size: 0x10)
    class USkeletalMesh* SkeletalMesh;                                                // 0x0060 (size: 0x8)
    class USkeleton* Skeleton;                                                        // 0x0068 (size: 0x8)
    class USkeletalMesh* TargetDeformationSkeleton;                                   // 0x0070 (size: 0x8)
    class UStaticMesh* StaticMesh;                                                    // 0x0078 (size: 0x8)

}; // Size: 0x80

class UFleshComponent : public UDeformableGameplayComponent
{
}; // Size: 0x730

class UFleshDynamicAsset : public UObject
{
}; // Size: 0x38

class USimulationAsset : public UObject
{
}; // Size: 0x38

#endif
