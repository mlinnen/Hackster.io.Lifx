﻿using Prism.Windows.Mvvm;
using System.Windows.Input;

namespace Lifx.UI.UWP.ViewModels
{
    public class MenuItemViewModel : ViewModelBase
    {
        public string DisplayName { get; set; }

        public string FontIcon { get; set; }

        public ICommand Command { get; set; }

        public override string ToString()
        {
            return DisplayName;
        }

    }
}
