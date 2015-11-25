using Lifx.UI.UWP.ViewModels;
using org.allseen.LSF.ControllerService.Lamp;
using System;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Diagnostics;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Windows.Devices.AllJoyn;

namespace Lifx.UI.UWP.Services
{
    public class LampService: ILampService
    {
        private LampConsumer _lamp;
        private ObservableCollection<LampStateViewModel> _lamps = new ObservableCollection<LampStateViewModel>();

        public ObservableCollection<LampStateViewModel> Lamps
        {
            get { return _lamps; }
            set { if (_lamps!=value)
                    _lamps = value;
            }
        }

        public int Start()
        {
            AllJoynBusAttachment busAttachment = new AllJoynBusAttachment();
            busAttachment.AuthenticationMechanisms.Add(AllJoynAuthenticationMechanism.SrpAnonymous);
            var data = busAttachment.AboutData;
            data.DefaultManufacturer = "Protosystem";
            data.DefaultAppName = "LIFX Client";

            LampWatcher lampWatcher = new LampWatcher(busAttachment);
            lampWatcher.Added += LampWatcher_Added;
            lampWatcher.Start();
            return 0;
        }

        public void Stop()
        {
            if (_lamp!=null)
            {
                _lamp.Dispose();
            }
        }

        private async void LampWatcher_Added(org.allseen.LSF.ControllerService.Lamp.LampWatcher sender, AllJoynServiceInfo args)
        {
            var joinResult = await LampConsumer.JoinSessionAsync(args, sender);
            if (joinResult.Status == AllJoynStatus.Ok)
            {
                _lamp = joinResult.Consumer;
                var lamps = await _lamp.GetAllLampIDsAsync();
                foreach (var lamp in lamps.LampIDs)
                {
                    var lampModel = new LampStateViewModel();

                    var lampDetails = await _lamp.GetLampDetailsAsync(lamp);
                    var lampState = await _lamp.GetLampStateAsync(lamp);
                    foreach (var stateItem in lampState.LampState)
                    {
                        if (stateItem.Key == "Brightness")
                            lampModel.Brightness = Convert.ToUInt32(stateItem.Value);
                        if (stateItem.Key == "ColorTemp")
                            lampModel.ColorTemp = Convert.ToUInt32(stateItem.Value);
                        if (stateItem.Key == "Hue")
                            lampModel.Hue = Convert.ToUInt32(stateItem.Value);
                        if (stateItem.Key == "OnOff")
                            lampModel.On = Convert.ToBoolean(stateItem.Value);
                        if (stateItem.Key == "Saturation")
                            lampModel.Saturation = Convert.ToUInt32(stateItem.Value);


                        Debug.WriteLine(string.Format("Lamp State Key: {0} Value: {1}", stateItem.Key, stateItem.Value));
                    }
                    var name = await _lamp.GetLampNameAsync(lamp, "en");
                    lampModel.Name = name.LampName;
                    Lamps.Add(lampModel);
                }

                _lamp.Signals.LampStateChangedReceived += LampStateChanged;
                //UpdateUI();
            }
        }

        private void LampStateChanged(LampSignals sender, LampLampStateChangedReceivedEventArgs args)
        {
            var lamp = _lamps.SingleOrDefault(o => o.Id == args.LampID);
            if (lamp != null)
            {

            }
        }

    }
}
