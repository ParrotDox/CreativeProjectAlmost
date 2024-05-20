#include "../../MyForm.h"
System::Void Risovalka::PaintForm::pictureBoxCanvas_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
	mouse_pressed = true;
	if(radioButtonDraw->Checked == true || radioButtonErase->Checked == true)
	{
		points->Clear();
		points->Add(e->Location);
	}
	else
	{
		X = e->Location.X;
		Y = e->Location.Y;
	}
	pictureBoxCanvas->Invalidate();
	return System::Void();
}