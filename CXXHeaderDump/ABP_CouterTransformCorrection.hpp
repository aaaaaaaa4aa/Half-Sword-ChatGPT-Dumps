#ifndef UE4SS_SDK_ABP_CouterTransformCorrection_HPP
#define UE4SS_SDK_ABP_CouterTransformCorrection_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_25;                                                          // 0x0004 (size: 0x8)
    FName __NameProperty_26;                                                          // 0x000C (size: 0x8)
    FAnimNodeFunctionRef __StructProperty_27;                                         // 0x0018 (size: 0x20)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x0038 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x00B8 (size: 0x18)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_Root;                   // 0x00D0 (size: 0x30)
    FAnimNodeExposedValueHandler AnimGraphNode_LinkedInputPose;                       // 0x0100 (size: 0x8)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BoneDrivenController_4; // 0x0108 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_LocalToComponentSpace;  // 0x0138 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_ComponentToLocalSpace;  // 0x0168 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BoneDrivenController_3; // 0x0198 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BoneDrivenController_2; // 0x01C8 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BoneDrivenController_1; // 0x01F8 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BoneDrivenController;   // 0x0228 (size: 0x30)

}; // Size: 0x258

class UABP_CouterTransformCorrection_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0370 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0378 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x0380 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x0388 (size: 0x20)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose;                          // 0x03A8 (size: 0xB8)
    FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_4;              // 0x0460 (size: 0x128)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;       // 0x0588 (size: 0x20)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;       // 0x05A8 (size: 0x20)
    FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_3;              // 0x05C8 (size: 0x128)
    FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_2;              // 0x06F0 (size: 0x128)
    FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_1;              // 0x0818 (size: 0x128)
    FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController;                // 0x0940 (size: 0x128)

    void AnimGraph(FPoseLink InPose, FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_CouterTransformCorrection(int32 EntryPoint);
}; // Size: 0xA68

#endif
