#include "menu.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]

int main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	PracticeStage1::menu form;
	Application::Run(% form);
	return 0;
}