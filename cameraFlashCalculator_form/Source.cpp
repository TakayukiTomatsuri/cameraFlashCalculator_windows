#include "MyForm.h"

using namespace cameraFlashCalculatorform;

[STAThreadAttribute]
int main() {
	MyForm ^fm = gcnew MyForm();
	fm->ShowDialog();
	return 0;
}