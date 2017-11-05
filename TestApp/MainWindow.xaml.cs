using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows.Navigation;
using System.Windows.Shapes;

using cppblbridge;

namespace TestApp
{
    /// <summary>
    /// Interaction logic for MainWindow.xaml
    /// </summary>
    public partial class MainWindow : Window
    {
        CppBLBridge cppBLBridge;

        public MainWindow()
        {
            InitializeComponent();
            cppBLBridge = new CppBLBridge();
        }

        private void button1_Click(object sender, RoutedEventArgs e)
        {
            label1.Content = cppBLBridge.getTestValue();
        }
    }
}
