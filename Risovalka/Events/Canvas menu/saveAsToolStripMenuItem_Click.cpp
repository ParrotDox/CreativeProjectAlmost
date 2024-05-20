#include "../../MyForm.h"
System::Void Risovalka::PaintForm::saveAsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	saveFileDialog1->ShowDialog();
	String^ fname = saveFileDialog1->FileName;
	Bitmap^ img_to_save = gcnew Bitmap(pictureBoxCanvas->Image);
	img_to_save->Save(fname);
	MessageBox::Show("Picture was saved.\n Adress: " + fname);
	return System::Void();
}