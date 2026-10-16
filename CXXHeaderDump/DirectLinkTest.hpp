#ifndef UE4SS_SDK_DirectLinkTest_HPP
#define UE4SS_SDK_DirectLinkTest_HPP

class UDirectLinkTestLibrary : public UBlueprintFunctionLibrary
{

    bool TestParameters();
    bool StopSender();
    bool StopReceiver();
    bool StartSender();
    bool StartReceiver();
    bool SetupSender();
    bool SetupReceiver();
    bool SendScene(FString InFilePath);
    int32 MakeEndpoint(FString NiceName, bool bVerbose);
    bool DumpReceivedScene();
    bool DeleteEndpoint(int32 EndpointId);
    bool DeleteAllEndpoint();
    bool AddPublicSource(int32 EndpointId, FString SourceName);
    bool AddPublicDestination(int32 EndpointId, FString DestName);
}; // Size: 0x28

#endif
