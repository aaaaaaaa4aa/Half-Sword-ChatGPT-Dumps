#ifndef UE4SS_SDK_DirectLink_HPP
#define UE4SS_SDK_DirectLink_HPP

struct FDirectLinkMsg_CloseStreamRequest
{
    int32 RecipientStreamPort;                                                        // 0x0000 (size: 0x4)

}; // Size: 0x4

struct FDirectLinkMsg_DeltaMessage
{
    int32 DestinationStreamPort;                                                      // 0x0000 (size: 0x4)
    int8 BatchCode;                                                                   // 0x0004 (size: 0x1)
    int32 MessageCode;                                                                // 0x0008 (size: 0x4)
    uint8 Kind;                                                                       // 0x000C (size: 0x1)
    bool CompressedPayload;                                                           // 0x000D (size: 0x1)
    TArray<uint8> Payload;                                                            // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FDirectLinkMsg_EndpointLifecycle
{
    uint8 LifecycleState;                                                             // 0x0000 (size: 0x1)
    uint32 EndpointStateRevision;                                                     // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FDirectLinkMsg_EndpointState
{
    uint32 StateRevision;                                                             // 0x0000 (size: 0x4)
    uint32 MinProtocolVersion;                                                        // 0x0004 (size: 0x4)
    uint32 ProtocolVersion;                                                           // 0x0008 (size: 0x4)
    FString UEVersion;                                                                // 0x0010 (size: 0x10)
    FString ComputerName;                                                             // 0x0020 (size: 0x10)
    FString Username;                                                                 // 0x0030 (size: 0x10)
    uint32 ProcessId;                                                                 // 0x0040 (size: 0x4)
    FString ExecutableName;                                                           // 0x0048 (size: 0x10)
    FString NiceName;                                                                 // 0x0058 (size: 0x10)
    TArray<FNamedId> Destinations;                                                    // 0x0068 (size: 0x10)
    TArray<FNamedId> Sources;                                                         // 0x0078 (size: 0x10)

}; // Size: 0x88

struct FDirectLinkMsg_HaveListMessage
{
    int32 SourceStreamPort;                                                           // 0x0000 (size: 0x4)
    int32 SyncCycle;                                                                  // 0x0004 (size: 0x4)
    int32 MessageCode;                                                                // 0x0008 (size: 0x4)
    uint8 Kind;                                                                       // 0x000C (size: 0x1)
    TArray<uint8> Payload;                                                            // 0x0010 (size: 0x10)
    TArray<int32> NodeIds;                                                            // 0x0020 (size: 0x10)
    TArray<int32> Hashes;                                                             // 0x0030 (size: 0x10)

}; // Size: 0x40

struct FDirectLinkMsg_OpenStreamAnswer
{
    int32 RecipientStreamPort;                                                        // 0x0000 (size: 0x4)
    bool bAccepted;                                                                   // 0x0004 (size: 0x1)
    FString Error;                                                                    // 0x0008 (size: 0x10)
    int32 OpenedStreamPort;                                                           // 0x0018 (size: 0x4)

}; // Size: 0x20

struct FDirectLinkMsg_OpenStreamRequest
{
    bool bRequestFromSource;                                                          // 0x0000 (size: 0x1)
    int32 RequestFromStreamPort;                                                      // 0x0004 (size: 0x4)
    FGuid SourceGuid;                                                                 // 0x0008 (size: 0x10)
    FGuid DestinationGuid;                                                            // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FDirectLinkMsg_QueryEndpointState
{
}; // Size: 0x1

struct FNamedId
{
    FString Name;                                                                     // 0x0000 (size: 0x10)
    FGuid ID;                                                                         // 0x0010 (size: 0x10)
    bool bIsPublic;                                                                   // 0x0020 (size: 0x1)

}; // Size: 0x28

#endif
