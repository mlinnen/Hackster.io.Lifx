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

namespace org { namespace allseen { namespace LSF { namespace ControllerService { namespace Scene {

// Signals
public ref class SceneScenesAppliedReceivedEventArgs sealed
{
public:
    property Windows::Devices::AllJoyn::AllJoynMessageInfo^ MessageInfo
    {
        Windows::Devices::AllJoyn::AllJoynMessageInfo^ get() { return m_messageInfo; }
        void set(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ value) { m_messageInfo = value; }
    }

    property Windows::Foundation::Collections::IVector<Platform::String^>^ SceneIDs
    {
        Windows::Foundation::Collections::IVector<Platform::String^>^ get() { return m_interfaceMemberSceneIDs; }
    internal:
        void set(_In_ Windows::Foundation::Collections::IVector<Platform::String^>^ value) { m_interfaceMemberSceneIDs = value; }
    }

private:
    Windows::Devices::AllJoyn::AllJoynMessageInfo^ m_messageInfo;

    Windows::Foundation::Collections::IVector<Platform::String^>^ m_interfaceMemberSceneIDs;
};

public ref class SceneScenesCreatedReceivedEventArgs sealed
{
public:
    property Windows::Devices::AllJoyn::AllJoynMessageInfo^ MessageInfo
    {
        Windows::Devices::AllJoyn::AllJoynMessageInfo^ get() { return m_messageInfo; }
        void set(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ value) { m_messageInfo = value; }
    }

    property Windows::Foundation::Collections::IVector<Platform::String^>^ SceneIDs
    {
        Windows::Foundation::Collections::IVector<Platform::String^>^ get() { return m_interfaceMemberSceneIDs; }
    internal:
        void set(_In_ Windows::Foundation::Collections::IVector<Platform::String^>^ value) { m_interfaceMemberSceneIDs = value; }
    }

private:
    Windows::Devices::AllJoyn::AllJoynMessageInfo^ m_messageInfo;

    Windows::Foundation::Collections::IVector<Platform::String^>^ m_interfaceMemberSceneIDs;
};

public ref class SceneScenesDeletedReceivedEventArgs sealed
{
public:
    property Windows::Devices::AllJoyn::AllJoynMessageInfo^ MessageInfo
    {
        Windows::Devices::AllJoyn::AllJoynMessageInfo^ get() { return m_messageInfo; }
        void set(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ value) { m_messageInfo = value; }
    }

    property Windows::Foundation::Collections::IVector<Platform::String^>^ SceneIDs
    {
        Windows::Foundation::Collections::IVector<Platform::String^>^ get() { return m_interfaceMemberSceneIDs; }
    internal:
        void set(_In_ Windows::Foundation::Collections::IVector<Platform::String^>^ value) { m_interfaceMemberSceneIDs = value; }
    }

private:
    Windows::Devices::AllJoyn::AllJoynMessageInfo^ m_messageInfo;

    Windows::Foundation::Collections::IVector<Platform::String^>^ m_interfaceMemberSceneIDs;
};

public ref class SceneScenesNameChangedReceivedEventArgs sealed
{
public:
    property Windows::Devices::AllJoyn::AllJoynMessageInfo^ MessageInfo
    {
        Windows::Devices::AllJoyn::AllJoynMessageInfo^ get() { return m_messageInfo; }
        void set(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ value) { m_messageInfo = value; }
    }

    property Windows::Foundation::Collections::IVector<Platform::String^>^ SceneIDs
    {
        Windows::Foundation::Collections::IVector<Platform::String^>^ get() { return m_interfaceMemberSceneIDs; }
    internal:
        void set(_In_ Windows::Foundation::Collections::IVector<Platform::String^>^ value) { m_interfaceMemberSceneIDs = value; }
    }

private:
    Windows::Devices::AllJoyn::AllJoynMessageInfo^ m_messageInfo;

    Windows::Foundation::Collections::IVector<Platform::String^>^ m_interfaceMemberSceneIDs;
};

public ref class SceneScenesUpdatedReceivedEventArgs sealed
{
public:
    property Windows::Devices::AllJoyn::AllJoynMessageInfo^ MessageInfo
    {
        Windows::Devices::AllJoyn::AllJoynMessageInfo^ get() { return m_messageInfo; }
        void set(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ value) { m_messageInfo = value; }
    }

    property Windows::Foundation::Collections::IVector<Platform::String^>^ SceneIDs
    {
        Windows::Foundation::Collections::IVector<Platform::String^>^ get() { return m_interfaceMemberSceneIDs; }
    internal:
        void set(_In_ Windows::Foundation::Collections::IVector<Platform::String^>^ value) { m_interfaceMemberSceneIDs = value; }
    }

private:
    Windows::Devices::AllJoyn::AllJoynMessageInfo^ m_messageInfo;

    Windows::Foundation::Collections::IVector<Platform::String^>^ m_interfaceMemberSceneIDs;
};


} } } } } 
