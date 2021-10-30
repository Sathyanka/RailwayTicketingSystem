#include "pch.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace MySql::Data::MySqlClient;


int main(array<System::String ^> ^args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    RaiwayTicketingSystem::Dashboard nameObjectform;
    Application::Run(% nameObjectform);

    String^ constring = L"datasource=localhost;port=3306;username=root;password=root";
    MySqlConnection^ conDatabase = gcnew MySqlConnection(constring);
    
    return 0;
}
