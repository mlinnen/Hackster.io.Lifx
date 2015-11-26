﻿using Lifx.UI.UWP.ViewModels;
using Prism.Windows.Mvvm;
using System;
using System.Collections.Generic;
using System.ComponentModel;
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

// The User Control item template is documented at http://go.microsoft.com/fwlink/?LinkId=234236

namespace Lifx.UI.UWP.Views
{
    public sealed partial class LampListItemView : SessionStateAwarePage, INotifyPropertyChanged
    {
        public LampListItemView()
        {
            this.InitializeComponent();
            DataContextChanged += VM_DataContextChanged;
        }

        public event PropertyChangedEventHandler PropertyChanged;

        public LampStateViewModel ConcreteDataContext
        {
            get
            {
                return DataContext as LampStateViewModel;
            }
        }

        private void VM_DataContextChanged(FrameworkElement sender, DataContextChangedEventArgs args)
        {
            var propertyChanged = PropertyChanged;
            if (propertyChanged != null)
            {
                propertyChanged(this, new PropertyChangedEventArgs(nameof(ConcreteDataContext)));
            }
        }
    }
}
