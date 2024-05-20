#include "../../../MyForm.h"
System::Void Risovalka::PaintForm::ButtonGreen_Click(System::Object^ sender, System::EventArgs^ e)
{
	pen = gcnew Pen(Color::Green, size);
	return System::Void();
}