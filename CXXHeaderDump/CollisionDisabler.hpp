#ifndef UE4SS_SDK_CollisionDisabler_HPP
#define UE4SS_SDK_CollisionDisabler_HPP

struct FCollisionParams
{
    uint8 bOverrideMaxImpulse;                                                        // 0x0000 (size: 0x1)
    uint8 bOverrideStaticFriction;                                                    // 0x0000 (size: 0x1)
    uint8 bOverrideDynamicFriction;                                                   // 0x0000 (size: 0x1)
    uint8 bOverrideRestitution;                                                       // 0x0000 (size: 0x1)
    uint8 bOverrideSeparation;                                                        // 0x0000 (size: 0x1)
    float MaxImpulse;                                                                 // 0x0004 (size: 0x4)
    float StaticFriction;                                                             // 0x0008 (size: 0x4)
    float DynamicFriction;                                                            // 0x000C (size: 0x4)
    float Restitution;                                                                // 0x0010 (size: 0x4)
    float Separation;                                                                 // 0x0014 (size: 0x4)

}; // Size: 0x18

class UCollisionDisablerFunctionLibrary : public UBlueprintFunctionLibrary
{

    void ModifyCollision(const FCollisionParams& Params, class UPrimitiveComponent* ComponentA, class UPrimitiveComponent* ComponentB, FName BoneNameA, FName BoneNameB);
    bool IsCollisionModified(class UPrimitiveComponent* ComponentA, class UPrimitiveComponent* ComponentB, FName BoneNameA, FName BoneNameB);
    bool IsCollisionDisabled(class UPrimitiveComponent* ComponentA, class UPrimitiveComponent* ComponentB, FName BoneNameA, FName BoneNameB);
    void GatherAllPhysicalComponents(class AActor* Actor, TArray<class UPrimitiveComponent*>& OutComponents);
    void GatherAllPhysicalBonesFrom(class USkeletalMeshComponent* SkeletalMesh, FName StartBone, bool bIncudeStartBone, TArray<FName>& OutBones);
    void GatherAllPhysicalBones(class USkeletalMeshComponent* SkeletalMesh, TArray<FName>& OutBones);
    void EnableCollision_SkeletalVsSkeletal(class USkeletalMeshComponent* SkeletalMeshA, const TArray<FName> SkeletalMeshBonesA, class USkeletalMeshComponent* SkeletalMeshB, const TArray<FName> SkeletalMeshBonesB);
    void EnableCollision_SkeletalVsSingleBody(class USkeletalMeshComponent* SkeletalMesh, const TArray<FName> SkeletalMeshBones, class UPrimitiveComponent* SingleBody);
    void EnableCollision_SingleBodyVsSingleBody(class UPrimitiveComponent* SingleBodyA, class UPrimitiveComponent* SingleBodyB);
    void EnableCollision(class UPrimitiveComponent* ComponentA, class UPrimitiveComponent* ComponentB, FName BoneNameA, FName BoneNameB);
    void DisableCollision_SkeletalVsSkeletal(class USkeletalMeshComponent* SkeletalMeshA, const TArray<FName> SkeletalMeshBonesA, class USkeletalMeshComponent* SkeletalMeshB, const TArray<FName> SkeletalMeshBonesB, float TimeToExpiration);
    void DisableCollision_SkeletalVsSingleBody(class USkeletalMeshComponent* SkeletalMesh, const TArray<FName> SkeletalMeshBones, class UPrimitiveComponent* SingleBody, float TimeToExpiration);
    void DisableCollision_SingleBodyVsSingleBody(class UPrimitiveComponent* SingleBodyA, class UPrimitiveComponent* SingleBodyB, float TimeToExpiration);
    void DisableCollision(class UPrimitiveComponent* ComponentA, class UPrimitiveComponent* ComponentB, FName BoneNameA, FName BoneNameB, float TimeToExpiration);
    void CancelModifyCollision(class UPrimitiveComponent* ComponentA, class UPrimitiveComponent* ComponentB, FName BoneNameA, FName BoneNameB);
}; // Size: 0x28

#endif
