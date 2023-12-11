#include "LoginForm.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Group25MyBusinessProject::LoginForm frm;
	Application::Run(% frm);
}
