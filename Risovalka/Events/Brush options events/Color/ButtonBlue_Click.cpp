#include "../../../MyForm.h"
System::Void Risovalka::PaintForm::ButtonBlue_Click(System::Object^ sender, System::EventArgs^ e)
{
	pen = gcnew Pen(Color::Blue, size);
	return System::Void();
}