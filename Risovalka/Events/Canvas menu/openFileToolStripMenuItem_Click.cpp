#include "../../MyForm.h"
System::Void Risovalka::PaintForm::openFileToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	openFileDialog1->ShowDialog();
	String^ fname = openFileDialog1->FileName;
	Bitmap^ opened_image = gcnew Bitmap(fname);
	canvas = Graphics::FromImage(opened_image);
	pictureBoxCanvas->Image = opened_image;
	return System::Void();
}