#include "../../MyForm.h"
System::Void Risovalka::PaintForm::pictureBoxCanvas_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e)
{
	if (radioButtonDraw->Checked == true || radioButtonErase->Checked == true)
	{
		if (points->Count > 1)
		{
			canvas->DrawLines(pen, points->ToArray());
		}
	}
	if (radioButtonSquare->Checked == true)
	{
		if (X != -1 && Y != -1)
		{
			canvas->DrawRectangle(pen, X, Y, Convert::ToInt32(numericUpDownLength->Value), Convert::ToInt32(numericUpDownWidth->Value));
		}
	}
	if (radioButtonCircle->Checked == true)
	{
		if (X != -1 && Y != -1)
		{
			canvas->DrawEllipse(pen, X, Y, Convert::ToInt32(numericUpDownLength->Value), Convert::ToInt32(numericUpDownWidth->Value));
		}
	}

	return System::Void();
}