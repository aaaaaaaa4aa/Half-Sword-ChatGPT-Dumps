#ifndef UE4SS_SDK_Blood_BP_PT_HPP
#define UE4SS_SDK_Blood_BP_PT_HPP

class ABlood_BP_PT_C : public AActor
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
    int32 NewVar;                                                                     // 0x034C (size: 0x4)
    int32 Times VP Fired;                                                             // 0x0350 (size: 0x4)
    class UNiagaraSystem* Particle System;                                            // 0x0358 (size: 0x8)
    TMap<class FVector, class UDecalComponent*> NewVar_1;                             // 0x0360 (size: 0x50)
    bool NewVar_2;                                                                    // 0x03B0 (size: 0x1)
    FVector Impact Point;                                                             // 0x03B8 (size: 0x18)
    class UPrimitiveComponent* Hit Component;                                         // 0x03D0 (size: 0x8)
    FVector Impact Normal;                                                            // 0x03D8 (size: 0x18)
    FName Hit Bone Name;                                                              // 0x03F0 (size: 0x8)
    FVector Velocity_0;                                                               // 0x03F8 (size: 0x18)
    TMap<class FVector, class UDecalComponent*> New Var 1;                            // 0x0410 (size: 0x50)
    TArray<FVector> VP Positions;                                                     // 0x0460 (size: 0x10)
    bool Delete Particles In Pool;                                                    // 0x0470 (size: 0x1)
    float Size;                                                                       // 0x0474 (size: 0x4)
    bool Splats?;                                                                     // 0x0478 (size: 0x1)
    class UMaterialInterface* SplatMaterial;                                          // 0x0480 (size: 0x8)

    void UserConstructionScript();
    void BndEvt__Willie_BP_BPC_RuntimeVertexPaintAndDetectionComponent_K2Node_ComponentBoundEvent_2_VertexColorGetClosestVertexData__DelegateSignature(const FRVPDPTaskResults& TaskResultInfo, const FRVPDPGetClosestVertexDataSettings& DetectedMeshWithSettings, const FRVPDPClosestVertexDataResults& ClosestVertexInfo, const FRVPDPEstimatedColorAtHitLocationInfo& EstimatedColorAtHitLocationInfo, const FRVPDPAverageColorInAreaInfo& AvarageColorInAreaInfo, const FRVPDPAdditionalDataToPassThroughInfo& AdditionalData);
    void Get Vertex Color On Surface Event(class UPrimitiveComponent* MeshComponent, FRVPDPGetClosestVertexDataSettings GetClosestVertexDataStruct);
    void ReceiveParticleData(const TArray<FBasicParticleData>& Data, class UNiagaraSystem* NiagaraSystem, const FVector& SimulationPositionOffset);
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_Blood_BP_PT(int32 EntryPoint);
}; // Size: 0x488

#endif
