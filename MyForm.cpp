#include <cmath>
#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void Main(array<String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Kalkulator::MyForm myForm;//Nasza nazwa projektu::oraz nazwa form
    Application::Run(% myForm);
}
