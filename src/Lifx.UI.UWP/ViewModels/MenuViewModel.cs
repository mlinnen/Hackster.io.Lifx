﻿using Prism.Commands;
using Prism.Windows.AppModel;
using Prism.Windows.Mvvm;
using Prism.Windows.Navigation;
using System;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Lifx.UI.UWP.ViewModels
{
    public class MenuViewModel : ViewModelBase
    {
        private INavigationService _navigationService;
        private bool _canNavigateToMain = false;
        private bool _canNavigateToSecond = true;

        public MenuViewModel(INavigationService navigationService)
        {
            // TODO: Add ability to indicate which page your on by listening for navigation events once the NuGet package has been updated. Change CanNavigate to use whether or not your on that page to return false.
            // As-is, if navigation occurs via the back button, we won't know and can't update the _canNavigate value
            _navigationService = navigationService;

            Commands = new ObservableCollection<MenuItemViewModel>
            {
                new MenuItemViewModel { DisplayName = "Main Page", FontIcon = "\ue15f", Command = new DelegateCommand(NavigateToMainPage, CanNavigateToMainPage) },
                new MenuItemViewModel { DisplayName = "Second Page", FontIcon = "\ue19f", Command = new DelegateCommand(NavigateToSecondPage, CanNavigateToSecondPage) }
            };
        }

        public ObservableCollection<MenuItemViewModel> Commands { get; set; }

        private void NavigateToMainPage()
        {
            if (CanNavigateToMainPage())
            {
                if (_navigationService.Navigate("Main", null))
                {
                    _canNavigateToMain = false;
                    _canNavigateToSecond = true;
                    RaiseCanExecuteChanged();
                }
            }
        }

        private bool CanNavigateToMainPage()
        {
            return _canNavigateToMain;
        }

        private void NavigateToSecondPage()
        {
            if (CanNavigateToSecondPage())
            {
                if (_navigationService.Navigate("Second", null))
                {
                    _canNavigateToMain = true;
                    _canNavigateToSecond = false;
                    RaiseCanExecuteChanged();
                }
            }
        }

        private bool CanNavigateToSecondPage()
        {
            return _canNavigateToSecond;
        }

        private void RaiseCanExecuteChanged()
        {
            foreach (var item in Commands)
            {
                (item.Command as DelegateCommand).RaiseCanExecuteChanged();
            }
        }

    }
}
