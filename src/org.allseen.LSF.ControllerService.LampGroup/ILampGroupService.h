//-----------------------------------------------------------------------------
// <auto-generated> 
//   This code was generated by a tool. 
// 
//   Changes to this file may cause incorrect behavior and will be lost if  
//   the code is regenerated.
//
//   Tool: AllJoynCodeGenerator.exe
//
//   This tool is located in the Windows 10 SDK and the Windows 10 AllJoyn 
//   Visual Studio Extension in the Visual Studio Gallery.  
//
//   The generated code should be packaged in a Windows 10 C++/CX Runtime  
//   Component which can be consumed in any UWP-supported language using 
//   APIs that are available in Windows.Devices.AllJoyn.
//
//   Using AllJoynCodeGenerator - Invoke the following command with a valid 
//   Introspection XML file and a writable output directory:
//     AllJoynCodeGenerator -i <INPUT XML FILE> -o <OUTPUT DIRECTORY>
// </auto-generated>
//-----------------------------------------------------------------------------
#pragma once

namespace org { namespace allseen { namespace LSF { namespace ControllerService { namespace LampGroup {

public interface class ILampGroupService
{
public:
    // Implement this function to handle calls to the CreateLampGroup method.
    Windows::Foundation::IAsyncOperation<LampGroupCreateLampGroupResult^>^ CreateLampGroupAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info , _In_ Windows::Foundation::Collections::IVectorView<Platform::String^>^ interfaceMemberLampIDs, _In_ Windows::Foundation::Collections::IVectorView<Platform::String^>^ interfaceMemberLampGroupIDs, _In_ Platform::String^ interfaceMemberLampGroupName, _In_ Platform::String^ interfaceMemberLanguage);

    // Implement this function to handle calls to the DeleteLampGroup method.
    Windows::Foundation::IAsyncOperation<LampGroupDeleteLampGroupResult^>^ DeleteLampGroupAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info , _In_ Platform::String^ interfaceMemberLampGroupID);

    // Implement this function to handle calls to the GetAllLampGroupIDs method.
    Windows::Foundation::IAsyncOperation<LampGroupGetAllLampGroupIDsResult^>^ GetAllLampGroupIDsAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info );

    // Implement this function to handle calls to the GetLampGroup method.
    Windows::Foundation::IAsyncOperation<LampGroupGetLampGroupResult^>^ GetLampGroupAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info , _In_ Platform::String^ interfaceMemberLampGroupID);

    // Implement this function to handle calls to the GetLampGroupName method.
    Windows::Foundation::IAsyncOperation<LampGroupGetLampGroupNameResult^>^ GetLampGroupNameAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info , _In_ Platform::String^ interfaceMemberLampGroupID, _In_ Platform::String^ interfaceMemberLanguage);

    // Implement this function to handle calls to the PulseLampGroupWithPreset method.
    Windows::Foundation::IAsyncOperation<LampGroupPulseLampGroupWithPresetResult^>^ PulseLampGroupWithPresetAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info , _In_ Platform::String^ interfaceMemberLampGroupID, _In_ Platform::String^ interfaceMemberFromPresetID, _In_ Platform::String^ interfaceMemberToPresetID, _In_ uint32 interfaceMemberPeriod, _In_ uint32 interfaceMemberDuration, _In_ uint32 interfaceMemberNumPulses);

    // Implement this function to handle calls to the PulseLampGroupWithState method.
    Windows::Foundation::IAsyncOperation<LampGroupPulseLampGroupWithStateResult^>^ PulseLampGroupWithStateAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info , _In_ Platform::String^ interfaceMemberLampGroupID, _In_ Windows::Foundation::Collections::IMapView<Platform::String^,Platform::Object^>^ interfaceMemberFromLampGroupState, _In_ Windows::Foundation::Collections::IMapView<Platform::String^,Platform::Object^>^ interfaceMemberToLampGroupState, _In_ uint32 interfaceMemberPeriod, _In_ uint32 interfaceMemberDuration, _In_ uint32 interfaceMemberNumPulses);

    // Implement this function to handle calls to the ResetLampGroupState method.
    Windows::Foundation::IAsyncOperation<LampGroupResetLampGroupStateResult^>^ ResetLampGroupStateAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info , _In_ Platform::String^ interfaceMemberLampGroupID);

    // Implement this function to handle calls to the ResetLampGroupStateField method.
    Windows::Foundation::IAsyncOperation<LampGroupResetLampGroupStateFieldResult^>^ ResetLampGroupStateFieldAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info , _In_ Platform::String^ interfaceMemberLampGroupID, _In_ Platform::String^ interfaceMemberLampGroupStateFieldName);

    // Implement this function to handle calls to the SetLampGroupName method.
    Windows::Foundation::IAsyncOperation<LampGroupSetLampGroupNameResult^>^ SetLampGroupNameAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info , _In_ Platform::String^ interfaceMemberLampGroupID, _In_ Platform::String^ interfaceMemberLampGroupName, _In_ Platform::String^ interfaceMemberLanguage);

    // Implement this function to handle calls to the TransitionLampGroupState method.
    Windows::Foundation::IAsyncOperation<LampGroupTransitionLampGroupStateResult^>^ TransitionLampGroupStateAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info , _In_ Platform::String^ interfaceMemberLampGroupID, _In_ Windows::Foundation::Collections::IMapView<Platform::String^,Platform::Object^>^ interfaceMemberLampState, _In_ uint32 interfaceMemberTransitionPeriod);

    // Implement this function to handle calls to the TransitionLampGroupStateField method.
    Windows::Foundation::IAsyncOperation<LampGroupTransitionLampGroupStateFieldResult^>^ TransitionLampGroupStateFieldAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info , _In_ Platform::String^ interfaceMemberLampGroupID, _In_ Platform::String^ interfaceMemberLampGroupStateFieldName, _In_ Platform::Object^ interfaceMemberLampGroupStateFieldValue, _In_ uint32 interfaceMemberTransitionPeriod);

    // Implement this function to handle calls to the TransitionLampGroupStateToPreset method.
    Windows::Foundation::IAsyncOperation<LampGroupTransitionLampGroupStateToPresetResult^>^ TransitionLampGroupStateToPresetAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info , _In_ Platform::String^ interfaceMemberLampGroupID, _In_ Platform::String^ interfaceMemberPresetID, _In_ uint32 interfaceMemberTransitionPeriod);

    // Implement this function to handle calls to the UpdateLampGroup method.
    Windows::Foundation::IAsyncOperation<LampGroupUpdateLampGroupResult^>^ UpdateLampGroupAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info , _In_ Platform::String^ interfaceMemberLampGroupID, _In_ Windows::Foundation::Collections::IVectorView<Platform::String^>^ interfaceMemberLampIDs, _In_ Windows::Foundation::Collections::IVectorView<Platform::String^>^ interfaceMemberLampGroupIDs);

    // Implement this function to handle requests for the value of the Version property.
    //
    // Currently, info will always be null, because no information is available about the requestor.
    Windows::Foundation::IAsyncOperation<LampGroupGetVersionResult^>^ GetVersionAsync(Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);

};

} } } } } 
