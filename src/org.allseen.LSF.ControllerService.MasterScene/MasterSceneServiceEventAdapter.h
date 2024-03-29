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

namespace org { namespace allseen { namespace LSF { namespace ControllerService { namespace MasterScene {

// This class, and the associated EventArgs classes, exist for the benefit of JavaScript developers who
// do not have the ability to implement IMasterSceneService. Instead, MasterSceneServiceEventAdapter
// provides the Interface implementation and exposes a set of compatible events to the developer.
public ref class MasterSceneServiceEventAdapter sealed : [Windows::Foundation::Metadata::Default] IMasterSceneService
{
public:
    // Method Invocation Events
    event Windows::Foundation::TypedEventHandler<MasterSceneServiceEventAdapter^, MasterSceneApplyMasterSceneCalledEventArgs^>^ ApplyMasterSceneCalled 
    { 
        Windows::Foundation::EventRegistrationToken add(Windows::Foundation::TypedEventHandler<MasterSceneServiceEventAdapter^, MasterSceneApplyMasterSceneCalledEventArgs^>^ handler) 
        { 
            return _ApplyMasterSceneCalled += ref new Windows::Foundation::EventHandler<Platform::Object^>
            ([handler](Platform::Object^ sender, Platform::Object^ args)
            {
                handler->Invoke(safe_cast<MasterSceneServiceEventAdapter^>(sender), safe_cast<MasterSceneApplyMasterSceneCalledEventArgs^>(args));
            }, Platform::CallbackContext::Same);
        } 
        void remove(Windows::Foundation::EventRegistrationToken token) 
        { 
            _ApplyMasterSceneCalled -= token; 
        } 
    internal: 
        void raise(MasterSceneServiceEventAdapter^ sender, MasterSceneApplyMasterSceneCalledEventArgs^ args) 
        { 
            _ApplyMasterSceneCalled(sender, args);
        } 
    }

    event Windows::Foundation::TypedEventHandler<MasterSceneServiceEventAdapter^, MasterSceneCreateMasterSceneCalledEventArgs^>^ CreateMasterSceneCalled 
    { 
        Windows::Foundation::EventRegistrationToken add(Windows::Foundation::TypedEventHandler<MasterSceneServiceEventAdapter^, MasterSceneCreateMasterSceneCalledEventArgs^>^ handler) 
        { 
            return _CreateMasterSceneCalled += ref new Windows::Foundation::EventHandler<Platform::Object^>
            ([handler](Platform::Object^ sender, Platform::Object^ args)
            {
                handler->Invoke(safe_cast<MasterSceneServiceEventAdapter^>(sender), safe_cast<MasterSceneCreateMasterSceneCalledEventArgs^>(args));
            }, Platform::CallbackContext::Same);
        } 
        void remove(Windows::Foundation::EventRegistrationToken token) 
        { 
            _CreateMasterSceneCalled -= token; 
        } 
    internal: 
        void raise(MasterSceneServiceEventAdapter^ sender, MasterSceneCreateMasterSceneCalledEventArgs^ args) 
        { 
            _CreateMasterSceneCalled(sender, args);
        } 
    }

    event Windows::Foundation::TypedEventHandler<MasterSceneServiceEventAdapter^, MasterSceneDeleteMasterSceneCalledEventArgs^>^ DeleteMasterSceneCalled 
    { 
        Windows::Foundation::EventRegistrationToken add(Windows::Foundation::TypedEventHandler<MasterSceneServiceEventAdapter^, MasterSceneDeleteMasterSceneCalledEventArgs^>^ handler) 
        { 
            return _DeleteMasterSceneCalled += ref new Windows::Foundation::EventHandler<Platform::Object^>
            ([handler](Platform::Object^ sender, Platform::Object^ args)
            {
                handler->Invoke(safe_cast<MasterSceneServiceEventAdapter^>(sender), safe_cast<MasterSceneDeleteMasterSceneCalledEventArgs^>(args));
            }, Platform::CallbackContext::Same);
        } 
        void remove(Windows::Foundation::EventRegistrationToken token) 
        { 
            _DeleteMasterSceneCalled -= token; 
        } 
    internal: 
        void raise(MasterSceneServiceEventAdapter^ sender, MasterSceneDeleteMasterSceneCalledEventArgs^ args) 
        { 
            _DeleteMasterSceneCalled(sender, args);
        } 
    }

    event Windows::Foundation::TypedEventHandler<MasterSceneServiceEventAdapter^, MasterSceneGetAllMasterSceneIDsCalledEventArgs^>^ GetAllMasterSceneIDsCalled 
    { 
        Windows::Foundation::EventRegistrationToken add(Windows::Foundation::TypedEventHandler<MasterSceneServiceEventAdapter^, MasterSceneGetAllMasterSceneIDsCalledEventArgs^>^ handler) 
        { 
            return _GetAllMasterSceneIDsCalled += ref new Windows::Foundation::EventHandler<Platform::Object^>
            ([handler](Platform::Object^ sender, Platform::Object^ args)
            {
                handler->Invoke(safe_cast<MasterSceneServiceEventAdapter^>(sender), safe_cast<MasterSceneGetAllMasterSceneIDsCalledEventArgs^>(args));
            }, Platform::CallbackContext::Same);
        } 
        void remove(Windows::Foundation::EventRegistrationToken token) 
        { 
            _GetAllMasterSceneIDsCalled -= token; 
        } 
    internal: 
        void raise(MasterSceneServiceEventAdapter^ sender, MasterSceneGetAllMasterSceneIDsCalledEventArgs^ args) 
        { 
            _GetAllMasterSceneIDsCalled(sender, args);
        } 
    }

    event Windows::Foundation::TypedEventHandler<MasterSceneServiceEventAdapter^, MasterSceneGetMasterSceneCalledEventArgs^>^ GetMasterSceneCalled 
    { 
        Windows::Foundation::EventRegistrationToken add(Windows::Foundation::TypedEventHandler<MasterSceneServiceEventAdapter^, MasterSceneGetMasterSceneCalledEventArgs^>^ handler) 
        { 
            return _GetMasterSceneCalled += ref new Windows::Foundation::EventHandler<Platform::Object^>
            ([handler](Platform::Object^ sender, Platform::Object^ args)
            {
                handler->Invoke(safe_cast<MasterSceneServiceEventAdapter^>(sender), safe_cast<MasterSceneGetMasterSceneCalledEventArgs^>(args));
            }, Platform::CallbackContext::Same);
        } 
        void remove(Windows::Foundation::EventRegistrationToken token) 
        { 
            _GetMasterSceneCalled -= token; 
        } 
    internal: 
        void raise(MasterSceneServiceEventAdapter^ sender, MasterSceneGetMasterSceneCalledEventArgs^ args) 
        { 
            _GetMasterSceneCalled(sender, args);
        } 
    }

    event Windows::Foundation::TypedEventHandler<MasterSceneServiceEventAdapter^, MasterSceneGetMasterSceneNameCalledEventArgs^>^ GetMasterSceneNameCalled 
    { 
        Windows::Foundation::EventRegistrationToken add(Windows::Foundation::TypedEventHandler<MasterSceneServiceEventAdapter^, MasterSceneGetMasterSceneNameCalledEventArgs^>^ handler) 
        { 
            return _GetMasterSceneNameCalled += ref new Windows::Foundation::EventHandler<Platform::Object^>
            ([handler](Platform::Object^ sender, Platform::Object^ args)
            {
                handler->Invoke(safe_cast<MasterSceneServiceEventAdapter^>(sender), safe_cast<MasterSceneGetMasterSceneNameCalledEventArgs^>(args));
            }, Platform::CallbackContext::Same);
        } 
        void remove(Windows::Foundation::EventRegistrationToken token) 
        { 
            _GetMasterSceneNameCalled -= token; 
        } 
    internal: 
        void raise(MasterSceneServiceEventAdapter^ sender, MasterSceneGetMasterSceneNameCalledEventArgs^ args) 
        { 
            _GetMasterSceneNameCalled(sender, args);
        } 
    }

    event Windows::Foundation::TypedEventHandler<MasterSceneServiceEventAdapter^, MasterSceneSetMasterSceneNameCalledEventArgs^>^ SetMasterSceneNameCalled 
    { 
        Windows::Foundation::EventRegistrationToken add(Windows::Foundation::TypedEventHandler<MasterSceneServiceEventAdapter^, MasterSceneSetMasterSceneNameCalledEventArgs^>^ handler) 
        { 
            return _SetMasterSceneNameCalled += ref new Windows::Foundation::EventHandler<Platform::Object^>
            ([handler](Platform::Object^ sender, Platform::Object^ args)
            {
                handler->Invoke(safe_cast<MasterSceneServiceEventAdapter^>(sender), safe_cast<MasterSceneSetMasterSceneNameCalledEventArgs^>(args));
            }, Platform::CallbackContext::Same);
        } 
        void remove(Windows::Foundation::EventRegistrationToken token) 
        { 
            _SetMasterSceneNameCalled -= token; 
        } 
    internal: 
        void raise(MasterSceneServiceEventAdapter^ sender, MasterSceneSetMasterSceneNameCalledEventArgs^ args) 
        { 
            _SetMasterSceneNameCalled(sender, args);
        } 
    }

    event Windows::Foundation::TypedEventHandler<MasterSceneServiceEventAdapter^, MasterSceneUpdateMasterSceneCalledEventArgs^>^ UpdateMasterSceneCalled 
    { 
        Windows::Foundation::EventRegistrationToken add(Windows::Foundation::TypedEventHandler<MasterSceneServiceEventAdapter^, MasterSceneUpdateMasterSceneCalledEventArgs^>^ handler) 
        { 
            return _UpdateMasterSceneCalled += ref new Windows::Foundation::EventHandler<Platform::Object^>
            ([handler](Platform::Object^ sender, Platform::Object^ args)
            {
                handler->Invoke(safe_cast<MasterSceneServiceEventAdapter^>(sender), safe_cast<MasterSceneUpdateMasterSceneCalledEventArgs^>(args));
            }, Platform::CallbackContext::Same);
        } 
        void remove(Windows::Foundation::EventRegistrationToken token) 
        { 
            _UpdateMasterSceneCalled -= token; 
        } 
    internal: 
        void raise(MasterSceneServiceEventAdapter^ sender, MasterSceneUpdateMasterSceneCalledEventArgs^ args) 
        { 
            _UpdateMasterSceneCalled(sender, args);
        } 
    }

    // Property Read Events
    event Windows::Foundation::TypedEventHandler<MasterSceneServiceEventAdapter^, MasterSceneGetVersionRequestedEventArgs^>^ GetVersionRequested 
    { 
        Windows::Foundation::EventRegistrationToken add(Windows::Foundation::TypedEventHandler<MasterSceneServiceEventAdapter^, MasterSceneGetVersionRequestedEventArgs^>^ handler) 
        { 
            return _GetVersionRequested += ref new Windows::Foundation::EventHandler<Platform::Object^>
            ([handler](Platform::Object^ sender, Platform::Object^ args)
            {
                handler->Invoke(safe_cast<MasterSceneServiceEventAdapter^>(sender), safe_cast<MasterSceneGetVersionRequestedEventArgs^>(args));
            }, Platform::CallbackContext::Same);
        } 
        void remove(Windows::Foundation::EventRegistrationToken token) 
        { 
            _GetVersionRequested -= token; 
        } 
    internal: 
        void raise(MasterSceneServiceEventAdapter^ sender, MasterSceneGetVersionRequestedEventArgs^ args) 
        { 
            _GetVersionRequested(sender, args);
        } 
    }

    // Property Write Events
    // IMasterSceneService Implementation
    virtual Windows::Foundation::IAsyncOperation<MasterSceneApplyMasterSceneResult^>^ ApplyMasterSceneAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info, _In_ Platform::String^ interfaceMemberMasterSceneID);
    virtual Windows::Foundation::IAsyncOperation<MasterSceneCreateMasterSceneResult^>^ CreateMasterSceneAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info, _In_ Windows::Foundation::Collections::IVectorView<Platform::String^>^ interfaceMemberScenes, _In_ Platform::String^ interfaceMemberMasterSceneName, _In_ Platform::String^ interfaceMemberLanguage);
    virtual Windows::Foundation::IAsyncOperation<MasterSceneDeleteMasterSceneResult^>^ DeleteMasterSceneAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info, _In_ Platform::String^ interfaceMemberMasterSceneID);
    virtual Windows::Foundation::IAsyncOperation<MasterSceneGetAllMasterSceneIDsResult^>^ GetAllMasterSceneIDsAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);
    virtual Windows::Foundation::IAsyncOperation<MasterSceneGetMasterSceneResult^>^ GetMasterSceneAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info, _In_ Platform::String^ interfaceMemberMasterSceneID);
    virtual Windows::Foundation::IAsyncOperation<MasterSceneGetMasterSceneNameResult^>^ GetMasterSceneNameAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info, _In_ Platform::String^ interfaceMemberMasterSceneID, _In_ Platform::String^ interfaceMemberLanguage);
    virtual Windows::Foundation::IAsyncOperation<MasterSceneSetMasterSceneNameResult^>^ SetMasterSceneNameAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info, _In_ Platform::String^ interfaceMemberMasterSceneID, _In_ Platform::String^ interfaceMemberMasterSceneName, _In_ Platform::String^ interfaceMemberLanguage);
    virtual Windows::Foundation::IAsyncOperation<MasterSceneUpdateMasterSceneResult^>^ UpdateMasterSceneAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info, _In_ Platform::String^ interfaceMemberMasterSceneID, _In_ Windows::Foundation::Collections::IVectorView<Platform::String^>^ interfaceMemberScenes);

    virtual Windows::Foundation::IAsyncOperation<MasterSceneGetVersionResult^>^ GetVersionAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);


private:
    event Windows::Foundation::EventHandler<Platform::Object^>^ _ApplyMasterSceneCalled;
    event Windows::Foundation::EventHandler<Platform::Object^>^ _CreateMasterSceneCalled;
    event Windows::Foundation::EventHandler<Platform::Object^>^ _DeleteMasterSceneCalled;
    event Windows::Foundation::EventHandler<Platform::Object^>^ _GetAllMasterSceneIDsCalled;
    event Windows::Foundation::EventHandler<Platform::Object^>^ _GetMasterSceneCalled;
    event Windows::Foundation::EventHandler<Platform::Object^>^ _GetMasterSceneNameCalled;
    event Windows::Foundation::EventHandler<Platform::Object^>^ _SetMasterSceneNameCalled;
    event Windows::Foundation::EventHandler<Platform::Object^>^ _UpdateMasterSceneCalled;
    event Windows::Foundation::EventHandler<Platform::Object^>^ _GetVersionRequested;
};

} } } } } 
