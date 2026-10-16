#ifndef UE4SS_SDK_HalfSwordUE5_HPP
#define UE4SS_SDK_HalfSwordUE5_HPP

#include "HalfSwordUE5_enums.hpp"

class AFireComponentActor : public AFireComponentActorBase
{
}; // Size: 0x440

class AFireComponentActorBase : public AActor
{
    bool bFirestarter;                                                                // 0x0290 (size: 0x1)
    bool bFlammable;                                                                  // 0x0291 (size: 0x1)
    TEnumAsByte<VFXActorType> VFXType;                                                // 0x0292 (size: 0x1)
    class UNiagaraSystem* NiagaraVFX;                                                 // 0x0298 (size: 0x8)
    TSubclassOf<class AActor> ZibaVFX;                                                // 0x02A0 (size: 0x8)
    TArray<class UPhysicsConstraintComponent*> Constrains;                            // 0x02A8 (size: 0x10)
    float Drag;                                                                       // 0x02B8 (size: 0x4)
    float MaxBurnTime;                                                                // 0x02BC (size: 0x4)
    float MaxFireRadius;                                                              // 0x02C0 (size: 0x4)
    float FireBurnMultiplier;                                                         // 0x02C4 (size: 0x4)
    FVector FireStartPosition;                                                        // 0x02C8 (size: 0x18)
    bool Destroyed;                                                                   // 0x02E0 (size: 0x1)
    bool bDebugDraw;                                                                  // 0x02E1 (size: 0x1)

    void SetOnFire(class UStaticMeshComponent* Mesh);
    void OnHitFireStart(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    bool IsBurningEnded();
    bool IsBurning();
}; // Size: 0x440

class ALightingScalabilityManager : public AActor
{
    FLightingScalabilityManagerOnEffectsQualityChanged OnEffectsQualityChanged;       // 0x0290 (size: 0x10)
    void OnCVarChanged(int32 NewValue);

}; // Size: 0x2A8

class AProcGenCommon : public AActor
{
    int32 WorldSize;                                                                  // 0x0290 (size: 0x4)
    int32 ChunkSize;                                                                  // 0x0294 (size: 0x4)
    float GridSpacing;                                                                // 0x0298 (size: 0x4)
    float RiverWidthLocal;                                                            // 0x029C (size: 0x4)
    float RiverBedDepthLocal;                                                         // 0x02A0 (size: 0x4)
    FVector2D NoiseFrequency;                                                         // 0x02A8 (size: 0x10)
    FVector2D NoiseAmplitude;                                                         // 0x02B8 (size: 0x10)
    TArray<FVector> BaseChunkVertices;                                                // 0x02C8 (size: 0x10)
    TArray<int32> BaseChunkTriangles;                                                 // 0x02D8 (size: 0x10)
    TArray<FVector2D> BaseChunkUVs;                                                   // 0x02E8 (size: 0x10)
    TArray<FVector> VoronoiPoints;                                                    // 0x02F8 (size: 0x10)
    FVector WorldOffset;                                                              // 0x0308 (size: 0x18)
    FVector HalfChunkOffset;                                                          // 0x0320 (size: 0x18)
    TMap<class FVector2D, class bool> WorldChunks;                                    // 0x0338 (size: 0x50)

    void GenerateTerrainChunk(FVector ChunkCenter);
}; // Size: 0x398

class UFireComponent : public UActorComponent
{
    bool bFirestarter;                                                                // 0x00A0 (size: 0x1)
    bool bFlammable;                                                                  // 0x00A1 (size: 0x1)
    class UNiagaraSystem* NiagaraVFX;                                                 // 0x00A8 (size: 0x8)
    float Drag;                                                                       // 0x00B0 (size: 0x4)
    float MaxBurnTime;                                                                // 0x00B4 (size: 0x4)
    float MaxFireRadius;                                                              // 0x00B8 (size: 0x4)
    float FireBurnMultiplier;                                                         // 0x00BC (size: 0x4)
    TArray<class UPhysicsConstraintComponent*> Constrains;                            // 0x00C0 (size: 0x10)

    void SetOnFire(class UStaticMeshComponent* Mesh);
    void OnHitFireStart(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    bool IsBurningEnded();
    bool IsBurning();
}; // Size: 0x140

class UPhysicsAsyncSetter : public UBlueprintFunctionLibrary
{

    void SetMeshAsyncDeltaTime(class UPrimitiveComponent* Component, float NewDeltaTime);
}; // Size: 0x28

class UUWorkshopManagerSubsystem : public UGameInstanceSubsystem
{

    void CreateWorkshopItem();
}; // Size: 0x58

#endif
