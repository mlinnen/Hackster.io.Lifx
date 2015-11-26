using Lifx.UI.UWP.Services;
using Prism.Commands;
using Prism.Windows.Mvvm;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Input;

namespace Lifx.UI.UWP.ViewModels
{
    public class LampStateViewModel : ViewModelBase
    {
        private string _id;
        private string _name;
        private bool _on;
        private double _hue;
        private double _brightness;
        private double _colorTemp;
        private double _saturation;
        private bool _userUpdating;
        private readonly ILampService _lampService;

        public LampStateViewModel(ILampService lampService)
        {
            _lampService = lampService;
            ToggleLightCommand = new DelegateCommand(ToggleLight);
        }

        public ICommand ToggleLightCommand { get; private set; }

        public string Id
        {
            get { return _id; }
            set
            {
                if (SetProperty(ref _id, value))
                    _userUpdating = true;
            }
        }

        public string Name
        {
            get { return _name; }
            set
            {
                if (SetProperty(ref _name, value))
                    _userUpdating = true;
            }
        }

        public double Hue
        {
            get { return _hue; }
            set
            {
                if (value >= 0 && value <= 350)
                {
                    if (SetProperty(ref _hue, value))
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
                    if (SetProperty(ref _brightness, value)) ;
                    _userUpdating = true;
                }
            }
        }

        public double ColorTemp
        {
            get { return _colorTemp; }
            set
            {
                if (SetProperty(ref _colorTemp, value)) ;
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
                    if (SetProperty(ref _saturation, value)) ;
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
                {
                    _userUpdating = true;
                    OnPropertyChanged("OnText");
                    OnPropertyChanged("LampButtonText");
                }
            }
        }

        public string OnText
        {
            get
            {
                if (_on)
                    return "On";
                return "Off";
            }
        }

        public string LampButtonText
        {
            get
            {
                if (_on)
                    return "Off";
                return "On";
            }
        }

        private void Tick(object state)
        {
            if (_userUpdating)
            {
                _userUpdating = false;
                //_updated = false;
                return;
            }
            //if (!_updated)
            //{
            //    UpdateLamp();
            //    _updated = true;
            //}
        }

        private void ToggleLight()
        {
            _lampService.ToggleAsync(Id);
        }

        private void UpdateUI()
        {
            //SetProperty(ref _lampName, _currentState.Name, "LampName");
            //SetProperty(ref _on, _currentState.On, "On");
            //if (_currentState.On)
            //    SetProperty(ref _lampButtonText, "Turn Off", "LampButtonText");
            //else
            //    SetProperty(ref _lampButtonText, "Turn On", "LampButtonText");
            //SetProperty(ref _brightness, _currentState.Brightness, "Brightness");
            //SetProperty(ref _colorTemp, _currentState.ColorTemp, "ColorTemp");
            //SetProperty(ref _hue, _currentState.Hue, "Hue");
            //SetProperty(ref _saturation, _currentState.Saturation, "Saturation");
            //if (_lamps.Count > 0)
            //    SetProperty(ref _firstLamp, _lamps[0], "FirstLamp");
        }

        private async void UpdateLamp()
        {
            //if (_lampState == null)
            //    return;
            //Debug.WriteLine("Update Lamp");
            //if (_currentState.Brightness != Convert.ToUInt32(_brightness))
            //    await _lampState.SetBrightnessAsync(Convert.ToUInt32(_brightness));
            //if (_currentState.ColorTemp != Convert.ToUInt32(_colorTemp))
            //    await _lampState.SetColorTempAsync(Convert.ToUInt32(_colorTemp));
            //if (_currentState.Hue != Convert.ToUInt32(_hue))
            //    await _lampState.SetHueAsync(Convert.ToUInt32(_hue));
            //if (_currentState.On != _on)
            //    await _lampState.SetOnOffAsync(_on);
            //if (_currentState.Saturation != Convert.ToUInt32(_saturation))
            //    await _lampState.SetSaturationAsync(Convert.ToUInt32(_saturation));
        }

    }
}
