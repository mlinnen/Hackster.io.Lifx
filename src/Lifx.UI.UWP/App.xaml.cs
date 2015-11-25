using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using Microsoft.Practices.Unity;
using Prism.Unity.Windows;
using Prism.Windows.AppModel;
using Windows.ApplicationModel.Activation;
using Windows.ApplicationModel.Resources;
using Windows.UI.Xaml;
using Windows.UI.Xaml.Controls;
using Lifx.UI.UWP.Services;
using Prism.Events;
using Prism.Windows.Navigation;
using Lifx.UI.UWP.ViewModels;
using Prism.Mvvm;
using System.Globalization;
using System.Reflection;

namespace Lifx.UI.UWP
{
    /// <summary>
    /// Provides application-specific behavior to supplement the default Application class.
    /// </summary>
    sealed partial class App : PrismUnityApplication
    {

        public App()
        {
            InitializeComponent();
        }

        public IEventAggregator EventAggregator { get; set; }

        protected override UIElement CreateShell(Frame rootFrame)
        {
            var shell = Container.Resolve<AppShell>();
            shell.SetContentFrame(rootFrame);
            return shell;
        }

        protected override void OnRegisterKnownTypesForSerialization()
        {
        }

        protected override Task OnInitializeAsync(IActivatedEventArgs args)
        {
            EventAggregator = new EventAggregator();
            Container.RegisterInstance<INavigationService>(NavigationService);
            Container.RegisterInstance<ISessionStateService>(SessionStateService);
            Container.RegisterInstance<IEventAggregator>(EventAggregator);

            Container.RegisterType<ILampService, LampService>(new ContainerControlledLifetimeManager());

            var lampService = Container.Resolve<ILampService>();
            lampService.Start();


            return base.OnInitializeAsync(args);
        }

        protected override Task OnLaunchApplicationAsync(LaunchActivatedEventArgs args)
        {
            NavigationService.Navigate("Main", null);
            return Task.FromResult(true);
        }
    }
}
