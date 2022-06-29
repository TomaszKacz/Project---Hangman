#include "Wisielec.h"
using namespace System;
using namespace System::Windows::Forms;


[STAThreadAttribute]

int Main(cli::array<String^>^ args) {
    Application::EnableVisualStyles;
    Application::SetCompatibleTextRenderingDefault(false);
    Project1::Wisielec form;
    Application::Run(% form);

    return 0;
}
