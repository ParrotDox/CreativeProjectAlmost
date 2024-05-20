#include "../../MyForm.h"
System::Void Risovalka::PaintForm::clearCanvasToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	image = gcnew Bitmap(pictureBoxCanvas->Image->Width, pictureBoxCanvas->Image->Height);
	canvas = Graphics::FromImage(image);
	pictureBoxCanvas->Image = image;
	return System::Void();
}