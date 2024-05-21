#include "../../MyForm.h"

System::Void Risovalka::PaintForm::comboBoxSoundDiagramInstrument_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
{
	if(comboBoxSoundDiagramInstrument->Text == "None")
	{
		numericUpDownSoundDiagramOctave->Minimum = 0;
		numericUpDownSoundDiagramOctave->Maximum = 0;
	}
	if (comboBoxSoundDiagramInstrument->Text == "Marimba")
	{
		numericUpDownSoundDiagramOctave->Minimum = 1;
		numericUpDownSoundDiagramOctave->Maximum = 3;
	}
	if (comboBoxSoundDiagramInstrument->Text == "Piano")
	{
		numericUpDownSoundDiagramOctave->Minimum = 1;
		numericUpDownSoundDiagramOctave->Maximum = 7;
	}
	if (comboBoxSoundDiagramInstrument->Text == "WoodWind")
	{
		numericUpDownSoundDiagramOctave->Minimum = 4;
		numericUpDownSoundDiagramOctave->Maximum = 5;
	}
}