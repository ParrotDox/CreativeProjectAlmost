#include "../../../MyForm.h"
System::Void Risovalka::PaintForm::comboBoxInstruments_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
{
	if (comboBoxInstruments->Text == "None")
	{
		Bitmap^ none_image = gcnew Bitmap("..\\ColorMain\\None.png");
		pictureBoxInstrument->Image = none_image;
	}
	if (comboBoxInstruments->Text == "Marimba")
	{
		Bitmap^ marimba_image = gcnew Bitmap("..\\ColorMain\\Marimba.png");
		pictureBoxInstrument->Image = marimba_image;
	}
	if(comboBoxInstruments->Text == "Piano")
	{
		Bitmap^ piano_image = gcnew Bitmap("..\\ColorMain\\Piano.png");
		pictureBoxInstrument->Image = piano_image;
	}
	if (comboBoxInstruments->Text == "String")
	{
		Bitmap^ string_image = gcnew Bitmap("..\\ColorMain\\String.png");
		pictureBoxInstrument->Image = string_image;
	}
	if (comboBoxInstruments->Text == "WoodWind")
	{
		Bitmap^ WoodWind_image = gcnew Bitmap("..\\ColorMain\\WoodWind.png");
		pictureBoxInstrument->Image = WoodWind_image;
	}
	if (comboBoxInstruments->Text == "Nature")
	{
		Bitmap^ nature_image = gcnew Bitmap("..\\ColorMain\\Nature.png");
		pictureBoxInstrument->Image = nature_image;
	}
	return System::Void();
}