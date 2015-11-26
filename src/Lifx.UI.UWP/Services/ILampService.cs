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
        int Stop();
        ObservableCollection<LampStateViewModel> Lamps { get; set; }
        Task ToggleAsync(string id);
        Task OnAsync(string id);
        Task OffAssync(string id);
    }
}
