#ifndef UE4SS_SDK_DirectLinkExtension_HPP
#define UE4SS_SDK_DirectLinkExtension_HPP

class UDirectLinkExtensionBlueprintLibrary : public UBlueprintFunctionLibrary
{

    bool ParseDirectLinkSourceUri(FString SourceUriString, FString& OutComputerName, FString& OutEndpointName, FString& OutExecutableName, FString& OutSourceName);
    TArray<FString> GetAvailableDirectLinkSourcesUri();
}; // Size: 0x28

class UDirectLinkExtensionSettings : public UObject
{
    bool bAutoReconnect;                                                              // 0x0028 (size: 0x1)
    float ReconnectionDelayInSeconds;                                                 // 0x002C (size: 0x4)

}; // Size: 0x30

#endif
