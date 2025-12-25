#include "Form1.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace std;

[STAThreadAttribute]
int main(array<String^>^ args) 
{
	setlocale(LC_ALL, "Russian");
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	MemoryGame::Form1 form1;
	Application::Run(% form1);
}