#include "Rgj1.h"
#include <iostream>
#include <math.h>

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void main(array<String^>^ agrs) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Rgj::Rgj1 form;
	Application::Run(% form);
}
