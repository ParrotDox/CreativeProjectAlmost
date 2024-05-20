#include "../../../MyForm.h"
System::Void Risovalka::PaintForm::ButtonCyan_Click(System::Object^ sender, System::EventArgs^ e)
{
	pen = gcnew Pen(Color::Cyan, size);
	return System::Void();
}