using Lifx.UI.UWP.ViewModels;
using System;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Lifx.UI.UWP.Services
{
    public interface ILampService
    {
        int Start();
        ObservableCollection<LampStateViewModel> Lamps { get; set; }
    }
}
