using org.allseen.LSF.LampState;
using Prism.Commands;
using Prism.Windows.Mvvm;
using Prism.Windows.Navigation;
using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Text;
using System.Threading;
using System.Threading.Tasks;
using System.Windows.Input;
using Windows.Devices.AllJoyn;
using Windows.Foundation;


namespace Lifx.UI.UWP.ViewModels
{
    class LampState
    {
        public string Id { get; set; }
        public string Name { get; set; }
        public bool On { get; set; }
        public uint Hue { get; set; }
        public uint Brightness { get; set; }
        public uint ColorTemp { get; set; }
        public uint Saturation { get; set; }

        public override bool Equals(object obj)
        {
            var item = obj as LampState;
            if (item == null)
                return false;
            if (item.Brightness == this.Brightness &&
                item.ColorTemp == this.ColorTemp &&
                item.Hue == this.Hue &&
                item.On == this.On &&
                item.Saturation == this.Saturation)
                return true;
            return false;
        }
    }
    public class MainPageViewModel : ViewModelBase
    {
        private LampStateConsumer _lampState;
        private LampState _currentState;
        private string _lampName;
        private string _lampButtonText;
        private double _hue;
        private bool _on;
        private double _brightness;
        private uint _colorTemp;
        private double _saturation;
        private bool _userUpdating;
        private bool _updated;
        private Timer _timer;

        public MainPageViewModel()
        {
            DisplayText = "This is the main page!";
            ToggleLightCommand = new DelegateCommand(ToggleLight);
            _timer = new Timer(Tick, null, 250, 250);
            _currentState = new LampState();
        }

        private void Tick(object state)
        {
            if (_userUpdating)
            {
                _userUpdating = false;
                _updated = false;
                return;
            }
            if (!_updated)
            {
                UpdateLamp();
                _updated = true;
            }
        }

        public string DisplayText { get; private set; }

        public string LampName
        {
            get { return _lampName; }
            set { SetProperty(ref _lampName, value); }
        }

        public string LampButtonText
        {
            get { return _lampButtonText; }
            set { SetProperty(ref _lampButtonText, value); }
        }

        public ICommand ToggleLightCommand { get; private set; }

        private void ToggleLight()
        {
            if (_lampState!=null)
            {
                On = !On;
            }
        }

        public double Hue
        {
            get { return _hue; }
            set
            {
                if (value >= 0 && value <= 350)
                {
                    if (SetProperty(ref _hue, value));
                        _userUpdating = true;
                }
            }
        }

        public double Brightness
        {
            get { return _brightness; }
            set
            {
                if (value >= 0 && value <= 100)
                {
                    if (SetProperty(ref _brightness, value));
                        _userUpdating = true;
                }
            }
        }

        public uint ColorTemp
        {
            get { return _colorTemp; }
            set
            {
                if (SetProperty(ref _colorTemp, value));
                    _userUpdating = true;
            }
        }

        public double Saturation
        {
            get { return _saturation; }
            set
            {
                if (value >= 0 && value <= 100)
                {
                    if (SetProperty(ref _saturation, value));
                        _userUpdating = true;
                }
            }
        }

        public bool On
        {
            get { return _on; }
            set
            {
                if (SetProperty(ref _on, value))
                    _userUpdating = true;
            }
        }

        public override void OnNavigatedTo(NavigatedToEventArgs e, Dictionary<string, object> viewModelState)
        {
            AllJoynBusAttachment busAttachment = new AllJoynBusAttachment();
            busAttachment.AuthenticationMechanisms.Add(AllJoynAuthenticationMechanism.SrpAnonymous);
            LampStateWatcher watcher = new LampStateWatcher(busAttachment);
            watcher.Added += LampDiscovered;
            watcher.Start();

        }

        private async void LampDiscovered(LampStateWatcher sender, AllJoynServiceInfo args)
        {
            var joinResult = await LampStateConsumer.JoinSessionAsync(args, sender);
            if (joinResult.Status == AllJoynStatus.Ok)
            {
                _lampState = joinResult.Consumer;
                _currentState.Id = args.UniqueName;
                // TODO get the name of the lamp
                var brightness = await _lampState.GetBrightnessAsync();
                if (brightness.Status == 0)
                    _currentState.Brightness = brightness.Brightness;

                var colortemp = await _lampState.GetColorTempAsync();
                if (colortemp.Status == 0)
                    _currentState.ColorTemp = colortemp.ColorTemp;

                var hue = await _lampState.GetHueAsync();
                if (hue.Status == 0)
                    _currentState.Hue = hue.Hue;

                var on = await _lampState.GetOnOffAsync();
                if (on.Status == 0)
                    _currentState.On = on.OnOff;

                var saturation = await _lampState.GetSaturationAsync();
                if (saturation.Status == 0)
                    _currentState.Saturation = saturation.Saturation;

                _lampState.Signals.LampStateChangedReceived += Signals_LampStateChangedReceived;

                UpdateUI();
            }
            
        }

        private async void Signals_LampStateChangedReceived(LampStateSignals sender, LampStateLampStateChangedReceivedEventArgs args)
        {
            string id = args.LampID;
            var brightness = await _lampState.GetBrightnessAsync();
            if (brightness.Status == 0)
                _currentState.Brightness = brightness.Brightness;

            var colortemp = await _lampState.GetColorTempAsync();
            if (colortemp.Status == 0)
                _currentState.ColorTemp = colortemp.ColorTemp;

            var hue = await _lampState.GetHueAsync();
            if (hue.Status == 0)
                _currentState.Hue = hue.Hue;

            var on = await _lampState.GetOnOffAsync();
            if (on.Status == 0)
                _currentState.On = on.OnOff;

            var saturation = await _lampState.GetSaturationAsync();
            if (saturation.Status == 0)
                _currentState.Saturation = saturation.Saturation;

            UpdateUI();
        }

        private void UpdateUI()
        {
            SetProperty(ref _lampName, _currentState.Name, "LampName");
            SetProperty(ref _on, _currentState.On,"On");
            if (_currentState.On)
                SetProperty(ref _lampButtonText, "Turn Off", "LampButtonText");
            else
                SetProperty(ref _lampButtonText, "Turn On", "LampButtonText");
            SetProperty(ref _brightness, _currentState.Brightness,"Brightness");
            SetProperty(ref _colorTemp, _currentState.ColorTemp,"ColorTemp");
            SetProperty(ref _hue, _currentState.Hue,"Hue");
            SetProperty(ref _saturation, _currentState.Saturation,"Saturation");
        }

        private async void UpdateLamp()
        {
            if (_lampState == null)
                return;
            Debug.WriteLine("Update Lamp");
            if (_currentState.Brightness!= Convert.ToUInt32(_brightness))
                await _lampState.SetBrightnessAsync(Convert.ToUInt32(_brightness));
            if (_currentState.ColorTemp!= Convert.ToUInt32(_colorTemp))
                await _lampState.SetColorTempAsync(Convert.ToUInt32(_colorTemp));
            if (_currentState.Hue != Convert.ToUInt32(_hue))
                await _lampState.SetHueAsync(Convert.ToUInt32(_hue));
            if (_currentState.On != _on)
                await _lampState.SetOnOffAsync(_on);
            if (_currentState.Saturation!= Convert.ToUInt32(_saturation))
                await _lampState.SetSaturationAsync(Convert.ToUInt32(_saturation));
        }
    }
}
