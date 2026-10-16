#ifndef UE4SS_SDK_ABP_CopyPose1_HPP
#define UE4SS_SDK_ABP_CopyPose1_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_4;                                                           // 0x0004 (size: 0x8)
    FName __NameProperty_5;                                                           // 0x000C (size: 0x8)
    FAnimNodeFunctionRef __StructProperty_6;                                          // 0x0018 (size: 0x20)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x0038 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x00B8 (size: 0x18)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_Root;                   // 0x00D0 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_CopyPoseFromMesh;       // 0x0100 (size: 0x30)

}; // Size: 0x130

class UABP_CopyPose1_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0370 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0378 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x0380 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x0388 (size: 0x20)
    FAnimNode_CopyPoseFromMesh AnimGraphNode_CopyPoseFromMesh;                        // 0x03A8 (size: 0x158)
    class USkeletalMeshComponent* Master Mesh;                                        // 0x0500 (size: 0x8)
    bool NewVar;                                                                      // 0x0508 (size: 0x1)
    class AWillie_BP_C* Character;                                                    // 0x0510 (size: 0x8)
    FVector Spawned Limb Location;                                                    // 0x0518 (size: 0x18)
    FRotator Spawned Limb Rotation;                                                   // 0x0530 (size: 0x18)
    int32 Spawned Bone Int;                                                           // 0x0548 (size: 0x4)

    void AnimGraph(FPoseLink& AnimGraph);
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void BlueprintBeginPlay();
    void BlueprintInitializeAnimation();
    void ExecuteUbergraph_ABP_CopyPose1(int32 EntryPoint);
}; // Size: 0x54C

#endif
