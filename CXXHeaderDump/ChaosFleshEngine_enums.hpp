enum ChaosDeformableBindingOption {
    WorldPos = 0,
    WorldDelta = 1,
    ComponentPos = 2,
    ComponentDelta = 3,
    BonePos = 4,
    BoneDelta = 5,
    ChaosDeformableBindingOption_MAX = 6,
};

enum class EDeformableExecutionModel {
    Chaos_Deformable_PrePhysics = 0,
    Chaos_Deformable_DuringPhysics = 1,
    Chaos_Deformable_PostPhysics = 2,
    Chaos_Max = 3,
};

