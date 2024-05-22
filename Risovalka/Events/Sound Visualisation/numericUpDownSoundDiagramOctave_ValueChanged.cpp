#include "../../MyForm.h"

System::Void Risovalka::PaintForm::numericUpDownSoundDiagramOctave_ValueChanged(System::Object^ sender, System::EventArgs^ e)
{
	Bitmap^ img_temp = gcnew Bitmap("..\\ColorMain\\OctaveChosen1.png");
	if(numericUpDownSoundDiagramOctave->Value == 1)
	{
		img_temp = gcnew Bitmap("..\\ColorMain\\OctaveChosen1.png");
		labelOctaveWhat->Text = "Counter Octave";
	}
	if (numericUpDownSoundDiagramOctave->Value == 2)
	{
		img_temp = gcnew Bitmap("..\\ColorMain\\OctaveChosen2.png");
		labelOctaveWhat->Text = "Big Octave";
	}
	if (numericUpDownSoundDiagramOctave->Value == 3)
	{
		img_temp = gcnew Bitmap("..\\ColorMain\\OctaveChosen3.png");
		labelOctaveWhat->Text = "Small Octave";
	}
	if (numericUpDownSoundDiagramOctave->Value == 4)
	{
		img_temp = gcnew Bitmap("..\\ColorMain\\OctaveChosen4.png");
		labelOctaveWhat->Text = "First Octave";
	}
	if (numericUpDownSoundDiagramOctave->Value == 5)
	{
		img_temp = gcnew Bitmap("..\\ColorMain\\OctaveChosen5.png");
		labelOctaveWhat->Text = "Second Octave";
	}
	if (numericUpDownSoundDiagramOctave->Value == 6)
	{
		img_temp = gcnew Bitmap("..\\ColorMain\\OctaveChosen6.png");
		labelOctaveWhat->Text = "Third Octave";
	}
	if (numericUpDownSoundDiagramOctave->Value == 7)
	{
		img_temp = gcnew Bitmap("..\\ColorMain\\OctaveChosen7.png");
		labelOctaveWhat->Text = "Fourth Octave";
	}
	pictureBoxOctaveWhatChosen->Image = img_temp;
}