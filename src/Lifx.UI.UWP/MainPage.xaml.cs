using org.allseen.LSF.LampState;
using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Runtime.InteropServices.WindowsRuntime;
using Windows.Foundation;
using Windows.Foundation.Collections;
using Windows.UI.Xaml;
using Windows.UI.Xaml.Controls;
using Windows.UI.Xaml.Controls.Primitives;
using Windows.UI.Xaml.Data;
using Windows.UI.Xaml.Input;
using Windows.UI.Xaml.Media;
using Windows.UI.Xaml.Navigation;
using Windows.Devices.AllJoyn;
using System.Diagnostics;

// The Blank Page item template is documented at http://go.microsoft.com/fwlink/?LinkId=402352&clcid=0x409

namespace Lifx.UI.UWP
{
    /// <summary>
    /// An empty page that can be used on its own or navigated to within a Frame.
    /// </summary>
    public sealed partial class MainPage : Page
    {
        private LampStateConsumer _lampState;

        public MainPage()
        {
            this.InitializeComponent();

            
        }

        protected override void OnNavigatedTo(NavigationEventArgs e)
        {
            base.OnNavigatedTo(e);

            FindLamps();
        }

        private void FindLamps()
        {
            AllJoynBusAttachment busAttachment = new AllJoynBusAttachment();
            busAttachment.AuthenticationMechanisms.Add(AllJoynAuthenticationMechanism.SrpAnonymous);
            LampStateWatcher watcher = new LampStateWatcher(busAttachment);
            watcher.Added += LampFound;
            watcher.Start();
        }

        private async void LampFound(LampStateWatcher sender, AllJoynServiceInfo args)
        {
            var joinResult = await LampStateConsumer.JoinSessionAsync(args, sender);

            if (joinResult.Status == AllJoynStatus.Ok)
            {
                _lampState = joinResult.Consumer;
                var brightness = await _lampState.GetBrightnessAsync();
                if (brightness.Status ==0)
                {

                }
                var colortemp = await _lampState.GetColorTempAsync();
                var hue = await _lampState.GetHueAsync();
                var on = await _lampState.GetOnOffAsync();
                var saturation = _lampState.GetSaturationAsync();
                if (saturation.Status != AsyncStatus.Error)
                {
                    
                }
            }
        }

        private async void Toggle_Click(object sender, RoutedEventArgs e)
        {
            if (_lampState != null)
            {
                var currentState = await _lampState.GetOnOffAsync();
                await _lampState.SetOnOffAsync(!currentState.OnOff);
            }
        }
    }
}
