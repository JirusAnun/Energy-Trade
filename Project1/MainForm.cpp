#include <iostream>
#include "MainForm.h"

using namespace System;
using namespace System::Windows::Forms;

void main(array< String ^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project1::MainForm form;
	Application::Run(% form);
}