#ifndef UE4SS_SDK_ABP_Crossbow_HPP
#define UE4SS_SDK_ABP_Crossbow_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_51;                                                          // 0x0004 (size: 0x8)
    FName __NameProperty_52;                                                          // 0x000C (size: 0x8)
    FInputScaleBiasClampConstants __StructProperty_53;                                // 0x0014 (size: 0x2C)
    bool __BoolProperty_54;                                                           // 0x0040 (size: 0x1)
    float __FloatProperty_55;                                                         // 0x0044 (size: 0x4)
    float __FloatProperty_56;                                                         // 0x0048 (size: 0x4)
    bool __BoolProperty_57;                                                           // 0x004C (size: 0x1)
    EAnimSyncMethod __EnumProperty_58;                                                // 0x004D (size: 0x1)
    TEnumAsByte<EAnimGroupRole::Type> __ByteProperty_59;                              // 0x004E (size: 0x1)
    FName __NameProperty_60;                                                          // 0x0050 (size: 0x8)
    FAnimNodeFunctionRef __StructProperty_61;                                         // 0x0058 (size: 0x20)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x0078 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x00F8 (size: 0x18)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_Root;                   // 0x0110 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SequencePlayer;         // 0x0140 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendSpacePlayer_2;     // 0x0170 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendSpacePlayer_1;     // 0x01A0 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendSpacePlayer;       // 0x01D0 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_ApplyMeshSpaceAdditive_2; // 0x0200 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_ApplyMeshSpaceAdditive_1; // 0x0230 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_ApplyMeshSpaceAdditive; // 0x0260 (size: 0x30)

}; // Size: 0x290

struct FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{
    float __FloatProperty;                                                            // 0x0004 (size: 0x4)
    float __FloatProperty_0;                                                          // 0x0008 (size: 0x4)
    float __FloatProperty_1;                                                          // 0x000C (size: 0x4)

}; // Size: 0x10

class UABP_Crossbow_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0370 (size: 0x8)
    FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                       // 0x0378 (size: 0x10)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0388 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x0390 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x0398 (size: 0x20)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x03B8 (size: 0x48)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_2;                      // 0x0400 (size: 0x70)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_1;                      // 0x0470 (size: 0x70)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;                        // 0x04E0 (size: 0x70)
    FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive_2;          // 0x0550 (size: 0xD0)
    FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive_1;          // 0x0620 (size: 0xD0)
    FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive;            // 0x06F0 (size: 0xD0)
    class ABP_Weapon_Ranged_Weapon_Crossbow_Light_C* My Crossbow;                     // 0x07C0 (size: 0x8)
    double String Z Position;                                                         // 0x07C8 (size: 0x8)
    double L Shoulder Motion;                                                         // 0x07D0 (size: 0x8)
    double R Shoulder Motion;                                                         // 0x07D8 (size: 0x8)

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Crossbow_AnimGraphNode_BlendSpacePlayer_4A8399F44BC855F09E631493268DBCA3();
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void BlueprintInitializeAnimation();
    void BlueprintBeginPlay();
    void ExecuteUbergraph_ABP_Crossbow(int32 EntryPoint);
}; // Size: 0x7E0

#endif
