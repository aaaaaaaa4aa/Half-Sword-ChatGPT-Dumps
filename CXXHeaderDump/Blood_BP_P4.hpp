#ifndef UE4SS_SDK_Blood_BP_P4_HPP
#define UE4SS_SDK_Blood_BP_P4_HPP

class ABlood_BP_P4_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class UBPC_RuntimeVertexPaintAndDetectionComponent_C* BPC_RuntimeVertexPaintAndDetectionComponent; // 0x0298 (size: 0x8)
    class UNiagaraComponent* Blood_Fountain_System;                                   // 0x02A0 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02A8 (size: 0x8)
    double Spawn Rate;                                                                // 0x02B0 (size: 0x8)
    double Velocity;                                                                  // 0x02B8 (size: 0x8)
    int32 Loop Count;                                                                 // 0x02C0 (size: 0x4)
    class USceneComponent* Parent;                                                    // 0x02C8 (size: 0x8)
    FName bone;                                                                       // 0x02D0 (size: 0x8)
    FVector Hit Velocity;                                                             // 0x02D8 (size: 0x18)
    class UGI_Settings_C* GI Settings;                                                // 0x02F0 (size: 0x8)
    FVector Hit Power;                                                                // 0x02F8 (size: 0x18)
    TArray<class UMaterialInterface*> Splatters Static Hi;                            // 0x0310 (size: 0x10)
    TArray<class UMaterialInterface*> Splatters Static Lo;                            // 0x0320 (size: 0x10)
    TArray<class UMaterialInterface*> Spaltters Dynamic;                              // 0x0330 (size: 0x10)
    bool Decal Spawn OK;                                                              // 0x0340 (size: 0x1)
    int32 Decals Sawned Recently;                                                     // 0x0344 (size: 0x4)
    int32 Failed VP Count;                                                            // 0x0348 (size: 0x4)
    class UNiagaraComponent* BloodBlitRef;                                            // 0x0350 (size: 0x8)
    bool UseNewBloodSystem;                                                           // 0x0358 (size: 0x1)
    class ABP_MeshBloodSimManager_C* MeshBloodSimManager;                             // 0x0360 (size: 0x8)
    double MinSizeScale;                                                              // 0x0368 (size: 0x8)
    double MaxSizeScale;                                                              // 0x0370 (size: 0x8)
    class UCanvas* CanvasRef;                                                         // 0x0378 (size: 0x8)
    FDrawToRenderTargetContext ContextRef;                                            // 0x0380 (size: 0x8)
    class UMaterialInstanceDynamic* CanvasDrawMaterialRef;                            // 0x0388 (size: 0x8)
    bool SimulatedThisFrame;                                                          // 0x0390 (size: 0x1)
    class ABP_BloodDecal_C* BP_BloodDecalRef;                                         // 0x0398 (size: 0x8)
    TArray<class AActor*> ActorsToIgnore;                                             // 0x03A0 (size: 0x10)
    TArray<FBasicParticleData> SummedFrameParticleData;                               // 0x03B0 (size: 0x10)
    TArray<FVector4> ReadbackArray;                                                   // 0x03C0 (size: 0x10)
    class UNiagaraSystem* Particle System;                                            // 0x03D0 (size: 0x8)
    double ChanceToSpawnDecal;                                                        // 0x03D8 (size: 0x8)
    int32 Times VP Fired;                                                             // 0x03E0 (size: 0x4)
    FVector Velocity_0;                                                               // 0x03E8 (size: 0x18)
    float Size;                                                                       // 0x0400 (size: 0x4)
    FVector Impact Point;                                                             // 0x0408 (size: 0x18)
    FVector Impact Normal;                                                            // 0x0420 (size: 0x18)
    class UPrimitiveComponent* Hit Component;                                         // 0x0438 (size: 0x8)
    FName Hit Bone Name;                                                              // 0x0440 (size: 0x8)
    FVector Block Decals In This Location;                                            // 0x0448 (size: 0x18)
    bool Trail;                                                                       // 0x0460 (size: 0x1)
    double DecalLife;                                                                 // 0x0468 (size: 0x8)
    double Max Decal Spawn;                                                           // 0x0470 (size: 0x8)
    bool HighVelocity;                                                                // 0x0478 (size: 0x1)
    double VelocityDecalSize;                                                         // 0x0480 (size: 0x8)
    bool Hit wall?;                                                                   // 0x0488 (size: 0x1)
    bool Force Disable Vertex Paint;                                                  // 0x0489 (size: 0x1)

    void SpawnDecalVelocitySplatter(FVector ImpactPoint, FVector ImpactNormal, class UPrimitiveComponent*& HitComponent, double Size, FVector Velocity);
    void SpawnDecalFallback(FVector ImpactPoint, FVector ImpactNormal, class UPrimitiveComponent*& HitComponent, double Size);
    void RTDraw(TArray<FBasicParticleData>& Data);
    void NewBloodNiagara();
    void NewBloodReadbackTech(TArray<FBasicParticleData>& Data);
    void NewBloodNiagaraDecals(TArray<FBasicParticleData>& Data);
    void NewBloodBeginPlay();
    void NewBloodMainDrawToCanvas(TArray<FBasicParticleData>& Data);
    void OldBloodEventTick();
    void OldBloodBeginPlay();
    void OldBloodMain(VertexPaint)(TArray<FBasicParticleData>& Data);
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ReceiveParticleData(const TArray<FBasicParticleData>& Data, class UNiagaraSystem* NiagaraSystem, const FVector& SimulationPositionOffset);
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__Willie_BP_BPC_RuntimeVertexPaintAndDetectionComponent_K2Node_ComponentBoundEvent_2_VertexColorGetClosestVertexData__DelegateSignature(const FRVPDPTaskResults& TaskResultInfo, const FRVPDPGetClosestVertexDataSettings& DetectedMeshWithSettings, const FRVPDPClosestVertexDataResults& ClosestVertexInfo, const FRVPDPEstimatedColorAtHitLocationInfo& EstimatedColorAtHitLocationInfo, const FRVPDPAverageColorInAreaInfo& AvarageColorInAreaInfo, const FRVPDPAdditionalDataToPassThroughInfo& AdditionalData);
    void Get Vertex Color On Surface Event(class UPrimitiveComponent* MeshComponent, FRVPDPGetClosestVertexDataSettings GetClosestVertexDataStruct);
    void ExecuteUbergraph_Blood_BP_P4(int32 EntryPoint);
}; // Size: 0x48A

#endif
