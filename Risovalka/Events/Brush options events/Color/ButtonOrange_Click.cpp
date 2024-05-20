#include "../../../MyForm.h"
System::Void Risovalka::PaintForm::ButtonOrange_Click(System::Object^ sender, System::EventArgs^ e)
{
	pen = gcnew Pen(Color::Orange, size);
	return System::Void();
}