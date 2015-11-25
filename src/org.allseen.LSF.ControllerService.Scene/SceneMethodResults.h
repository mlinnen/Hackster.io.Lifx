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

using namespace concurrency;

namespace org { namespace allseen { namespace LSF { namespace ControllerService { namespace Scene {

ref class SceneConsumer;

public ref class SceneApplySceneResult sealed
{
public:
    property int32 Status
    {
        int32 get() { return m_status; }
    internal:
        void set(_In_ int32 value) { m_status = value; }
    }

    property uint32 ResponseCode
    {
        uint32 get() { return m_interfaceMemberResponseCode; }
    internal:
        void set(_In_ uint32 value) { m_interfaceMemberResponseCode = value; }
    }
    property Platform::String^ SceneID
    {
        Platform::String^ get() { return m_interfaceMemberSceneID; }
    internal:
        void set(_In_ Platform::String^ value) { m_interfaceMemberSceneID = value; }
    }
    
    static SceneApplySceneResult^ CreateSuccessResult(_In_ uint32 interfaceMemberResponseCode, _In_ Platform::String^ interfaceMemberSceneID)
    {
        auto result = ref new SceneApplySceneResult();
        result->Status = Windows::Devices::AllJoyn::AllJoynStatus::Ok;
        result->ResponseCode = interfaceMemberResponseCode;
        result->SceneID = interfaceMemberSceneID;
        result->m_creationContext = Concurrency::task_continuation_context::use_current();
        return result;
    }
    
    static SceneApplySceneResult^ CreateFailureResult(_In_ int32 status)
    {
        auto result = ref new SceneApplySceneResult();
        result->Status = status;
        return result;
    }
internal:
    Concurrency::task_continuation_context m_creationContext = Concurrency::task_continuation_context::use_default();

private:
    int32 m_status;
    uint32 m_interfaceMemberResponseCode;
    Platform::String^ m_interfaceMemberSceneID;
};

public ref class SceneCreateSceneResult sealed
{
public:
    property int32 Status
    {
        int32 get() { return m_status; }
    internal:
        void set(_In_ int32 value) { m_status = value; }
    }

    property uint32 ResponseCode
    {
        uint32 get() { return m_interfaceMemberResponseCode; }
    internal:
        void set(_In_ uint32 value) { m_interfaceMemberResponseCode = value; }
    }
    property Platform::String^ SceneID
    {
        Platform::String^ get() { return m_interfaceMemberSceneID; }
    internal:
        void set(_In_ Platform::String^ value) { m_interfaceMemberSceneID = value; }
    }
    
    static SceneCreateSceneResult^ CreateSuccessResult(_In_ uint32 interfaceMemberResponseCode, _In_ Platform::String^ interfaceMemberSceneID)
    {
        auto result = ref new SceneCreateSceneResult();
        result->Status = Windows::Devices::AllJoyn::AllJoynStatus::Ok;
        result->ResponseCode = interfaceMemberResponseCode;
        result->SceneID = interfaceMemberSceneID;
        result->m_creationContext = Concurrency::task_continuation_context::use_current();
        return result;
    }
    
    static SceneCreateSceneResult^ CreateFailureResult(_In_ int32 status)
    {
        auto result = ref new SceneCreateSceneResult();
        result->Status = status;
        return result;
    }
internal:
    Concurrency::task_continuation_context m_creationContext = Concurrency::task_continuation_context::use_default();

private:
    int32 m_status;
    uint32 m_interfaceMemberResponseCode;
    Platform::String^ m_interfaceMemberSceneID;
};

public ref class SceneDeleteSceneResult sealed
{
public:
    property int32 Status
    {
        int32 get() { return m_status; }
    internal:
        void set(_In_ int32 value) { m_status = value; }
    }

    property uint32 ResponseCode
    {
        uint32 get() { return m_interfaceMemberResponseCode; }
    internal:
        void set(_In_ uint32 value) { m_interfaceMemberResponseCode = value; }
    }
    property Platform::String^ SceneID
    {
        Platform::String^ get() { return m_interfaceMemberSceneID; }
    internal:
        void set(_In_ Platform::String^ value) { m_interfaceMemberSceneID = value; }
    }
    
    static SceneDeleteSceneResult^ CreateSuccessResult(_In_ uint32 interfaceMemberResponseCode, _In_ Platform::String^ interfaceMemberSceneID)
    {
        auto result = ref new SceneDeleteSceneResult();
        result->Status = Windows::Devices::AllJoyn::AllJoynStatus::Ok;
        result->ResponseCode = interfaceMemberResponseCode;
        result->SceneID = interfaceMemberSceneID;
        result->m_creationContext = Concurrency::task_continuation_context::use_current();
        return result;
    }
    
    static SceneDeleteSceneResult^ CreateFailureResult(_In_ int32 status)
    {
        auto result = ref new SceneDeleteSceneResult();
        result->Status = status;
        return result;
    }
internal:
    Concurrency::task_continuation_context m_creationContext = Concurrency::task_continuation_context::use_default();

private:
    int32 m_status;
    uint32 m_interfaceMemberResponseCode;
    Platform::String^ m_interfaceMemberSceneID;
};

public ref class SceneGetAllSceneIDsResult sealed
{
public:
    property int32 Status
    {
        int32 get() { return m_status; }
    internal:
        void set(_In_ int32 value) { m_status = value; }
    }

    property uint32 ResponseCode
    {
        uint32 get() { return m_interfaceMemberResponseCode; }
    internal:
        void set(_In_ uint32 value) { m_interfaceMemberResponseCode = value; }
    }
    property Windows::Foundation::Collections::IVector<Platform::String^>^ SceneIDs
    {
        Windows::Foundation::Collections::IVector<Platform::String^>^ get() { return m_interfaceMemberSceneIDs; }
    internal:
        void set(_In_ Windows::Foundation::Collections::IVector<Platform::String^>^ value) { m_interfaceMemberSceneIDs = value; }
    }
    
    static SceneGetAllSceneIDsResult^ CreateSuccessResult(_In_ uint32 interfaceMemberResponseCode, _In_ Windows::Foundation::Collections::IVector<Platform::String^>^ interfaceMemberSceneIDs)
    {
        auto result = ref new SceneGetAllSceneIDsResult();
        result->Status = Windows::Devices::AllJoyn::AllJoynStatus::Ok;
        result->ResponseCode = interfaceMemberResponseCode;
        result->SceneIDs = interfaceMemberSceneIDs;
        result->m_creationContext = Concurrency::task_continuation_context::use_current();
        return result;
    }
    
    static SceneGetAllSceneIDsResult^ CreateFailureResult(_In_ int32 status)
    {
        auto result = ref new SceneGetAllSceneIDsResult();
        result->Status = status;
        return result;
    }
internal:
    Concurrency::task_continuation_context m_creationContext = Concurrency::task_continuation_context::use_default();

private:
    int32 m_status;
    uint32 m_interfaceMemberResponseCode;
    Windows::Foundation::Collections::IVector<Platform::String^>^ m_interfaceMemberSceneIDs;
};

public ref class SceneGetSceneResult sealed
{
public:
    property int32 Status
    {
        int32 get() { return m_status; }
    internal:
        void set(_In_ int32 value) { m_status = value; }
    }

    property uint32 ResponseCode
    {
        uint32 get() { return m_interfaceMemberResponseCode; }
    internal:
        void set(_In_ uint32 value) { m_interfaceMemberResponseCode = value; }
    }
    property Platform::String^ SceneID
    {
        Platform::String^ get() { return m_interfaceMemberSceneID; }
    internal:
        void set(_In_ Platform::String^ value) { m_interfaceMemberSceneID = value; }
    }
    property Windows::Foundation::Collections::IVector<SceneTransitionlampsLampGroupsToStateItem^>^ TransitionlampsLampGroupsToState
    {
        Windows::Foundation::Collections::IVector<SceneTransitionlampsLampGroupsToStateItem^>^ get() { return m_interfaceMemberTransitionlampsLampGroupsToState; }
    internal:
        void set(_In_ Windows::Foundation::Collections::IVector<SceneTransitionlampsLampGroupsToStateItem^>^ value) { m_interfaceMemberTransitionlampsLampGroupsToState = value; }
    }
    property Windows::Foundation::Collections::IVector<SceneTransitionlampsLampGroupsToPresetItem^>^ TransitionlampsLampGroupsToPreset
    {
        Windows::Foundation::Collections::IVector<SceneTransitionlampsLampGroupsToPresetItem^>^ get() { return m_interfaceMemberTransitionlampsLampGroupsToPreset; }
    internal:
        void set(_In_ Windows::Foundation::Collections::IVector<SceneTransitionlampsLampGroupsToPresetItem^>^ value) { m_interfaceMemberTransitionlampsLampGroupsToPreset = value; }
    }
    property Windows::Foundation::Collections::IVector<ScenePulselampsLampGroupsWithStateItem^>^ PulselampsLampGroupsWithState
    {
        Windows::Foundation::Collections::IVector<ScenePulselampsLampGroupsWithStateItem^>^ get() { return m_interfaceMemberPulselampsLampGroupsWithState; }
    internal:
        void set(_In_ Windows::Foundation::Collections::IVector<ScenePulselampsLampGroupsWithStateItem^>^ value) { m_interfaceMemberPulselampsLampGroupsWithState = value; }
    }
    property Windows::Foundation::Collections::IVector<ScenePulselampsLampGroupsWithPresetItem^>^ PulselampsLampGroupsWithPreset
    {
        Windows::Foundation::Collections::IVector<ScenePulselampsLampGroupsWithPresetItem^>^ get() { return m_interfaceMemberPulselampsLampGroupsWithPreset; }
    internal:
        void set(_In_ Windows::Foundation::Collections::IVector<ScenePulselampsLampGroupsWithPresetItem^>^ value) { m_interfaceMemberPulselampsLampGroupsWithPreset = value; }
    }
    
    static SceneGetSceneResult^ CreateSuccessResult(_In_ uint32 interfaceMemberResponseCode, _In_ Platform::String^ interfaceMemberSceneID, _In_ Windows::Foundation::Collections::IVector<SceneTransitionlampsLampGroupsToStateItem^>^ interfaceMemberTransitionlampsLampGroupsToState, _In_ Windows::Foundation::Collections::IVector<SceneTransitionlampsLampGroupsToPresetItem^>^ interfaceMemberTransitionlampsLampGroupsToPreset, _In_ Windows::Foundation::Collections::IVector<ScenePulselampsLampGroupsWithStateItem^>^ interfaceMemberPulselampsLampGroupsWithState, _In_ Windows::Foundation::Collections::IVector<ScenePulselampsLampGroupsWithPresetItem^>^ interfaceMemberPulselampsLampGroupsWithPreset)
    {
        auto result = ref new SceneGetSceneResult();
        result->Status = Windows::Devices::AllJoyn::AllJoynStatus::Ok;
        result->ResponseCode = interfaceMemberResponseCode;
        result->SceneID = interfaceMemberSceneID;
        result->TransitionlampsLampGroupsToState = interfaceMemberTransitionlampsLampGroupsToState;
        result->TransitionlampsLampGroupsToPreset = interfaceMemberTransitionlampsLampGroupsToPreset;
        result->PulselampsLampGroupsWithState = interfaceMemberPulselampsLampGroupsWithState;
        result->PulselampsLampGroupsWithPreset = interfaceMemberPulselampsLampGroupsWithPreset;
        result->m_creationContext = Concurrency::task_continuation_context::use_current();
        return result;
    }
    
    static SceneGetSceneResult^ CreateFailureResult(_In_ int32 status)
    {
        auto result = ref new SceneGetSceneResult();
        result->Status = status;
        return result;
    }
internal:
    Concurrency::task_continuation_context m_creationContext = Concurrency::task_continuation_context::use_default();

private:
    int32 m_status;
    uint32 m_interfaceMemberResponseCode;
    Platform::String^ m_interfaceMemberSceneID;
    Windows::Foundation::Collections::IVector<SceneTransitionlampsLampGroupsToStateItem^>^ m_interfaceMemberTransitionlampsLampGroupsToState;
    Windows::Foundation::Collections::IVector<SceneTransitionlampsLampGroupsToPresetItem^>^ m_interfaceMemberTransitionlampsLampGroupsToPreset;
    Windows::Foundation::Collections::IVector<ScenePulselampsLampGroupsWithStateItem^>^ m_interfaceMemberPulselampsLampGroupsWithState;
    Windows::Foundation::Collections::IVector<ScenePulselampsLampGroupsWithPresetItem^>^ m_interfaceMemberPulselampsLampGroupsWithPreset;
};

public ref class SceneGetSceneNameResult sealed
{
public:
    property int32 Status
    {
        int32 get() { return m_status; }
    internal:
        void set(_In_ int32 value) { m_status = value; }
    }

    property uint32 ResponseCode
    {
        uint32 get() { return m_interfaceMemberResponseCode; }
    internal:
        void set(_In_ uint32 value) { m_interfaceMemberResponseCode = value; }
    }
    property Platform::String^ SceneID
    {
        Platform::String^ get() { return m_interfaceMemberSceneID; }
    internal:
        void set(_In_ Platform::String^ value) { m_interfaceMemberSceneID = value; }
    }
    property Platform::String^ Language
    {
        Platform::String^ get() { return m_interfaceMemberLanguage; }
    internal:
        void set(_In_ Platform::String^ value) { m_interfaceMemberLanguage = value; }
    }
    property Platform::String^ SceneName
    {
        Platform::String^ get() { return m_interfaceMemberSceneName; }
    internal:
        void set(_In_ Platform::String^ value) { m_interfaceMemberSceneName = value; }
    }
    
    static SceneGetSceneNameResult^ CreateSuccessResult(_In_ uint32 interfaceMemberResponseCode, _In_ Platform::String^ interfaceMemberSceneID, _In_ Platform::String^ interfaceMemberLanguage, _In_ Platform::String^ interfaceMemberSceneName)
    {
        auto result = ref new SceneGetSceneNameResult();
        result->Status = Windows::Devices::AllJoyn::AllJoynStatus::Ok;
        result->ResponseCode = interfaceMemberResponseCode;
        result->SceneID = interfaceMemberSceneID;
        result->Language = interfaceMemberLanguage;
        result->SceneName = interfaceMemberSceneName;
        result->m_creationContext = Concurrency::task_continuation_context::use_current();
        return result;
    }
    
    static SceneGetSceneNameResult^ CreateFailureResult(_In_ int32 status)
    {
        auto result = ref new SceneGetSceneNameResult();
        result->Status = status;
        return result;
    }
internal:
    Concurrency::task_continuation_context m_creationContext = Concurrency::task_continuation_context::use_default();

private:
    int32 m_status;
    uint32 m_interfaceMemberResponseCode;
    Platform::String^ m_interfaceMemberSceneID;
    Platform::String^ m_interfaceMemberLanguage;
    Platform::String^ m_interfaceMemberSceneName;
};

public ref class SceneSetSceneNameResult sealed
{
public:
    property int32 Status
    {
        int32 get() { return m_status; }
    internal:
        void set(_In_ int32 value) { m_status = value; }
    }

    property uint32 ResponseCode
    {
        uint32 get() { return m_interfaceMemberResponseCode; }
    internal:
        void set(_In_ uint32 value) { m_interfaceMemberResponseCode = value; }
    }
    property Platform::String^ SceneID
    {
        Platform::String^ get() { return m_interfaceMemberSceneID; }
    internal:
        void set(_In_ Platform::String^ value) { m_interfaceMemberSceneID = value; }
    }
    property Platform::String^ Language
    {
        Platform::String^ get() { return m_interfaceMemberLanguage; }
    internal:
        void set(_In_ Platform::String^ value) { m_interfaceMemberLanguage = value; }
    }
    
    static SceneSetSceneNameResult^ CreateSuccessResult(_In_ uint32 interfaceMemberResponseCode, _In_ Platform::String^ interfaceMemberSceneID, _In_ Platform::String^ interfaceMemberLanguage)
    {
        auto result = ref new SceneSetSceneNameResult();
        result->Status = Windows::Devices::AllJoyn::AllJoynStatus::Ok;
        result->ResponseCode = interfaceMemberResponseCode;
        result->SceneID = interfaceMemberSceneID;
        result->Language = interfaceMemberLanguage;
        result->m_creationContext = Concurrency::task_continuation_context::use_current();
        return result;
    }
    
    static SceneSetSceneNameResult^ CreateFailureResult(_In_ int32 status)
    {
        auto result = ref new SceneSetSceneNameResult();
        result->Status = status;
        return result;
    }
internal:
    Concurrency::task_continuation_context m_creationContext = Concurrency::task_continuation_context::use_default();

private:
    int32 m_status;
    uint32 m_interfaceMemberResponseCode;
    Platform::String^ m_interfaceMemberSceneID;
    Platform::String^ m_interfaceMemberLanguage;
};

public ref class SceneUpdateSceneResult sealed
{
public:
    property int32 Status
    {
        int32 get() { return m_status; }
    internal:
        void set(_In_ int32 value) { m_status = value; }
    }

    property uint32 ResponseCode
    {
        uint32 get() { return m_interfaceMemberResponseCode; }
    internal:
        void set(_In_ uint32 value) { m_interfaceMemberResponseCode = value; }
    }
    property Platform::String^ SceneID
    {
        Platform::String^ get() { return m_interfaceMemberSceneID; }
    internal:
        void set(_In_ Platform::String^ value) { m_interfaceMemberSceneID = value; }
    }
    
    static SceneUpdateSceneResult^ CreateSuccessResult(_In_ uint32 interfaceMemberResponseCode, _In_ Platform::String^ interfaceMemberSceneID)
    {
        auto result = ref new SceneUpdateSceneResult();
        result->Status = Windows::Devices::AllJoyn::AllJoynStatus::Ok;
        result->ResponseCode = interfaceMemberResponseCode;
        result->SceneID = interfaceMemberSceneID;
        result->m_creationContext = Concurrency::task_continuation_context::use_current();
        return result;
    }
    
    static SceneUpdateSceneResult^ CreateFailureResult(_In_ int32 status)
    {
        auto result = ref new SceneUpdateSceneResult();
        result->Status = status;
        return result;
    }
internal:
    Concurrency::task_continuation_context m_creationContext = Concurrency::task_continuation_context::use_default();

private:
    int32 m_status;
    uint32 m_interfaceMemberResponseCode;
    Platform::String^ m_interfaceMemberSceneID;
};

public ref class SceneJoinSessionResult sealed
{
public:
    property int32 Status
    {
        int32 get() { return m_status; }
    internal:
        void set(_In_ int32 value) { m_status = value; }
    }

    property SceneConsumer^ Consumer
    {
        SceneConsumer^ get() { return m_consumer; }
    internal:
        void set(_In_ SceneConsumer^ value) { m_consumer = value; }
    };

private:
    int32 m_status;
    SceneConsumer^ m_consumer;
};

public ref class SceneGetVersionResult sealed
{
public:
    property int32 Status
    {
        int32 get() { return m_status; }
    internal:
        void set(_In_ int32 value) { m_status = value; }
    }

    property uint32 Version
    {
        uint32 get() { return m_value; }
    internal:
        void set(_In_ uint32 value) { m_value = value; }
    }

    static SceneGetVersionResult^ CreateSuccessResult(_In_ uint32 value)
    {
        auto result = ref new SceneGetVersionResult();
        result->Status = Windows::Devices::AllJoyn::AllJoynStatus::Ok;
        result->Version = value;
        result->m_creationContext = Concurrency::task_continuation_context::use_current();
        return result;
    }

    static SceneGetVersionResult^ CreateFailureResult(_In_ int32 status)
    {
        auto result = ref new SceneGetVersionResult();
        result->Status = status;
        return result;
    }
internal:
    Concurrency::task_continuation_context m_creationContext = Concurrency::task_continuation_context::use_default();

private:
    int32 m_status;
    uint32 m_value;
};

} } } } } 
