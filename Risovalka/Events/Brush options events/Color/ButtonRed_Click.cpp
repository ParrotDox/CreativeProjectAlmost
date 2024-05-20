#include "../../../MyForm.h"
System::Void Risovalka::PaintForm::ButtonRed_Click(System::Object^ sender, System::EventArgs^ e)
{
	pen = gcnew Pen(Color::Red, size);
	return System::Void();
}