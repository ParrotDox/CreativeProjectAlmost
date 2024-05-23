#include "../../MyForm.h"
System::Void Risovalka::PaintForm::buttonCheckResult_Click(System::Object^ sender, System::EventArgs^ e) {
	if (comboBoxInstrumentChoise->Text != L"Choose instrument" &&
		comboBoxInstrumentChoise->Text != L"None" &&
		comboBoxChoiseOctave->Text != L"Choose octave" &&
		comboBoxChoiseOctave->Text != L"None") {

	}
	else {
		labelJudgmentAnswer->Visible = true;
		labelRightOctave->Visible = true;
		labelJudgmentAnswer->Text = L"Your answer is incorrect. Try again...";
		switch (octave_identifier) {
			case 0:
				labelRightOctave->Text = L"Right octave: Counter octave";
				break;
			case 1:
				labelRightOctave->Text = L"Right octave: Big octave";
				break;
			case 2:
				labelRightOctave->Text = L"Right octave: Small octave";
				break;
			case 3:
				labelRightOctave->Text = L"Right octave: First octave";
				break;
			case 4:
				labelRightOctave->Text = L"Right octave: Second octave";
				break;
			case 5:
				labelRightOctave->Text = L"Right octave: Third octave";
				break;
			default:
				labelRightOctave->Text = L"Right octave: Fourth octave";
				break;
		}
	}
	if (instrument_identifier == 0) {
		Bitmap^ marimba_image = gcnew Bitmap("..\\ColorMain\\Marimba.png");
		pictureBoxRightInstrument->Image = marimba_image;
		groupBoxExerciseKnowledge->Refresh();
	}
	else if (instrument_identifier == 1) {
		Bitmap^ woodwind_image = gcnew Bitmap("..\\ColorMain\\WoodWind.png");
		pictureBoxRightInstrument->Image = woodwind_image;
		groupBoxExerciseKnowledge->Refresh();
	}
	else if (instrument_identifier == 2) {
		Bitmap^ piano_image = gcnew Bitmap("..\\ColorMain\\Piano.png");
		pictureBoxRightInstrument->Image = piano_image;
		groupBoxExerciseKnowledge->Refresh();
	}
	return System::Void();
}