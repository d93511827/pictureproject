#include <iostream>
#include "MyForm.h"
#include <math.h>
#include <time.h>
using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	pictureproject::MyForm form;
	Application::Run(%form);
}
