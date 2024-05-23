#include "../../MyForm.h"
System::Void Risovalka::PaintForm::buttonCheckResult_Click(System::Object^ sender, System::EventArgs^ e) 
{
	labelJudgmentAnswer->Visible = false;
	labelJudgmentAnswer->Text = L"Your answer is incorrect. Try again...";
	labelJudgmentAnswer->Refresh();
	bool flag = false;
	if (comboBoxInstrumentChoise->Text != L"Choose instrument" &&
		comboBoxInstrumentChoise->Text != L"None" &&
		comboBoxChoiseOctave->Text != L"Choose octave" &&
		comboBoxChoiseOctave->Text != L"None") {
		if (instrument_identifier == 0 && comboBoxInstrumentChoise->Text == L"Marimba" && (
			octave_identifier == 0 && comboBoxChoiseOctave->Text == L"Counter Octave" ||
			octave_identifier == 1 && comboBoxChoiseOctave->Text == L"Big Octave" ||
			octave_identifier == 2 && comboBoxChoiseOctave->Text == L"Small Octave"))
		{
			labelJudgmentAnswer->Text = L"Your answer is correct. Well done!";
			flag = true;
		}
		if (instrument_identifier == 1 && comboBoxInstrumentChoise->Text == L"WoodWind" && (
			octave_identifier == 3 && comboBoxChoiseOctave->Text == L"First Octave" ||
			octave_identifier == 4 && comboBoxChoiseOctave->Text == L"Second Octave"))
		{
			labelJudgmentAnswer->Text = L"Your answer is correct. Well done!";
			flag = true;
		}
		if (instrument_identifier == 2 && comboBoxInstrumentChoise->Text == L"Piano" && (
			octave_identifier == 5 && comboBoxChoiseOctave->Text == L"Third Octave" ||
			octave_identifier == 6 && comboBoxChoiseOctave->Text == L"Fourth Octave"))
		{
			labelJudgmentAnswer->Text = L"Your answer is correct. Well done!";
			flag = true;
		}
		if (flag)
		{
			labelJudgmentAnswer->Visible = true;
			labelRightOctave->Visible = true;
			labelJudgmentAnswer->Refresh();
			if (instrument_identifier == 0) {
				Bitmap^ marimba_image = gcnew Bitmap("..\\ColorMain\\Marimba.png");
				pictureBoxRightInstrument->Image = marimba_image;
			}
			else if (instrument_identifier == 1) {
				Bitmap^ woodwind_image = gcnew Bitmap("..\\ColorMain\\WoodWind.png");
				pictureBoxRightInstrument->Image = woodwind_image;
			}
			else if (instrument_identifier == 2) {
				Bitmap^ piano_image = gcnew Bitmap("..\\ColorMain\\Piano.png");
				pictureBoxRightInstrument->Image = piano_image;
			}
			pictureBoxRightInstrument->Visible = true;
			pictureBoxRightInstrument->Refresh();
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
			labelRightOctave->Visible = true;
		}
		else
		{
			labelJudgmentAnswer->Visible = true;
			labelJudgmentAnswer->Text = L"Your answer is incorrect. Try again...";
		}
	}
	else
	{
		labelJudgmentAnswer->Text = L"Write down your answer.";
		labelJudgmentAnswer->Visible = true;
		labelJudgmentAnswer->Refresh();
	}
}