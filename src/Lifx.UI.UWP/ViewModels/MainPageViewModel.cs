using Lifx.UI.UWP.Services;
using Prism.Commands;
using Prism.Windows.Mvvm;
using Prism.Windows.Navigation;
using System;
using System.Collections.Generic;
using System.Collections.ObjectModel;
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
    public class MainPageViewModel : ViewModelBase
    {
        private readonly ILampService _lampService;
        private ObservableCollection<LampStateViewModel> _lamps = new ObservableCollection<LampStateViewModel>();

        public MainPageViewModel()
        {

        }

        public MainPageViewModel(ILampService lampService)
        {
            _lampService = lampService;
        }

        public ObservableCollection<LampStateViewModel> Lamps
        {
            get { return _lamps; }
            set { SetProperty<ObservableCollection<LampStateViewModel>>(ref _lamps, value);}
        }

        public override void OnNavigatedTo(NavigatedToEventArgs e, Dictionary<string, object> viewModelState)
        {
            this.Lamps = _lampService.Lamps;
        }

        public void UpdateUI()
        {

        }
    }
}
