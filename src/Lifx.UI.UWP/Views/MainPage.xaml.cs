using Lifx.UI.UWP.ViewModels;
using Prism.Windows.Mvvm;
using System.ComponentModel;
using Windows.UI.Xaml;

// The User Control item template is documented at http://go.microsoft.com/fwlink/?LinkId=234236

namespace Lifx.UI.UWP.Views
{
    public sealed partial class MainPage : SessionStateAwarePage, INotifyPropertyChanged
    {
        public MainPage()
        {
            InitializeComponent();
            DataContextChanged += MainPage_DataContextChanged;
        }

        public event PropertyChangedEventHandler PropertyChanged;

        public MainPageViewModel ConcreteDataContext
        {
            get
            {
                return DataContext as MainPageViewModel;
            }
        }

        private void MainPage_DataContextChanged(FrameworkElement sender, DataContextChangedEventArgs args)
        {
            var propertyChanged = PropertyChanged;
            if (propertyChanged != null)
            {
                propertyChanged(this, new PropertyChangedEventArgs(nameof(ConcreteDataContext)));
            }
        }
    }
}
